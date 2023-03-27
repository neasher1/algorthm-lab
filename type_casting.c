//type casting example
#include<stdio.h>

int main()
{
    int a, b;
    float result;

    a = 3;
    b = 2;

    //explicit type casting
    result = (float) a/b;

    printf("Result of %d/%d = %f", a, b, result);
}
