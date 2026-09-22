#include <stdio.h>

int main(void) {
    double a, b, res;
    char oper;

    printf("Введите пример в формате a + b: \n");

    scanf("%lf %c %lf", &a, &oper, &b);

    switch (oper)
    {
    case '+':
        res = a + b;
        break;
        
    case '-':
        res = a - b;
        break;
        
    case '*':
        res = a * b;
        break;
    
    case '/':
        if(b != 0){
            res = a / b;
        } else {
        printf("Деление на ноль невозможно.\n");
        return 1;
        } 
    break;
    
    default:
    printf("Неизвестный оператор.\n");
    return 1;
        break;
    }

    printf("%lf\n", res);

    return 0;
}