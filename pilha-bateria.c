#include <stdio.h>

#define MAX 5

int pilha[MAX];

int topo = -1;

void push(int valor) {

    topo++;

    pilha[topo] = valor;

    printf("Carregando bateria: %d%%\n", valor);
}

void pop() {

    printf("Descarregando bateria: %d%%\n", pilha[topo]);

    topo--;
}

int main() {

    push(20);
    push(40);
    push(60);
    push(80);
    push(100);

    printf("\n");

    while (topo >= 0) {

        pop();
    }

    return 0;
}