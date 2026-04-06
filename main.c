#include <stdio.h>
#include <string.h>
#include "agenda.h"

int main(void) {

    
    Contato agenda[MAX_CONTATOS] = {
        {"Ana Paula",    "(61) 99201-1111"},
        {"Beatriz Neto", "(61) 97654-3333"},
        {"Carlos Lima",  "(61) 98432-2222"},
        {"Daniel Melo",  "(61) 96789-4444"},
        {"Fernanda Sa",  "(61) 95555-5555"},
        {"Gabriel Reis", "(61) 94444-6666"},
        {"Helena Costa", "(61) 93333-7777"},
        {"Igor Dias",    "(61) 92222-8888"},
        {"Julia Matos",  "(61) 91111-9999"},
        {"Lucas Freire", "(61) 90000-0000"}
    };
    int tamanho = MAX_CONTATOS;

    char nomeBuscado[MAX_NOME];

    printf("Digite o nome a buscar: ");
    fgets(nomeBuscado, MAX_NOME, stdin);
    nomeBuscado[strcspn(nomeBuscado, "\n")] = '\0';

    int resultado = buscaBinaria(agenda, tamanho, nomeBuscado);

    if (resultado == -1) {
        printf("Contato '%s' nao encontrado.\n", nomeBuscado);
    } else {
        printf("Contato encontrado!\n");
        printf("Nome    : %s\n", agenda[resultado].nome);
        printf("Telefone: %s\n", agenda[resultado].telefone);
    }

    return 0;
}
