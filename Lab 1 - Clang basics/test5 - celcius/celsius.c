// Converts a farenheit temperature to celcius

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define FREEZING_POINT 32
#define SCALE_FACTOR 5/9

int main(void)
{
    int32_t farenheit = 50;
    int32_t celsius = 0;

    celsius = (farenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("%d degrees Farenheit is equivelant to %d degrees Celsius\n", farenheit, celsius);

    return EXIT_SUCCESS;
}
