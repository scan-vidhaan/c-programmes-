#include<stdio.h>
#include<stdlib.h>



float far,cel;
void main()
{

    printf("enter the temperature in digree far");
    scanf("%f",&far);

    cel=(far-32)*5/9;
    printf("the temperature in celsius is %f",cel);
    getch();

}
