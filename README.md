![Holberton logo](https://www.holbertonschool.com/holberton-logo-no-seahorse.png)

# C - Our own simple shell

This project is about making our own simple shell command language interpreter that emulates the most basic Linux sh functionality.

Our simple shell is called hsh and interprets the built-in "env" and "exit" commands as well as the non-embedded ones contained in the operating system's PATH.

The intention of this project is an application of C programming skills, system calls and shell operation and is not intended to be a competitor to the linux sh.

hsh does not cover the options contained in sh.

## Flowchart Of Our Own *simple shell*

![Flow char of shell](https://lucid.app/publicSegments/view/0c0d2e8c-86e6-4bd7-8a38-210a42e6de9f/image.jpeg)

## Installation

No installation process is required, although the user needs to download the function files and header file in order to compile. The user must download the following files into a folder, which may contain scripts that can be executed non-interactively by hsh. Due to the requirements of the compile command, one should avoid having other files with the .c extension inside the same folder to avoid compilation errors.

### Files to download

* built_in_functions.c - Contains the functions corresponding to built-ins, such as: 
  - get_built_in - selects the corresponding to the according to the selected
  - _env - prints the environment
* execute_proccess.c - Creates a child process and executes a command in this.
* holberton.h - The header file that contains the prototype of all functions.
* path.c - Contains the functions corresponding to handle the PATH.
  - search_path - Use stat function to search the command entered in the prompt
  - get_path - Gets the path from the env pointer
* print_error.c - Contains the functions necessary to print an error message.
  - print_error - Prints error message
  - print_number - Prints an integer, this functions allows count how many errors has received hsh.
  - _putchar - Writes a character to standard output.
* prompt_get_line.c - Prints the prompt and gets the command line or signal
* _realloc.c - Reallocates a memory block using malloc and free
* shell.c - Is the main function where the entry point of shell is.
* split_string.c - Splits a spring
* str_functions.c - Contains the functions corresponding to handle strings
  - _strcat - Concatenates two strings
  - _strcpy -  Copies the string pointed to by src
  - _strlen -  Returns the length of a string
  - _strncmp - Only compares the first (at most) n bytes of two strings.
  - _strcmp - Compares two strings
* man_1_simple_shell - Contanins the information about this simple shell usage.

## Compilation
Once the files are downloaded, the compilation process must be done as following:
```bash
$ gcc -g -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
$ ./hsh
```
## Usage
Once we have executed the compilation command given above, we obtain an executable file called hsh, which we can use in interactive mode and non-interactive mode as we will show below:

### Examples
**Interactive mode**


https://user-images.githubusercontent.com/85318393/130913665-dd08ff7f-16d6-4ec2-9e70-6a6ea3b4bb32.mp4



https://user-images.githubusercontent.com/85318393/130913682-a69ea0bd-b6a0-41e1-8a0b-01a88eb0f3f2.mp4



https://user-images.githubusercontent.com/85318393/130913693-53f73e21-198a-4396-916d-49dd1895b76d.mp4



https://user-images.githubusercontent.com/85318393/130913701-0a6aad8b-99ae-4e03-b6f4-b5da1d6c6de6.mp4


**Non-interactive mode**


https://user-images.githubusercontent.com/85318393/130913712-d6825f6f-4e57-4da4-a0ba-2f85240d6ce4.mp4



https://user-images.githubusercontent.com/85318393/130913717-593c412f-82e3-4b8e-b454-06e0cbaf1b02.mp4


**Incorrect commands**


https://user-images.githubusercontent.com/85318393/130913735-ad6b0e44-f367-4d19-830f-276b50990d87.mp4


## Contributing
This is a purely academic project for Holberton School. It cannot be modified and there will be no pull requests.

## Authors
Juan Sebastian Perea Bescos - [twitter](https://twitter.com/JuanSePeBe95) - [linkedin](https://www.linkedin.com/in/juan-sebastian-perea/)

Sandra Calero Castañeda - [twitter](https://twitter.com/SandraC59631923) - [linkedin](https://www.linkedin.com/in/sandra-liliana-calero/)

Project for [Holberton School](https://www.holbertonschool.com/)
