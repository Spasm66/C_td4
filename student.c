#include <stdlib.h>
#include <stdio.h>

static void usage(char * command) {
    fprintf(stderr,"%s <integer array size> \n", command);
    exit(EXIT_FAILURE);
}

int main(int argc, char*argv[]) {
    if (argc != 2){
        usage(argv[0]);
    }
    int* tab;
    int* tab2;
    int size = atoi(argv[1]);
    
    // We ask to allocate the memory for the array
    tab = (int*) malloc(size * sizeof(int));
    // We check if the memory has been allocated correctly
    if (tab == NULL) {
        fprintf(stderr, "not enough memory!\n");
        return EXIT_FAILURE;
    }
    
    // Use of the memory 
    for (int i=0; i<size; i=i+1){
        tab[i] = i;
    }
    tab2 = tab;
    for (int i=0; i<size; i=i+1){
        printf("tab[%d] = %d\n", i, tab2[i]);
    }
    
    // We do not need the memory, we free it
    free(tab);
    tab = NULL;
    return EXIT_SUCCESS;
}