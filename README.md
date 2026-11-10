<h1>Домашнее задание по теме 8. Цикл с параметрами</>

<h2>Задача - Вычислите для целого N (N<10), заданного пользователем, значение
знакопеременного выражения: 1.1 – 1.2 + 1.3 –... (условный оператор не использовать).</h2>

<h2>Блок-схема:</h2>
<img width="270" height="500" alt="diagram (9)" src="https://github.com/user-attachments/assets/b301cfc7-9a35-4ff3-ab02-d79d0f769f10" />

<h2>Код:</h2>

```c
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

        // формируем число (1 + i/10.0 = 1.1, 1.2 и т.д.)
        double term = 1.0 + i / 10.0;

        // умножаем на текущий знак и прибавляем к сумме
        sum += sign * term;

        // меняем знак на противоположный
        sign = -sign;
    }

    printf("%.2f\n", sum);

    return 0;
}
```
