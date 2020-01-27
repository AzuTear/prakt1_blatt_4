#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analyse.h"


int eingabe;
int eingabe2;
int eingabe3;

char a[20];


int main() {
    //setvbuf(stdout, NULL, _IONBF,0);
    initizalize_db();

    printf("1. Compute BMI\n");
    printf("2. Identify Risks\n");
    printf("3. Compute BMIP\n");
    printf("4. Identify Risk Group\n");
    printf("5. Identify Pregnant\n");
    printf("6. Identify Missing Examination\n");
    printf("7. Search Name\n");

    scanf("%d", &eingabe);
    switch(eingabe){
        case 1:
            printf("Bitte Patientennummer eingeben: ");
            scanf("%d", &eingabe2);
            printf("%f", compute_bmi(patienten_db[eingabe2]));
            break;
        case 2:
            printf("Risikiopatientnen die BMI <20 und >25 haben:\n");
            identify_risks();
            break;
        case 3:
            printf("Bitte Patientennummer eingeben: ");
            scanf("%d", &eingabe2);
            printf("%f", compute_bmip(&patienten_db[eingabe2])); // & vergessen da wir mit pointern arbeiten
            break;
        case 4:
            printf("Bitte geben sie eine Patientennummer ein, ab welcher die Risikopatienten ausgegeben werden sollen!\n");
            scanf("%d", &eingabe3);
            identify_risk_group(&patienten_db[0], eingabe3);
            break;
        case 5:
            printf("Alle Schwangeren Frauen: \n");
            identify_pregnant();
            break;
        case 6:
            printf("Diese Personen haben noch keine Lypmhknoten oder Brustundersuchung\n");
            identify_missing_examination();
            break;
        case 7:
            printf("Bitte geben Sie einen Nachnamen ein: \n");
            scanf("%s", a);
            searchName(a);
            break;
        default:
            printf("Tschüss");
            break;
    }



    return 0;
}
