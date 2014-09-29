#include <stdio.h>

int data;

void apples_set(int value)
{
    data = value;
}

int apples_get()
{
    return data;
}

void oranges_set(int value)
{
    data = value;
}

int main()
{
    /*
    int apples;
    int oranges;

    apples_set(5);
    apples = data;

    oranges_set(apples);
    oranges = data;

    apples_set(4);
    apples = data;
    */

    printf("apples=%d\n", apples_get());

    return 0;
}
