#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
int ataque1 = 30;
int ataque2 = 60;    
int populacao1, populacao2 = 10000;
float area1, area2 = 30.2;
int pib1, pib2 = 50;
    
    printf("Digite o código da cidade 1:\n");
    scanf("%s", &codigo1);
    printf("Digite o código da cidade 2:\n");
    scanf("%s", &codigo2);
    printf("Digita a População 1:\n");
    scanf("%d", &populacao1);
    printf("Digita a População 2:\n");
    scanf("%d", &populacao2);
    printf("Qual a extensão da Área 1:\n");
    scanf("%f", &area1); 
    printf("Qual a extensão da Área 2:\n");
    scanf("%f", &area2);    
     printf("Qual o PIB da Carta 1:\n");
    scanf("%d", &pib1);
    printf("Qual o PIB da Carta 2:\n");
    scanf("%d", &pib2);



    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
