#include <stdint.h>
#include <stdio.h>

uint8_t main(char value)
{
    uint8_t count_iters = 0;
    
    do {
        count_iters++;
    } while (getchar(value[count_iters]) != 'q');
    
    return count_iters;
}