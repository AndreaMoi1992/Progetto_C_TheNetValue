//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_GENERAZIONE_CASUALE_H
#define PROGETTO_C_MOI_ANDREA_GENERAZIONE_CASUALE_H

#include "inizializzazione.h"

// GENERAZIONE CASUALE

/* Genera un numero di record nella struttura in ingresso pari al valore "grandezzaVettore */
void generaDati(recordSoggetto soggetto[],int grandezzaVettore);

/* Restituisce un soggetto casuale */
recordSoggetto generaRecord();

/* Seleziona un nome salvato in un vettore di stringhe */
void generaNomeCasuale(recordSoggetto soggetto[], int i);

/* Seleziona un nome salvato in un vettore di stringhe */
void generaCognomeCasuale(recordSoggetto soggetto[], int i);

/* Seleziona un valore di altezza tra il massimo e minimo valore possibile */
void generaAltezzaCasuale(recordSoggetto soggetto[], int i,  int altezzaMinima, int altezzaMassima);

/* Seleziona un valore del peso tra il massimo e minimo valore possibile */
void generaPesoCasuale(recordSoggetto soggetto[], int i, int pesoMinimo, int pesoMassimo, int ordineDiGrandezza);

/* Genera un vettore di sei caratteri */
void generaColoreOcchiCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove);

/* Genera un vettore di sei caratteri */
void generaColoreCapelliCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove);

/* Seleziona un valore casuale tra i campi dell'enumerazioen */
void generaLunghezzaCapelliCasuale(recordSoggetto soggetto[], int i);

/* Genera un valore casuale tra zero e uno */
void generaBarbaCasuale(recordSoggetto soggetto[], int i, int minimo, int massimo);

/* Vettore casuale di sedici caratteri */
void generaImprontadigitaleCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove);

/* Seleziona una residenza salvata in un vettore di stringhe */
void generaResidenzaCasuale(recordSoggetto soggetto[], int i);

/* Genera due valori double da inserire in longitudine e latitudine */
void generaGPSCasuale(recordSoggetto soggetto[], int i);

/* Genera un valore casuale dell'enumerazione */
void generaStatoSoggettoCasuale(recordSoggetto soggetto[], int i);




#endif //PROGETTO_C_MOI_ANDREA_GENERAZIONE_CASUALE_H
