// Prestupny-rok.cpp : Defines the entry point for the application.
//

#include "Prestupny-rok.h"

using namespace std;

int plusJedna(int cislo) {
	return cislo + 1;
}

int jePrestupny(int rok) {
	if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int lichyRok(int rok) {
	if (rok % 2 != 0) 
	{
		return 1;
	}
	return 0;

}

int main()
{
	int roky[] = { 1000, 2001, 2002, 2012, 2022, 2200 };

	for (int i = 0; i < 6; i++)
		printf("%d\t%d\n", roky[i], lichyRok(roky[i]));

	return 0;
}
