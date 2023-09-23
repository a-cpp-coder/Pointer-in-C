// Live, so good, your life, no need other thoughts

#include <stdio.h>

int main(void) {
    int i1, i2;
    int* p1, p2;    // interesting here

    printf("%p %p\n", p1, p2);
    printf("%i %i\n", p1, p2);

    /*  That's what I think there is an issue, and my "less worry" is right
        p2 in the above declaration is an int not an int* (int pointer)

        then the syntax should be: "int *p1, *p2"   for not misunderstanding
        but that syntax is the same as "Dereference", 
        any way, in production code should avoid 2 level pointer, 2 level dereference, that's deep is not good at debugging
        in NASA, pointer is ok but no heap

        but where is the pointer variable stored ? stack or heap
    */

    return 0;
}