#include <stdio.h>

int main() {
    
    /**
    * Referente a quantidade de movimentos que a torre irá fazer
    */
    int tower = 5;    
    /**
    * Referente a quantidade de movimentos que o bispo irá fazer
    */
    int bishop = 5;
    /**
    * Referente a quantidade de movimentos que a rainha irá fazer
    */
    int queen = 8;


    printf("-------------------------------- \n \n");
    printf("Movendo Torre \n");
    do {
        printf("Direita \n");
        tower--;
    } 
    while(tower > 0);

    printf("-------------------------------- \n \n");
    printf("Movendo Bispo \n");
    for(int i =0; i< bishop; i++){
        printf("Cima, Direita \n");
    }

    printf("-------------------------------- \n \n");
    printf("Movendo Rainha \n");
    while(queen > 0){
        printf("Esquerda \n");
        queen--;
    }
}