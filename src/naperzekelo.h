#ifndef NAPERZEKELO_H
#define NAPERZEKELO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define NE_APP_NAME "naperzekelo"
#define NE_SENSOR_NUMBER 5
#define NE_DECLARE(type) type

typedef enum {
	X, 
	Y
} ne_axles_t;

typedef enum {
	LEFT, 
	RIGHT
} ne_axle_sides_t;

typedef struct {
	float center;
	float va[NE_SENSOR_NUMBER];
} ne_values_t;

typedef struct {
	float center;
	int idx;
	float va;
} ne_value_t;

NE_DECLARE(ne_values_t) ne_read_values(ne_axles_t axle, ne_axle_sides_t side); // apr_pool_t *a, const void *m, apr_size_t n)
NE_DECLARE(ne_value_t) ne_read_min_value(ne_values_t va); // apr_pool_t *a, const void *m, apr_size_t n)
NE_DECLARE(ne_value_t) ne_read_max_value(ne_values_t va); // apr_pool_t *a, const void *m, apr_size_t n)

#ifdef __cplusplus
}
#endif

#endif /* NAPERZEKELO_H */

