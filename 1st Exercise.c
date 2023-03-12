#include<stdio.h>
int main() {
    int number; //Input number
    int i = 3; //Initializing i to 3
    int meter; //Counter that counts the prime number's
    int flag; //Counter that checks if the number is prime or not
    printf("Give number :  ");
    scanf_s("%d", &number);
    if (number <= 0) { //Checking for error
        printf("Wrong number. Please try again:  ");
        scanf_s("%d", &number);
    }
    if (number >= 1) {
        printf("\nThe prime numbers are %d :  ", number);
        printf("2 "); //Always printing number 2
    }
    for (meter = 2; meter <= number; i++) {
        //Checking if counter flag is prime number
        for (flag = 2; flag < i; flag++) {
            if (i % flag == 0)
                break;
        }
        if (flag == i) { //Checking if counter flag is prime
            printf("%d ", i);
            meter++; //Increasing counter
        }
    }
    return 0;
}
