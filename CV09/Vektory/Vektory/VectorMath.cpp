
#pragma once
#include <stdio.h>
#include <math.h>

enum typOperace { soucet = 1, vektorovySoucin = 2 };

struct vector3d
{
	double x;
	double y;
	double z;
};

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
	vector3d vysledek;
	
	if (typ == 1) {
		vysledek.x = u.x + v.x;
		vysledek.y = u.y + v.y;
		vysledek.z = u.z + v.z;

	}
	else if (typ == 2) {
		vysledek.x = u.y * v.z - u.z * v.y;
		vysledek.y = u.z * v.x - u.x * v.z;
		vysledek.z = u.x * v.y - u.y * v.x;


	}
	else {
		printf("neplatna hodnota operace");
	};


	return vysledek;
};


void tisk(struct vector3d w) {
	double velikost;

	velikost = sqrt(w.x * w.x + w.y * w.y + w.z * w.z);

	printf("\nw = (%lf, %lf, %lf)", w.x, w.y, w.z);
	printf("\n|w| = %lf\n", velikost);


};

double vectorSize(struct vector3d u) {
	double vysl;

	vysl = sqrt(u.x * u.x + u.y * u.y + u.z * u.z);

	return vysl;
};


int vectorSizeComparation(struct vector3d u, struct vector3d v) {

	double velu;
		velu = vectorSize(u);
	double velv;
		velv = vectorSize(v);
	int porov = 2;

	if (velu > velv) {
		porov = 1;
	}
	else if (velu == velv) {
		porov = 0;
	}
	else {
		porov = -1;
	};
	return porov;
};

