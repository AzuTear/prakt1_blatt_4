//
// Created by Bao Vo minh on 22.01.20.
//

#include "db.h"
#include "analyse.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void initizalize_db(){

    patient Patient1;
    strcpy(Patient1.Vorname, "Peter");
    strcpy(Patient1.Nachname, "Hans");
    Patient1.Alter = 22;
    Patient1.Geschlecht = 'm';
    Patient1.Gewicht = 60;
    Patient1.Koerpergroesse = 170;
    strcpy(Patient1.letzte_Lymphknotenuntersuchung, "03.03.2000");

    patient Patient2;
    strcpy(Patient2.Vorname,"Cathrine");
    strcpy(Patient2.Nachname,"Weber");
    Patient2.Alter = 24;
    Patient2.Geschlecht = 'w';
    Patient2.Gewicht = 45;
    Patient2.Koerpergroesse = 166;
    Patient2.istSchwanger = 1;
    strcpy(Patient2.letzte_Brustuntersuchung, "11.12.2019");

    patient Patient3;
    strcpy(Patient3.Vorname,"Michael");
    strcpy(Patient3.Nachname,"Wittmann");
    Patient3.Alter = 26;
    Patient3.Geschlecht = 'm';
    Patient3.Gewicht = 90;
    Patient3.Koerpergroesse = 166;
    strcpy(Patient3.letzte_Lymphknotenuntersuchung, "unbekannt");

    patient Patient4;
    strcpy(Patient4.Vorname,"Hilde");
    strcpy(Patient4.Nachname,"Maier");
    Patient4.Alter = 72;
    Patient4.Geschlecht = 'w';
    Patient4.Gewicht = 60;
    Patient4.Koerpergroesse = 170;
    Patient4.istSchwanger = 0;
    strcpy(Patient4.letzte_Brustuntersuchung, "unbekannt");

    patient Patient5;
    strcpy(Patient5.Vorname,"Herbert");
    strcpy(Patient5.Nachname,"Mueller");
    Patient5.Alter = 43;
    Patient5.Geschlecht = 'm';
    Patient5.Gewicht = 42;
    Patient5.Koerpergroesse = 180;
    strcpy(Patient5.letzte_Lymphknotenuntersuchung, "12.04.2018");

    patienten_db[0] = Patient1;
    patienten_db[1] = Patient2;
    patienten_db[2] = Patient3;
    patienten_db[3] = Patient4;
    patienten_db[4] = Patient5;

}