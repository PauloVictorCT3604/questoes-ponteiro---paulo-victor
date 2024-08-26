#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    
        printf("Insira o primeiro numero: ");
        scanf("%d", &n1);
        printf("Insira o segundo numero: ");
        scanf("%d", &n2);
    

            if (&n1 > &n2){

                printf("O conteudo do maior enderec4o e: %d\n", n1);
            
                } else{

                    printf("O conteudo do maior endereco e: %d\n", n2);
                
                }
    
return 0;

}
