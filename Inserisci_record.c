
#include "Inserisci_record.h"

/* Permette l'inserimento dei campi richiesti nella struttura, non calcola all'interno della procedura il numero di
 * inserimenti bisogna tenerne traccia all'esterno, riceve la struttura che si vuole riempire e la i indica in quale
 * cella del vettore si vuole salvare, i=0 == Prima cella */
void inserisciRecord(recordSoggetto soggetto[], int i){
    char barba;

    inserisciNome(soggetto, i); // Chiede e salva il nome, lo salva nella cella i
    verificaNome(soggetto, i); // Verifica l'inserimento, della stringa nella cella i

    inserisciCognome(soggetto, i); // Chiede e salva il cognome, lo salva nella cella i
    verificaCognome(soggetto, i); // Verifica l'inserimento, della stringa nella cella i

    inserisciAltezza(soggetto, i); // Chiede e salva il altezza, lo salva nella cella i  (Intero)
    verificaAltezza(soggetto, i); // Verifica l'inserimento, del valore nella cella i

    inserisciPeso(soggetto, i); // Chiede e salva il peso, lo salva nella cella i  (Float)
    verificaPeso(soggetto, i); // Verifica l'inserimento, del valore nella cella i

    inserisciColoreOcchi(soggetto, i); // Chiede e salva il colore degli occhi, lo salva nella cella i  (Vettore di caratteri)
    verificaColoreOcchi(soggetto, i); // Verifica l'inserimento, del vettore nella cella i

    inserisciColoreCapelli(soggetto, i); // Chiede e salva il colore dei capelli  (Vettore di caratteri)
    verificaColoreCapelli(soggetto, i); // Verifica l'inserimento, del vettore nella cella i

    inserisciTipoCapelli(soggetto, i); // Chiede e salva il tipo dei capelli  (Enumerazione)
    verificaTipoCapelli(soggetto, i); // Controlla se in valore inserito è corretto

    inserisciPosizioneGps(soggetto, i); // Chiede l'inserimento della posizione GPS (Double)

    barba=inserisciBarba(soggetto, i); // Chiede la presenza o meno di barba e lo salva nella cella i (Bool)
    verificaBarba(soggetto, i, barba); // Verifica se l'inserimento è corretto

    inserisciImprontaDigitale(soggetto, i); // Chiede l'inserimento dell'impronta digitale (Vettore di caratteri)
    verificaImprontaDigitale(soggetto, i); // Verifica l'inserimento, del vettore nella cella i

    inserisciResidenza(soggetto, i); // Chiede l'inserimento della residenza (stringa)

    inserisciStatoSoggetto(soggetto, i);   // Chiede l'inserimento dello stato del soggetto (Enumerazione)
    verificaStatoSoggetto(soggetto, i); // Controlla se in valore inserito è corretto

    svuotaBuffer(); // Pulisce il buffer per il prossimo inserimento

}

/* SUBROUTINE PER L'INSERIMENTO */

/* Chiede l'inserimento del nome nella struttura definita e lo assegna nella cella i-esima del vettore */
void inserisciNome(recordSoggetto soggetto[],int i){
    printf("\nInserisci Nome: "); // Chiedo l'inserimento del nome
    scanf("%[^\n]s", soggetto[i].nome); // Salvo il nome nella struttura definita come stringa
    svuotaBuffer(); // Svuoto i caratteri rimanenti nel buffer
}

/* Chiede l'inserimento della stringa cognome per la cella i-esima */
void inserisciCognome(recordSoggetto soggetto[],int i){
    printf("\nInserisci Cognome: ");         // Chiedo l'inserimento del cognome
    scanf("%[^\n]s", soggetto[i].cognome);   // Salvo il cognome nella struttura definita come stringa
    svuotaBuffer();                                 // Svuoto i caratteri rimanenti nel buffer
}

/* Inserimento altezza del soggetto nella cella i-esima */
void inserisciAltezza(recordSoggetto soggetto[],int i){
    printf("\nInserisci altezza: ");    // Chiede l'inserimento di un valore intero per altezza
    scanf("%d", &soggetto[i].altezza);  // Inserimento del valore intero corrispondente
    svuotaBuffer();                             // Svuota buffer prima dell'inserimento da problemi altrimenti
}

/* Inserimento peso del soggetto nella cella i-esima */
void inserisciPeso(recordSoggetto soggetto[],int i){
    printf("\nInserisci peso: "); // Chiede l'inserimento di un valore intero per altezza
    scanf("%f", &soggetto[i].peso);// Inserimento del valore float corrispondente
    svuotaBuffer(); // Svuota buffer prima dell'inserimento da problemi altrimenti
}

