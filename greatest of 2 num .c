#include<stdio.h>
#include<stdlib.h>



int main()
{
    int a,b,c;
    printf("enter the three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("the  greatest is %d ",a);
    }
    else
        if(b>a && b>c)
    {
        printf("the  greatest is %d ",b);
    }
    else
    {
        printf("the  greatest is %d ",c);
    }
    return 0;

}
