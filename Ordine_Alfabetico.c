
#include "Ordine_Alfabetico.h"
#include "Elimina_criminale.h"

/* ORDINE ALFABETICO*/


/* La prima struttura che do in ingressso, la seconda è una stringa vuota che creo esternamente per riempirla di elementi ordinati */
void ordinaAlfabeticamente(recordSoggetto stringhe[], recordSoggetto stringheOrdinata[], int dimensioneVettore){
    int numeroElementi, posizione, h, g;

    recordSoggetto stringaSupporto[dimensioneVettore]; // Tefinisco un vettore
    numeroElementi=dimensioneVettore;
    // Copia la stringa che si vuole ordinare
    for (g=0; g<dimensioneVettore; g++){
        stringaSupporto[g]=stringhe[g];
    }

    h=0;
    while (numeroElementi>0){
        posizione=posizionePrimoElementoAlfabetico(stringaSupporto, numeroElementi); // Trova la posizione del primo elemento
        stringheOrdinata[h]=stringaSupporto[posizione]; // Salva nel vettore ordinato
        eliminaCriminale(stringaSupporto, posizione, numeroElementi); // Elimina l'elemento prelevato
        numeroElementi--;
        h++; // Passo alla cella successiva
    }
}




/* Trova la posizione dell'elemento da mettere prima in ordine alfabetico, ha bisogno di una stringa che è la copia della principale */
int posizionePrimoElementoAlfabetico(recordSoggetto stringaSupporto[], int numeroElementi){

    int posizione, i, valore_min, valore_nuovo, valore_nuovoNome, valore_minNome, valoreCognome, k, valore;
    char carattere;
    _Bool flagNome;

    posizione=0;
    i=0; // Prendo il primo elemento del vettore
    valore_min=(int)stringaSupporto[i].cognome[0]; // Salva il valore della tabella ASCII nella variabile
    for (i=1; i<numeroElementi; i++) { // Dal secondo elemento del vettore

        flagNome = false;
        flagNome = confrontaCognome(stringaSupporto, posizione, i); // Valuta se i cognomi sono uguali o diversi

        if (flagNome == true) { // Se sono diversi
            k = 0; // Prende la prima lettera della stringa
            valore_nuovo = (int)stringaSupporto[i].cognome[k]; // Salva il valore intero dell' elemento
            if (valore_nuovo < valore_min) { // Se il nuovo carattere viene prime
                valore = valore_nuovo; // il nuovo carattere diventa il valore minimo
                valore_min = valore;
                posizione = i; // La posizione dell'elemento primo è nella cella considerata
            } else {
                if (valore_nuovo == valore_min) { // Se i caratteri presi sono uguali
                    /* Se i caratteri sono uguali si passa al carattere successivo e si confrontano */
                    do {
                        k++; // Passa al carattere successivo
                        carattere = stringaSupporto[i].cognome[k]; // Salvo il valore numerico della nuova stringa
                        valore_nuovo = (int)carattere;
                        valore = (int)stringaSupporto[posizione].cognome[k]; // Salvo il valore numerico della stringa che sto confrontando
                    } while (valore_nuovo == valore); // Passa ai caratteri siccessivi in caso siano uguali
                    if (valore_nuovo < valore) { // Se il nuovo carattere viene prima del carattere principale
                        posizione = i; // La posizione del carattere da prendere per primo risulta
                        valore_min = (int)stringaSupporto[posizione].cognome[0];
                    }
                }
            }
        } else { // Se i cognomi risultano uguali
            k = 0; // Prendo il primo carattere
            /* Valuta il nome */
            valore_minNome = stringaSupporto[posizione].nome[k]; // Prende il primo carattere della stringa nome salvata per prima
            valore_nuovoNome = stringaSupporto[i].nome[k]; // Prende il primo carattere della stringa nome da confrontare

            if (valore_nuovoNome < valore_minNome) { // se il nuovo carattere viene prima
                valoreCognome = valore_nuovoNome; // il nuovo valore minimo è la nuova stringa
                valore_minNome = valoreCognome;
                posizione = i; // La posizione del valore minimo è quella della cella che sto valutando
            }else{
                k=0; // Azzera il contatore
                if (valore_nuovoNome == valore_minNome) { // Se i caratteri presi sono uguali
                    do {
                        k++; // Passa al carattere successivo
                        carattere = stringaSupporto[i].nome[k]; // Riassegna i caratteri da confrontare
                        valore_nuovo =(int) carattere;
                        valore_nuovoNome = stringaSupporto[posizione].nome[k];
                    } while (valore_nuovoNome == valore_nuovo); // Passa al carattere successivo fino a che sono uguali i caratteri
                    if (valore_nuovo < valore_nuovoNome ) { // se il carattere nuovo viene prima
                        posizione = i; // La posizione del carattere precedente viene prima
                        valore_minNome = stringaSupporto[posizione].nome[0];
                    }
                }
            }
        }
    }
    return posizione;
}
