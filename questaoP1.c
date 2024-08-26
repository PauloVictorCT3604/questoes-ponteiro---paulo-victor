#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;

    int *ptr_n1 = &n1;
    int *ptr_n2 = &n2;

            if(ptr_n1 > ptr_n2){
                
                printf("O endereco de n1 e maior que o de n2: %p\n", (void*)ptr_n1);

                } else{

                     printf("O endereco de n2 e maior que o de n1: %p\n", (void*)ptr_n2);

                }
    
return 0;

}