// polepoli.cpp : Defines the entry point for the application.
//

#include "polepoli.h"
#include "Body2d.h"
#include "math.h"
#define POCET_BODU 10


using namespace std;

int main(){ 

	int body[POCET_BODU][2] { //prvni hranata zavorka urcuje pocet mensich poli, druha pocet pozic v kazdem mensim poli
		5,10,
		-14,2,
		45,4,
		-9,8,
		58,-3,
		47,5,
		-18,-86,
		75,7,
		-25,51,
		17,98 };

	int idxNejblizsi, x, y;

		printf("Zadej souradnice referencniho bodu ve formatu X Y: ");
		scanf("%d %d", &x, &y);

		idxNejblizsi = indexNejblizsi(POCET_BODU, body, x, y);
		printf("Index nejblizsiho je: %d", idxNejblizsi);
		printf("\nX = %d \nY = %d", body[idxNejblizsi][0], body[idxNejblizsi][1]);


		double prvzdl=prumernaVzdalenost(POCET_BODU, body, x, y);
		printf("\n\nPrumerna vzdalenost od bodu je: %lf \n", prvzdl);

		bodyVBlizkosti(20, POCET_BODU, body, x, y);

	return 0;
}
