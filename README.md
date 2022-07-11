# Our _printf()

This is the main README.md of how our _printf() works and compile. 

# Prototype

    int _printf(const char *format, ...); 
 
 # Description
 The _printf() function (the name comes from “print formatted”) prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen. This is a special function because it receives a variable number of arguments. The first parameter is fixed and is the format string. It includes text to be printed literaly and marks to be replaced by the text obtained from the additional parameters.

## Compilation - Install - Example

To install it we should clone the respositiory into our terminal: 

    $ git clone  https://github.com/Facundo1SanAndrea/holbertonschool-printf.git
To compile the program we create a simple function:

    #include "main.h"
    
    int main(void)
    {
	    _printf("Character:[%c]\n", 'H');
	    return (0);
	} 
	_______________________________________________
	$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
	$ ./a.out
	Character:[H]
	$
## Requirements

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS 
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
- Lenguage used:  C
## Argument list
When printf processes its arguments, it starts printing the characters it finds in the first argument,
one by one. When it finds a percent it knows it has a format specification. It goes to the next argument and uses its value, printing it according to that format specification. It then returns to printing a character at a time (from the first argument). It is okay to include more than one format specification in the printf string. In that case, the first format specification goes with the first additional argument, second goes with second, and so forth.


## Format Specifiers  

Every format specification starts with a percent sign and ends with a letter. Here is a list:
| % | Description | 
|--|--|
| %c | Print single character |
| %s | Print a string of characters  |
| %d | Print a decimal (base 10) number|
| %i | Print an integer in base 10 |
| %% | Print a percent sign |


## General files

 - [_printf.c](https://github.com/Facundo1SanAndrea/holbertonschool-printf/blob/main/_printf.c "_printf.c") - Stores the main code
 - [functions.c](https://github.com/Facundo1SanAndrea/holbertonschool-printf/blob/main/functions.c "functions.c") - Stores the functions used by our _printf()
 - [get_prfunct.c](https://github.com/Facundo1SanAndrea/holbertonschool-printf/blob/main/get_prfunct.c "get_prfunct.c")  - Store the structure containing the functions 
 - [main.h](https://github.com/Facundo1SanAndrea/holbertonschool-printf/blob/main/main.h "main.h") - Prototypes 

## Contributors

 - [Joaquin Dominguez](https://github.com/joakG16)
 - [Facundo San Andrea](https://github.com/Facundo1SanAndrea)

### Date of release: 07/12/2022

