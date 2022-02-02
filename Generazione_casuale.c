
#include "Generazione_casuale.h"

// GENERAZIONE CASUALE

/* Restituisce un soggetto casuale c'è bisogno di dichiarare la srand nel main */
recordSoggetto generaRecord(){
    int dimensioneVettore, i;
    i=0;
    dimensioneVettore=1;
    recordSoggetto soggetto[dimensioneVettore];
    generaNomeCasuale(soggetto, i); // Genera un nome e lo inserisce come stringa nella struttura
    generaCognomeCasuale(soggetto, i); // Genera un cognome e lo inserisce come stringa nella struttura
    generaAltezzaCasuale(soggetto, i, MIN_ALTEZZA, MAX_ALTEZZA); // Genera un valore intero nel range scelto e lo inserisce nella struttura corrispondente
    generaPesoCasuale(soggetto, i, MIN_PESO, MAX_PESO, ORDINI_GRANDEZZA_PESO_CASUALE);  // Genera un valore float nel range scelto e lo inserisce nella struttura corrispondente
    generaColoreOcchiCasuale(soggetto, i, DIM_MAX_COLORE_OCCHI, VALORE_MIN_MAIUSCOLA_ASCII, VALORE_MAX_MAIUSCOLA_ASCII, VALORE_MIN_MINUSCOLA_ASCII, VALORE_MAX_MINUSCOLA_ASCII, CIFRA_MIN, CIFRA_MAX); // Genera un vettore di sei caratteri
    generaColoreCapelliCasuale(soggetto, i, DIM_MAX_COLORE_OCCHI, VALORE_MIN_MAIUSCOLA_ASCII,VALORE_MAX_MAIUSCOLA_ASCII, VALORE_MIN_MINUSCOLA_ASCII, VALORE_MAX_MINUSCOLA_ASCII, CIFRA_MIN, CIFRA_MAX); // Genera un vettore di sei caratteri
    generaLunghezzaCapelliCasuale(soggetto, i); // Inserisce il valore corrispondente
    generaBarbaCasuale(soggetto, i, MIN_VALORE_BARBA, MAX_VALORE_BARBA); // Inserisce il valore booleano corrispondente
    generaImprontadigitaleCasuale(soggetto, i,DIM_MAX_IMPRONTA_DIGITALE,VALORE_MIN_MAIUSCOLA_ASCII,VALORE_MAX_MAIUSCOLA_ASCII, VALORE_MIN_MINUSCOLA_ASCII, VALORE_MAX_MINUSCOLA_ASCII, CIFRA_MIN, CIFRA_MAX); // Genera un vettore di sedici caratteri
    generaResidenzaCasuale(soggetto, i); // Inserisce una stringa nel campo corrispondente
    generaGPSCasuale(soggetto, i); // Genera le coordinate gps, double
    generaStatoSoggettoCasuale(soggetto, i); // Seleziona un valore presente nell'enumerazione corrispondente
    return soggetto[0];
}

/* GENERA TUTTO IL VETTORE CASUALE */

/* Genera un numero di record nella struttura in ingresso pari al valore "grandezzaVettore */
void generaDati(recordSoggetto soggetto[],int grandezzaVettore){
    int j; // Contatore
    for(j=0; j<grandezzaVettore; j++) { // Genero i record casuali e li stampo
        soggetto[j]=generaRecord(); // Genera il record j-esimo
    }
}


