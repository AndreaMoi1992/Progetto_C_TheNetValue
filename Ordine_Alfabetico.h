//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_ORDINE_ALFABETICO_H
#define PROGETTO_C_MOI_ANDREA_ORDINE_ALFABETICO_H

// #include "inizializzazione.h"
#include "Confronta_Record.h"

/* ORDINE ALFABETICO*/

/* La prima struttura che do in ingressso, la seconda è una stringa vuota che creo esternamente per riempirla di elementi ordinati */
void ordinaAlfabeticamente(recordSoggetto stringhe[], recordSoggetto stringheOrdinata[], int dimensioneVettore);

/* Trova l'elemento da mettere per primo per l'ordine alfabetico */
int posizionePrimoElementoAlfabetico(recordSoggetto stringaSupporto[], int numeroElementi);




#endif //PROGETTO_C_MOI_ANDREA_ORDINE_ALFABETICO_H
