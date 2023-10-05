// Why do we need do all of these serial programming at all
// why we don't do all of these calculation in parallel

Read all array's elements to memory - O(1)
Caculate divisible_by_3 / by_5 - O(1)
Get the boolean Math(&&) and branching - O(1)   // easy to draw logic gates ?
Print the result - trouble  here, may need locking/lazy eval 
                   but O(1) is still possible in theory
                   and I believe in practical

-> read the parallel adder in Lec 6/slide 19/16-bit parallel adder
no need any locking at all!
the carry out bit of the current 4-bit adder feed directly into (as carry in bit) the next 4-bit adder
'
// The above approach is just my idea how to do it in parallelism
/* In practical, there are at least 2 ways to do it:
    - OpenMP parallelization
    - FPGA

*/
