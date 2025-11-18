#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *p1_Array = calloc(5433, sizeof(int));
    int *p2_Array = NULL;

    p1_Array[0] = 1;
    p1_Array[1] = 2;

    printf("p1_Array before realloc: %d %d\n", p1_Array[0], p1_Array[1]);
    printf("p1_Array: %p\n", p1_Array);
    printf("p2_Array: %p\n\n", p2_Array);
    
    p2_Array = realloc(p1_Array, 1 * sizeof(int));
    // free(p1_Array);

    printf("p1_Array after realloc: %d %d\n", p1_Array[0], p1_Array[1]);
    printf("p1_Array: %p\n", p1_Array);
    printf("p2_Array after realloc: %d %d %d\n",p2_Array[0], p2_Array[1], p2_Array[2]);
    printf("p2_Array: %p\n", p2_Array);

    printf("\n\n%d\n", p2_Array[2]);
    
    return 0;
}