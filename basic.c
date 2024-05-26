#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265

void Arith(int a, int b);
void Trig(double a);


int main() {
    char mode;
    double a,b;



 printf("===================\n");   
 printf("Calculator by Nihal\n");   
 printf("===================\n");
 printf("\n");

    while(1){
        printf("Choose Mode\n");
        printf("For Arithmetic, Press A\n");
        printf("For Trigonometry, Press T\n");
        printf("To Exit, Press E\n");
        scanf(" %c", &mode);

        if (mode == 'E' || mode == 'e') {
            break;
        }

        switch (mode)
        {
        case 'A':
        case 'a':
            printf("Enter 1st number: ");
            scanf(" %le", &a );
            printf("Enter 2nd number: ");
            scanf(" %le", &b );
            Arith(a,b);
            break;
        case 'T':
        case 't':
            printf("Enter value in degrees: ");
            scanf(" %lf", &a);
            Trig(a);
            break;
        default:
            break;
        }
    }


    return 0;
}

void Arith(int a, int b) {
    char operation;
    while (1) {
        printf("Choose operation\n");
        printf("+,-,*,/,%%,^, E to exit\n");
        scanf(" %c", &operation);
        
        if (operation == 'E' || operation == 'e') {
            break;
        }

        switch (operation) {
            case '+':
                printf("Answer: %i\n", a + b);
                break;
            case '-':
                printf("Answer: %i\n", a - b);
                break;
            case '*':
                printf("Answer: %i\n", a * b);
                break;
            case '/':
                if (b != 0) {
                    printf("Answer: %f\n", (float)a / b);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case '%':
                printf("Answer: %f\n", ((float)a / b)*100);
                break;
            case '^':
                printf("Answer: %f\n", pow(a, b));
                break;
            default:
                printf("Invalid response\n");
                break;
        }
    }
   
}

void Trig(double a) {
    char operation[10];
    double val, ret;
    val = PI / 180.0;

    while (1) {
        printf("Choose operation\n");
        printf("sin, cos, tan, cosec, sec, cot, E for exit\n");
        scanf("%s", operation);

        if (strcmp(operation, "E") == 0 || strcmp(operation, "e") == 0) {
            break;
        }

        if (strcmp(operation, "sin") == 0) {
            ret = sin(a * val);
        } else if (strcmp(operation, "cos") == 0) {
            ret = cos(a * val);
        } else if (strcmp(operation, "tan") == 0) {
            ret = tan(a * val);
        } else if (strcmp(operation, "cosec") == 0) {
            ret = 1 / sin(a * val);
        } else if (strcmp(operation, "sec") == 0) {
            ret = 1 / cos(a * val);
        } else if (strcmp(operation, "cot") == 0) {
            ret = 1 / tan(a * val);
        } else {
            printf("Invalid Response\n");
            continue; 
        }

        printf("Answer: %f\n", ret);
    }
}


