#include <stdio.h>
#include "random_generator.h"

int main(){
    random_generator* random = new random_generator();

    int* mas = random->get_random_massive(1000);

    for (int i = 0; i < 1000; i++) printf("%d ", mas[i]);
    printf("\n");

    return 0;
}