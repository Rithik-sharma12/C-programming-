#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 // Define the size of the array

int main() {
    int array[1000],size,max;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the maximum size of the digit present in the array :");
    scanf("%d",&max);
    int i;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random numbers and store them in the array
    for (i = 0; i < size; i++) {
        array[i] = rand() % max;  // Random number between 0 and 99
    }

    // Print the array
    printf("Random numbers in the array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