/* Chiede l'inserimento del vettore colore occhi per la cella i-esima */
void inserisciColoreOcchi(recordSoggetto soggetto[], int i){
    printf("\nInserisci colore occhi: "); // Chiede di immettere in colore degli capelli
    int j;                                       // Inizializza una variabile
    char v[DIM_MAX_COLORE_OCCHI];              // Definisce un vettore di caratteri di supporto
    for (j=0; j<DIM_MAX_COLORE_OCCHI; j++) {   // Utilizze un for per salvare i caratteri
        scanf("%c", &v[j]);
    }
    for (j=0; j<DIM_MAX_COLORE_OCCHI; j++) {    // Secondo ciclo for per immettere i dati nella struttura
        soggetto[i].coloreOcchi[j] = v[j]; // Salva tutti i caratteri nel campo struttura selezionato
    }
    svuotaBuffer(); // Svuoto i caratteri rimanenti nel buffer
}

/* Chiede l'inserimento del vettore colore capelli nella cella i-esima */
void inserisciColoreCapelli(recordSoggetto soggetto[], int i){
    printf("\nInserisci colore capelli: "); // Chiede di immettere in colore degli capelli
    int j;                                       // Inizializza una variabile
    char v[DIM_MAX_COLORE_CAPELLI];              // Definisce un vettore di caratteri di supporto
    for (j=0; j<DIM_MAX_COLORE_CAPELLI; j++) {   // Utilizze un for per salvare i caratteri
        scanf("%c", &v[j]);
    }
    for (j=0; j<DIM_MAX_COLORE_CAPELLI; j++) {    // Secondo ciclo for per immettere i dati nella struttura
        soggetto[i].coloreCapelli[j] = v[j];
    }
    svuotaBuffer();
}

/* Stampa il menù di inserimento per la scelta del tipo di capelli e chiede l'inserimento per la cella
 * i-esima */
void inserisciTipoCapelli(recordSoggetto soggetto[],int i){
    printf("\n0) Corti"); // Stampa menu per la scelta
    printf("\n1) Medi");
    printf("\n2) Lunghi");
    printf("\n3) Altro");
    printf("\nInserisci scelta:");
    scanf("%d", &soggetto[i].capelli);  // inserisce la scelta
    svuotaBuffer();
}

/* Chiede la presenza o meno della barba */
char inserisciBarba(recordSoggetto soggetto[],int i){
    char risposta;  // Definisce una variabile dove poter salvare il carattere inserito

    printf("\nBarba (s/n): "); // Stampa la richiesta
    scanf("%c", &risposta); // Acquisisce il carattere
    svuotaBuffer();

    return risposta; // restituisce il carattere inserito
}

/* Richiede l'inserimento del vettore Impronta digitale */
void inserisciImprontaDigitale(recordSoggetto soggetto[], int i) {

    printf("\nInserisci impronta digitale: "); // Chiede di immettere l'impronta digitale
    int j;                                       // Inizializza una variabile di supporto
    char v[DIM_MAX_IMPRONTA_DIGITALE];              // Definisce un vettore di caratteri di supporto
    for (j = 0; j < DIM_MAX_IMPRONTA_DIGITALE; j++) {   // Utilizze un for per salvare i caratteri
        scanf("%c", &v[j]);
    }
    for (j = 0; j < DIM_MAX_IMPRONTA_DIGITALE; j++) {    // Secondo ciclo for per immettere i dati nella struttura
        soggetto[i].improntaDigitale[j] = v[j];  // Salva nel campo struttura il valore inserito
    }
    svuotaBuffer();
}

/* Chiede l' inserimento della stringa relativa alla residenza */
void inserisciResidenza(recordSoggetto soggetto[],int i) {

    printf("\nInserisci residenza: "); // Chiede l'inserimento del nome
    scanf("%[^\n]s", soggetto[i].residenza); // Salva il nome nella struttura definita come stringa
    svuotaBuffer();
}

/* Inserimento della posizione GPS nella cella i-esima del vettore */
void inserisciPosizioneGps(recordSoggetto soggetto[],int i){
    printf("\nInserisci latitudine: "); // Chiede l'inserimento di un valore intero per altezza
    scanf("%lf", &soggetto[i].posizione.latitudine); // Acquisisce il double richiesto
    printf("\nInserisci longitudine: "); // Chiede l'inserimento di un valore intero per altezza
    scanf("%lf", &soggetto[i].posizione.longitudine); // Acquisisce il double richiesto
    svuotaBuffer();
}

