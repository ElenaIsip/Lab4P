#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
    
        char c = '!';
        int i = 2;
        float f = 3.14f;
        double d = 5e-12;

        printf("Введите символ: ");
        scanf(" %c", &c);

        printf("Введите целое число: ");
        scanf("%d", &i);

        printf("Введите вещественное число: ");
        scanf("%f", &f);

        printf("Введите число double: ");
        scanf("%lf", &d);

        printf("c = %c, i = %d, f = %f, d = %e\n", c, i, f, d);
        printf("Целая часть f: %d\n", (int)f);
        printf("Дробная часть f: %f\n", f - (int)f);
        printf("Код символа: %d, шестнадцатеричный: %X\n",c, c);

        if (i != 0)
            printf("1 / i = %f\n", 1.0 / i);
        else
            printf("На ноль делить нельзя.\n");

        return 0;
    }