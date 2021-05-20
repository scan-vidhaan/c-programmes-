#include<stdio.h>
#include<stdlib.h>
int avg(int a,int b,int c);

int main()
{
    int v,i,d ;
    float h;
    printf("enter the 3 numbers");
    scanf("%d%d%d",&v,&i,&d);
    h = avg(v,i,d);
    printf("the avg of 3 numbers are %f",h);
    return 0;

}
int avg(int a,int b,int c)
{
    float h;
    h=(a+b+c)/3;
    return h;
}
