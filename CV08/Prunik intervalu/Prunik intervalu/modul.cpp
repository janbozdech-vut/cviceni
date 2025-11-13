
#include "modul.h"

void prohozeni(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}


int prunik(double zacatek1, double konec1, double zacatek2, double konec2,
	double* vysl_zacatek, double* vysl_konec) {

	int vysledek;

	if (zacatek2 <= konec1) {
		vysledek = 1;
		*vysl_zacatek = zacatek2;
		*vysl_konec = konec1;

	}
	else {
		vysledek = 0;

	}



	if (zacatek1 > konec1) {
		prohozeni(&zacatek1, &konec1);
	}
	if (zacatek2 > konec2) {
		prohozeni(&zacatek2, &konec2);
	}
	if (zacatek1 > zacatek2) {
		prohozeni(&zacatek1, &zacatek2);
		prohozeni(&konec1, &konec2);
	}

	if (konec1 < zacatek2) {
		vysledek = 0;
	}
	else if(zacatek1>konec2){
		vysledek = 0;
	}
	else {
		vysledek = 1;

		*vysl_zacatek = (zacatek1 > zacatek2) ? zacatek1 : zacatek2;
		*vysl_konec = (konec1 < konec2) ? konec1 : konec2;



	}
	

	return vysledek;
}
