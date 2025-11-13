
#include "Body2d.h"
#include "math.h"
#include "limits.h"
#include "stdio.h"

int indexNejblizsi(int velikost, int(*body)[2], int x, int y) {

	int minVzdalenost = INT_MAX;
	int indexNejblizsiho = -1;

	for (int i = 0; i < velikost; i++) {
		int dx = body[i][0] - x;
		int dy = body[i][1] - y;

		int vzdalenost = sqrt((double)(dx * dx + dy * dy));  //zmena typu z int na double

		if (vzdalenost < minVzdalenost) {
			minVzdalenost = vzdalenost;
			indexNejblizsiho = i;
		};
		


		
	}

	return indexNejblizsiho;

}

double prumernaVzdalenost(int velikost, int(*body)[2], int x,
	int y) {

	double soucetVzdalenosti = 0;
	double prumer = -5;
		

	for (int i = 0; i < velikost; i++) {
		int dx = body[i][0] - x;
		int dy = body[i][1] - y;

		double vzdalenost = sqrt((double)(dx * dx + dy * dy));  //zmena typu z int na double

		soucetVzdalenosti = soucetVzdalenosti + vzdalenost;

	
		};

	prumer = soucetVzdalenosti / velikost;

	return prumer;

}


void bodyVBlizkosti(int maxVzdalenost, int velikost, int(*body)[2], int
	x, int y) {

	printf("Body v blizkosti ");
	for (int i = 0; i < velikost; i++) {
		int dx = body[i][0] - x;
		int dy = body[i][1] - y;

		double vzdalenost = sqrt((double)(dx * dx + dy * dy));  //zmena typu z int na double

		if (vzdalenost < maxVzdalenost) {
			printf("[%d,%d], ", body[i][0], body[i][1]);

		};

	
		};

}