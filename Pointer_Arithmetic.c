// Yes, go

#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    printf("%lu\n", sizeof(ptr));
    while (ptr < &arr[3])   // yes, must be smaller, and C does not have out-of-bound check, 1 mistake and
    {
        printf("%d ", *ptr);
        ptr += 1;
    }
    

    return 0;
}