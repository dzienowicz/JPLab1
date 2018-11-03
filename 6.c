#include <stdio.h>
#include <math.h>
int main(){

double a;
scanf("%lf", &a);
if(a<0){ 
    printf("Pierwiastek: BLAD\n");
    double y = 1/a;
    printf("Odwrotnosc: %.2lf",y);
}
if (a==0){
    double x = sqrt(a);
printf("Pierwiastek: %.2lf\n",x);    
printf("Odwrotnosc: BLAD");
}
if (a>0){
double x = sqrt(a);
double y = 1/a;
printf("Pierwiastek: %.2lf\n",x);
printf("Odwrotnosc: %.2lf",y);
}  


return 0;
}