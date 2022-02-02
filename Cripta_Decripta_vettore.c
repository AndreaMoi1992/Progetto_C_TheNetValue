
#include "Cripta_Decripta_vettore.h"

/* CRIPTA VETTORE */

/* Cripta tutti i campi del vettore in ingresso pari al valore numeroElementiVettore */
void criptaVettore(recordSoggetto soggetto[], int numeroElementiVettoreDaCriptare){
    int i; // Contatore

    for (i=0; i<numeroElementiVettoreDaCriptare; i++){ // Dal primo fino all'elemento che voglio criptare
        criptaNome(soggetto, i); // Cripta il nome
        criptaCognome(soggetto, i); // Cripta il cognome
    }
}

/* SUBROUTINE PER CRIPTARE */
void criptaCarattereNome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k){
    int incremento;
    char carattereSostituitoChar;

    incremento=carattereIntero-valoreCarattereMinimo; // Valuta la distanza dalla prima lettera dell'alfabeto
    carattereIntero=valoreCarattereMassimo-incremento; // Decrementa dalla lettera Z
    carattereSostituitoChar=carattereIntero; // Carattere corrispondente

    soggetto[i].nome[k]=carattereSostituitoChar; // Salva il carattere trovato nella stringa
}

void criptaCarattereCognome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k){
    int incremento;
    char carattereSostituitoChar;

    incremento=carattereIntero-valoreCarattereMinimo; // Valuta la distanza dalla prima lettera dell'alfabeto
    carattereIntero=valoreCarattereMassimo-incremento; // Decrementa dalla lettera Z
    carattereSostituitoChar=carattereIntero; // Carattere corrispondente

    soggetto[i].cognome[k]=carattereSostituitoChar; // Salva il carattere trovato nella stringa
}
/* Riceve la stringa nome e cripta i caratteri */
void criptaNome(recordSoggetto soggetto[], int i){
    int k, carattereInt; // Variabili intere
    char carattereLettoChar, carattereSostituitoChar;

    k=0; // Contatore
    while (soggetto[i].nome[k]!='\0'){ // Fino a che non termina la stringa
        carattereLettoChar=soggetto[i].nome[k]; // Salva il carattere in una variabile
        carattereInt=carattereLettoChar; // Trova il corrispondente valore intero
        if (carattereInt>='A' && carattereInt<='Z'){ // Se la lettera è maiuscola
            criptaCarattereNome(soggetto, carattereInt, 'A', 'Z', i, k);

        }
        if (carattereInt>='a' && carattereInt<='z') { // Se la lettera è minuscola
            criptaCarattereNome(soggetto, carattereInt, 'a', 'z', i, k);
        }
        if (carattereLettoChar==' '){ // Se il carattere è uno spazio
            soggetto[i].nome[k]=carattereLettoChar; // Mantieni lo spazio
        }
        k++; // passa al carattere successivo
    }
}

/* Riceve la stringa cognome e cripta i caratteri */
void criptaCognome(recordSoggetto soggetto[], int i){
    int k, carattereInt; // Variabili intere
    char carattereLettoChar, carattereSostituitoChar;

    k=0; // Contatore
    while (soggetto[i].cognome[k]!='\0'){ // Fino a che non termina la stringa
        carattereLettoChar=soggetto[i].cognome[k]; // Salva il carattere in una variabile
        carattereInt=carattereLettoChar; // Trova il corrispondente valore intero

        if (carattereInt>='A' && carattereInt<='Z'){ // Se la lettera è maiuscola
            criptaCarattereCognome(soggetto, carattereInt, 'A', 'Z', i, k);
        }
        if (carattereInt>='a' && carattereInt<='z') { // Se la lettera è minuscola
            criptaCarattereCognome(soggetto, carattereInt, 'a', 'z', i, k);
        }
        if (carattereLettoChar==' '){ // Se il carattere è uno spazio
            soggetto[i].cognome[k]=carattereLettoChar; // Mantieni lo spazio
        }

        k++; // passa al carattere successivo
    }
}


/* DECRIPTA VETTORE */

/* Decripta tutti i campi del vettore in ingresso pari al valore numeroElementiVettore */
void deCriptaVettore(recordSoggetto soggetto[], int numeroElementiVettore){
    int i; // Contatore
    for (i=0; i<numeroElementiVettore; i++){ //Fino a che non termina il vettore
        deCriptaNome(soggetto, i); // decripta il nome della cella iesima
        deCriptaCognome(soggetto, i); // decripta il cognome della cella iesima
    }
}
void deCriptaCarattereNome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k){
    int incremento;
    char carattereSostituitoChar;

    incremento = valoreCarattereMassimo - carattereIntero; // Valuta la distanza dall'ultima lettera dell'alfabeto
    carattereIntero = valoreCarattereMinimo + incremento; // Incrementa dalla lettera A
    carattereSostituitoChar = carattereIntero; // Carattere corrispondente

    soggetto[i].nome[k] = carattereSostituitoChar; // Salva il carattere trovato nella stringa
}

void deCriptaCarattereCognome(recordSoggetto soggetto[], int carattereIntero,int valoreCarattereMinimo,int valoreCarattereMassimo, int i, int k){
    int incremento;
    char carattereSostituitoChar;

    incremento = valoreCarattereMassimo - carattereIntero; // Valuta la distanza dall'ultima lettera dell'alfabeto
    carattereIntero = valoreCarattereMinimo + incremento; // Incrementa dalla lettera A
    carattereSostituitoChar = carattereIntero; // Carattere corrispondente

    soggetto[i].cognome[k] = carattereSostituitoChar; // Salva il carattere trovato nella stringa
}
void deCriptaNome(recordSoggetto soggetto[], int i){
    int k, carattereInt; // Variabili
    char carattereLettoChar, carattereSostituitoChar; // Variabili

    k=0;
    while (soggetto[i].nome[k]!='\0'){ // Fino a che non termina la stringa
        carattereLettoChar=soggetto[i].nome[k]; // Salva il carattere in una variabile
        carattereInt=carattereLettoChar; // Trova il corrispondente valore intero
        if (carattereInt>='A' && carattereInt<='Z'){ // Se la lettera è maiuscola
            deCriptaCarattereNome(soggetto, carattereInt, 'A', 'Z',  i, k);
        }
        if (carattereInt>='a' && carattereInt<='z') { // Se la lettera è minuscola
            deCriptaCarattereNome(soggetto, carattereInt, 'a', 'z',  i, k);
        }
        if (carattereLettoChar==' '){ // Se il carattere è uno spazio
            soggetto[i].nome[k]=carattereLettoChar; // Mantieni lo spazio
        }
        k++; // passa al carattere successivo
    }
}

void deCriptaCognome(recordSoggetto soggetto[], int i){
    int k, carattereInt;
    char carattereLettoChar, carattereSostituitoChar;

    k=0;
    while (soggetto[i].cognome[k]!='\0'){
        carattereLettoChar=soggetto[i].cognome[k];
        carattereInt=carattereLettoChar;

        if (carattereInt>='A' && carattereInt<='Z'){
            deCriptaCarattereCognome(soggetto, carattereInt, 'A','Z', i, k);
        }
        if (carattereInt>='a' && carattereInt<='z') {
            deCriptaCarattereCognome(soggetto, carattereInt, 'a', 'z', i, k);
        }
        if (carattereLettoChar==' '){
            soggetto[i].cognome[k]=carattereLettoChar;
        }
        k++;
    }
}
