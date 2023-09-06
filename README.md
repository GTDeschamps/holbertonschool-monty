Project Monty

# Monty

The Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Principales Function of Monty

Push:

The opcode "push" pushes an element to the stack, one by one.

 this push function takes an integer argument, creates a new node with that integer value, and adds it to the top of the stack. It performs error checking for valid input and memory allocation, and it properly updates the stack reference.

Pall:

The opcode "pall" prints all the values on the stack, starting from the top of the stack.

the pall function takes a stack and prints all of its elements from top to bottom. It uses a while loop to traverse the stack, printing each element's value along the way.

```bash
push 1
push 23
push 35
pall

gdeschampsunix@LPT-Tom_Phoenix:~/holbertonschool-monty$ ./monty bytecodes/00.m
35
23
1
```
Pop:

The opcode "pop" removes the top element of the stack.

 the pop function removes the top element from the stack, updates the stack pointer to point to the next element, and frees the memory of the popped element. It also performs error checking to ensure that you can't pop from an empty stack and reports an error if attempted.

```bash
push 125
push 2364
push 30
pall
pop
pall
pop
pall
pop
pall

gdeschampsunix@LPT-Tom_Phoenix:~/holbertonschool-monty$ ./monty bytecodes/07.m
30
2364
125
2364
125
125
```
Pint:

The opcode "pint" prints the value at the top of the stack, followed by a new line.

the pint function is used to print the value of the top element of the stack. It performs error checking to ensure that you can't print from an empty stack and reports an error if attempted. If the stack is not empty, it prints the top element's value.
```bash

push 125
pint
push 232
pint
push 677
pint

gdeschampsunix@LPT-Tom_Phoenix:~/holbertonschool-monty$ ./monty bytecodes/06.m
125
232
677
```
swap:
The opcode "swap" swaps the top two elements of the stack.

the swap function is used to swap the values of the top two elements of the stack. It performs error checking to ensure that the stack contains at least two elements before attempting the swap. If the stack is too short, it reports an error and exits with an error code. If the swap is possible, it swaps the values and modifies the stack accordingly.
```bash
push 10
push 242
push 50
pall
swap
pall

gdeschampsunix@LPT-Tom_Phoenix:~/holbertonschool-monty$ ./monty bytecodes/09.m
50
242
10
242
50
10
gdeschampsunix@LPT-Tom_Phoenix:~/holbertonschool-monty$
```
nop:
The opcode "nop" doesn’t do anything.

the nop function is essentially a "do nothing" function. It takes two parameters that are not used within the function and doesn't perform any meaningful operations. This type of function is sometimes used as a placeholder or for compatibility purposes when a function is required by an interface or structure but doesn't need to do anything specific in the current context.



## Contributor
Shane Vaudrey
Gaël Deschamps

student of #C21 Holberton school laval

## License
no licence; it's a student project
