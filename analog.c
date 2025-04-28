#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define note "Invalid operation, please enter a valid option."

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main() {
    printf("\t\tWelcome to the Scientific Calculator!\n\n");
    int choice;

    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power\n");
    printf("Enter 7 for Factorial\n");
    printf("Enter 8 for Square\n");
    printf("Enter 9 for Cube\n");
    printf("Enter 10 for Square Root\n\n");

    while (1) {
        printf("\nEnter the operation you want to do: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                power();
                break;
            case 7:
                factorial();
                break;
            case 8:
                square();
                break;
            case 9:
                cube();
                break;
            case 10:
                squareroot();
                break;
            case 0:
                exit(0);
            default:
                printf("\n********** %s ***********\n", note);
        }
    }
    return 0;
}

void addition() {
    printf("Enter the numbers you want to add: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The sum of a and b is %d\n", a + b);
}

void subtraction() {
    printf("Enter the numbers you want to subtract: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The subtraction of a and b is %d\n", a - b);
}

void multiplication() {
    printf("Enter the numbers you want to multiply: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The multiplication of a and b is %d\n", a * b);
}

void division() {
    printf("Enter the numbers you want to divide: ");
    int a, b;
    scanf("%d%d", &a, &b);
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        printf("The division of a and b is %f\n", (float)a / (float)b);
    }
}

void modulus() {
    printf("Enter the numbers you want to find modulus of: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The modulus of a and b is %d\n", a % b);
}

void factorial() {
    int n, fact = 1;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of negative number is not defined.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
}

void power() {
    double base, exponent;
    printf("Enter the base and the power: ");
    scanf("%lf%lf", &base, &exponent);
    double result = pow(base, exponent);
    printf("%lf raised to the power %lf is %lf\n", base, exponent, result);
}

void square() {
    double num;
    printf("Enter the number you want the square of: ");
    scanf("%lf", &num);
    printf("The square of %lf is %lf\n", num, pow(num, 2));
}

void cube() {
    double num;
    printf("Enter the number you want the cube of: ");
    scanf("%lf", &num);
    printf("The cube of %lf is %lf\n", num, pow(num, 3));
}

void squareroot() {
    double num;
    printf("Enter the number you want the square root of: ");
    scanf("%lf", &num);
    if (num < 0) {
        printf("Square root of negative number is not defined.\n");
    } else {
        printf("The square root of %lf is %lf\n", num, sqrt(num));
    }
}
