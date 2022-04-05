#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,t,r,c;
    printf("Enter the Principal\n");
    scanf("%i", &p);
    printf("Enter the Time\n");
    scanf("%i", &t);
    printf("Enter the Rate\n");
    scanf("%i", &r);

    c = p * t * r;
    printf("the compound interest is %d\n" ,c);

    return 0;
}
