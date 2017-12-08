//jogo do galo
//tips: //biblioteca [4][10][24]//4 categorias, 10 escolhas em cada categoria, 24 é o tamanho maximo da palavra maior
//futebolistas:1-lewandowski; 2-ronaldo; 3-Quaresma;4-ibrahimovic;5-Mandzukic;6-Griezmann;7-Courtois;8-Mascherano;9-Aubameyang; 10-Busquets
//profissoes:1-bombeiro;2-administrador;3-dermatologista;4-enfermeiro;5-engenheiro;6-fisioterapeuta;7-ginecologista;8-meteorologista;9-oftalmologista; 10-psicopedagogo;
//paises:1-luxemburgo;2-afeganistao;3-bielorussia;4-cazaquistao;5-gronelandia;6-quirguizistao;7-singapura;8-usbequistao;9-zimbabue;10-venezuela;
//animais:1-caranguejo;2-camaleao;3-hipopotamo;4-lagartixa;5-leopardo;6-orangotango;7-papagaio;8-rinoceronte;9-crocodilo;10-hyena;
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>//para usar a função rand
#include <conio.h>//para usar o time(NULL)
#include <windows.h>//para usar o sleep

#include <string.h>


//#define _CRT_SECURE_NO_WARNINGS
int vidas = 6, contapalavra, i, acertou, falhou, simnao = 0, cont = 0, max = 0, verificacao = 0;
char palavra[24]; letra, barras[24], repetido[24];
int escolha, random;
main()
{
	setlocale(LC_ALL, "Portuguese");
	contador0(vidas);
	printf("Categorias:\n");
	printf("Futebolistas prima 1\n");
	printf("Profissoes prima 2\n");
	printf("Paises prima 3\n");
	printf("Animais prima 4\n");
	printf("Categoria: ");
	scanf_s("%d", &escolha);
	if (isalnum && escolha <= 4 && escolha >= 1)
	{


		srand(time(NULL));
		random = rand() % 11 + 1;




		if (escolha = 1)
		{
			switch (random)
			{
			case 1: strcpy(palavra, "lewandowski"); contarp();   jogo();  break;
			case 2: strcpy(palavra, "ronaldo"); contarp();   jogo(); break;
			case 3: strcpy(palavra, "quaresma"); contarp();  jogo(); break;
			case 4: strcpy(palavra, "ibrahimovic"); contarp();   jogo(); break;
			case 5: strcpy(palavra, "mandzukic"); contarp();   jogo(); break;
			case 6: strcpy(palavra, "griezmann"); contarp(); jogo(); break;
			case 7: strcpy(palavra, "courtois"); contarp();  jogo(); break;
			case 8: strcpy(palavra, "mascherano"); contarp(); jogo(); break;
			case 9: strcpy(palavra, "aubameyang"); contarp(); jogo(); break;
			case 10: strcpy(palavra, "busquets"); contarp();   jogo(); break;
			default:
				break;
			}
		}
		else
			if (escolha = 2)
			{
				switch (random)
				{

				case 1: strcpy(palavra, "bombeiro"); contarp();  jogo(); break;
				case 2: strcpy(palavra, "administrador"); contarp();  jogo(); break;
				case 3: strcpy(palavra, "dermatologista"); contarp();  jogo(); break;
				case 4: strcpy(palavra, "enfermeiro"); contarp();   jogo(); break;
				case 5: strcpy(palavra, "engenheiro"); contarp();  jogo(); break;
				case 6: strcpy(palavra, "fisioterapeuta"); contarp();  jogo(); break;
				case 7: strcpy(palavra, "ginecologista"); contarp();  jogo(); break;
				case 8: strcpy(palavra, "meteorologista"); contarp();   jogo(); break;
				case 9: strcpy(palavra, "oftalmologista"); contarp(); jogo(); break;
				case 10: strcpy(palavra, "psicopedagogo"); contarp();  jogo(); break;
				default:
					break;
				}
			}
			else
				if (escolha = 3)
				{
					switch (random)
					{
					case 1: strcpy(palavra, "luxemburgo"); contarp();  jogo(); break;
					case 2: strcpy(palavra, "afeganistao"); contarp();   jogo(); break;
					case 3: strcpy(palavra, "bielorussia"); contarp();  jogo(); break;
					case 4: strcpy(palavra, "cazaquistao"); contarp();  jogo(); break;
					case 5: strcpy(palavra, "gronelandia"); contarp();   jogo(); break;
					case 6: strcpy(palavra, "quirguizistao"); contarp();  jogo(); break;
					case 7: strcpy(palavra, "singapura"); contarp();   jogo(); break;
					case 8: strcpy(palavra, "usbequistao"); contarp();  jogo(); break;
					case 9: strcpy(palavra, "zimbabue"); contarp();  jogo(); break;
					case 10: strcpy(palavra, "venezuela"); contarp();  jogo(); break;
					default:
						break;
					}
				}
				else
					if (escolha = 4)
					{

						switch (random)
						{
						case 1: strcpy(palavra, "caranguejo"); contarp();  jogo(); break;
						case 2: strcpy(palavra, "camaleao"); contarp(); jogo(); break;
						case 3: strcpy(palavra, "hipopotamo"); contarp(); jogo(); break;
						case 4: strcpy(palavra, "lagartixa"); contarp();  jogo(); break;
						case 5: strcpy(palavra, "leopardo"); contarp();  jogo(); break;
						case 6: strcpy(palavra, "orangotango"); contarp();  jogo(); break;
						case 7: strcpy(palavra, "papagaio"); contarp(); jogo(); break;
						case 8: strcpy(palavra, "rinoceronte"); contarp();   jogo(); break;
						case 9: strcpy(palavra, "crocodilo"); contarp();   jogo(); break;
						case 10: strcpy(palavra, "hyena"); contarp();  jogo(); break;
						default:printf("Erro numero errado");
							break;
						}
					}
					else
					{
						printf("Erro numero errado");
					}

	}
	else
	{
		printf("Insira um numero válida para uma categoria!\n");
		system("pause");
	}




}
int contarp() {
	for (int i = 0; i<strlen(palavra); i++) {
		barras[i] = '_';
	}
}
int contador0(int contador)
{
	system("cls");
	printf("\JOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|     \n");
	printf("|    \n");
	printf("|          \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}
int contador1(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|    \n");
	printf("|          \n");
	printf("|   \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}

int contador2(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|    |\n");
	printf("|          \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}

int contador3(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|   /|\n");
	printf("|          \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}

int contador4(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|   /|\\ \n");
	printf("|          \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}

int contador5(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|   /|\\ \n");
	printf("|   /      \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	for (i = 0; i <strlen(palavra); i++)
	{
		printf("%c ", barras[i]);
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Palavras ja inseridas:\n");
	for (cont = 0; cont <= max; cont++)
	{
		printf("%s ", &repetido[cont + 1]);
	}
}

int contador6(int contador)
{
	system("cls");
	printf("\nJOGO DA FORCA\n");
	printf("______\n");
	printf("|    | \n");
	printf("|    o \n");
	printf("|   /|\\ \n");
	printf("|   / \\       \n");
	printf("|    \n");
	printf("|________\n");
	switch (escolha)
	{
	case 1:printf("Categoria: Futebolistas\n"); break;
	case 2:printf("Categoria: Profissoes\n"); break;
	case 3:printf("Categoria: Países\n"); break;
	case 4:printf("Categoria: Animais\n"); break;
	default:
		break;
	}
	printf("Vidas Restantes %d\n", contador);
	printf("Ja foste!!\n");
}
int jogo() {

	while (vidas > 0)
	{
		switch (vidas)
		{
		case 6:contador0(vidas); break;
		case 5:contador1(vidas); break;
		case 4:contador2(vidas); break;
		case 3:contador3(vidas); break;
		case 2:contador4(vidas); break;
		case 1:contador5(vidas); break;
		case 0:contador6(vidas); break;
		default:
			break;
		}
		fflush(stdin);
		simnao = 0;
		printf("\nDigite uma letra: ");
		scanf_s(" %c", &letra);
		if (isalpha(letra))
		{
			for (cont = 0; cont <= max; cont++)
			{
				if (letra == repetido[cont + 1])
				{
					verificacao = 1;
					printf("Letra ja inserida\n");
					system("pause");
				}
			}

			if (verificacao == 0)
			{
				verificacao = 0;
				cont++;
				max++;
				repetido[cont] = letra;
				for (i = 0; i < strlen(palavra); i++)
				{

					if (letra == palavra[i])
					{
						barras[i] = palavra[i];

						acertou++;
						simnao = 1;
					}

					printf("%c", barras[i]);
					printf(" ");

				}
				if (acertou == strlen(palavra))
				{
					printf("\nParabéns Ganhou!\n");
					system("pause");
					break;
				}
				if (simnao == 0)
				{
					vidas--;

				}
				if (vidas == 0) {
					printf("\nJA FOSTE!\n");
					printf("A palavra correcta era %s\n", &palavra);
					system("pause");
				}

			}
		}
		else
		{
			printf("Apenas letras são aceites\n");
			system("pause");
		}
		verificacao = 0;
	}
}
