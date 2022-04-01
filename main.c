#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter four numbers\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);

    int sum = a + b + c + d;
    int avg = sum / 4;
    printf("the average is %d\n",avg);

    return 0;
}

