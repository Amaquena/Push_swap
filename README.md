# Push_swap

This project was aimed at teaching the concept of sorting algorithms and the introduction to the Stack Data Structure. The **Push_swap** project is a very simple and highly effective algorithm project: data will need to be sorted. At my disposal will be a set of int values, 2 stacks and a set of instructions to manipulate both stacks.

## Objective
2 programs need to be written in C:
- The first, named _checker_. This program will take integer arguments and read instructions on the standard output. Once all the instuctions are read, checker executes the instruction on the integers to sort them. If they are sorted, OK is displayed. Otherwise, it will display KO.
- The second, named _push_swap_. This program calculates and displays on the standard output the shortest list of operations taken to sort the integer values recieved as arguments.

### General instructions
- The executables should be named _checker_ and _push_swap_ respectively.
- A Makefile is required to compile both programs
- The folder [libft](https://github.com/Amaquena/libft) contains a few recreated standard C functions required for this project.
    - The Makefile should compile the libft Makefile as well.
- Global variables are forbidden
- All errors needed to be handled and the program should not quit in an unexpected manner (Segmentation faults, bus errors, double frees, etc.)
- All heap allocated memory should be freed when necessary with no meamory leaks.

**NOTE: The only libc functions allowd are `write`, `read`, `malloc`, `free` and `exit`. To bypass this limitaion the funtions in the libft folder was used.**

### General Specifications
1. Each program will have 2 Stack Data Sstuctures named _a_ and _b_.
2. To start:
    - _a_ contains random numbers either positive or negative, without any duplicates.
    - _b_ is empty.
3. The goal is to sort the numbers in ascending order onto _stack a_. There are a few operations that are required to do so:
    - sa (_swap a_):
        - swap the first to elements on the _stack a_, Do nothing if theres 1 or no elements.
    - sb (_swap b_):
        - swap the first to elements on the _stack b_, Do nothing if theres 1 or no elements.
    - ss: _sa & sb_ at the same time.
    - pa (_push a_):
        - take the first element on _stack b_ and put it at the top of _stack a_. Do nothing if _stack b_ is empty.
    - pb (_push b_):
        - take the first element on _stack a_ and put it the top of _stack b_. Do nothing if _stack a_ is empty.
    - ra (_rotate a_):
        - the first element on _stack a_ becomes the last element.
    - rb (_rotate b_):
        - the first element on _stack b_ becomes the last element.
    - rr: _ra & rb_ at the same time.
    - rra (_reverse rotate a_):
        - the last element on _stack a_ becomes the first element.
    - rrb (_reverse rotate b_):
        - the last element on _stack b_ becomes the first element.
    - rrr: _rra & rrb_ at the same time.

### The "checker" program
- Takes integer arguments at program execution, if there is no arguments _"checker"_ stops and displays nothing.
- _"checker"_ will wait and read instruction from the standard output.
- After executing the instruction, and if _stack a_ is sorted and _stack b_ is empty, _"checker"_ will display __"OK"__, otherwise it displays __"KO"__.
- In case of an error, _"checker"_ should display __"ERROR"__:
    - an argument is not an intger.
    - an integer is bigger or smaller than an `int`.
    - an argument has a duplicate.
    - an instruction does not exist and/or is formatted incorrectly.

### The "push_swap" program
- Takes integer arguments at program execution, the first argument should be at the top of the stack.
- _"push_swap"_ displays the shortest list of instruction to sort the stack, with the smallest number being at the top.
- Instructions displayed are separated by a _"\n"_.
 - In case of an error, _"push_swap"_ should display __"ERROR"__:
    - an argument is not an intger.
    - an integer is bigger or smaller than an `int`.
    - an argument has a duplicate.
    - an instruction does not exist and/or is formatted incorrectly.
    
#### Simple usage
- Run `make all`
    - The Makefile is already predifined to compile the program.
- Run _"push_swap"_ or _"checker"_:
    - `./push_swap 2 1 3 5 6 1 8`
    - `./checker 2 1 3 5 6 1 8`
- Get the total amount of moves taken to sort arguments using the "_push_swap"_ program:
    - `ARG="2 1 3 5 6 1 8"; ./push_swap $ARG | wc -l`
- Use _"checker"_ to execute the moves recieved from the _"push_swap"_ program:
    - `ARG="2 1 3 5 6 1 8"; ./push_swap $ARG | ./checker $ARG`

**for a more detailed desciption of the task refer to the pdf in the resource folder.**
