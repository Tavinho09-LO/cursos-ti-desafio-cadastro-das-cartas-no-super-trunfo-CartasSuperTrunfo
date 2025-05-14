#include <stdio.h>

int main(){
    int população;
    float área;
    float PIB;
    int pontosturísticos;
    //informações da carta1//

    printf("Total de habitantes:\n");
    scanf("%d",&população);

    printf("Área em km2:\n");
    scanf("%f",&área);

    printf("PIB:\n");
    scanf("%f",PIB);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d",&pontosturísticos);
    //entrada e saida de dados//


    printf("Carta1!\n");
    printf("Habitantes:%d\n",população);
    printf("Área em km2:%.2f\n",área);
    printf("PIB:%.2f\n",PIB);
    printf("Pontos turísticos:%d\n",pontosturísticos);
    //imprimindo as variaveis//

    return 0;
}