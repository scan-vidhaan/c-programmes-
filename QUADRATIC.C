#include<stdio.h>
#include<conio.h>
#include<math.h>

int a,b,c,r1,r2,d;
double rp,ip;

int main()
{
    printf("enter the co efficients:");
    scanf("%d%d%d",&a,&b,&c);

    d= b*b - 4*a*c;

    if(d==0)
    {
        r1=(-b-sqrt(d))/(2*a);
        r2=r1;

        printf("roots are equal %d",r2);

    }
     else
            if(d>0)
            {
              r1= (-b +sqrt(d))/(2*a);
            r2= (-b-sqrt(d)) /(2*a);
            printf("the roots are unequal %d",r1,r2);
            }
            else
            {
                rp =-b/(2*a);
                ip = sqrt(-d)/(2*a);
                printf("the roots are imaginary %2lf +%2lfi",rp,ip);

            }
         return 0;

}
