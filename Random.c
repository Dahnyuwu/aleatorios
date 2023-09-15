#define SODIUM_STATIC

#include <stdio.h>
#include "sodium.h"

int main(){

    if (sodium_init() == -1) {
        return 1;
    }
    printf("%u <---- Número obtenido\n\n",randombytes_random());          // Retorna un valor aleatorio entre 0x0 and 0xffffffff
}