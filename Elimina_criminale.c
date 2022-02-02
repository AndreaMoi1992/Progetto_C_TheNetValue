
#include "Elimina_criminale.h"

/* Elimina il soggetto presente nella struttura in ingresso salvato nella cella in ingresso
 * (prima cella == cellaDaEliminare=0), in ingresso riceve anche il numero totale di elementi
 * del vettore, bisogna aggiornare esternamente il numero di elementi presenti nel vettore */
void eliminaCriminale(recordSoggetto soggetto[], int cellaDaEliminare, int numeroElementiVettore){
    int i;
    for (i=cellaDaEliminare; i<numeroElementiVettore; i++){ // sostituisce gli elementi del vettore
        soggetto[i]=soggetto[i+1];
    }
}
