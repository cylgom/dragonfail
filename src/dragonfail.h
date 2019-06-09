#ifndef H_DRAGONFAIL
#define H_DRAGONFAIL

#include "dragonfail_error.h"

char** dgn_init();
void dgn_reset();
void dgn_basic_log();
char* dgn_output_log();
enum dgn_error dgn_output_code();
void dgn_throw(enum dgn_error new_code);
char dgn_catch();

#endif
