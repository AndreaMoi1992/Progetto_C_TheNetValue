//
// Created by andre on 23/08/2021.
//

#ifndef PROGETTO_C_MOI_ANDREA_CONFRONTA_RECORD_H
#define PROGETTO_C_MOI_ANDREA_CONFRONTA_RECORD_H

#include "inizializzazione.h"

/* CONFRONTA RECORD */

/* Confronta due soggetti presenti nella struttura, in ingresso serve il vettore e i due
 * soggetti da confrontare, Soggetto_1=0 == primo soggetto */
float confrontaRecord(recordSoggetto soggetto[], int Soggetto_1, int Soggetto_2);

/* Valuta se due stringhe presenti nei record selezioonati sono uguali,
 * soggetto uno e due rappresentano le celle da confrontare*/
_Bool confrontaNome(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta se due stringhe presenti nei record selezioonati sono uguali,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaCognome(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Confronta due valori interi,soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaAltezza(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Confronta due valori float, soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaPeso(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta i singoli elementi presenti nel vettore colore occhi,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaColoreOcchi(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta gli interi salvati nel campo enumerazione tra due record */
_Bool confrontaLunghezzaCapelli(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta i singoli elementi presenti nel vettore colore capelli */
_Bool confrontaColoreCapelli(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta gli interi salvati nel campo barba, booleani 0 e 1, tra due record */
_Bool confrontaBarba(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta i singoli elementi presenti nel vettore impronta digitale */
_Bool confrontaImprintaDigitale(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Valuta due stringhe inseride nei campi residenza tra due record */
_Bool confrontaResidenza(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Confronta i valori double inseriti nei campi longitudine e latitudine */
_Bool confrontaGPS(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);

/* Confronta due interi corrispondenti ad un enumerazione */
_Bool confrontaStatoSoggetto(recordSoggetto soggetto[],int soggetto_1,int soggetto_2);


#endif //PROGETTO_C_MOI_ANDREA_CONFRONTA_RECORD_H
