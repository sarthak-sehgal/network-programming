#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#ifndef UTILS_H
#define UTILS_H

void assert(bool condition, char *error_string);

void errExit(char *err);

#endif