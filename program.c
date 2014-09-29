#include <stdio.h>

void apples_set(int value);
int apples_get();

int main()
{
    apples_set(5);

    printf("apples=%d\n", apples_get());

    return 0;
}
