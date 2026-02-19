#include <stdio.h>

int main(){
    char estado [20];
    char codigo_da_carta[20];
    char nome_da_cidade[20];
    int população, numero_de_pontos_turisticos;
    float area;
    float pib;

char estado2 [20];
    char codigo_da_carta2[20];
    char nome_da_cidade2[20];
    int população2, numero_de_pontos_turisticos2;
    float area2;
    float pib2;
//todas as vezes que for fazer uma diferenciação de variaveis colocar algo ao final de cada uma delas, se nao o programa entende como uma so e causa erro aparecendoapenas uma carta
    printf("Digite o estado: \n");
    scanf ("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);


    printf("Agota digite as informações da carta 2 \n");

printf("Digite o estado: \n");
    scanf ("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Estado: %s\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado, codigo_da_carta, nome_da_cidade, população);
    printf("Número de pontos turísticos: %d\nÁrea: %f\nPIB: %f\n", numero_de_pontos_turisticos, area, pib);

printf("\n");

//para pular linha usar o prinf("\n"); por que por mais que faça separado o programa entende que é apenas uma linha 

    printf("Estado: %s\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %d\n", estado2, codigo_da_carta2, nome_da_cidade2, população2);
    printf("Número de pontos turísticos: %d\nÁrea: %f\nPIB: %f\n", numero_de_pontos_turisticos2, area2, pib2);

//lembrar que a cada variavel colocada tem que ter a diferenciação no final como la na parte de cima das linhas iniciais 

    return 0;


}