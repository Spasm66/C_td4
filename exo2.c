#include <stdlib.h>
#include <stdio.h>

static void usage(char * command) {
    fprintf(stderr,"%s <integer array size> \n", command);
    exit(EXIT_FAILURE);
}

void        print_tab(int tab[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tab[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int         main(int argc, char **argv) {
    if (argc < 2){
        usage(argv[0]);
    }
    int *tab;

    tab = malloc((argc-1) * sizeof(int));
    if (tab ==  NULL)
        return (EXIT_FAILURE);
    for (int i = argc; i > 1; i--) {
        tab[i-2] = atoi(argv[(argc)-i+1]); 
    }
    printf("ok\n");
    print_tab(tab, argc-1);
}
