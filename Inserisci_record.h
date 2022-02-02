//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_INSERISCI_RECORD_H
#define PROGETTO_C_MOI_ANDREA_INSERISCI_RECORD_H

#include "inizializzazione.h"


/* Permette l'inserimento dei campi richiesti nella struttura, non calcola all'interno della procedura il numero di
 * inserimenti bisogna tenerne traccia all'esterno, riceve la struttura che si vuole riempire e la i indica in quale
 * cella del vettore si vuole salvare, i=0 == Prima cella */
void inserisciRecord(recordSoggetto soggetto[], int i);

/* Stampa il menù di inserimento per la scelta del tipo di capelli e chiede l'inserimento per la cella
 * i-esima*/
void inserisciTipoCapelli(recordSoggetto soggetto[],int i);

/* Chiede l'inserimento del nome nella struttura definita e lo assegna nella cella i-esima del vettore */
void inserisciNome(recordSoggetto soggetto[],int i);

/* Chiede l'inserimento del vettore colore occhi per la cella i-esima */
void inserisciColoreOcchi(recordSoggetto soggetto[], int i);

/* Chiede l'inserimento del vettore colore capelli nella cella i-esima */
void inserisciColoreCapelli(recordSoggetto soggetto[], int i);

/* Chiede l'inserimento della stringa cognome per la cella i-esima */
void inserisciCognome(recordSoggetto soggetto[],int i);

/* Inserimento altezza del soggetto nella cella i-esima */
void inserisciAltezza(recordSoggetto soggetto[],int i);

/* Inserimento peso del soggetto nella cella i-esima */
void inserisciPeso(recordSoggetto soggetto[],int i);

/* Inserimento della posizione GPS nella cella i-esima del vettore */
void inserisciPosizioneGps(recordSoggetto soggetto[],int i);

/* Chiede la presenza o meno della barba nella cella i-esima del vettore */
char inserisciBarba(recordSoggetto soggetto[],int i);

/* Richiede l'inserimento del vettore Impronta digitale */
void inserisciImprontaDigitale(recordSoggetto soggetto[], int i);

/* Chiede l' inserimento della stringa relativa alla residenza */
void inserisciResidenza(recordSoggetto soggetto[],int i);

/* Chiede l'inserimento del valore intero relativo all'enumerazione */
void inserisciStatoSoggetto(recordSoggetto soggetto[],int i);



/* VALUTA INSERIMENTI */

/* Se la stringa inserita nella cella i_esima è corretta reatituisce true */
_Bool valutaStringaNome(recordSoggetto soggetto[],int i);

/* Se la stringa inserita nella cella i_esima è corretta reatituisce true */
_Bool valutaStringaCognome(recordSoggetto soggetto[],int i);

/* Se il valore inserito risulta all'interno dei valori consentiti restituisce ''false'' altrimenti ''true'' */
_Bool valutaAltezza(recordSoggetto soggetto[],int i);

/* Se il valore inserito risulta all'interno dei valori consentiti restituisce ''false'' altrimenti ''true'' */
_Bool valutaPeso(recordSoggetto soggetto[],int i);

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche,
 * DIM è la dimensione del vettore */
_Bool valutaVettoreOcchi(recordSoggetto soggetto[],int i,int DIM);

/* Se i valori inseriti sono all'interno del range restituisce falso, altrimenti true */
_Bool valutaTipoCapelli(recordSoggetto soggetto[],int i);

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche,
 * DIM è la dimensione del vettore*/
_Bool valutaVettoreCapelli(recordSoggetto soggetto[],int i,int DIM);

/* Gestisce gli inserimenti da tastiera e valuta se l'inserimento è corretto, richiede la cella i_esima,
 * e il carattere inserito */
_Bool valutaBarba(recordSoggetto soggetto[], int i, char risposta);

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche, DIM è la dimensione del vettore */
_Bool valutaVettoreImprontaDigitale(recordSoggetto soggetto[],int i,int DIM);

/* Se i valori inseriti sono all'interno del range restituisce falso, altrimenti true */
_Bool valutaStatoSoggetto(recordSoggetto soggetto[],int i);


/* SUBROUTINE PER LA VERIFICA DEGLI INSERIMENTI */

/* Valuta la stringa inserita e se non corretta chiede di nuovo l'inserimento */
void verificaNome(recordSoggetto soggetto[],int i);

/* Valuta la stringa inserita e se non corretta chiede di nuovo l'inserimento */
void verificaCognome(recordSoggetto soggetto[],int i);

/* Valuta il valore intero inserito e se non corretto chiede di nuovo l'inserimento */
void verificaAltezza(recordSoggetto soggetto[],int i);

/* Valuta il valore intero inserito e se non corretto chiede di nuovo l'inserimento */
void verificaPeso(recordSoggetto soggetto[],int i);

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaColoreOcchi(recordSoggetto soggetto[],int i);

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaColoreCapelli(recordSoggetto soggetto[],int i);

/* Valuta se i valori inseriti relativi all'enumerazione  sono corretti e in caso negativi
 * chiede nuovamente l'inserimento */
void verificaTipoCapelli(recordSoggetto soggetto[],int i);

/* Valuta il carattere inserito e se non corretto richiede nuovamente l'inserimento */
void verificaBarba(recordSoggetto soggetto[],int i,char barba);

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaImprontaDigitale(recordSoggetto soggetto[],int i);

/* Valuta il carattere inserito e se non corretto richiede nuovamente l'inserimento */
void verificaStatoSoggetto(recordSoggetto soggetto[],int i);

#endif //PROGETTO_C_MOI_ANDREA_INSERISCI_RECORD_H
