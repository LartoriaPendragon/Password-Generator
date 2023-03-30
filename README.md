# Password Generator

This is a simple C program that generates a random password consisting of ASCII characters. The user is prompted to enter the desired password length, and the program generates random ASCII characters of that length.

## Dependencies

- stdio.h
- stdlib.h
- unistd.h
- lib/art.h

## Usage

1. Compile the program using a C compiler.
2. Run the program.
3. Enter the desired password length when prompted.
4. The program will generate a random password of the desired length and print it to the console.

## Code Explanation

1. The program includes the necessary header files for input/output, standard library functions, and the ASCII art library.
2. The main function calls the `generate_ascii_art` function to print an ASCII art banner to the console.
3. The user is prompted to enter the desired password length, and the input is stored in the `pLength` variable.
4. An array `password` of length `pLength` is created.
5. The `srand` function is used to seed the random number generator with the current process ID.
6. A loop generates random ASCII characters using the `rand` function and stores them in the `password` array.
7. The `printf` function is used to print the generated password to the console.

## Improvements

- Use a cryptographically secure random number generator to ensure a more secure password.
- Implement a function to check the strength of the generated password.
- Implement an option to include numbers and special characters in the generated password.
