#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, d,e,f;
    printf("Enter 6 numbers\n");
    scanf("%i",& a);
    scanf("%1", & b);
    scanf("%i", & c);
    scanf("%i", & d);
    scanf("%i", & e);
    scanf("%i", & f);

    int mult = a * b * c * d * e * f;
    int avg = mult / 6;
    printf("the average is %d\n", avg);

    return 0;
}
