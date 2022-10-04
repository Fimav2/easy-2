#include "easy.h"

using namespace std;

void itc_name() {
    cout << "Efim" << endl;
}

void itc_fio() {
    cout << "Romanov" << endl;
}

int itc_abs(int input) {
    return input < 0 ? input * -1 : input;
}


double itc_fabc(double input) {
    return input < 0 ? input * -1 : input;
}

int itc_revnbr(int input) {
    int a = input / 100;
    int b = input / 10 % 10;
    int c = input % 10;
    return c * 100 + b * 10 + a;
}

bool itc_iseven(int input) {
    return input % 2 == 0;
}

int itc_max(int a, int b) {
    return a > b ? a : b;
}

int itc_min(int a, int b) {
    return a < b ? a : b;
}

double itc_fmax(double a, double b) {
    return a > b ? a : b;
}

double itc_fmin(double a, double b) {
    return a < b ? a : b;
}

int itc_sqrt(int num) {
    for (int i = 0; i * i <= num; ++i)
        if (i * i == num) return i;
    return -1;
}

int itc_skv(int num) {
    if (num < 0)return -1;
    return num * num;
}

int itc_spr(int num, int num2) {
    if (num < 0)return -1;
    if (num2 < 0)return -1;
    return num * num2;
}

int itc_str(int a, int b, int c) {
    if (a < 0)return -1;
    if (b < 0)return -1;
    if (c < 0)return -1;
    int p = a + b + c;
    return itc_sqrt(p * (p - a) * (p - b) * (p - c));
}

double itc_scir(int r) {
    PI = 3.14
    if (r < 0)return -1;
    return r * r * PI;
}

int itc_pow(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i)
        result *= a;
    return result;
}

bool itc_ispositive(int a) {
    return a >= 0;
}

bool itc_ispositive_d(double a) {
    return a >= 0;
}
