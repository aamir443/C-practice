#include<stdio.h>


float add(float num1, float num2)
 
{
  return num1 + num2;
}

float subtract(float num1, float num2)
 
{
  return num1 - num2;
}

float multiply(float num1, float num2)
 
{
  return num1 * num2;
}

float divide(float num1, float num2)
 
{
  if (num2 == 0) {
    printf("Division by zero is not allowed!\n");
    return -1;
  }
  return num1 / num2;
}

int main() {
  int choice;
  float num1, num2, result;

  do {
    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case
 
1:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = add(num1, num2);
        printf("Result: %.2f\n", result);
        break;
      case 2:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = subtract(num1, num2);
        printf("Result: %.2f\n", result);
        break;
      case 3:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = multiply(num1, num2);
        printf("Result: %.2f\n", result);
        break;
      case 4:
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        result = divide(num1, num2);
        break;
      case 5:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while (choice != 5);

  return 0;
}