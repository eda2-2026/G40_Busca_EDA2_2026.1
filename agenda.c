#include <string.h>
#include "agenda.h"

int buscaBinaria(Contato agenda[], int tamanho, const char *nome) {
    int low  = 0;
    int high = tamanho - 1;

    while (low <= high) {
        int meio = low + (high - low) / 2;
        int cmp  = strcmp(nome, agenda[meio].nome);

        if (cmp == 0) {
            return meio;       
        } else if (cmp < 0) {
            high = meio - 1;   
        } else {
            low  = meio + 1;   
        }
    }

    return -1; 
}
