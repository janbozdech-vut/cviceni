// textovysoubor.cpp : Defines the entry point for the application.
//

#include "textovysoubor.h"
#include <stdio.h>


using namespace std;

int main()
{
	const char* VstupniSouborCesta = "D:\\274791\\cviceni\\CV10\\textovysoubor\\textovysoubor\\vstup.txt";
	const char* VystupniSouborCesta = "D:\\274791\\cviceni\\CV10\\textovysoubor\\textovysoubor\\vysledky.txt";

	char aktualniZnak;
	int pocetPismen = 0;
	int pocetCislic = 0;
	int pocetSlov = 0;
	int pocetVet = 0;
	int predchoziZnak = 0;
	FILE* vstup;
	FILE* vystup;

	vstup = fopen(VstupniSouborCesta, "r");
	vystup = fopen(VystupniSouborCesta, "w");

	if (vstup == NULL) {
		printf("Soubor nelze nacist");
		return -1;
	}

	printf("Veta: ");

	while ((aktualniZnak = fgetc(vstup)) != EOF) {

		printf("%c", aktualniZnak);

		if (aktualniZnak >= '0' && aktualniZnak <= '9') {
			pocetCislic++;

		}
		else if (isalpha(aktualniZnak)) {
			pocetPismen++;

		}
		else if (isspace(aktualniZnak) && predchoziZnak == 0) {
			pocetSlov++;

		}
		else if (aktualniZnak == '.') {
			pocetVet++;

		}
		
		if (isspace(aktualniZnak)) {
			predchoziZnak = 1;
		}
		else if (isalpha(aktualniZnak)) {
			predchoziZnak = 0;
		}

	}






	

	printf("\n\nPocet pismen: %d \nPocet cislic: %d \nPocet slov: %d \nPocet vet: %d\n", pocetPismen, pocetCislic, pocetSlov, pocetVet);


	fclose(vstup);

	fprintf(vystup, "Pocet pismen: %d \nPocet cislic: %d \nPocet slov: %d \nPocet vet: %d\n", pocetPismen, pocetCislic, pocetSlov, pocetVet);

	fclose(vystup);

	return 0;
}
