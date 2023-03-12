#include<stdio.h> 
int main() {
    int number; //The number that the user gives
    int sum = 0; //Counter
    int last_number; 
    printf("Give number:  ");
    scanf_s("%ld", &number);
    while (number / 10 != 0) {
        sum = 0;
        while (number != 0) {
            last_number = number % 10;  //Keep the last digit
            sum += last_number;     //Adding the last digit to the counter
            number = number / 10;  //Removing the last digit
        }
        number = sum; //Inserting the number to the sum
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}
