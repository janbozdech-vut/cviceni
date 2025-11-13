// Vektory.cpp : Defines the entry point for the application.
//

#include "Vektory.h"
#include "VectorMath.h"

using namespace std;

int main()
{
	struct vector3d u,v,w;
	enum typOperace op;

	printf("Zadej vektor u (ve formatu x,y,z): ");
	scanf("%lf,%lf,%lf", &u.x, &u.y, &u.z);

	printf("Zadej vektor v (ve formatu x,y,z): ");
	scanf("%lf,%lf,%lf", &v.x, &v.y, &v.z);

	printf("Zadej operaci (1 = soucet, 2 = vektrovy soucin): ");
	scanf("%d", &op);

	w = operace(u, v, op);

	tisk(w);

	int por = vectorSizeComparation(u, v);

	printf("\n%d\n", por);


	return 0;
}
