#include <stdio.h>
#include <stdlib.h>


int main() {
    char c;

    printf("Entrez un caract�re : ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z')) {
        printf("'%c' est une lettre majuscule.\n", c);
    }
    else if ((c >= 'a' && c <= 'z')) {
        printf("'%c' est une lettre minuscule.\n", c);
    }
    else {
        printf("'%c' n'est pas une lettre alphab�tique.\n", c);
    }

    return 0;
}
