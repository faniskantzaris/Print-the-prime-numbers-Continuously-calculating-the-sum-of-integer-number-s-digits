//KANTZARIS FANIS
//1117-2020-00062
#include<stdio.h> 
int main() {
    int number;
    int sum = 0;
    int last_number;
    printf("Dwse enan arithmo:  ");
    scanf_s("%ld", &number);
    while (number / 10 != 0) {
        sum = 0;
        while (number != 0) {
            last_number = number % 10;  // pairno ton teleutaio arithmo
            sum += last_number;     // prostheto ton teleutaio arithmo sto sum
            number = number / 10;  // afero ton teleutaio arithmo
        }
        number = sum; // ekxoro ston arithmo to sum
    }
    printf("\nTo athroisma einai: %d", sum);
    return 0;
}