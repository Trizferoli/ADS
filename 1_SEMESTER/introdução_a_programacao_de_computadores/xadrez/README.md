# Movimentando as peças de xadrez (C)

Programa simples em C que demonstra movimentos da Torre, Bispo e Rainha usando, respectivamente, `do-while`, `for` e `while`. Cada iteração imprime a direção percorrida.

## Enunciado (resumo)
- Torre: mover 5 casas para a direita (linha reta).  
- Bispo: mover 5 casas em diagonal para cima e direita (imprime as duas direções).  
- Rainha: mover 8 casas para a esquerda.  
- Valores das casas movidas definidos em variáveis no código.  
- Saída: `printf` da direção a cada casa.  
- Não há entrada do usuário nem lógica completa do jogo.

## Estruturas de repetição usadas
- Torre: `do { ... } while (tower > 0);`
- Bispo: `for (int i = 0; i < bishop; i++) { ... }`
- Rainha: `while (queen > 0) { ... }`

## Como compilar e rodar no terminal
```bash
cd "/Users/trizferoli/Documents/Estacio/ADS/1_SEMESTER/introdução_a_programacao_de_computadores/xadrez"
clang -Wall -Wextra -g xadrez.c -o xadrez
./xadrez
```

## Saída esperada (exemplo)
```
-------------------------------- 

Movendo Torre 
Direita 
Direita 
Direita 
Direita 
Direita 
-------------------------------- 

Movendo Bispo 
Cima, Direita 
Cima, Direita 
Cima, Direita 
Cima, Direita 
Cima, Direita 
-------------------------------- 

Movendo Rainha 
Esquerda 
Esquerda 
Esquerda 
Esquerda 
Esquerda 
Esquerda 
Esquerda 
Esquerda 
```

## Observações de implementação
- As variáveis `tower`, `bishop` e `queen` controlam quantas casas cada peça percorre.
- Comentários são mínimos porque a lógica é direta; cada bloco é separado por impressões de cabeçalho.
- Use somente inteiros e strings para atender ao requisito do exercício.

