#include <stdio.h>
#include <stdlib.h>
//IFEANYI PRINCE MIRACLE
//D1012623
//CMP2310273

int main()
{
int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

