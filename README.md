# Guia de Uso de Ponteiros em C

## Introdução

Ponteiros são um conceito fundamental na linguagem C que permite o acesso e manipulação direta da memória. Eles são variáveis que armazenam o endereço de outra variável. Este guia fornece uma visão geral sobre como usar ponteiros em C.

## O que é um Ponteiro?

Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Em vez de armazenar um valor diretamente, o ponteiro armazena o endereço onde o valor está localizado.

### Exemplo

```c
int x = 10;
int *p; // Declara um ponteiro para int
p = &x; // Atribui o endereço de x a p
