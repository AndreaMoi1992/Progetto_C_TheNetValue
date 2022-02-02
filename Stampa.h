//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_STAMPA_H
#define PROGETTO_C_MOI_ANDREA_STAMPA_H

#include "inizializzazione.h"

/* STAMPA */

/* Stampa l'intero elenco, fino al valore voluto nella variabile numeroElementiElenco */
void stampaElencoCriminali(recordSoggetto soggetto[],int numeroElementiElenco);

/* Stampa la cella i-esima del vettore struttura, i=0 == Prima cella */
void stampaRecord(recordSoggetto soggetto[],int i);

/* Stampa il nome del soggetto della cella i-esima */
void stampaNome(recordSoggetto soggetto[],int i);

/* Stampa il cognome del soggetto della cella i-esima*/
void stampaCognome(recordSoggetto soggetto[],int i);

/* Stampa l'altezza del soggetto della cella i-esima*/
void stampaAltezza(recordSoggetto soggetto[],int i);

/* Stampa il peso del soggetto della cella i-esima*/
void stampaPeso(recordSoggetto soggetto[],int i);

/* Stampa il vettore colore occhi, in ingresso serve la dimensione del vettore voluto nella cella i-esima */
void stampaColoreOcchi(recordSoggetto soggetto[],int i, int dimensioneVettore);

/* Stampa il vettore colore capelli, in ingresso serve la dimensione del vettore voluto nella cella i-esima */
void stampaColoreCapelli(recordSoggetto soggetto[],int i, int dimensioneVettore);

/* Stampa se è presente la barba o meno nella cella iesima del vettore */
void stampaBarba(recordSoggetto soggetto[],int i);

/* Stampa il vettore impronta digitale, in ingresso serve la dimensione del vettore voluto nella cella i-esima */
void stampaImprontaDigitale(recordSoggetto soggetto[],int i, int dimensioneVettore);

/* Stampa la stringa residenza salvata nella cella iesima */
void stampaResidenza(recordSoggetto soggetto[],int i);

/* Stampa la latitudine e longitudine salvata nella cella iesima */
void stampaLatitudineELongitudine(recordSoggetto soggetto[],int i);

/* In base alla scelta effettuata, al valore scelto per l'enumerazione stampa lo stato del soggetto */
void stampaStatoSoggetto(int Scelta);

/* In base alla scelta effettuata, al valore scelto per l'enumerazione stampa il tipo di capelli del soggetto */
void stampaTipoCapelli(int Scelta);

/* Chiede se si vuole stampare un alemento del vettore */
int cheElementoStampa(int elementi);



#endif //PROGETTO_C_MOI_ANDREA_STAMPA_H
