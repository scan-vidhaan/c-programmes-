#include<stdio.h>
#include<stdlib.h>

int main()
{

int minutesEntered=0;
double year=0.0;
double days=0.0;
double minutesinYear=0;
printf("please enter the minutes:");
scanf("%d",&minutesEntered);
minutesinYear=24*60*360;
year=(minutesEntered/minutesinYear);
days=(minutesEntered/60.0)/24.0;
printf("%d minutes is approximently %f days and %f years",minutesEntered,days,year);
   return 0;
}