/* Chiede l'inserimento del valore intero relativo all'enumerazione */
void inserisciStatoSoggetto(recordSoggetto soggetto[],int i) { //LIBERO, RICERCATO, IN_ARRESTO, EVASO

    printf("\n0) Libero"); // Stampo menu per la scelta
    printf("\n1) Ricercato");
    printf("\n2) In arresto");
    printf("\n3) Evaso");
    printf("\nInserisci scelta:");
    scanf("%d", &soggetto[i].stato);
}


/* SUBROUTINE PER LA VERIFICA DEGLI INSERIMENTI */

/* Valuta la stringa inserita e se non corretta chiede di nuovo l'inserimento */
void verificaNome(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false;  // Variabile di confronto
    flagErrore=valutaStringaNome(soggetto, i); // Se i valori sono corretti flagErrore=false
    if (flagErrore==true){ // Se ci sono errori flagErrore=true
        do{
            printf("\nValore errato, inserire solo caratteri"); // Avvisa che il valore inserito è errato
            inserisciNome(soggetto, i); // Richiede un nuovo inserimento
            flagErrore=valutaStringaNome(soggetto, i); // Valuta il nuovo inserimento
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta la stringa inserita e se non corretta chiede di nuovo l'inserimento */
void verificaCognome(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaStringaCognome(soggetto, i);  // Se i valori sono corretti flagErrore=false
    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            printf("\nValore errato, inserire solo caratteri");  // Avvisa che il valore inserito è errato
            inserisciCognome(soggetto, i);  // Richiede un nuovo inserimento
            flagErrore=valutaStringaCognome(soggetto, i);  // Valuta il nuovo inserimento
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta il valore intero inserito e se non corretto chiede di nuovo l'inserimento */
void verificaAltezza(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaAltezza(soggetto, i);  // Se i valori sono corretti flagErrore=false

    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            inserisciAltezza(soggetto, i); // Richiede un nuovo inserimento
            flagErrore=valutaAltezza(soggetto, i); // Valuta il nuovo inserimento
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta il valore intero inserito e se non corretto chiede di nuovo l'inserimento */
void verificaPeso(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaPeso(soggetto, i);  // Se i valori sono corretti flagErrore=false
    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            printf("Valore inserito errato, il peso deve essere compreso tra 0 e 200 kg"); // Avvisa che il valore inserito è errato
            inserisciPeso(soggetto, i);             // Chiede e salva il peso  (Float)
            flagErrore=valutaPeso(soggetto, i); // Valuta il nuovo inserimento
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaColoreOcchi(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaVettoreOcchi(soggetto, i, DIM_MAX_COLORE_OCCHI); // Valuta se la stringa inserita è corretta
    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            printf("\nInserimento errato, solo lettere maiuscole o minuscole o cifre tra 0 e 9:"); // Da le indicazioni
            inserisciColoreOcchi(soggetto, i);      // Chiede e salva il colore degli occhi  (Vettore di caratteri)
            flagErrore=valutaVettoreOcchi(soggetto, i, DIM_MAX_COLORE_OCCHI); // Valuta se la stringa inserita è corretta
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaColoreCapelli(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaVettoreCapelli(soggetto, i, DIM_MAX_COLORE_CAPELLI); // Valuta se i caratteri inseriti sono corretti
    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            printf("\nInserimento errato, solo lettere maiuscole o minuscole o cifre tra 0 e 9:"); // Da le indicazioni
            inserisciColoreCapelli(soggetto, i);      // Chiede e salva il colore degli occhi  (Vettore di caratteri)
            flagErrore=valutaVettoreCapelli(soggetto, i, DIM_MAX_COLORE_CAPELLI); // Valuta se la stringa inserita è corretta
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta se i valori inseriti relativi all'enumerazione  sono corretti e in caso negativi
 * chiede nuovamente l'inserimento */
void verificaTipoCapelli(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false; // Variabile di confronto
    flagErrore=valutaTipoCapelli(soggetto, i); // Valuta seil valore inserito è corretto
    if (flagErrore==true){  // Se ci sono errori flagErrore=true
        do{
            printf("Valore inserito errato, inserire valore tra 0 e 3");
            inserisciTipoCapelli(soggetto, i);      // Chiede e salva il tipo dei capelli  (Enumerazione)
            flagErrore=valutaTipoCapelli(soggetto, i); // Valuta se la stringa inserita è corretta
        }while(flagErrore==true); // Finchè ci sono errori richiedi l'inserimento
    }
}

/* Valuta il carattere inserito e se non corretto richiede nuovamente l'inserimento */
void verificaBarba(recordSoggetto soggetto[],int i,char barba){
    _Bool flagErrore=false;
    flagErrore=valutaBarba(soggetto, i, barba);
    if (flagErrore==true){
        do{
            printf("\nValore inserito errato");
            barba=inserisciBarba(soggetto, i);            // Chiede la presenza o meno di barba (Bool)
            flagErrore=valutaBarba(soggetto, i, barba);
        }while(flagErrore==true);
    }
}

/* Valuta i caratteri e interi inseriti nel vettore e se non corretti chiede di nuovo
 * l'inserimento */
void verificaImprontaDigitale(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false;
    flagErrore=valutaVettoreImprontaDigitale(soggetto, i, DIM_MAX_IMPRONTA_DIGITALE); // Valuta se la stringa inserita è corretta
    if (flagErrore==true){
        do{
            printf("\nValore inserito errato");
            inserisciImprontaDigitale(soggetto, i); // Chiede l'inserimento dell'impronta digitale (Vettore di caratteri)
            flagErrore=valutaVettoreImprontaDigitale(soggetto, i, DIM_MAX_IMPRONTA_DIGITALE); // Valuta se la stringa inserita è corretta

        }while(flagErrore==true);
    }
}

/* Valuta il carattere inserito e se non corretto richiede nuovamente l'inserimento */
void verificaStatoSoggetto(recordSoggetto soggetto[],int i){
    _Bool flagErrore=false;
    flagErrore=valutaStatoSoggetto(soggetto, i);
    if (flagErrore==true){
        do {
            printf("Valore inserito errato, inserire valore tra 0 e 3");
            inserisciStatoSoggetto(soggetto, i);   // Chiede l'inserimento dello stato del soggetto (Enumerazione)
            flagErrore=valutaStatoSoggetto(soggetto, i);
        }while(flagErrore==true);
    }
}


/* SUBROUTINE PER IL CONTROLLO INSERIMENTO */

/* Se la stringa inserita nella cella i_esima è corretta reatituisce true */
_Bool valutaStringaNome(recordSoggetto soggetto[],int i){
    int k=0; // Contatore
    int supporto, errori; // Due variabili, una di supporto e una che mi conti gli errori
    _Bool flagErrore=false;
    errori=0; // All'inizio della valutazione errori nulli
    while (soggetto[i].nome[k]!='\0'){ // Valuto tutta la stringa che sto considerando
        supporto=soggetto[i].nome[k];  // Associo il carattere letto al suo intero corrispondente nella tabella ASCII
        if (!((supporto>='A' && supporto<='Z') || (supporto>='a' && supporto<='z') || (supporto==' '))){ // Se il valore è fuori da questi termini segnala un errore
            errori++;
        }
        k++; // Passa al carattere successivo
    }
    if (errori>0) { // Se sono presenti errori restituisci vero
        return  flagErrore=true;
    }
    return flagErrore=false;
}

/* Se la stringa inserita nella cella i_esima è corretta reatituisce true */
_Bool valutaStringaCognome(recordSoggetto soggetto[],int i){
    int k=0; // Contatore
    _Bool flagErrore=false;
    int supporto, errori;       // Due variabili, una di supporto e una che mi conti gli errori
    errori=0;                   // All'inizio della valutazione errori nulli
    while (soggetto[i].cognome[k]!='\0'){ // Valuto tutta la stringa che sto considerando
        supporto=soggetto[i].cognome[k];  // Associo il carattere letto al suo intero corrispondente nella tabella ASCII
        if (!((supporto>='A' && supporto<='Z') || (supporto>='a' && supporto<='z') || (supporto==' '))){ // Se il valore è fuori da questi termini segnala un errore
            errori++; // Incrementa il numero di errori
        }
        k++; // Passa al carattere successivo
    }
    if (errori>0) { // Se sono presenti errori restituisci vero
        return  flagErrore=true;
    }
    return flagErrore=false;
}

/* Se il valore inserito risulta all'interno dei valori consentiti restituisce ''false'' altrimenti ''true'' */
_Bool valutaAltezza(recordSoggetto soggetto[],int i){
    if (soggetto[i].altezza<MIN_ALTEZZA || soggetto[i].altezza>MAX_ALTEZZA){ // Valuto l'iserimento e in caso non vada bene stampa di nuovo la richiesta
        printf("Valore inserito errato, l'altezza accettata deve essere compresa tra 0 cm e 250 cm");
        return true; // Se non va bene l'inserimento
    }
    return false; // In caso l'inseriemento vada bene
}

/* Se il valore inserito risulta all'interno dei valori consentiti restituisce ''false'' altrimenti ''true'' */
_Bool valutaPeso(recordSoggetto soggetto[],int i){
    if (soggetto[i].peso<MIN_PESO || soggetto[i].peso>MAX_PESO) {
        return true; // Se l'inserimento non è corretto rende il valore true
    }
    return false; // In caso l'inserimento sia corretto
}

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche,
 * DIM è la dimensione del vettore */
_Bool valutaVettoreOcchi(recordSoggetto soggetto[],int i,int DIM){
    int k=0; // Contatore
    int supporto, errori; // Due variabili, una di supporto e una che mi conti gli errori
    _Bool flagErrore=false;
    errori=0; // All'inizio della valutazione errori nulli
    while (k<(DIM)){ // Valuto tutta la stringa che sto considerando
        supporto=soggetto[i].coloreOcchi[k];  // Associo il carattere letto al suo intero corrispondente nella tabella ASCII
        if (!((supporto>='A' && supporto<='Z') || (supporto>='a' && supporto<='z') || (supporto>='0' && supporto<='9'))){ // Se il valore è fuori da questi termini segnala un errore
            errori++;
        }
        k++; // Passa al carattere successivo
    }
    if (errori>0) { // Se sono presenti errori restituisci vero
        return  flagErrore=true;
    }
    return flagErrore=false;
}

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche,
 * DIM è la dimensione del vettore*/
_Bool valutaVettoreCapelli(recordSoggetto soggetto[],int i,int DIM){
    int k=0; // Contatore
    int supporto, errori; // Due variabili, una di supporto e una che mi conti gli errori
    _Bool flagErrore=false;
    errori=0; // All'inizio della valutazione errori nulli
    while (k<(DIM)){ // Valuto tutta la stringa che sto considerando
        supporto=soggetto[i].coloreCapelli[k];  // Associo il carattere letto al suo intero corrispondente nella tabella ASCII
        if (!((supporto>='A' && supporto<='Z') || (supporto>='a' && supporto<='z') || (supporto>='0' && supporto<='9'))){ // Se il valore è fuori da questi termini segnala un errore
            errori++;
        }
        k++; // Passa al carattere successivo
    }
    if (errori>0) { // Se sono presenti errori restituisci vero
        return  flagErrore=true;
    }
    return flagErrore=false;
};

/* Se i valori inseriti sono all'interno del range restituisce falso, altrimenti true */
_Bool valutaTipoCapelli(recordSoggetto soggetto[],int i){
    if (soggetto[i].capelli<CORTI || soggetto[i].capelli>ALTRO){ // Se i valori sono maggiori o minori dei valori limite
        return true;
    }
    return false;
}

/* Valuta singolarmente ogni elemento del vettore inserito se i valori corrispondono alle specifiche, DIM è la dimensione del vettore */
_Bool valutaVettoreImprontaDigitale(recordSoggetto soggetto[],int i,int DIM){
    int k=0; // Contatore
    int supporto, errori; // Due variabili, una di supporto e una che mi conti gli errori
    _Bool flagErrore=false;
    errori=0; // All'inizio della valutazione errori nulli
    while (k<(DIM)){ // Valuto tutta la stringa che sto considerando
        supporto=soggetto[i].improntaDigitale[k];  // Associo il carattere letto al suo intero corrispondente nella tabella ASCII
        if (!((supporto>='A' && supporto<='Z') || (supporto>='a' && supporto<='z') || (supporto>='0' && supporto<='9'))){ // Se il valore è fuori da questi termini segnala un errore
            errori++;
        }
        k++; // Passa al carattere successivo
    }
    if (errori>0) { // Se sono presenti errori restituisci vero
        return  flagErrore=true;
    }
    return flagErrore=false;
}

/* Se i valori inseriti sono all'interno del range restituisce falso, altrimenti true */
_Bool valutaStatoSoggetto(recordSoggetto soggetto[],int i){
    if (soggetto[i].stato<LIBERO || soggetto[i].stato>EVASO){
        return true;
    }
    return false;
}

/* Gestisce gli inserimenti da tastiera e valuta se l'inserimento è corretto, richiede la cella i_esima,
 * e il carattere inserito */
_Bool valutaBarba(recordSoggetto soggetto[], int i, char risposta){
    if (risposta == 's' || risposta == 'S') { // Inserimento lettera maiuscola o miuscola
        soggetto[i].lunghezzaBarba = true; // Inserisce valore nella struttura nel campo corrispondente
        return false; // Inserimento corretto, restituisce false
    }
    if (risposta == 'n' || risposta == 'N') { // Inserimento lettera maiuscola o miuscola
        soggetto[i].lunghezzaBarba = false; // Inserisce valore nella struttura nel campo corrispondente
        return false; // Inserimento corretto, restituisce false
    }
    return true; // Inserimento sbagliato, restituisce true
}










