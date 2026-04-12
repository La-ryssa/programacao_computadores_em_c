## Linguagem C

Este repositório tem como objetivo reunir algoritmos e exemplos desenvolvidos em linguagem C, além de fornecer uma explicação completa sobre a linguagem, sua origem, principais conceitos e funcionalidades.

## Origem e Criação

A linguagem C foi criada por Dennis Ritchie em 1972, na Bell Labs, para facilitar o desenvolvimento do sistema operacional Unix. Ela se destaca por sua eficiência, portabilidade e proximidade com o hardware, sendo amplamente utilizada em sistemas embarcados, desenvolvimento de sistemas operacionais e aplicações de alto desempenho.

## Por que C

- Performance máxima (compila para assembly)
- Portabilidade (mesmo código → múltiplas plataformas)
- Controle total de memória e hardware
- Base para C++, Java, Rust, Go

## Principais Pontos Importantes

- Linguagem de baixo nível com recursos de alto nível
- Compilada, o que significa que o código é convertido em código de máquina
- Permite manipulação direta de memória através de ponteiros
- Suporta programação estruturada (funções, estruturas, controle de fluxo)
- Portável entre diferentes plataformas

### Tipos de Dados Básicos

| Tipo     | Descrição                                            | Exemplo de Uso         |
| -------- | ---------------------------------------------------- | ---------------------- |
| `int`    | Número inteiro (positivos e negativos)               | `int idade = 25;`      |
| `float`  | Número de ponto flutuante de precisão simples        | `float altura = 1.75;` |
| `double` | Número de ponto flutuante de alta precisão           | `double pi = 3.14159;` |
| `char`   | Caractere único                                      | `char letra = 'A';`    |
| `void`   | Nenhum valor, usado em funções que não retornam nada | `void func();`         |

### Variáveis Modificadoras

- `signed` (padrão): permite valores positivos e negativos
- `unsigned`: apenas valores positivos (máximo valor é o dobro do equivalente com `signed`)
- `short`: menor que `int`
- `long`: maior que `int`

### Exemplo de Declaração de Variáveis

- int idade = 30;
- float peso = 70.5;
- char genero = 'M';
- double temperatura = 36.6;
- unsigned int pontos = 100;

# Operadores

## Operadores Aritméticos

| Operador | Nome          | Exemplo     |
| -------- | ------------- | ----------- |
| +        | Soma          | 5 + 3 = 8   |
| -        | Subtração     | 5 - 3 = 2   |
| \*       | Multiplicação | 5 \* 3 = 15 |
| /        | Divisão       | 5 / 2 = 2   |
| %        | Resto         | 5 % 2 = 1   |

## Incremento/Decremento

| Operador | Pré                  | Pós                  |
| -------- | -------------------- | -------------------- |
| ++       | ++x (x=6, retorna 6) | x++ (retorna 5, x=6) |
| --       | --x (x=4, retorna 4) | x-- (retorna 5, x=4) |

## Atribuição

| Atribuição  | Operador | Exemplo  | Equivalente |
| ----------- | -------- | -------- | ----------- |
| **=**       | `=`      | `x = 5`  | `x = 5`     |
| **+=**      | `+=`     | `x += 3` | `x = x + 3` |
| **-=**      | `-=`     | `x -= 2` | `x = x - 2` |
| **\*=\*\*** | `=*`     | `x *= 4` | `x = x * 4` |
| **/=**      | `/=`     | `x /= 2` | `x = x / 2` |
| **%=**      | `%=`     | `x %= 3` | `x = x % 3` |

## Relacionais

| Operador | Descrição      |
| -------- | -------------- |
| ==       | Igual          |
| !=       | Diferente      |
| >        | Maior          |
| <        | Menor          |
| >=       | Maior ou igual |
| <=       | Menor ou igual |

## Lógicos

- **&& (E lógico):** Este operador verifica se duas condições são verdadeiras ao mesmo tempo. Se ambas forem verdadeiras, o resultado é verdadeiro; caso contrário, é falso.

- **|| (OU lógico):** Este operador verifica se pelo menos uma das condições é verdadeira. Se uma ou ambas forem verdadeiras, o resultado é verdadeiro; se ambas forem falsas, o resultado é falso.

- **! (negação):** Este operador inverte o valor de uma condição. Se a condição for verdadeira, a negação se torna falsa, e vice-versa.

# Conceitos

## PRINTF

O printf é uma função usada para exibir informações na tela. Você pode mostrar textos, variáveis, resultados de cálculos, etc.

Exemplo de uso:

```
int idade = 25;
printf("Minha idade é %i anos.\n", idade);
```

## SCANF

O scanf é uma função usada para ler dados de entrada do usuário. Você informa o tipo de dado esperado usando especificadores de formato.

| Tipo de dado        | Especificador | Exemplo de leitura      | Descrição                     |
| ------------------- | ------------- | ----------------------- | ----------------------------- |
| `int`               | `%i`          | `scanf("%i", &idade);`  | Números inteiros              |
| `float`             | `%f`          | `scanf("%f", &altura);` | Números com vírgula flutuante |
| `double`            | `%lf`         | `scanf("%lf", &peso);`  | Números com maior precisão    |
| `char`              | `%c`          | `scanf("%c", &letra);`  | Caractere individual          |
| string (char array) | `%s`          | `scanf("%s", nome);`    | Texto sem espaços             |

## Exemplo de uso:

#include <stdio.h>

