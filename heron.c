#include<stdio.h>
#include<stdlib.h>
int area(int a,int b,int c);

int main()
{

int s,n1,n2,n3;
float h;

printf("enter the sides of the triangle :");

scanf("%d%d%d",&n1,&n2,&n3);

h = area(n1,n2,n3);


printf("the area of triangle is =%f",h);
getch();
}
int area(int a,int b,int c)

{
    int s;

    float h;
s = (a+b+c)/2;

h = sqrt(s*(s-a)*(s-b)*(s-c));
return h;
}
