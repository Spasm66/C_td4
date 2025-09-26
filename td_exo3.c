#include <stdlib.h>
#include <stdio.h>

typedef struct {
float x;
float y;
} point;

point   *createArrayofPoints(unsigned int length) {
    point   *mat;

    mat = malloc(length * sizeof(point));
    return (mat);
}

point   computeGCenter(point* array, unsigned int length) {
    point   res;
    int     sum_x;
    int     sum_y;

    sum_x = 0;
    sum_y = 0;
    for (int i=0; i < length; i++) {
        sum_x += array[i].x;
        sum_y += array[i].y;
    }
    res.x = sum_x / length;
    res.y = sum_y / length;
    return (res);
}

int     main(void) {
    point   *tab;

    tab = createArrayofPoints(4);
    tab[0].x = 0;
    tab[0].y = 0;
    tab[1].x = 0;
    tab[1].y = 2;
    tab[2].x = 2;
    tab[2].y = 2;
    tab[3].x = 2;
    tab[3].y = 0;
    printf("%f\n", computeGCenter(tab, 4).x);
}