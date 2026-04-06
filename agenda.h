#ifndef AGENDA_H
#define AGENDA_H



#define MAX_CONTATOS 10
#define MAX_NOME     50
#define MAX_TELEFONE 20

typedef struct {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
} Contato;

int buscaBinaria(Contato agenda[], int tamanho, const char *nome);

#endif
