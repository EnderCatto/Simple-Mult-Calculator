#include<stdio.h>

int main() {
    int a, b, c = 0;

    // Asking the user to input two numbers to be multiplied
    scanf("%d %d", &a, &b);

    // If the second number is not zero, start the multiplication process
    if (b != 0) {
        do {
            c += a; // Add the value of 'a' to 'c' repeatedly
            b--;    // Decrease the value of 'b' by 1 in each loop
        } while (b > 0);
    }

    // Output the result of the multiplication
    printf("%d\n", c);

    return 0;
}
