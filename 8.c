#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%i",&a);
 switch (a) {
     case 1:
         printf("Styczen: 31 dni");
         break;
     case 2:
         printf("Luty: 28 dni");
         break;
     case 3:
         printf("Marzec: 31 dni");
         break;
     case 4:
         printf("Kwiecien: 30 dni");
         break;
     case 5: 
         printf("Maj: 31 dni");
         break;
     case 6: 
         printf("Czerwiec: 30 dni");
         break;
     case 7: 
         printf("Lipiec: 31 dni");
         break;
     case 8: 
         printf("Sierpien: 31 dni");
         break;  
     case 9: 
         printf("Wrzesien: 30 dni");
         break;  
     case 10: 
         printf("Pazdziernik: 31 dni");
         break;
     case 11: 
         printf("Listopad: 30 dni");
         break;
     case 12: 
         printf("Grudzien: 31 dni");
         break;
     default:
         printf("BLAD");
     break;
 }
    return 0;
}