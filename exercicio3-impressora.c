#include <stdio.h>

#define MAX 5

typedef struct {
    int codigo;
    char arquivo[50];
    int bytes;
} Documento;

Documento fila[MAX];

int inicio = 0;
int fim = 0;

void enqueue(Documento d) {

    fila[fim] = d;
    fim++;
}

Documento dequeue() {

    Documento d = fila[inicio];
    inicio++;

    return d;
}

int main() {

    enqueue((Documento){1, "trabalho.pdf", 500});
    enqueue((Documento){2, "atividade.docx", 800});
    enqueue((Documento){3, "foto.png", 1200});
    enqueue((Documento){4, "planilha.xls", 600});
    enqueue((Documento){5, "texto.txt", 200});

    while (inicio < fim) {

        Documento d = dequeue();

        printf("Imprimindo documento...\n");
        printf("Codigo: %d\n", d.codigo);
        printf("Arquivo: %s\n", d.arquivo);
        printf("Bytes: %d\n\n", d.bytes);
    }

    return 0;
}