// statistika textu.cpp : Defines the entry point for the application.
//

#include "statistika textu.h"
#include "ctype.h"


int pocetPismen(char* text) {
	int count = 0;
	for(int i=0; text[i] != '\0'; i++){
		if(isalpha(text[i])) count++;
	}
	return count;
}

int pocetCisel(char* text) { //char* text je alternativni zapis char text[]
	int count = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (isdigit(text[i])) count++;
	}
	return count;
}

int maxDelkaSlova(char* text) {
	int count = 0;
	int maxCount = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (isalpha(text[i])) {
			count++;
		}
		else {
			if (count > maxCount)
			maxCount = count;
			count = 0;
		};
	}
	return maxCount;
}


int main()
{
	
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Veta: %s \n", text);
	printf("Pismena: %d \n", pocetPismen(text));
	printf("Cisla: %d \n", pocetCisel(text));
	printf("Nejdelsi slovo ma %d pismen. \n", maxDelkaSlova(text));
}