/* Seleziona un nome salvato in un vettore di stringhe */
void generaNomeCasuale(recordSoggetto soggetto[], int i){
    int j;
    /* Genero un vettore di stringhe con tutti i nomi che si possono selezionare */
    char nome[MAX_NOME_CASUALE][DIM_MAX_NOME]={"Agostino",
                                               "Alberto",
                                               "Alessandro",
                                               "Alessio",
                                               "Alfio",
                                               "Alfonso",
                                               "Amedeo",
                                               "Angelo",
                                               "Antonio",
                                               "Aurelio",
                                               "Baldassarre",
                                               "Baldo",
                                               "Bastiano",
                                               "Bartolo",
                                               "Bartolomeo",
                                               "Benito",
                                               "Bernardo",
                                               "Biagio",
                                               "Boris",
                                               "Bruno",
                                               "Calogero",
                                               "Carlo",
                                               "Carmelo",
                                               "Casimiro",
                                               "Cesare",
                                               "Cirillo",
                                               "Ciro",
                                               "Claudio",
                                               "Corrado",
                                               "Cosimo",
                                               "Daniele",
                                               "Danilo",
                                               "Dante",
                                               "Dario",
                                               "Davide",
                                               "Diego",
                                               "Dino",
                                               "Dionisio",
                                               "Domenico",
                                               "Duccio",
                                               "Egidio",
                                               "Elio",
                                               "Eliseo",
                                               "Emanuele",
                                               "Emiliano",
                                               "Emilio",
                                               "Ennio",
                                               "Enrico",
                                               "Enzo",
                                               "Ezio",
                                               "Angela",
                                               "Ada",
                                               "Adelaide",
                                               "Anna",
                                               "Antonella",
                                               "Anita",
                                               "Alice",
                                               "Amelia",
                                               "Anna",
                                               "Agnese",
                                               "Alessandra",
                                               "Alessia",
                                               "Aurora",
                                               "Angelica",
                                               "Barbara",
                                               "Betty",
                                               "Beatrice",
                                               "Calogera",
                                               "Claudia",
                                               "Carlotta",
                                               "Carmen",
                                               "Carola",
                                               "Caterina",
                                               "Cinzia",
                                               "Clara",
                                               "Clarissa",
                                               "Clelia",
                                               "Concetta",
                                               "Corinna",
                                               "Cristina"};
    j=MIN_NOME_CASUALE+rand()%(MAX_NOME_CASUALE-MIN_NOME_CASUALE); // Sceglie un valore a caso tra i nomi definiti nel vettore
    strcpy(soggetto[i].nome,nome[j]); // Salva la stringa scelta nel campo corrispondente
}

/* Seleziona un nome salvato in un vettore di stringhe */
void generaCognomeCasuale(recordSoggetto soggetto[], int i){
    int j;
    /* Genero un vettore di stringhe con tutti i nomi che si possono selezionare */
    char cognome[MAX_COGNOME_CASUALE][DIM_MAX_COGNOME]={"Melis",
                                                        "Piras",
                                                        "Sanna",
                                                        "Serra",
                                                        "Meloni",
                                                        "Lai",
                                                        "Murgia",
                                                        "Pinna",
                                                        "Orru",
                                                        "Loi",
                                                        "Sanna",
                                                        "Piras",
                                                        "Melis",
                                                        "Murgia",
                                                        "Pinna",
                                                        "Serra",
                                                        "Madeddu",
                                                        "Atzeni",
                                                        "Garau",
                                                        "Urru",
                                                        "Concas",
                                                        "Floris",
                                                        "Ibba",
                                                        "Miscali",
                                                        "Flore",
                                                        "Frau",
                                                        "Fais",
                                                        "Pinna",
                                                        "Melis",
                                                        "Piras",
                                                        "Sanna",
                                                        "Serra",
                                                        "Manca",
                                                        "Pintus",
                                                        "Diana",
                                                        "Floris",
                                                        "Lai"};

    j=MIN_COGNOME_CASUALE+rand()%(MAX_COGNOME_CASUALE-MIN_COGNOME_CASUALE); // Sceglie un valore a caso tra i nomi definiti nel vettore
    strcpy(soggetto[i].cognome,cognome[j]); // Salva la stringa scelta nel campo corrispondente
};

/* Seleziona un valore di altezza tra il massimo e minimo valore possibile */
void generaAltezzaCasuale(recordSoggetto soggetto[], int i, int altezzaMinima, int altezzaMassima){
    int altezza;
    /* Seleziona un valore di altezza tra il massimo e minimo valore possibile */
    altezza=altezzaMinima+rand()%(altezzaMassima-altezzaMinima+1);
    soggetto[i].altezza=altezza; // Salva il valore random nella struttura corrispondente
}

/* Seleziona un valore del peso tra il massimo e minimo valore possibile */
void generaPesoCasuale(recordSoggetto soggetto[], int i, int pesoMinimo, int pesoMassimo, int ordineDiGrandezza){
    int pesoInt;
    float pesoFloat;
    /* Seleziono un valore del peso, moltiplico il valore intero per un valore che mi indichi
     * l'ordine di grandezza voluto dato nelle macro */

    pesoInt=(pesoMinimo+rand()%(pesoMassimo*ordineDiGrandezza-pesoMinimo+1));
    pesoFloat=pesoInt/(float) ordineDiGrandezza; // Converte il valore intero in float
    soggetto[i].peso=pesoFloat; // Salva il valore corrispondente
}

