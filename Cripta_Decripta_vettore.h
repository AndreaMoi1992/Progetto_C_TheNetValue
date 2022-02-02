//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_CRIPTA_DECRIPTA_VETTORE_H
#define PROGETTO_C_MOI_ANDREA_CRIPTA_DECRIPTA_VETTORE_H

#include "inizializzazione.h"


/* CRIPTA VETTORE */

/* Cripta tutti i campi del vettore in ingresso pari al valore numeroElementiVettore */
void criptaVettore(recordSoggetto soggetto[], int numeroElementiVettore);

/* Cripta il carattere nel campo nome nella cella iesima del vettore */
void criptaCarattereNome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k);

/* Cripta il carattere nel campo cognome nella cella iesima del vettore */
void criptaCarattereCognome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k);


/* Cripta l'intera stringa nome */
void criptaNome(recordSoggetto soggetto[], int i);

/* Cripta la stringa cognome, riceve in ingresso la struttura e la cella in cui è salvata la stringa da criptare */
void criptaCognome(recordSoggetto soggetto[], int i);


/* DECRIPTA VETTORE */

/* Decripta tutti i campi del vettore in ingresso pari al valore numeroElementiVettore */
void deCriptaVettore(recordSoggetto soggetto[], int numeroElementiVettore);

/* Decripta il carattere nel campo nome nella cella iesima del vettore */
void deCriptaCarattereNome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k);

/* Decripta il carattere nel campo nome nella cella iesima del vettore */
void deCriptaCarattereCognome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k);


/* Decripta la stringa nome, riceve in ingresso la struttura e la cella in cui è salvata la stringa da criptare */
void deCriptaNome(recordSoggetto soggetto[], int i);

/* Decripta la stringa nome, riceve in ingresso la struttura e la cella in cui è salvata la stringa da criptare */
void deCriptaCognome(recordSoggetto soggetto[], int i);


#endif //PROGETTO_C_MOI_ANDREA_CRIPTA_DECRIPTA_VETTORE_H
