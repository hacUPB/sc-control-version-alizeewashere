#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: program <number>\n");
        return 1;
    }

    int number = atoi(argv[1]); // Convert the console input argument to an integer

    /* It must be verified that the entered number is greater than or equal to zero */
    if (number < 0) {
        fprintf(stderr, "The number must be greater than or equal to zero\n");
        return 1;
    }

    /* Implement the function that calculates the factorial of the input argument */
    long factorial = 1;
    int b;
    for (b = number; b > 1; b--) {
        factorial *= b;
    }

    /* Print the result */
    printf("The factorial of %d is: %ld\n", number, factorial); // Added newline character

    /* Implement the function that calculates if the argument is a prime number */
    int count = 0, index = 1;
    while (index <= number) { // Changed '<' to '<=' to include the number itself
        if (number % index == 0) {
            count++;
        }
        index++;
    }

    /* Print the result */
    if (count == 2) { 
        printf("%d is a prime number\n", number); // Added newline character
    } else {
        printf("%d is not a prime number\n", number); // Added newline character
    }

    return 0;
}