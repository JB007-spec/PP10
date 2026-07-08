#include <stdio.h>
#include "point.h"
#include <math.h>

int main (void) {
	Point p = {3.0, 4.0};
	printf("Distance from origin: %f\n", sqrt(p.x * p.x +p.y *p.y));
	return 0;
}
