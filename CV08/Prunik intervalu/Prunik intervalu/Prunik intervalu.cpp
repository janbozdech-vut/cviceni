// Prunik intervalu.cpp : Defines the entry point for the application.
//

#include "Prunik intervalu.h"
#include "modul.h"
#define POCET_BODU 12


using namespace std;

int main()
{
	double MIN1, MAX1, MIN2, MAX2;
	double vysl_zacatek, vysl_konec;

	printf("Zadejte 1. interval ve tvaru MIN MAX: ");
	scanf("%lf %lf", &MIN1, &MAX1);
	printf("Zadejte 2. interval ve tvaru MIN MAX: ");
	scanf("%lf %lf", &MIN2, &MAX2);

	int maPrunik = prunik(MIN1, MAX1, MIN2, MAX2, &vysl_zacatek, &vysl_konec);

	if (maPrunik == 1) {
		printf("Prunik intervalu (%lf, %lf) a (%lf, %lf) je (%lf, %lf)\n\n", MIN1, MAX1, MIN2, MAX2, vysl_zacatek, vysl_konec);

	}
	else {
		printf("Prunik intervalu neexistuje\n\n");
	}


	double testIntervaly[POCET_BODU][2]{
		1.5, 2.8,
		1.6, 2.0,
		1.5, 2.8,
		3.6, 7.5,
		1.5, 4.8,
		2.6, 7.5,
		5.1, -2.3,
		1.5, 6.2,
		2.5, 8.8,
		-0.3, 9.5,
		5.5, -9.5, 
		9.9, -2.3
	};

	for (int i = 0; i < POCET_BODU; i += 2) {

		int maPrunik = prunik(testIntervaly[i][0], testIntervaly[i][1], testIntervaly[i + 1][0], testIntervaly[i + 1][1], &vysl_zacatek, &vysl_konec);

		if (maPrunik == 1) {

			printf("Prunik intervalu (%lf, %lf) a (%lf, %lf) je (%lf, %lf)\n", testIntervaly[i][0], testIntervaly[i][1], testIntervaly[i + 1][0], testIntervaly[i + 1][1], vysl_zacatek, vysl_konec);

		}
		else {
			printf("Prunik intervalu (%lf, %lf) a (%lf, %lf) neexistuje\n", testIntervaly[i][0], testIntervaly[i][1], testIntervaly[i + 1][0], testIntervaly[i + 1][1]);

		}


	}
		return 0;
}

