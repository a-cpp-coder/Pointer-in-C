// No need to care about this for Now - Go straight forward, chac gi, cu di xem the nao da
#include <stdio.h>

int main(void){
    long numb;
    long sum = 0L;  // careful here, not waste time at learning at all
    _Bool input_is_good;

    printf("Please enter an integer to be summed");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &numb));  // a good way to go, still C is dangerous, just like C++ and more dangerous if you have 1 hand but this hand is so strong, Trich Tinh Thu
    do {
        // input_is_good = (scanf("%ld", numb) == 1);  // very clear that you are amateur, C's scanf() does need the 
                                                    // address of the variables to put the values in, not like C++ huh ?
                                                    // but the compilers(gcc, clang) does show that you match the wrong type with warnings
        sum += numb;
        printf("Enter the next integer(q to quit): ");
        input_is_good = (scanf("%ld", &numb));
    } while(input_is_good);

    printf("\nThe sum of your input integer is: %ld \n", sum);

    return 0;
}
// boolean.c -- using a _Bool variable
/*
#include <stdio.h>
int main(void)
{
long num;
long sum = 0L;
_Bool input_is_good;
printf("Please enter an integer to be summed ");
printf("(q to quit): ");
input_is_good = (scanf("%ld", &num) == 1);
while (input_is_good)
{
sum = sum + num;
printf("Please enter next integer (q to quit): ");
input_is_good = (scanf("%ld", &num) == 1);
}
printf("Those integers sum to %ld.\n", sum);
return 0;
}*/