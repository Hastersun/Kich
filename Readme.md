#       Kich
## A very absurd command language with 8 keyword
---
### What is Kich?
Kich is a absurd language .It be based with the Brainfuck.And it is a toy language.

### The Language

A Brainfuck program has an implicit byte pointer, called "the pointer", which is free to move around within an array of 30000 bytes, initially all set to zero. The pointer itself is initialized to point to the beginning of this array.

The Brainfuck programming language consists of eight commands, each of which is represented as a single character.

r  Increment the pointer.

l  Decrement the pointer.

p  Increment the byte at the pointer.

! Decrement the byte at the pointer.

g Output the byte at the pointer.

k Input a byte and store it in the byte at the pointer.

{Jump forward past the matching ] if the byte at the pointer is zero.

} Jump backward to the matching [ unless the byte at the pointer is zero.

The semantics of the Brainfuck commands can also be succinctly expressed in terms of C, as follows (assuming that p has been previously defined as a char*):

r becomes   ++p;

l  becomes   --p;

p becomes ++*p;

!  becomes  --*p;

g becomes putchar(*p);

k becomes *p = getchar();

{ becomes while (*p) {

} becomes      }
---
### How to compile Kich?
 Very ease.
 #### Minimum configure
 ---
 CPU: 2 core
 RAM:4gb
 
