#include <stdio.h>
int main(){

int aux1=1;
for (int i = 0; i < 10; i++)
{
    if (i % 2 ==0 )
    {
        aux1=i/2+1;
    }
    printf("(%d,%d)", i, aux1);
    if (i<9)
    {
        printf(",");
    }
    
}




}