#include <stdio.h>

int main(){
    int notas[5]; //declara um array de 5 posiçoẽs para armazenar as notas
    int i ;       // variável de controle para o loop(repetição)

    //entrada de usuário
    printf("DIgite 5 notas:\n");

    for (i=0; i < 5; i++){
        scanf("%s", &notas[i]); //lê uma nota e armazena na posição i do array
    }

    //exibição 
    printf("\n notas digitais:\n");

    for (i =0; i < 5; i++){
        printf("%d", notas[i]); // imprime a nota da posição i
    }

    return 0;
}