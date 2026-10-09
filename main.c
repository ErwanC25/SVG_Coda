#include <stdio.h> // inclue les fprint, fopen ...
#include <stdlib.h> // Inclue le EXIT_SUCCESS / EXIT_FAILURE
#define F_SORTIE "test.html" //Nom du fichier créer




// declartation de ma fonction main
int main(void)
{
    FILE *f_out; // Declare un pointeur de type FILE pour le fichier de sortie 

    if ((f_out = fopen(F_SORTIE,"w")) == NULL) 
    {
        fprintf(stderr, "\nOperation impossible%s\n", F_SORTIE); // si l'operation echoue
        return (EXIT_FAILURE);
    }


    return (EXIT_SUCCESS);
}