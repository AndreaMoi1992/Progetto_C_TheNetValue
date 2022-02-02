#ifndef PROGETTO_C_MOI_ANDREA_INIZIALIZZAZIONE_H
#define PROGETTO_C_MOI_ANDREA_INIZIALIZZAZIONE_H

// dichiaro define e tutto quello sopra al main

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>


#define CAMPI_SOGGETTO 12 // Quanti campi sono presenti nella struttura

#define NUMERO_SOGGETTI_VETTORE 50 // Quanti soggetti si vogniono memorizzare nel vettore

#define DIM_MAX_NOME 64 // Dimensione della stringa nome
#define DIM_MAX_COGNOME 64 // Dimensione della stringa cognome
#define DIM_MAX_COLORE_OCCHI 6 // Numero elementi vettore occhi
#define DIM_MAX_COLORE_CAPELLI 6 // Numero elementi vettore capelli
#define DIM_MAX_IMPRONTA_DIGITALE 16 // Numero elementi impronta digitale
#define DIM_MAX_RESIDENZA 512 // Dimensione massima stringa residenza

#define MIN_ALTEZZA 0 // Valore altezza minimo
#define MAX_ALTEZZA 250// Valore altezza massimo

#define MIN_PESO 0 // Valore minimo peso
#define MAX_PESO 200 // Valore massimo peso
#define ORDINI_GRANDEZZA_PESO_CASUALE 1000 // Quale ordine di grandezza si vuole dopo la virgola nel peso


#define MIN_NOME_CASUALE 0 // Primo elemento vettore stringhe di nomi
#define MAX_NOME_CASUALE 80 // Elementi salvati nella vettore stringa di nomi

#define MIN_COGNOME_CASUALE 0 // Primo elemento vettore stringhe di cognomi
#define MAX_COGNOME_CASUALE 37 // Elementi salvati nella vettore stringa di cognomi

#define MIN_MULTIPLO_TRE 0 // Valore iniziale per un multiplo di tre
#define MAX_MULTIPLO_TRE 3000 // Valore multiplo di tre, comodità può essere qualsiasi numero maggiore di tre

#define VALORE_MIN_MAIUSCOLA_ASCII 65 // Valore intero della lettera A
#define VALORE_MAX_MAIUSCOLA_ASCII 90 // Valore intero della lettera Z
#define VALORE_MIN_MINUSCOLA_ASCII 97 // Valore intero della lettera a
#define VALORE_MAX_MINUSCOLA_ASCII 122 // Valore intero della lettera z

#define CIFRA_MIN 48 // Valore intero tabella del carattere 0
#define CIFRA_MAX 57 // Valore intero tabella del carattere 9

#define MIN_VALORE_BARBA 0 // Valori generazione casuale
#define MAX_VALORE_BARBA 100 // Valori generazione casuale

#define MIN_RESIDENZA_CASUALE 0 // Valori generazione casuale
#define MAX_RESIDENZA_CASUALE 50 // Valori generazione casuale

#define MIN_LONGITUDINE 0 // Minimo valore per la longitudine
#define MAX_LONGITUDINE 180 // Massimo valore per la longitudine

#define MIN_LATITUDINE 0 // Minimo valore per la latitudine
#define MAX_LATITUDINE 90 // Massimo valore per la latitudine
#define ORDINE_GRANDEZZA_LAT_LONG 1000 // Ordine di grandezza latitudine longitudine

typedef enum {CORTI, MEDI, LUNGHI, ALTRO} tipoCapelli;
typedef enum {LIBERO, RICERCATO, IN_ARRESTO, EVASO} statoSoggetto;

typedef struct {
    double latitudine;
    double longitudine;
} posizioneGps;

typedef struct {
    char nome[DIM_MAX_NOME];                            // Stringa da 64 caratteri compreso il terminatore
    char cognome[DIM_MAX_COGNOME];                       //Stringa da 64 caratteri compreso il terminatore
    int altezza;                                        // Valore intero altezza soggetto
    float peso;                                         // Peso del soggetto
    char coloreOcchi[DIM_MAX_COLORE_OCCHI];             // Vettore 6 caratteri, terminatore escluso
    char coloreCapelli[DIM_MAX_COLORE_CAPELLI];         // Vettore 6 caratteri, terminatore escluso
    tipoCapelli capelli;                                // Enumerazione, tipo capelli
    _Bool lunghezzaBarba;                               // True==Barba ; False==No barba
    char improntaDigitale[DIM_MAX_IMPRONTA_DIGITALE];   // Vettore 16 caratteri, lettere o cifre, no terminatore stringa
    char residenza[DIM_MAX_RESIDENZA];                  // Stringa 512 caratteri, terminatore incluso
    posizioneGps posizione;                             // Posizione GPS
    statoSoggetto stato;                                // Enumerazione ricercato evaso ecc
} recordSoggetto;

// INSERIMENTO MAIN

/* Permette la pulitura del buffer una volta che è avvenuto un inserimento */
void svuotaBuffer(); // Svuota il buffer

/* Se il carattere non è corretto restituisce false*/
_Bool valutaInserimento(char risposta);

/* Chiede se si vuole inserire un altro record, valuta se l'inserimento è corretto e restituisce il carattere corretto */
char controllaInserimentoRecord(char scelta);

/* Chiede se si vuole inserire un altro soggetto */
_Bool nuovoInserimento();

#endif //PROGETTO_C_MOI_ANDREA_INIZIALIZZAZIONE_H