#include <stdio.h>
#include <string.h>
#include "header.h"


char* hari (int x) {
    static char harii[7];
    switch (x)
    {
        case 0:
            strcpy(harii,"Senin");
            break;
        case 1:
            strcpy(harii,"Selasa");
            break;
        case 2:
            strcpy(harii,"Rabu");
            break;
        case 3:
            strcpy(harii,"Kamis");
            break;
        case 4:
            strcpy(harii,"Jumat");
            break;
    };
    return harii;
}
void clearData (FILE *fil) {
    fprintf(fil,"%s,%s,%s,%s,%s,%s\n", "Ruang Praktikum",
        " ","LAB1","LAB2","LAB3","LSS");
    fprintf(fil,"%s,%s,%s,%s,%s\n", "Minggu",
        "Hari"," "," "," "," ");   
    for (int i=0;i<12;i++) {
        for (int j=0;j<5;j++) {
                fprintf(fil,"%d,%s,",(i+3),(hari(j)));
            for (int k=0;k<4;k++) {
                fprintf(fil,"x,");
            };
            fprintf(fil,"\n");
        };
    };
    
};