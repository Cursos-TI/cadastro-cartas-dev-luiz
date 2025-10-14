#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[30], codigo[30], cidade[30];
  int populacao, pontosTuristicos;
  float area, pib;

  //Introdução do sistema
  printf("BEM VINDO AO SUPER TRUNFO!\n");
  printf("Vamos realizar o cadastro da PRIMEIRA carta\n");
  printf("Insira as informações de acordo com o que for solicitado\nObservação: não utilize separadores como '.' ou ',' ao inserir os valores numérios");

  // Área para entrada de dados da PRIMEIRA carta
  // Variáveis do tipo string
  printf("\nCARTA 01");
  printf("\nDigite o nome da cidade: ");
  scanf("%s", &cidade);
  printf("\nDigite o nome do estado: ");
  scanf("%s", &estado);
  printf("\nDigite o código da cidade: ");
  scanf("%s", &codigo);

  // Variáveis de valor inteiro
  printf("\nQual a população total da cidade?");
  scanf("%d", &populacao);
  printf("\nQuantos pontos turísticos há no local?");
  scanf("%d", &pontosTuristicos);

  // Variáveis de valor flutuante
  printf("\nQual a área total da cidade?");
  scanf("%f", &area);
  printf("\nQual o Produto Interno Bruto (PIB)?");
  scanf("%f", &pib);

  // Área para exibição dos dados da PRIMEIRA cidade
  printf("\nATENÇÃO: Primeira carta criada com SUCESSO!\n");
  printf("\nCARTA 01: %s", cidade);
  printf("\nEstado: %s", estado);
  printf("\nCódigo: %s", codigo);
  printf("\nÁrea total (km²): %.2f", area);
  printf("\nPopulação total: %d", populacao);
  printf("\nPontos turísticos: %i", pontosTuristicos);
  printf("\nProduto Interno Bruto (PIB): R$%.2f\n", pib);

  // Área para entrada de dados da SEGUNDA carta
  // Variáveis do tipo string
  printf("\nVamos realizar agora o cadastro da SEGUNDA carta");
  printf("\nLembre-se de inserir os dados de acordo com o que for solicitado!\n");
  printf("\nCARTA 02");
  printf("\nDigite o nome da cidade: ");
  scanf("%s", &cidade);
  printf("\nDigite o nome do estado: ");
  scanf("%s", &estado);
  printf("\nDigite o código da cidade: ");
  scanf("%s", &codigo);

  // Variáveis de valor inteiro
  printf("\nQual a população total da cidade? ");
  scanf("%d", &populacao);
  printf("\nQuantos pontos turísticos há no local?");
  scanf("%d", &pontosTuristicos);

  // Variáveis de valor flutuante
  printf("\nQual a área total da cidade?");
  scanf("%f", &area);
  printf("\nQual o Produto Interno Bruto (PIB)?");
  scanf("%f", &pib);

  // Área para exibição dos dados da SEGUNDA cidade
  printf("\nATENÇÃO: Segunda carta criada com SUCESSO!");
  printf("\nCARTA 02: %s", cidade);
  printf("\nEstado: %s", estado);
  printf("\nCódigo: %s", codigo);
  printf("\nÁrea total (km²): %.2f", area);
  printf("\nPopulação total: %d", populacao);
  printf("\nPontos turísticos: %i", pontosTuristicos);
  printf("\nProduto Interno Bruto (PIB): R$%.2f\n", pib);

  printf("\nCADASTROS FINALIZADOS!\nObrigado!");

return 0;
} 
