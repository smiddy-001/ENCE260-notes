#include <stdint.h>
#include <stdio.h>

#define NUMBER_OF_IMPORTANCE 100

void printThreshold(uint32_t x)
{
    if (x < NUMBER_OF_IMPORTANCE)
    {
        printf("x is less than %d", NUMBER_OF_IMPORTANCE);
    }
    else
    {
        printf("x is not less than %d", NUMBER_OF_IMPORTANCE);
    }
}

int main(void)
    {
        printThreshold(99);
    }