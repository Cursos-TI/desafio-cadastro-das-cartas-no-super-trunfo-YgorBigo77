#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Logo abaixo serão declaradas as variaveis necessarias para cadastro das duas cartas.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    int  populacao_1,populacao_2,npontoturistico_1,npontoturistico_2;  
    float pib_1,pib_2,area_1,area_2;
    char estado_1[50],estado_2[50];
    char nomecidade_1[50],nomecidade_2[50],cod_carta_1[50],cod_carta_2[50];

    // Abaixo será informado a mensagem de boas vindas e solicitação dos dados das duas cartas.
    
    printf("Olá bem vindo ao jogo Super Trunfo Países, logo abaixo cadastraremos as cartas!\n");

    // O bloco abaixo será utilizado para recebimento dos dados da carta 1.

    printf("As informações solicitadas serão para o cadastrado da primeira carta \n ");
    
    printf(" Por favor insira o nome do Estado: \n");
    scanf("%s", estado_1);
   
    printf(" Por favor insira o Codigo da Carta: \n");
    scanf("%s", cod_carta_1);
   
    printf(" Por favor insira o nome da Cidade: \n");
    scanf("%s", nomecidade_1);
   
    printf(" Por favor insira o número de habitantes: \n");
    scanf("%d", &populacao_1);
    
    printf(" Por favor insira a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area_1);
    
    printf(" Por favor insira o Produto Interno Bruto (PIB): \n");
    scanf("%f", &pib_1);
   
    printf(" Por favor insira os pontos turisticos: \n");
    scanf("%d", &npontoturistico_1);

    
    // O bloco abaixo é para recebimento dos dados da carta 2.

    printf("As informações solicitadas a seguir serão para o cadastrado da segunda carta \n");
    
    printf(" Por favor insira o nome do Estado: \n");
    scanf("%s", estado_2);
    
    printf(" Por favor insira o Codigo da Carta: \n");
    scanf("%s", cod_carta_2);
    
    printf(" Por favor insira o nome da Cidade: \n");
    scanf("%s", nomecidade_2);
    
    printf(" Por favor insira o número de habitantes: \n");
    scanf("%d", &populacao_2);
    
    printf(" Por favor insira a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area_2);
    
    printf(" Por favor insira o Produto Interno Bruto (PIB): \n");
    scanf("%f", &pib_2);
    
    printf(" Por favor insira a quantidade de pontos turisticos: \n");
    scanf("%d", npontoturistico_2);



    // Exibição dos dados cadastrados:

    

    return 0;

}
