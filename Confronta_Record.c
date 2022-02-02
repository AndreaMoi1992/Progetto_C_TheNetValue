
#include "Confronta_Record.h"

/* CONFRONTO RECORD */

/* Chiede la scelta tra due record tra quelli presenti e confronta tutti i campi, stampando quanto sono simili */
float confrontaRecord(recordSoggetto soggetto[], int Soggetto_1, int Soggetto_2) {

    float risultato, similarita; // Variabile per la similitudine

    /* Variabili booleane per valutare la similarita di ogni campo */
    _Bool flagNome, flagCognome, flagAltezza, flagPeso, flagColoreOcchi, flagColoreCapelli, flagLunghezzaCapelli;
    _Bool  flagBarba, flagImprontaDigitale, flagResidenza, flagGPS, flagStatoSoggetto;

    int inserimentiUguali = 0; // quanti sono gli inserimenti uguali

    /* Se l'inserimento è uguale flagNome=false e incrementa la variabile inserimentiUguali */
    flagNome = confrontaNome(soggetto, Soggetto_1, Soggetto_2); // Valuta le stringhe nel campo nome dei due record
    if (flagNome == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagCognome=false e incrementa la variabile inserimentiUguali */
    flagCognome = confrontaCognome(soggetto, Soggetto_1, Soggetto_2);
    if (flagCognome == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagAltezza=false e incrementa la variabile inserimentiUguali */
    flagAltezza = confrontaAltezza(soggetto, Soggetto_1, Soggetto_2);
    if (flagAltezza == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagPeso=false e incrementa la variabile inserimentiUguali */
    flagPeso = confrontaPeso(soggetto, Soggetto_1, Soggetto_2);
    if (flagPeso == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagColoreOcchi=false e incrementa la variabile inserimentiUguali */
    flagColoreOcchi = confrontaColoreOcchi(soggetto, Soggetto_1, Soggetto_2);
    if (flagColoreOcchi == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagColoreCapelli=false e incrementa la variabile inserimentiUguali */
    flagColoreCapelli = confrontaColoreCapelli(soggetto, Soggetto_1, Soggetto_2);
    if (flagColoreCapelli == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagLunghezzaCapelli=false e incrementa la variabile inserimentiUguali */
    flagLunghezzaCapelli = confrontaLunghezzaCapelli(soggetto, Soggetto_1, Soggetto_2);
    if (flagLunghezzaCapelli == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagBarba=false e incrementa la variabile inserimentiUguali */
    flagBarba = confrontaBarba(soggetto, Soggetto_1, Soggetto_2);
    if (flagBarba == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagImprontaDigitale=false e incrementa la variabile inserimentiUguali */
    flagImprontaDigitale = confrontaImprintaDigitale(soggetto, Soggetto_1, Soggetto_2);
    if (flagImprontaDigitale == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagResidenza=false e incrementa la variabile inserimentiUguali */
    flagResidenza = confrontaResidenza(soggetto, Soggetto_1, Soggetto_2);
    if (flagResidenza == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagGPS=false e incrementa la variabile inserimentiUguali */
    flagGPS = confrontaGPS(soggetto, Soggetto_1, Soggetto_2);
    if (flagGPS == false) {
        inserimentiUguali++;
    }
    /* Se l'inserimento è uguale flagStatoSoggetto=false e incrementa la variabile inserimentiUguali */
    flagStatoSoggetto = confrontaStatoSoggetto(soggetto, Soggetto_1, Soggetto_2);
    if (flagStatoSoggetto == false) {
        inserimentiUguali++;
    }

    /* Una volta noti i campi uguali si calcola la similarità, la percentuale dal rapporto tra
     * campi uguali e totali, successivamente moltiplicata per 100 */
    similarita=(inserimentiUguali/(float)CAMPI_SOGGETTO)*100;
    risultato=ceil(similarita); // Arrotonda il valore inserito

    return risultato; // Restituisce il valore calcolato
}



/* SUBROUTINE PER IL CONFRONTO RECORD */

/* Valuta se due stringhe presenti nei record selezioonati sono uguali,
 * soggetto uno e due rappresentano le celle da confrontare*/
_Bool confrontaNome(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore=0; // Inizialmente gli errori sono zero
    k=0; // Primo valore della stringa
    while (soggetto[soggetto_1].nome[k]!='\0'){ // Fino a che la stringa 1 non termina
        if (soggetto[soggetto_1].nome[k]!=soggetto[soggetto_2].nome[k]){ // Se i due valori sono differenti
            errore++; // Incrementa il numero di errori presenti
        }
        k++; // Passa al carattere successivo
    }

    if (errore>0){ // Se è presenta anche solo un errore le due stringhe non sono uguali
        return true; // Restituisci vero
    }
    return false; // se le stringhe sono uguali restituisci falso
}

/* Valuta se due stringhe presenti nei record selezioonati sono uguali */
_Bool confrontaCognome(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore=0; // Inizialmente gli errori sono zero
    k=0; // Primo valore della stringa
    while (soggetto[soggetto_1].cognome[k]!='\0'){ // Fino a che la stringa 1 non termina
        if (soggetto[soggetto_1].cognome[k]!=soggetto[soggetto_2].cognome[k]){ // Se i due valori sono differenti
            errore++; // Incrementa il numero di errori presenti
        }
        k++; // Passa al carattere successivo
    }
    if (errore>0){ // Se è presenta anche solo un errore le due stringhe non sono uguali
        return true; // Restituisci vero
    }
    return false; // se le stringhe sono uguali restituisci falso
}

/* Confronta due valori interi */
_Bool confrontaAltezza(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    /* Se i valori presenti nel record sono diversi restituisce true, altrimenti false */
    if (soggetto[soggetto_1].altezza!=soggetto[soggetto_2].altezza){
        return true;
    }
    return false;
}

/* Confronta due valori float, soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaPeso(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    /* Se i valori presenti nel record sono diversi restituisce true, altrimenti false */
    if (soggetto[soggetto_1].peso!=soggetto[soggetto_2].peso){
        return true;
    }
    return false;
}

/* Valuta i singoli elementi presenti nel vettore colore occhi,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaColoreOcchi(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore=0; // Gli errori all'istante iniziale sono zero
    k=0; // Parte dal primo elemento del vettore
    while (k<DIM_MAX_COLORE_OCCHI){ // Finchè non viene analizzato tutto il vettore
        if (soggetto[soggetto_1].coloreOcchi[k]!=soggetto[soggetto_2].coloreOcchi[k]){ // Se gli elementi corrispondenti sono diversi
            errore++; // Incrementa gli errori
        }
        k++; // Passa all'elemento successivo
    }
    if (errore>0){ // Se c'è anche solo un errore
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}

/* Valuta i singoli elementi presenti nel vettore colore capelli,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaColoreCapelli(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore = 0; // Gli errori all'istante iniziale sono zero
    k = 0; // Parte dal primo elemento del vettore
    while (k < DIM_MAX_COLORE_CAPELLI) { // Finchè non viene analizzato tutto il vettore
        if (soggetto[soggetto_1].coloreCapelli[k] != soggetto[soggetto_2].coloreCapelli[k]){ // Se gli elementi corrispondenti sono diversi
            errore++; // Incrementa gli errori
        }
        k++; // Passa all'elemento successivo
    }
    if (errore > 0) { // Se c'è anche solo un errore
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}

/* Valuta gli interi salvati nel campo enumerazione tra due record,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaLunghezzaCapelli(recordSoggetto soggetto[],int soggetto_1,int soggetto_2) {
    if (soggetto[soggetto_1].capelli != soggetto[soggetto_2].capelli) { // Se i valori inserisi non coincidono
        return true; // Restituisci falso
    }
    return false; // Altrimenti vero
}

/* Valuta gli interi salvati nel campo barba, booleani 0 e 1, tra due record,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaBarba(recordSoggetto soggetto[],int soggetto_1,int soggetto_2) {
    if (soggetto[soggetto_1].lunghezzaBarba != soggetto[soggetto_2].lunghezzaBarba) { // Se i valori inseriti sono falsi
        return true; // Restituisci vero
    }
    return false; //altrimenti falso
}

/* Valuta i singoli elementi presenti nel vettore impronta digitale,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaImprintaDigitale(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore=0; // Gli errori all'istante iniziale sono zero
    k=0; // Parte dal primo elemento del vettore
    while (k<DIM_MAX_IMPRONTA_DIGITALE){ // Finchè non viene analizzato tutto il vettore
        if (soggetto[soggetto_1].improntaDigitale[k]!=soggetto[soggetto_2].improntaDigitale[k]){ // Se gli elementi corrispondenti sono diversi
            errore++; // Incrementa gli errori
        }
        k++; // Passa all'elemento successivo
    }
    if (errore>0){ // Se c'è anche solo un errore
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}

/* Valuta due stringhe inseride nei campi residenza tra due record,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaResidenza(recordSoggetto soggetto[],int soggetto_1,int soggetto_2){
    int errore, k; // Contatori
    errore=0; // Errori, inizialmente nulli
    k=0; // Parte dal primo elemento della stringa
    while (soggetto[soggetto_1].residenza[k]!='\0'){ // Fino a che la prima stringa selezionata non è terminata
        if (soggetto[soggetto_1].residenza[k]!=soggetto[soggetto_2].residenza[k]){ // Se i due elementi sono diversi
            errore++; // Incrementa il numero di errori presenti
        }
        k++; // Passa al termine successivo
    }
    if (errore>0){ // Se è presente anche solo un errore
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}

/* Confronta i valori double inseriti nei campi longitudine e latitudine,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaGPS(recordSoggetto soggetto[],int soggetto_1,int soggetto_2) {
    if (soggetto[soggetto_1].posizione.latitudine != soggetto[soggetto_2].posizione.latitudine ||
        soggetto[soggetto_1].posizione.longitudine != soggetto[soggetto_2].posizione.longitudine) { // Se anche solo uno degli elementi non coincide
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}

/* Confronta due interi corrispondenti ad un enumerazione,
 * soggetto uno e due rappresentano le celle da confrontare */
_Bool confrontaStatoSoggetto(recordSoggetto soggetto[],int soggetto_1,int soggetto_2) {
    if (soggetto[soggetto_1].stato != soggetto[soggetto_2].stato) { // Se i valori sono diversi
        return true; // Restituisci vero
    }
    return false; // Altrimenti falso
}
