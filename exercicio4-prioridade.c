#include <stdio.h>

#define MAX 5

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

Pessoa fila[MAX];

int main() {

    fila[0] = (Pessoa){"Lucas", 20};
    fila[1] = (Pessoa){"Maria", 30};
    fila[2] = (Pessoa){"Joao", 72};
    fila[3] = (Pessoa){"Ana", 25};
    fila[4] = (Pessoa){"Carlos", 68};

    printf("Fila de atendimento:\n\n");

    for (int i = 0; i < MAX; i++) {

        if (fila[i].idade > 65) {

            printf("%s - PRIORITARIO\n", fila[i].nome);
        }
    }

    for (int i = 0; i < MAX; i++) {

        if (fila[i].idade <= 65) {

            printf("%s\n", fila[i].nome);
        }
    }

    return 0;
}