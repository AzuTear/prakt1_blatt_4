//
// Created by Bao Vo minh on 22.01.20.
//

#include "analyse.h"
#include "db.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


float compute_bmi(patient p){
    float bmi;
    bmi = p.Gewicht / ((p.Koerpergroesse / 100) * (p.Koerpergroesse / 100));
    return bmi;
}

// bei Ausgabe mehrere Felder for-Schleife
void identify_risks() {
    for(int i = 0; i <= 100; i++){
        if(compute_bmi(patienten_db[i]) < 20 || compute_bmi(patienten_db[i]) > 25){
            printf("[%d] %s %s\n", i, patienten_db[i].Vorname, patienten_db[i].Nachname);
        }
    }
}
// Aufgabe 4. e
float compute_bmip(patient *pointer) {
    float bmi;
    bmi = (*pointer).Gewicht / (((*pointer).Koerpergroesse / 100) * ((*pointer).Koerpergroesse / 100));
    return bmi;
}
// Aufgabe 4. f
void identify_risk_group(patient *patients, int size){
    for(int i = size; i < 100; i++){
        if(compute_bmip(patients + i) < 20 || compute_bmip(patients + i) > 25){
            printf("[%d] %s %s\n", i, (patients[i]).Vorname, (patients[i]).Nachname);
        }
    }
}

void identify_pregnant(){
    for(int i = 0; i < 100; i++){
        if(patienten_db[i].Geschlecht == 'w' && patienten_db[i].istSchwanger == 1){
            printf("[%d] %s %s\n", i, patienten_db[i].Vorname, patienten_db[i].Nachname);
        }
    }
}

void identify_missing_examination(){
    for(int i = 0; i < 100; i++){
        if(!strcmp(patienten_db[i].letzte_Lymphknotenuntersuchung, "unbekannt") || !strcmp(patienten_db[i].letzte_Brustuntersuchung, "unbekannt")){
            printf("[%d] %s %s\n", i, patienten_db[i].Vorname, patienten_db[i].Nachname);
        }
    }
}

void searchName(char name[]){
    for(int i = 0; i < 100; i++) {
        if(!strcmp(patienten_db[i].Nachname, name)){
            printf("Vorname: %s\n", patienten_db[i].Vorname);
            printf("Nachname: %s\n", patienten_db[i].Nachname);
            printf("Alter: %d\n", patienten_db[i].Alter);
            printf("Koerpergroesse: %d\n", patienten_db[i].Koerpergroesse);
            printf("Gewicht: %d\n", patienten_db[i].Gewicht);
            printf("Geschlecht: %d\n", patienten_db[i].Geschlecht);
            if(patienten_db[i].Geschlecht == 'm'){
                printf("Letzte Lympthknotenuntersuchung: %s\n\n", patienten_db[i].letzte_Lymphknotenuntersuchung);
            }
            if(patienten_db[i].Geschlecht == 'w'){
                printf("Letzte Brustuntersuchung: %s\n", patienten_db[i].letzte_Brustuntersuchung);
                printf("Schwanger: %d\n\n", patienten_db[i].istSchwanger);
            }
        }
    }

}