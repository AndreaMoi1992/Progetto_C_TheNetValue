
#include "Stampa.h"

/* Stampa la cella i-esima del vettore struttura, i=0 == Prima cella */
void stampaRecord(recordSoggetto soggetto[],int i){

    stampaNome(soggetto, i); // Stampa nome salvato nella cella i-esima
    stampaCognome(soggetto, i); // Stampa cognome salvato nella cella i-esima
    stampaAltezza(soggetto, i); // Stampa altezza salvata nella cella i-esima
    stampaPeso(soggetto, i); // Stampa peso salvato nella cella i-esima
    stampaColoreOcchi(soggetto, i,DIM_MAX_COLORE_OCCHI); // Stampa il vettore colore occhi della cella i-esima
    stampaColoreCapelli(soggetto, i, DIM_MAX_COLORE_CAPELLI); // Stampa il vettore colore occhi della cella i-esima
    stampaTipoCapelli(soggetto[i].capelli); //  stampa il tipo di capelli della cella i-esima
    stampaBarba(soggetto, i); // Stampa la barba della cella i-esima
    stampaImprontaDigitale(soggetto, i, DIM_MAX_IMPRONTA_DIGITALE); // Stampa il vettore impronta digitale della cella i-esima
    stampaResidenza(soggetto, i); // Stampa residenza della cella i-esima
    stampaLatitudineELongitudine(soggetto, i); // Stampa coordinate GPS della cella i-esima
    stampaStatoSoggetto(soggetto[i].stato); // Stampa stato soggetto della cella i-esima

    printf("\n");

}
/* Stampa il nome salvato nella cella i-esima del vettore struttura inserita */
void stampaNome(recordSoggetto soggetto[],int i){
    printf("\nNome: %s",soggetto[i].nome); // Stampa nome soggetto[i]
}
/* Stampa il cognome salvato nella cella i-esima del vettore struttura inserita */
void stampaCognome(recordSoggetto soggetto[],int i){
    printf("\nNome: %s",soggetto[i].cognome); // Stampa nome soggetto[i]
}
/* Stampa l'altezza salvata nella cella i-esima del vettore struttura inserita */
void stampaAltezza(recordSoggetto soggetto[],int i){
    printf("\nAltezza: %d cm",soggetto[i].altezza); // Stampa altezza soggetto[i] [cm]
}
/* Stampa il peso salvato nella cella i-esima del vettore struttura inserita */
void stampaPeso(recordSoggetto soggetto[],int i){
    printf("\nPeso: %.2f kg",soggetto[i].peso); // Stampa peso soggetto[i] [kg]
}
/* Stampa il colore occhi salvato nella cella i-esima del vettore struttura inserita */
void stampaColoreOcchi(recordSoggetto soggetto[],int i, int dimensioneVettore){
    int k;
    printf("\nColore occhi: %c",soggetto[i].coloreOcchi[0]); // Stampa primo carattere del vettore
    for (k=1; k<dimensioneVettore; k++){  // Attraverso un ciclo stampo tutti gli altri caratteri
        printf(" %c",soggetto[i].coloreOcchi[k]);
    }
}
/* Stampa il colore capelli salvato nella cella i-esima del vettore struttura inserita */
void stampaColoreCapelli(recordSoggetto soggetto[],int i, int dimensioneVettore){
    int k;
    printf("\nColore capelli: %c",soggetto[i].coloreCapelli[0]); // Stampa primo carattere del vettore
    for (k=1; k<dimensioneVettore; k++){ // Attraverso un ciclo stampo tutti gli altri caratteri
        printf(" %c",soggetto[i].coloreCapelli[k]);
    }
}
/* In base alla scelta effettuata, al valore scelto per l'enumerazione stampa il tipo di capelli del soggetto */
void stampaTipoCapelli(int Scelta){
    printf("\nTipo capelli: ");
    switch(Scelta){
        case (CORTI):
            printf("Corti");
            break;
        case (MEDI):
            printf("Medi");
            break;
        case (LUNGHI):
            printf("Lunghi");
            break;
        case (ALTRO):
            printf("Altro");
            break;
    }
}
/* Stampa la presenza o meno di barba salvato nella cella i-esima del vettore struttura inserita */
void stampaBarba(recordSoggetto soggetto[],int i){
    printf("\nBarba: ");
    switch(soggetto[i].lunghezzaBarba){ // Stampa Della barba attraverso variabili booleane
        case (true):
            printf("Si");
            break;
        case (false):
            printf("No");
            break;
    }
}
/* Stampa il vettore impronta digitale salvato nella cella i-esima del vettore struttura inserita */
void stampaImprontaDigitale(recordSoggetto soggetto[],int i, int dimensioneVettore){
    int k;
    printf("\nCodice impronta digitale: %c",soggetto[i].improntaDigitale[0]); // Stampa il vettore impronta digitale
    for (k=1; k<dimensioneVettore; k++){ // Stampa singolarmente ogni elemento del vettore
        printf(" %c",soggetto[i].improntaDigitale[k]);
    }
}
/* Stampa l'intero elenco, fino al valore voluto nella variabile numeroElementiElenco */
void stampaResidenza(recordSoggetto soggetto[],int i){
    printf("\nResidenza: %s",soggetto[i].residenza); // Stampa Stringa residenza
}
/* Stampa le coordinata GPS salvate nella cella i-esima del vettore struttura inserita */
void stampaLatitudineELongitudine(recordSoggetto soggetto[],int i){
    printf("\nLatitudine: %lf",soggetto[i].posizione.latitudine); // Stampa latitudine
    printf("\nLongitudine: %lf",soggetto[i].posizione.longitudine); // Stampa longitudine
}
/* In base alla scelta effettuata, al valore scelto per l'enumerazione stampa lo stato del soggetto */
void stampaStatoSoggetto(int Scelta){
    printf("\nStato soggetto: ");
    switch(Scelta){
        case (LIBERO):
            printf("Libero");
            break;
        case (RICERCATO):
            printf("Ricercato");
            break;
        case (IN_ARRESTO):
            printf("In arresto");
            break;
        case (EVASO):
            printf("Evaso");
            break;
    }
}
/* Stampa tutti gli elementi presenti nel vettore in ingresso */
void stampaElencoCriminali(recordSoggetto soggetto[],int numeroElementiElenco){
    int i; // Cella i-esima
    for (i=0; i<numeroElementiElenco; i++){ // Stampa tutto il vettore passato in ingresso
        stampaRecord(soggetto, i);
    }
}
/* chiede che elemento del vettore in ingresso si voglia stampare */
int cheElementoStampa(int elementi){
    printf("\nGli elementi inseriti sono: %d",elementi); // Stampa quanti elementi ci sono nel vettore
    printf("\nQuale elemento vuoi stampare?"); // chiede che elemento si vuole stampare
    printf("\nSeleziona:");
    scanf("%d",&elementi); // Salva l'elemento inserito
    return elementi;
}
