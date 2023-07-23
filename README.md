# _printf Function

_printf is a C library that provides a simplified implementation of the printf function for formatted output to the standard output stream. It supports various conversion specifiers.

## Features

- Supports %c for printing a single character.
- Supports %s for printing a null-terminated string.
- Supports %% for printing a literal percent sign.
- Supports %d and %i for printing signed integers.
- Compact and lightweight implementation.

## Installation

To use the _printf function in your C project, follow these steps:

1. Copy the main.h header file, _printf.c file, _putchar.c and functions.c source file to your project's directory.

1. Include the main.h header file in your C source code like this:
` #include "main.h" `

3. Compile your project along all the other files with this next line:
` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c `

## Usage
The _printf function has the following prototype:

` int _printf(const char *format, ...);`

To print formatted output, use _printf as you would with the standard printf function:

`_printf("Hello, %s! The answer is %d.\n", "John", 42);`

Output:
    `"Hello John! The answer is 42"`

## _printf manual
If you wish to take a look into the manual of _printf, you can also download the _printf.man file and just run the following code:

`man ./_printf`

## Contact & help
For any bugs or doubts you can contact both creators through our emails:
- Marcos Bremermann (marcos.bremermann@holbertonstudents.com)
* Esteban Silvera (esteban.silvera@holbertonstudents.com)
