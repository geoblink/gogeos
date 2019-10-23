#include <geos_c.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void go_geos_notice_handler2(const char *fmt, ...);
void go_geos_error_handler(const char *fmt, ...);
char *go_geos_get_last_error(void);
GEOSContextHandle_t go_geos_initGEOS();