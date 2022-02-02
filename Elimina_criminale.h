
#ifndef PROGETTO_C_MOI_ANDREA_ELIMINA_CRIMINALE_H
#define PROGETTO_C_MOI_ANDREA_ELIMINA_CRIMINALE_H

#include "inizializzazione.h"

/* ELIMINA CRIMINALE */

/* Elimina il soggetto presente nella struttura in ingresso salvato nella cella in ingresso
 * (prima cella == cellaDaEliminare=0), in ingresso riceve anche il numero totale di elementi
 * del vettore, bisogna aggiornare esternamente il numero di elementi presenti nel vettore */
void eliminaCriminale(recordSoggetto soggetto[], int cellaDaEliminare, int elementiVettore);

#endif //PROGETTO_C_MOI_ANDREA_ELIMINA_CRIMINALE_H
