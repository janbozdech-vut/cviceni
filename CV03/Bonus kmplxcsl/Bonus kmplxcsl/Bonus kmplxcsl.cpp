// Bonus kmplxcsl.cpp : Defines the entry point for the application.
//

#include "Bonus kmplxcsl.h"

using namespace std;

int main()
{
	int Ar;
	int Ai;
	int Br;
	int Bi;

	printf("Zadej hodnotu komplexniho cisla A = ");
	scanf("%d", &Ar);
	printf(" + ");
	scanf("%d", &Ai);
	printf("i.\n");

	printf("Zadej hodnotu komplexniho cisla B = ");
	scanf("%d", &Br);
	printf(" + ");
	scanf("%d", &Bi);
	printf("i.\n");

	int Sr = Ar + Br;
	int Si = Ai + Bi;

	printf("Soucet techto cisel je roven: %d + %di", Sr, Si);
	
	return 0;
}
