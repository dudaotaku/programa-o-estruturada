#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var1, var2;
   int *p1=var1;
   int *p2=var2;

   if(p1>p2){
    printf("o maior endereço é %p",(void*)p1);
   }else{
   printf("o maior numero é: %p", (void*)p2);
   }
    return 0;
}
