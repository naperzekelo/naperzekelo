#include "naperzekelo.h"

NE_DECLARE(ne_value_t) ne_read_min_value(ne_values_t va) { // apr_pool_t *a, const void *m, apr_size_t n)
	ne_value_t rv;

	rv.center = va.center;
	rv.va = va.center;
	rv.idx = 0;

	for (int i = 0; i < sizeof(va.va)/sizeof(va.va[0]); i++) {
		if (va.va[i] < rv.va) {
			rv.va = va.va[i];
			rv.idx = i;
		}
	}
	return rv;
}

