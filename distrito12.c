#include <stdio.h>
#include <stdlib.h>
// variavel de resposta
int resposta;

int returned();
//funcao entrar no jogo
int distrito12_1()
{
	//limpar terminal

	// bla bla bla
	printf("Voce chega no distrito 12-B, onde ha apenas casas destruidas e abandonadas \n");
	printf("Acoes: \"[1]analisar\"; \n");
	scanf("%d", &resposta);

	switch(resposta)
	{
		case 1: //analisar
			printf("A casa esta em um bom estado para uma guerra.\n");
			printf("Acoes: [1]entrar; [2]continuar a exploracao\n");
			scanf("%d", &resposta);
//jao crashara seu pc em 1,2,3...
			switch(resposta)
			{
				case 1:
					printf("Voce entra na casa que por si so ja eh bem perigosa...\n");
					printf("Acoes: [1]continuar a exploracao; [2]voltar\n");
					scanf("%d",&resposta);
					switch(resposta)
					{

						case 1:
							printf("Voce sobe as escadas e no outro andar voce ve um antigo computador\n");

						break;

						case 2:
							return distrito12_1();
						break;

					}
				break;

				case 2:
					printf("Voce resolve continuar a exploracao, digite a direcao cardial\n");
					printf("DIR: [1]norte; [2]sul\n");
					scanf("%d", &resposta);

					switch(resposta)
					{
						case 1:
							printf("Ao o norte do 12-B, ha uma antiga base militar, voce esta ficando com fome. va procurar comida \n");
							printf("Tambem ha uma outra parte do distrito 12, o 12-C. 'e capaz de voce encontrar comida facil la' \n");
							printf("Acoes: [1]ir a base militar; [2] ir para o distrito 12-C\n");
							scanf("%d", &resposta);



						break;
					}

				break;
			}
		break;

		default:
			printf("comando invalido!\n");
	}
}