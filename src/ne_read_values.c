#include "naperzekelo.h"

NE_DECLARE(ne_values_t) ne_read_values(ne_axles_t axle, ne_axle_sides_t side) { // apr_pool_t *a, const void *m, apr_size_t n)
	ne_values_t rv;
	rv.center = 0.81;
	rv.va[0] = 0.85;
	rv.va[1] = 0.80;
	rv.va[2] = 0.71;
	rv.va[3] = 0.55;
	rv.va[4] = 0.29;
	return rv;
}

