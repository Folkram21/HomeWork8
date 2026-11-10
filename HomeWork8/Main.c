#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int N;
    double sum = 0.0;
    int sign = 1;

    // ввод N
    printf("Введите N (N < 10): ");
    scanf("%d", &N);

    printf("Значение знакопеременного выражения = ");

    // цикл от 1 до N
    for (int i = 1; i <= N; i++) {

        // умножаем полученное число на текущий знак и прибавляем к сумме
        sum += sign * (1.0 + i / 10.0);

        // меняем знак на противоположный
        sign = -sign;
    }

    printf("%.2f\n", sum);

    return 0;
}
