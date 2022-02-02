#include "Inserisci_record.h"
#include "Stampa.h"
#include "Generazione_casuale.h"
#include "Confronta_Record.h"
#include "Cripta_Decripta_vettore.h"
#include "Elimina_criminale.h"
#include "Ordine_Alfabetico.h"


/* Nel fine Inizializzazione sono presenti le macro
 * e le definizioni della struttura e delle enumerazioni */

int main() {
    // La srand serve per la generazione casuale
    srand(time(NULL));
    int i;

    // INSERISCI RECORD
    recordSoggetto soggettoInserito[NUMERO_SOGGETTI_VETTORE]; // Definisco la struttura per l'inserimento
    _Bool flagInserimento;

    int elementiInseriti=0; // Elementi presenti nella struttura
    int doveSalvo=0; // In che cella del vettore salva il record inserito
    i=0;

    do{
        inserisciRecord(soggettoInserito, doveSalvo); // Inserisce i dati del soggetto
        elementiInseriti++; // Incrementa il numero di elementi presenti nel vettore

        flagInserimento=nuovoInserimento(); // Chiede e controlla se si vuole inserire un altro soggetto
        doveSalvo++;

    }while(flagInserimento);

    float similiInserimento;
    similiInserimento=confrontaRecord(soggettoInserito, 0, 1); // Calcola quanto sono simili
    printf("\nI due record sono simili al %.2f %%",similiInserimento); // Stampa il valore
    stampaElencoCriminali(soggettoInserito,elementiInseriti); // Stampa tutto il vettore


    // STAMPA UN RECORD TRA QUELLI INSERITI
    int recordDaStampare;

    recordDaStampare=cheElementoStampa(elementiInseriti);
    stampaRecord(soggettoInserito, recordDaStampare-1); // Stampa l'elemento selezionato, il "-1" serve
    // perchè il primo elemento si trova in posizione 0



    // STAMPA TUTTI I RECORD INSERITI
    stampaElencoCriminali(soggettoInserito,elementiInseriti); // Stampa tutto il vettore


    // GENERA UN RECORD CASUALE
    int cella=0; // In che cella del vettore voglio salvare il record generato
    recordSoggetto soggettoCasuale[NUMERO_SOGGETTI_VETTORE]; // Definisco la struttura

    soggettoCasuale[cella]=generaRecord(); // Genera un record e lo salva nella cella selezionata
    printf("\n Record Casuale \n"); // Per separare quale record è quello casuale
    stampaRecord(soggettoCasuale, cella); // Stampa il soggetto nella cella selezionata


    // CRIPTA VETTORE
    int dimensioneVettore=1; // Voglio criptare un solo record

    criptaVettore(soggettoCasuale, dimensioneVettore); // Cripta sia nome che cognome
    stampaElencoCriminali(soggettoCasuale, dimensioneVettore); // Stampa

    deCriptaVettore(soggettoCasuale, dimensioneVettore); // Decripta il vettore selezionato
    stampaElencoCriminali(soggettoCasuale, dimensioneVettore); // Stampa


    // CONFRONTA RECORD
    recordSoggetto soggettoCasualeConfronto[NUMERO_SOGGETTI_VETTORE]; // Definisco la struttura
    float simili;
    int primoSoggetto=0; // Primo elemento vettore
    int secondoSoggetto=1; // Secondo elemento vettore

    soggettoCasualeConfronto[primoSoggetto]=generaRecord(); // Record casuale
    soggettoCasualeConfronto[secondoSoggetto]=generaRecord(); // Record casuale

    stampaRecord(soggettoCasualeConfronto, primoSoggetto); // Stampa
    stampaRecord(soggettoCasualeConfronto, secondoSoggetto); // Stampa

    simili=confrontaRecord(soggettoCasualeConfronto, primoSoggetto, secondoSoggetto); // Calcola quanto sono simili
    printf("\nI due record sono simili al %.2f %%",simili); // Stampa il valore



    // GENERA DATI
    recordSoggetto vettoreCasualeGenerato[NUMERO_SOGGETTI_VETTORE]; // Definisco la struttura
    generaDati(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE); // Genera un vettore intero casuale
    stampaElencoCriminali(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE); // Stampa


    // CRIPTA VETTORE
    criptaVettore(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE); // Cripta l'intero verrote inserito
    stampaElencoCriminali(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE); //Stampa


    // DECRIPTA VETTORE
    deCriptaVettore(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE); // Decripta l'intero verrote inserito criptato
    stampaElencoCriminali(vettoreCasualeGenerato, NUMERO_SOGGETTI_VETTORE);



    // ELIMINA CRIMINALE
    int cellaDaEliminare, elementiVettore, elementiVettoreAggiornato;
    elementiVettore=NUMERO_SOGGETTI_VETTORE; // Indica quanto è grande il vettore che ho inserito
    cellaDaEliminare=1; // Cella che si vuole eliminare

    //Aggiorna gli elementi presenti nel vettore dopo l'eliminazione
    eliminaCriminale(vettoreCasualeGenerato, cellaDaEliminare, elementiVettore);
    elementiVettore--;

    printf("\n Vettore cancellato\n");
    stampaElencoCriminali(vettoreCasualeGenerato, elementiVettore); // Stampa




    // ORDINE ALFABETICO
    printf("\n VETTORE ORDINATO\n");
    recordSoggetto strutturaOrdinata[NUMERO_SOGGETTI_VETTORE]; // Definisce una struttura

    // Dati in ingresso il vettore da ordinare (vettoreCasualeGenerato) e un vettore che voglio avere ordinato (strutturaOrdinata)
    // e il numero di elementi del vettore salva nel vettore "strutturaOrdinata" l'ordine alfabetico
    ordinaAlfabeticamente(vettoreCasualeGenerato, strutturaOrdinata, NUMERO_SOGGETTI_VETTORE);
    stampaElencoCriminali(strutturaOrdinata, NUMERO_SOGGETTI_VETTORE); // stampa il vettore ordinato


    return 0;
}


