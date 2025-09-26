#include <stdlib.h>
#include <stdio.h>

typedef struct rectangle{
	unsigned int width;
	unsigned int height;
} rectangle;

rectangle   *createArrayofRectangles(int size) {
    rectangle   *tab;

    tab = malloc(size * sizeof(rectangle));
    if (tab == NULL) 
        return (NULL);
    return (tab);
}

void    free_tab(rectangle *t) {
    free(t);
}

int     main(void) {
    free_tab(createArrayofRectangles(4));
    free(NULL);
}