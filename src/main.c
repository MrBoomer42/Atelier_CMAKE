#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h" // Vérifiez le chemin d'inclusion

int main(int argc, char *argv[]){
    double r = 0;

    // Gestion du cas unaire (3 arguments : exec, op, a)
    if (argc == 3) {
        char* op = argv[1];
        char* a = argv[2];
        
        if (strcmp(op, "car") == 0) {
            r = _car(atof(a));
            printf("%lf", r);
        } else {
            printf("Erreur de parametres");
        }
    }
    // Gestion du cas binaire (4 arguments : exec, op, a, b)
    else if (argc == 4)
    {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf",r);
        }
        // ... (autres opérations binaires)
        else {
            printf("Erreur de parametres");
        }
    }
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
    return 0;
}
