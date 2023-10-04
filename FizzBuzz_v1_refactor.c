// still going straight and total focus

// not hard-code the condition give a bigger room for maintaining
#include <stdio.h>

int main(void) {
    for(int i = 1; i <= 100; i++) {
        _Bool divisible_by_3 = (i % 3 == 0);    // parenthesis gives a better way of expressing
        _Bool divisible_by_5 = i % 5 == 0;      // good for the computer but not so good for human reading the code

        if(divisible_by_3 && divisible_by_5) {
            printf("FizzBuzz\n");            
        } else if (divisible_by_3)
        {
            printf("Fizz\n");
        } else if (divisible_by_5)
        {
            printf("Buzz\n");
        } else {
            printf("%i\n", i);
        }
    }  

    return 0;
}