/* Genera un vettore di caratteri pari a "dimensioneVettore" */
void generaColoreOcchiCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove){

    char inserimentoCarattere, inserimentoCifra; // Definisco le variabili
    int  k; // Contatore
    for (k=0; k<dimensioneVettore; k++){ // fino a che non si hanno 6 caratteri all'interno del vettore
        int multiploTre, casi;
        /* Siccome sono presenti tre casi distinti, lettere maiuscole, minuscole e cifre */

        multiploTre=MIN_MULTIPLO_TRE+rand()%(MAX_MULTIPLO_TRE-MIN_MULTIPLO_TRE+1); // crea un multiplo di 3
        casi=multiploTre%3; // Calcola il modulo 3 del numero randome generato
        switch(casi){
            /* Inserisce una lettera maiuscola nel vettore */
            case (0):
                /* Genera il valore ASCII corrispondente al carattere */
                inserimentoCarattere=aMaiuiscola+rand()%(zMaiuiscola-aMaiuiscola+1);
                soggetto[i].coloreOcchi[k]=inserimentoCarattere;
                break;
                /* Inserisce una lettera mminuscola nel vettore */
            case (1):
                /* Genera il valore ASCII corrispondente al carattere */
                inserimentoCarattere=aMinuiscola+rand()%(zMinuiscola-aMinuiscola+1);
                soggetto[i].coloreOcchi[k]=inserimentoCarattere;
                break;
                /* Inserisce una cifra nel vettore */
            case (2):
                /* Genera il valore ASCII corrispondente alla cifra */
                inserimentoCifra=carattereZero+rand()%(carattereNove-carattereZero+1);
                soggetto[i].coloreOcchi[k]=inserimentoCifra;
                break;
        }

    }
}

/* Genera un vettore di sei caratteri */
void generaColoreCapelliCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove){
    char inserimentoCarattere, inserimentoCifra; // Definisco le variabili
    int  k; // Contatore
    for (k=0; k<dimensioneVettore; k++){ // fino a che non si hanno 6 caratteri all'interno del vettore
        int multiploTre, casi;
        /* Siccome sono presenti tre casi distinti, lettere maiuscole, minuscole e cifre */
        multiploTre=MIN_MULTIPLO_TRE+rand()%(MAX_MULTIPLO_TRE-MIN_MULTIPLO_TRE+1); // crea un multiplo di 3
        casi=multiploTre%3; // Calcola il modulo 3 del numero randome generato
        switch(casi){
            /* Inserisce una lettera maiuscola nel vettore */
            case (0):
                /* Genera il valore ASCII corrispondente al carattere */
                inserimentoCarattere=aMaiuiscola+rand()%(zMaiuiscola-aMaiuiscola+1);
                soggetto[i].coloreCapelli[k]=inserimentoCarattere;
                break;
                /* Inserisce una lettera mminuscola nel vettore */
            case (1):
                /* Inserisce una lettera maiuscola nel vettore */
                inserimentoCarattere=aMinuiscola+rand()%(zMinuiscola-aMinuiscola+1);
                soggetto[i].coloreCapelli[k]=inserimentoCarattere;
                break;
                /* Inserisce una cifra nel vettore */
            case (2):
                /* Genera il valore ASCII corrispondente alla cifra */
                inserimentoCifra=carattereZero+rand()%(carattereNove-carattereZero+1);
                soggetto[i].coloreCapelli[k]=inserimentoCifra;
                break;
        }

    }
}

/* Seleziona un valore casuale tra i campi dell'enumerazioen */
void generaLunghezzaCapelliCasuale(recordSoggetto soggetto[], int i){
    int scelta;
    scelta=CORTI+rand()%(ALTRO-CORTI+1); // Valore casuale tre il valore dell'enumerazione
    soggetto[i].capelli=scelta;
}

/* Genera un valore casuale tra zero e uno */
void generaBarbaCasuale(recordSoggetto soggetto[], int i, int minimo, int massimo){
    int casuale;
    casuale=minimo+rand()%(massimo-minimo+1); // Genera un valore compreso tra 0 e 1
    soggetto[i].lunghezzaBarba=casuale%2; // Modulo due del valore generato
}

