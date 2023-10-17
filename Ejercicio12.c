#include <stdio.h>

int main(void){

int num;
int digito;
int aux=0;

printf("Coloque un numero entero de 3 dijitos\n");
scanf("%d", &num);

if (num>=100 && num <=999){
    while(num>0){
        digito=num % 10;
        if (digito==1){
            aux=1;
            break;
        }
        num /=10;
    }

   if  (aux){
        printf("el numero contiene el digito 1\n");
   } 
   else {

        printf("El numero no tiene el digito 1\n");
    }

}


 else{
    printf("El numero ingresado no tiene 3 dijitos\n");
   }
   return 0;



}