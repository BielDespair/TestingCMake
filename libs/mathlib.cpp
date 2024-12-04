#include "mathlib.h"


int pow(int base, int exp) {
    int count = 1;
    int result = base;
    while (count < exp) {
        result = result*base;
        count += 1;
    }
    return result;
}

