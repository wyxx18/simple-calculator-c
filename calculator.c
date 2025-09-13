#include <stdio.h>

int main() {
    float a, b, result;
    char operation;
    
    printf("Простий калькулятор\n");
    printf("Введіть перше число: ");
    scanf("%f", &a);
    
    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &operation);
    
    printf("Введіть друге число: ");
    scanf("%f", &b);
    
    if (operation == '+') {
        result = a + b;
        printf("%.2f + %.2f = %.2f\n", a, b, result);
    }
    else if (operation == '-') {
        result = a - b;
        printf("%.2f - %.2f = %.2f\n", a, b, result);
    }
    else if (operation == '*') {
        result = a * b;
        printf("%.2f * %.2f = %.2f\n", a, b, result);
    }
    else if (operation == '/') {
        if (b != 0) {
            result = a / b;
            printf("%.2f / %.2f = %.2f\n", a, b, result);
        }
        else {
            printf("Помилка: ділення на нуль!\n");
        }
    }
    else {
        printf("Помилка: невідома операція!\n");
    }
    
    return 0;
}

