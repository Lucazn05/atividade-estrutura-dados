#include <stdio.h>

#define MAX 5

typedef struct {
    char nome[50];
    int tempo;
} Pessoa;

Pessoa fila[MAX];

int inicio = 0;
int fim = 0;

void enqueue(Pessoa p) {

    fila[fim] = p;
    fim++;
}

Pessoa dequeue() {

    Pessoa p = fila[inicio];
    inicio++;

    return p;
}

int main() {

    enqueue((Pessoa){"Lucas", 10});
    enqueue((Pessoa){"Maria", 7});
    enqueue((Pessoa){"Joao", 9});
    enqueue((Pessoa){"Ana", 6});
    enqueue((Pessoa){"Pedro", 8});

    int soma = 0;
    int total = 0;

    while (inicio < fim) {

        Pessoa p = dequeue();

        printf("Atendendo %s\n", p.nome);

        soma += p.tempo;
        total++;
    }

    float media = (float)soma / total;

    printf("\n");
    printf("Media de atendimento: %.2f minutos\n", media);

    if (media > 8) {

        printf("Recomendado abrir novo caixa\n");

    } else {

        printf("Nao precisa abrir novo caixa\n");
    }

    return 0;
}