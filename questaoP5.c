#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[5];          
    int *ptr = vet;      

        printf("Insira 5 numeros inteiros:\n");

            for (int i = 0; i < 5; i++){

                scanf("%d", ptr + i);
            
            }

        printf("O dobro de cada valor insirido:\n");
    
            for (int i = 0; i < 5; i++){

                printf("%d\t", *(ptr + i) * 2);
            
            }

return 0;

}
