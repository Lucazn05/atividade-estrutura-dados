#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[50];
    char cpf[20];
    char nascimento[20];
    char motivo[20];
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

    enqueue((Pessoa){"Lucas", "11111111111", "01/01/2000", "Reclamar"});
    enqueue((Pessoa){"Maria", "22222222222", "02/02/2001", "Elogiar"});
    enqueue((Pessoa){"Joao", "33333333333", "03/03/2002", "Reclamar"});
    enqueue((Pessoa){"Ana", "44444444444", "04/04/2003", "Elogiar"});
    enqueue((Pessoa){"Pedro", "55555555555", "05/05/2004", "Reclamar"});

    int reclamar = 0;
    int elogiar = 0;

    while (inicio < fim) {

        Pessoa p = dequeue();

        printf("Atendendo pessoa: %s\n", p.nome);

        if (strcmp(p.motivo, "Reclamar") == 0) {
            reclamar++;
        } else {
            elogiar++;
        }
    }

    printf("\n");
    printf("Hoje tivemos %d pessoas reclamando\n", reclamar);
    printf("Hoje tivemos %d pessoas elogiando\n", elogiar);

    return 0;
}