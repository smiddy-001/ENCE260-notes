#include <stdio.h>
#include <stdint.h>

void printDigitName(int8_t x)
{
    switch(x){
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        default:
            printf("Out of bounds\n");
    }
}

int main(void)
{
    printDigitName(0);
    printDigitName(1);
    printDigitName(2);
    printDigitName(3);
    printDigitName(4);
    printDigitName(5);
    printDigitName(6);
}