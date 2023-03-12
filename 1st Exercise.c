// ¡Õ‘∆¡—«” »≈œ÷¡Õ«”
//1117-2020-00062
#include<stdio.h>
int main() {
    int number; //o atithmos pou ekxoreite
    int i = 3; //arxikopoihsh tou i me 3
    int meter; //metritis
    int flag; //metabliti
    printf("Dwse arithmo :  ");
    scanf_s("%d", &number);
    if (number <= 0) { //elexos gia lathos ekxorisi
        printf("Lathos arithmos! Prospathise pali:  ");
        scanf_s("%d", &number);
    }
    if (number >= 1) {
        printf("\nOi prwtoi %d arithmoi einai :  ", number);
        printf("2 "); //to 2 ektiponetai panta
    }
    // to 1 tsekarete se ka8e epanalipsi jekinontas apo to 3
    for (meter = 2; meter <= number; i++) {
        //tsekaroume an to flag einai prwtos h oxi
        for (flag = 2; flag < i; flag++) {
            if (i % flag == 0)
                break;
        }
        if (flag == i) { //o flag einai prwtos
            printf("%d ", i);
            meter++; //afjisi tou metriti twvn prwton    
        }
    }
    return 0;
}