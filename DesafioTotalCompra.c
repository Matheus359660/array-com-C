#include <stdio.h>

int main(){
    char produto[50]; // guardar o nomme do produto
    float preco;      // preço unitário
    int quantidade;   // quantidade comprada
    float total;      // valor total da compra

    printf("Digite o nome do produto: ");
    scanf("%s",produto);

    printf("Digite o preco unitario: ");
    scanf("%s",&preco);
    
    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);

    total = preco * quantidade;

    printf("produto: %s/n",produto);
    printf("preço unitario: %.2f\n",preco);
    printf("Quantidade : %d\n",quantidade);
    printf("Total da compra: %.2f\n",total);
    return 0;
}