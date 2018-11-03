#include <stdio.h>
#include <math.h>
int main(){

double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if(a<=0 || b<=0 || c<=0){
    printf("BLAD");
    }
    else{
   if(a+b>c && a+c>b && b+c>a) {
   printf("TAK");
   }
    else{
    printf("NIE");
    }
    }
    
return 0;
}