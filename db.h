//
// Created by Bao Vo minh on 22.01.20.
//

#ifndef PRAK_PROG_1_A4_DB_H
#define PRAK_PROG_1_A4_DB_H

typedef struct {
    char Nachname[20];
    char Vorname[20];
    int Alter;
    char Geschlecht;
    int Gewicht;
    int Koerpergroesse;
    union {
        char letzte_Lymphknotenuntersuchung[11];
        struct {
            char letzte_Brustuntersuchung[11];
            int istSchwanger;
        };
    };

}patient;

patient patienten_db[100];

void initizalize_db();

#endif //PRAK_PROG_1_A4_DB_H
