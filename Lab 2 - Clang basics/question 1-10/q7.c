#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>


bool meetsConditionFunc(int64_t x)
{
    // truth cases
    bool evenAndPositive = ((x % 2 == 0) && !(x < 0));
    bool oddAndNegative = (!(x % 2 == 0) && (x < 0));
    
    return (evenAndPositive || oddAndNegative);
}

void meetsCondition(int64_t x)
{
    bool isCondMet = meetsConditionFunc(x);

    printf("%s\n", isCondMet ? "true" : "false");
}

int main(void)
{
    meetsCondition(0);
    meetsCondition(-3);
    meetsCondition(1);
    meetsCondition(-2);
    meetsCondition(1642);
    meetsCondition(-20);
    meetsCondition(29);
    meetsCondition(-31);
}