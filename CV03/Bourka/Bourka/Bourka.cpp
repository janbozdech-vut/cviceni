// Bourka.cpp : Defines the entry point for the application.
//

#include "Bourka.h"

using namespace std;

int main()
{
	int rychlost = 340;
	int cas;
	int vzdalenost;

	printf("Po jake dobe po blesku se ozval hrom? (s) ");
	scanf("%d", &cas);

	vzdalenost = rychlost * cas;

	printf("Bourka je ve vydalenosti %d m.\n", vzdalenost);

	return 0;
}
