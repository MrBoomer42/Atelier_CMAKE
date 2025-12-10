#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
    double r = 0;

    // --- Gestion de la fonction "carré" (car) qui nécessite 3 arguments (prog, op, a) ---
    if (argc == 3) {
        char* op = argv[1];
        char* a = argv[2];
        
        if (strcmp(op, "car") == 0) {
            r = _car(atof(a)); // Appel de la nouvelle fonction _car
            printf("%lf", r);
        } else {
            printf("Erreur de parametres");
        }
    }
    // --- Gestion des opérations binaires (add, sub, mul, div) qui nécessitent 4 arguments (prog, op, a, b) ---
    else if (argc == 4)
    {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];
        
        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf",r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%lf",r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%lf",r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%lf",r);
        }
        else {
            printf("Erreur de parametres");
        }
    }
    // --- Gestion des cas où le nombre d'arguments est incorrect ---
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
