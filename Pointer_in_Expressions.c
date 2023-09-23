// The Truth, to see it need to Go through the Valley of Doubt and Testing

#include <stdio.h>

int main(void) {
    int i1, i2;
    int *p1, *p2;

    printf("%p %p\n", p1, p2);

    p1 = &i1;
    p2 = &i2;

    i1 = 5;
    i2 = 8;
    printf("%i %i %i %i\n", i1, *p1, i2, *p2);

    i1 = 5;
    i2 = *p1 / 2 + 10;
    // using *p1 in an expression is the same as using i1

    p2 = p1;
    // After this, p2 also point to i1, you can have many pointers point to the same named address (variable)/data item as well

    printf("%i %i %i %i\n", i1, *p1, i2, *p2);

    return 0;
}