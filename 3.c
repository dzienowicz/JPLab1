#include <stdio.h>
#include <math.h>
int main(){
double a,b,c;

scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
double p = (a+b+c)/2;
double x = p*(p-a)*(p-b)*(p-c);
double s = sqrt(x);
printf("%lf", s);
    
return 0;
}