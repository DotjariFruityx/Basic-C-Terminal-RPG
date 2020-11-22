#include <stdio.h>
#include <stdlib.h>
#include "distrito12.c"

// variavel de resposta
char resposta_intro[2];


//funcao entrar no jogo
int intro()
{
	//limpar terminal
	system("clear");

	// bla bla bla
	printf("Bem vindo ao CYBER DUNGEONS!, Em 23XX, uma guerra civil comecou \n");
	printf("e deixando aqueles que eram impossibilitados de lutar, vivendo em escombros e ruinas. \n");
	printf("Voce eh apenas um viajante de uma cidade destruida chamada de Aether. \n");
	printf(" Aperte algo para prosseguir \n ");
	getchar();
	system("clear");
	distrito12_1();
	
	return 0;
}