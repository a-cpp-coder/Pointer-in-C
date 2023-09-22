// long time to go and you forget the basics, not matter, go for it
#include<stdio.h>

int main(void) {
    int count = 5, x;
    int* a_pointer;

    a_pointer = &count;
    // x = (*a_pointer)++;     // to be careful about post-increment, may need use this in separate statement
    x = ++*a_pointer;          // weird without the parentheses

    printf("%d %d\n", x, count);

    // testing something really dangerous but to see if &count is a pointer or not
    int z = 7;
    // &count = &z;    // yeah, it's not, the book is wrong, trust in yourself
    *a_pointer = *(&z); // how to modify(access) value of data item using pointer

    printf("%d %d\n", x, count);

    return 0;
}