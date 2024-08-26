#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float vet[10];
    
            for (int i = 0; i < 10; i++) {
            
                printf("Endereco do elemento %d: %p\n", i, (void*)&vet[i]);
                
            }

    return 0;
}