// Long way not touch
#include<stdio.h>

int main(void) {
    // int array = {5, 2, 4, 6, 1, 3};  // warning: excess elements in scalar initializer
    int array[6] = {5, 2, 4, 6, 1, 3};
    int array_size = sizeof(array)/sizeof(array[0]);

    printf("%d\n", array_size);
    for(int i = 1; i < array_size; i++){
        int key = array[i];

        // insert array[i] into the list array[0..i-1]
        int j = i - 1;
        while (j > -1 && array[j] > key)
        {
            // swap array[j] to array[j + 1]
            array[j + 1] = array[j];
            j--;
        }
        
        // when go to the end of the list (j == -1) or array[j] <= key, then that's the place for array[i]
        // array[j + 1] = key;     
        array[j + 1] = array[i]; // I get it, the initial array[i] is already replaced by the array[i-1] in the statement
                                 // array[j + 1] = array[j] (initial j is j = i - 1;) 

        // how to use debuger gdb
    }

    for(int i = 0; i < array_size; ++i) {
        printf("%d, ", array[i]);
    }

    printf("\n");

    return 0;
}