#include <stdio.h>

int main() {
    int a, b, sum;
    
    printf("Введіть перше число: ");
    scanf("%d", &a);
    
    printf("Введіть друге число: ");
    scanf("%d", &b);
    
    sum = a + b;
    
    printf("Результат: %d + %d = %d\n", a, b, sum);
    
    return 0;
}

