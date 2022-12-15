
#include "random_generator.h"


int* random_generator::get_random_massive(size_t size) {
    int* result = (int*)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        result[i] = rand() % 1000000000;
    }

    return result;
}

random_generator::random_generator()
{
}

random_generator::~random_generator()
{
}