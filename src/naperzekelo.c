#include "naperzekelo.h"

int main(int arc, char* argv[]) {
	printf("-- %s --\n", NE_APP_NAME);

	wiringPiSetup();

	ne_values_t rv = ne_read_values(X, RIGHT);
	printf("-- center: %f, [", rv.center);
	int n = sizeof(rv.va)/sizeof(rv.va[0]);
	for(int i = 0; i < n; i++) {
		printf("%f%s", rv.va[i], (i < n-1 ? ", " : ""));
	}
	printf("]--\n");

	ne_value_t rv_min = ne_read_min_value(rv);
	printf("-- center: %f - min: %f - idx: %d - diff: %+f --\n", rv_min.center, rv_min.va, rv_min.idx, rv_min.center - rv_min.va);

	ne_value_t rv_max = ne_read_max_value(rv);
	printf("-- center: %f - max: %f - idx: %d - diff: %+f --\n", rv_max.center, rv_max.va, rv_max.idx, rv_max.center - rv_max.va);

	return 0;
}

