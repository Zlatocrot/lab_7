#include <stdio.h>
#include <locale.h>
#include <math.h>

int prac1_2(char c)
{
    int a;
    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        a = 1;
        break;
    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я'))
        {
            a = 2;
        }
        else
        {
            a = 3;
        }
    }
    return a;
}

int prac2(float x, char c, float y)
{
    int a;
    switch (c) 
    {
    case '+':
        a = 1;
        break;

    case '-':
        a = 2;
        break;

    case '*':
        a = 3;
        break;

    case '/':
        if (y == 0.0f) 
        {
            a = 4;
        }
        else 
        {
            a = 5;
        }
        break;

    case '^':
        a = 6;
        break;

    default:
        a = 7;
        break;
    }
    return a;
}

int prac3(int months)
{
    int a;
    if (months < 0) 
    {
        a = 1;
    }

    if (months >= 0 && months < 2) 
    {
        a = 2;
    }

    int year = months / 12;
    switch (year)
    {
    case 0:
        a = 3;
        break;
    case 1:
    case 2:
        a = 4;
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        a = 5;
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        a = 6;
        break;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        a = 7;
        break;
    default:
        a = 8;
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char c;
    float x, y;
    printf("\nЗадание 1_2\n\n");
    printf("Введите символ: ");
    scanf("%c", &c);
    switch (prac1_2(c))
    {
    case 1:
        printf("Это цифра\n");
        break;

    case 2:
        printf("Это буква\n");
        break;

    case 3:
        printf("Это не цифра и не буква\n");
        break;
    }

    printf("\nЗадание 2\n\n");
    char cc;
    printf("Введите выражение в формате (например: 5+3 или 2^3): ");
    scanf("%f %c %f", &x, &cc, &y);
    switch (prac2(x, cc, y))
    {
    case 1:
        printf("= %.6f\n", x + y);
        break;

    case 2:
        printf("= %.6f\n", x - y);
        break;

    case 3:
        printf("= %.6f\n", x * y);
        break;
    case 4:
        printf("Ошибка: деление на ноль!\n");
        break;
    case 5:
        printf("= %.6f\n", x / y);
        break;
    case 6:
        printf("= %.6f\n", pow(x, y));
        break;
    case 7:
        printf("Ошибка: неизвестная операция %c!\n", c);
        break;
    }


    printf("\nЗадание 3\n\n");

    int months;
    printf("Введите возраст ребенка в месяцах: ");
    scanf("%d", &months);
    switch (prac3(months))
    {
    case 1:
        printf("Ошибка\n");
        break;
    case 2:
        printf("Новорождённый\n");
        break;
    case 3:
        printf("Младенец\n");
        break;
    case 4:
        printf("Раннее детство\n");
        break;
    case 5:
        printf("Дошкольник\n");
        break;
    case 6:
        printf("Школьник\n");
        break;
    case 7:
        printf("Подросток\n");
        break;
    case 8:
        printf("Взрослый\n");
        break;
    }
    return 0;
}