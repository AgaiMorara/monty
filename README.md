The Monty Language
= This project creates an interpreter for monty byte code.
Files containing monty byte code usually have .m extension.
There is not more than one instruction per line. There can be any number of
spaces before or after the opcode and its argument.

se your shell creation experience and linked list knowledge to solve it
Implement the push and pall opcodes.

The push opcode

The opcode push pushes an element to the stack.

Usage: push <int>
where <int> is an integer
if <int> is not an integer or if there is no argument given to push,
print the error message L<line_number>: usage: push integer,
followed by a new line, and exit with the status EXIT_FAILURE
where is the line number in the file
You won’t have to deal with overflows. Use the atoi function
