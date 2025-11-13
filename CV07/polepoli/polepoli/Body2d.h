#pragma once

int indexNejblizsi(int velikost, int(*poleBodu)[2], int x, int y);
double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int x,
	int y);
void bodyVBlizkosti(int maxVzdalenost, int velikost, int(*body)[2], int
	x, int y);