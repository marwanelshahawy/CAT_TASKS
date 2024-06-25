/*Write a C program to input any number from user and check whether nth bit of
the given number is set (1) or not (0)*/
#include <stdio.h>

int main() {
    int num;
    int n;
    printf("Enter The number >>  ");
    scanf("%d", &num);

    printf("Enter the bit position to check (0-31) >>  ");
    scanf("%d", &n);

    if (n < 0 || n > 31) {
        printf("Invalid bit position. Please enter a position between 0 and 31.\n");
       
    }else{
        if (num & (1 << n)) {
        printf("The %dth bit of %d is set (1).\n", n, num);
    } else {
        printf("The %dth bit of %d is set (0).\n", n, num);
    }

    }

    return 0;
}
