#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y;
    float x;

    printf("y=(x+2)/(x-1) \nLet x= ");
    scanf("%f",&x);

    y=(x+2)/(x-1);
    printf("y= %f\n",y);

    return 0;


}
