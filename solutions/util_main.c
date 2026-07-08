#include <stdio.h>
#include "libutil.h"

int main(void) {
	printf("%d\n", clamp(15, 0, 10));
	return 0;
}
