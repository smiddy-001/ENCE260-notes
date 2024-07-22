#include <stdio.h>
#include <stdint.h>

// void putchar(char x)
// {
//     printf("%c", x);
// }

int main(void){
    int32_t value = 11;
    switch (value) {
        case 11:
            putchar('J');
            break;
        case 12:
            putchar('Q');
            break;
        case 13:
            putchar('K');
            break;
    }
}