/* Vettore casuale di sedici caratteri */
void generaImprontadigitaleCasuale(recordSoggetto soggetto[], int i, int dimensioneVettore, int aMaiuiscola, int zMaiuiscola, int aMinuiscola, int zMinuiscola, int carattereZero, int carattereNove){
    char inserimentoCarattere, inserimentoCifra; // Definisco le variabili
    int  k; // Contatore
    for (k=0; k<dimensioneVettore; k++){ // fino a che non si hanno 16 caratteri all'interno del vettore
        int multiploTre, casi;
        /* Siccome sono presenti tre casi distinti, lettere maiuscole, minuscole e cifre */
        multiploTre=MIN_MULTIPLO_TRE+rand()%(MAX_MULTIPLO_TRE-MIN_MULTIPLO_TRE+1); // crea un multiplo di 3
        casi=multiploTre%3; // Calcola il modulo 3 del numero randome generato
        switch(casi){
            /* Inserisce una lettera maiuscola nel vettore */
            case (0):
                /* Genera il valore ASCII corrispondente al carattere */
                inserimentoCarattere=aMaiuiscola+rand()%(zMaiuiscola-aMaiuiscola+1);
                soggetto[i].improntaDigitale[k]=inserimentoCarattere;
                break;
                /* Inserisce una lettera mminuscola nel vettore */
            case (1):
                /* Inserisce una lettera maiuscola nel vettore */
                inserimentoCarattere=aMinuiscola+rand()%(zMinuiscola-aMinuiscola+1);
                soggetto[i].improntaDigitale[k]=inserimentoCarattere;
                break;
                /* Inserisce una cifra nel vettore */
            case (2):
                /* Genera il valore ASCII corrispondente alla cifra */
                inserimentoCifra=carattereZero+rand()%(carattereNove-carattereZero+1);
                soggetto[i].improntaDigitale[k]=inserimentoCifra;
                break;
        }

    }
}

/* Seleziona una residenza salvata in un vettore di stringhe */
void generaResidenzaCasuale(recordSoggetto soggetto[], int i){
    int j;
    /* Genero un vettore di stringhe con tutti i nomi che si possono selezionare */
    char residenza[MAX_RESIDENZA_CASUALE][DIM_MAX_RESIDENZA]={"Roma",
                                                              "Milano",
                                                              "Napoli",
                                                              "Torino",
                                                              "Palermo",
                                                              "Genova",
                                                              "Bologna",
                                                              "Firenze",
                                                              "Bari",
                                                              "Catania",
                                                              "Venezia",
                                                              "Verona",
                                                              "Messina",
                                                              "Padova",
                                                              "Trieste",
                                                              "Taranto",
                                                              "Brescia",
                                                              "Parma",
                                                              "Prato",
                                                              "Modena",
                                                              "Reggio_Calabria",
                                                              "Reggio_Emilia",
                                                              "Perugia",
                                                              "Ravenna",
                                                              "Livorno",
                                                              "Cagliari",
                                                              "Foggia",
                                                              "Rimini",
                                                              "Salerno",
                                                              "Ferrara",
                                                              "Sassari",
                                                              "Latina",
                                                              "Giugliano in Campania",
                                                              "Monza",
                                                              "Siracusa",
                                                              "Pescara",
                                                              "Bergamo",
                                                              "Forli",
                                                              "Trento",
                                                              "Vicenza",
                                                              "Terni",
                                                              "Bolzano",
                                                              "Novara",
                                                              "Piacenza",
                                                              "Ancona",
                                                              "Andria",
                                                              "Arezzo",
                                                              "Udine",
                                                              "Cesena",
                                                              "Lecce"}; // vettore di stringhe delle residenze
    j=MIN_RESIDENZA_CASUALE+rand()%(MAX_RESIDENZA_CASUALE-MIN_RESIDENZA_CASUALE); // Sceglie un valore a caso tra i nomi definiti nel vettore
    strcpy(soggetto[i].residenza,residenza[j]); // Salva la stringa scelta nel campo corrispondente
}

/* Genera due valori double da inserire in longitudine e latitudine */
void generaGPSCasuale(recordSoggetto soggetto[], int i){
    int latitudineInt, longitudineInt; // definisco due variabili

    /* Genera due numeri casuali poi moltiplicati per l'ordine di grandezza che voglio */
    latitudineInt = (MIN_LATITUDINE + rand() % (MAX_LATITUDINE * ORDINE_GRANDEZZA_LAT_LONG - MIN_LATITUDINE + 1));
    longitudineInt = (MIN_LONGITUDINE + rand() % (MAX_LONGITUDINE * ORDINE_GRANDEZZA_LAT_LONG - MIN_LONGITUDINE + 1));

    /* Converte l'intero in un valore double e lo salva nel campo corrispondente */
    soggetto[i].posizione.latitudine = latitudineInt / (double) ORDINE_GRANDEZZA_LAT_LONG;
    soggetto[i].posizione.longitudine = longitudineInt / (double) ORDINE_GRANDEZZA_LAT_LONG;
}

/* Genera un valore casuale dell'enumerazione */
void generaStatoSoggettoCasuale(recordSoggetto soggetto[], int i){
    int scelta;
    scelta=LIBERO+rand()%(EVASO-LIBERO+1); // numero casuale generato relativo all'anumerazione
    soggetto[i].stato=scelta;
}