```
int main() {
    int x; double d; char c; char nome[50]; long long ll;

    // === PRINTF ===
    printf("int: %d\n", 42);
    printf("float: %.3f\n", 3.14159f);
    printf("hex: %X\n", 255);      // FF
    printf("octal: %o\n", 8);      // 10
    printf("char: %c\n", 'Z');
    printf("string: %s\n", "C Rocks!");

    // === SCANF ===
    printf("\nDigite inteiro: ");
    scanf("%d", &x);

    printf("Digite double: ");
    scanf("%lf", &d);

    printf("Digite char: ");
    scanf(" %c", &c);  // ESPAÇO ignora Enter!

    printf("Digite nome: ");
    scanf("%s", nome);  // SEM & para array!

    printf("\n=== RESULTADO ===\n");
    printf("x=%d, d=%.2lf, c=%c, nome=%s\n", x, d, c, nome);

    return 0;
}
```

- & sempre para variáveis simples (int, double, char)
- %c precisa espaço antes: scanf(" %c", &c)
- %s NÃO usa & (array já é ponteiro)

## Estruturas de Controle

### IF / ELSE IF / ELSE

- Uso: Condições simples ou em cadeia

```
int nota = 85;

// IF simples (1 condição)
if (nota >= 60) {
    printf("Aprovado!\n");
}

// IF-ELSE (2 opções)
if (nota >= 70) {
    printf("Bom trabalho!\n");
} else {
    printf("Estude mais!\n");
}

// ELSE IF (múltiplas condições)
if (nota >= 90){
    printf("A\n");
}
else if (nota >= 80){
    printf("B\n");
}
else if (nota >= 70){
     printf("C\n");
}
else if (nota >= 60){
    printf("D\n");
}
else   {
  printf("Reprovado\n");
}
```

### SWITCH - CASE

- Uso: Escolha exata (int/char), menus

```
char op;
printf("(+ - * /): ");
scanf(" %c", &op);

switch(op) {
    case '+':
        printf("%.1lf\n", a + b);
        break;
    case '-':
        printf("%.1lf\n", a - b);
        break;
    case '*':
        printf("%.1lf\n", a * b);
        break;
    case '/':
        if (b != 0) printf("%.1lf\n", a / b);
        else printf("Erro: /0!\n");
        break;
    default:
        printf("Opção inválida!\n");
}
```

- SEMPRE break; senão "cai" pro próximo case!

### WHILE

- Uso: Loop quando condição é desconhecida antes

```
int i = 0;
int soma = 0;

printf("Digite números (0 para parar):\n");
while (1) {  // Infinito
    scanf("%d", &i);
    if (i == 0) break;  // Sai do loop
    soma += i;
}
printf("Soma: %d\n", soma);
```

### DO - WHILE

- Uso: Executa PELO MENOS 1 VEZ (validações)

```
int idade;
do {
    printf("Idade (0-120): ");
    scanf("%d", &idade);

    if (idade < 0 || idade > 120) {
        printf("Idade inválida! Tente novamente.\n");
    }
} while (idade < 0 || idade > 120);

printf("Idade válida: %d\n", idade);
```

### FOR

- Uso: Contadores conhecidos (arrays, tabuadas)

```
// Tabuada completa
for (int i = 1; i <= 10; i++) {
    printf("%2d: ", i);
    for (int j = 1; j <= 10; j++) {
        printf("%3d ", i * j);
    }
    printf("\n");
}
//  1:   1   2   3 ...  10
//  2:   2   4   6 ...  20
```

#### BREAK e CONTINUE

```
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue;  // PULA pares
    if (i == 7) break;         // PARA em 7

    printf("%d ", i);  // 1 3 5
}
```

### OPERADOR TERNÁRIO ? :

- Uso: IF de 1 linha

```
int a = 10, b = 20;
int max = (a > b) ? a : b;  // max = 20

char* status = (idade >= 18) ? "Adulto" : "Menor";
printf("%s\n", status);

// Aninhado (cuidado!)
int nota = (x >= 90) ? 1 : (x >= 80) ? 2 : 3;
```

## QUANDO USAR CADA ESTRUTURA?

| Estrutura  | Melhor para                     | NÃO use para        | Exemplo Perfeito          |
| ---------- | ------------------------------- | ------------------- | ------------------------- |
| if/else if | Ranges, condições complexas     | Menus simples       | Classificação notas A/B/C |
| switch     | Valor EXATO (1,2,3,'+','-')     | Ranges (> <)        | Calculadora (+ - \* /)    |
| while      | Condição **desconhecida antes** | Contadores fixos    | Leitura até EOF/0         |
| do-while   | 1ª execução obrigatória         | Loops normais       | "Digite válido"           |
| for        | Iterações fixas\*\* (0 a N)     | Condições complexas | Arrays, taboada           |
| ?:         | IF de 1 linha                   | Lógica complexa     | max(a,b)                  |

## NUNCA FAÇA

```
// 1. Ponto-vírgula mortal
if (x > 0);
    printf("SEMPRE executa!");  // :(

// 2. Switch sem break
switch(x) {
    case 1: printf("1 ");
    case 2: printf("2");  // SEMPRE executa!
}

// 3. While sem update
int i = 0;
while (i < 10) {
    printf("%d", i);
    // i++ esquecido = INFINITO!

// 4. scanf sem &
scanf("%d", x);  // CRASH!
```

## SEMPRE FAÇA

```
if (x > 0) {              // Chaves sempre!
    printf("Só se verdadeiro");
}

switch(x) {
    case 1: { printf("1"); break; }  // Block + break
}

int i = 0;
while (i < 10) {
    printf("%d", i);
    i++;  // Update explícito!
}
```
