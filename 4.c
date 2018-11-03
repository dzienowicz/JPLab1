#include <stdio.h>
#include <math.h>
int main(){
double a,b;
scanf("%lf", &a);
scanf("%lf", &b);
if(a>b){
    printf(" Liczba %.2lf jest wieksza od %.2lf",a,b);
}
else{
printf(" Liczba %.2lf jest mniejsza od %.2lf",a,b);
}
    
return 0;
}