#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int *minMax1(int *t, unsigned int n) {
    int *tab;
    int min;
    int max;

    min = INT_MAX;
    max = INT_MIN;
    tab = malloc(2 * sizeof(int));
    if (tab == NULL)
        return (NULL);
    for (int i = 0; i < n; i++) {
        if (t[i] < min)
            min = t[i];
        if (t[i] > max)
            max = t [i];
    }
    tab[0] = min;
    tab[1] = max;
    return (tab);
}

int main(int argc, char **argv) {
    if (argc < 2){
        return (EXIT_FAILURE);
    }
    int* tab;
    int size = atoi(argv[1]);
    
    // We ask to allocate the memory for the array
    tab = (int*) malloc(size * sizeof(int));
    // We check if the memory has been allocated correctly
    if (tab == NULL) {
        fprintf(stderr, "not enough memory!\n");
        return EXIT_FAILURE;
    }
    
    // Use of the memory 
    for (int i=2; i<size + 2; i=i+1){
        tab[i-2] = atoi(argv[i]);
    }
    for (int i=0; i<size; i=i+1){
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    printf("\n");
    printf("%d\n", minMax1(tab, size)[1]);
    free(tab);
}