#include <stdio.h>
//c prog to take 5 alphabets as input in one dimensional array then search specific alphabet into that array//
#define ARRAY_SIZE 5

int main() {
    char alphabetArray[ARRAY_SIZE];
    char searchAlphabet;

    // Input 5 alphabets into the array
    printf("Enter 5 alphabets: ");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf(" %c", &alphabetArray[i]);  // Note the space before %c to consume newline characters
    }

    // Input alphabet to search
    printf("Enter the alphabet to search: ");
    scanf(" %c", &searchAlphabet);

    // Search for the specified alphabet
    int found = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (alphabetArray[i] == searchAlphabet) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("The alphabet '%c' is present in the array.\n", searchAlphabet);
    } else {
        printf("The alphabet '%c' is not present in the array.\n", searchAlphabet);
    }

    return 0;
}
