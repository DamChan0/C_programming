#include <stdio.h>

double Add(double num1, double num2)
{
    return num1 + num2;
}

double Sub(double num1, double num2)
{
    return num1 - num2;
}

double Mul(double num1, double num2)
{
    return num1 * num2;
}

double Div(double num1, double num2)
{
    return num1 / num2;
}

double Calculator(double num1, double num2, double (*func)(double, double))
{
    return func(num1, num2);
}

int main(void)
{
    double (*calc)(double, double) = NULL; // 함수 포인터 선언
    double num1 = 3, num2 = 4, result = 0;
    char oper = '+';

    switch (oper)
    {\
    case '+':
        calc = Add;
        break;
    case '-':
        calc = Sub;
        break;
    case '*':
        calc = Mul;
        break;
    case '/':
        calc = Div;
        break;
    default:
        printf("사칙연산(+, -, *, /)만을 지원합니다.");
        break;
    }

    result = Calculator(
         num1, num2, calc);
    printf("result = %f\n", result);

    return 0;
}
