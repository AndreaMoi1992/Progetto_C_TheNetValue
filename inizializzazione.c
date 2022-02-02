
#include "inizializzazione.h"

/* Permette la pulitura del buffer una volta che è avvenuto un inserimento */
void svuotaBuffer(){
    char c;
    do{
        c=getchar();
    }while(c != '\n');
}


/* Se la risposta non corrisponde al range che voglio restituisce true */
_Bool valutaInserimento(char risposta){
    if (risposta == 's' || risposta == 'S'|| risposta == 'n' || risposta == 'N') { // Inserimento lettera maiuscola o miuscola
        return false; // Inserimento corretto, restituisce false
    }
    return true; // Inserimento sbagliato, restituisce true
}

/* Controlla l'inserimento, se non si digita s o n richiede l'inserimento */
char controllaInserimentoRecord(char scelta){
    _Bool flagScelta;
    flagScelta=valutaInserimento(scelta);
    if (flagScelta==true){
        do{
            flagScelta=false;
            printf("\nInserimento non corretto (S/N) oppure (s/n)");
            printf("\nVuoi inserire un altro record? (s/n) :");
            scanf("%c",&scelta);
            svuotaBuffer();
            flagScelta=valutaInserimento(scelta);
        }while(flagScelta==true);
    }
    return scelta;
}


/* Chiede se dopo inserisci record si vuole inserire un nuovo record */
_Bool nuovoInserimento(){
    char scelta;

    printf("\nVuoi inserire un altro record? (s/n) :");
    scanf("%c",&scelta);
    svuotaBuffer();

    scelta=controllaInserimentoRecord(scelta); // Controlla l'inserimento

    if (scelta=='s' || scelta=='S'){
        return true;
    }
    return false;
}