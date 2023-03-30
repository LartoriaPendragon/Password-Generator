#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "lib/art.h"

int main() {
    generate_ascii_art();

    int pLength;
    int min = 1;
    int i;

    // Asks user for desired password length, and stores it in length variable

    printf("This is a password generator; How many characters long you want your password?\n");
    scanf("%d", &pLength);

    int password[pLength];

    // Seeds the random character generator

    srand((unsigned int) getpid());

    // Generates random ASCII characters

    for(i = 0; i < pLength; i++){
        password[i] = min + (rand() % (200));
        printf("%c", (char) password[i]);
    }

    return 0;







}
