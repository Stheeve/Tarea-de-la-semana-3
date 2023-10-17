#include <stdio.h>
int main(){

int num;
int aux1= 0;
int aux2= 1;
int aux3;


printf("Coloque la cantidad de numero que se debe mostrar de la serie de Fibonacci\n");
scanf("%d", &num);
printf("Los %d primeros numeros de la serie de Fibonacci son\n", num);
if (num<0)
{
    printf("No se puede colocar numero negativos\n");
}
else{
    for (int i = 0; i < num; i++)
{
    if (i <= 1)
    {
        aux3= i;
    }
    else {
        aux3=aux1+aux2;
        aux1=aux2;
        aux2=aux3;
    }
    
    printf("%d\n", aux3);
}
}

}