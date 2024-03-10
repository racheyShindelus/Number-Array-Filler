#include <stdio.h>

int totAr[39];

int num09()  {
    int size = 10;
    int numAr[size];  // array size=10
    int i = 0;
    for(i = 0; i < size; i++)   {
        numAr[i] = i;
    }
    int j = 0;
    for(j = 0; j < size; j++)    {
        totAr[j] = numAr[j];
    }
    printf("\n");
    return 0;
}

int num1019()   {
    int size = 10;
    int numAr[size];  // array size=10
    int i = 0;
    for(i = 0; i < size; i++)   {
        numAr[i] = 100 + i * 10;
    }
    int j = 0;
    for(j = 0; j < size; j++)    {
        totAr[j + 10] = numAr[j];
    }
    printf("\n");
    return 0;
}

int num2025()  {
    totAr[20] = 4;
    totAr[21] = 8;
    totAr[22] = 15;
    totAr[23] = 16;
    totAr[24] = 23;
    totAr[25] = 42;
    return 0;
}

int num2639()   {
    int size = 14;
    int collatz[14];
    int start = 7;
    int i = 0;
    for(i=0; i < size; i++) {
        collatz[i] = start;
        totAr[26 + i] = start;
        if(start % 2 == 0)  {
            start /= 2;
        }
        else    {
            start = start * 3 + 1;
        }
    }
    return 0;
}

int main()  {
    num09();
    num1019();
    num2025();
    num2639();
    int i = 0;
    for (i = 0; i < 39; i++)    {
        printf("%d ", totAr[i]);
    }
    printf("\n");
    return 0;
}