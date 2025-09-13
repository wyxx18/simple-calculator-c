#include <stdio.h>

int main() {
    float a, b;
    char op;
    
    scanf("%f %c %f", &a, &op, &b);
    
    if (op == '+') printf("%.1f\n", a + b);
    if (op == '-') printf("%.1f\n", a - b);
    if (op == '*') printf("%.1f\n", a * b);
    if (op == '/') printf("%.1f\n", a / b);
    
    return 0;
}

