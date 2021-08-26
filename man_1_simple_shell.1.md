% HSH(1P) IEEE/The Open Group "HOLBERTON"
% Juan Sebastian Perea - Sandra Calero
% August 2021

# PROLOG

This manual page is part of the simple shell project.\
This shell is a small copy of sh.

# NAME
hsh - simple UNIX command interpreter.

# SYNOPSYS
The hsh works in interactive mode as follows:

    $ ./hsh
    ($) /bin/ls
    hsh main.c shell.c
    ($)
    ($) exit
    $

and also in non-interactive mode like this:

    $ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $

# DESCRIPTION
The *hsh* utility is a basic command language interpreter that shall execute commands read from a command line string, the standard input, or a specified file.\
Display a prompt and wait for the user to type a command. A command line always ends with a new line.\
The prompt is displayed again each time a command has been executed.\
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.\
Handle commands with arguments.

It does not:

 * Handle special characters : \", ', `, \\, *, &, #
 * Be able to move the cursor.

# OPTIONS
: This *hsh* does not support any option of sh.

# ENVIRONMENT VARIABLES
The following environment variables shall affect the execution of hsh:

*ENV*
: This variable points to an array of pointers to strings called the "enviroment". The last pointer in this array has the value NULL.
*PATH*
: The PATH variable is an environment variable that contains an ordered list of paths that Linux will search for executables when running a command

# EXIT STATUS
(más que todo en modo no interactivo) se puede copiar y pegar

# BUGS
This code may contain errors, if any are found please contact Sandra Calero <3358@holbertonschool.com> or Juan Sebastian Perea <3309@holbertonschool.com>.

# APPLICATION USAGE
aplication usage poner ejemplos

# EXAMPLES
en examples es poner cuándo se usa cómo debe salir
 with at least one example

# SEE ALSO
en caso de que se reuiera alguna función adicional poner el manuel de sh

basarnos en el QA de printf