#ifndef s21_math_h
#define s21_math_h

#define S21_PI 3.14159265358979323846
#define precision 0.00000000000000000000001
#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0

#include <stdlib.h>

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double x, double y);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
#endif
