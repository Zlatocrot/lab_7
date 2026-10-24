#include <stdio.h>
#include <locale.h>
#include <math.h>

int prac1(char c)
{
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
        printf("Это цифра\n");
        break;

    default:
        printf("Это буква\n");
        break;
    }
}

int prac2(float x, char c, float y)
{
    switch (c) 
    {
    case '+':
        printf("= %.6f\n", x + y);
        break;

    case '-':
        printf("= %.6f\n", x - y);
        break;

    case '*':
        printf("= %.6f\n", x * y);
        break;

    case '/':
        if (y == 0.0f) 
        {
            printf("Ошибка: деление на ноль!\n");
        }
        else 
        {
            printf("= %.6f\n", x / y);
        }
        break;

    case '^':
        printf("= %.6f\n", pow(x, y));
        break;

    default:
        printf("Ошибка: неизвестная операция '%c'!\n", c);
        break;
    }
}

int prac3(months)
{
    if (months < 0) 
    {
        printf("Ошибка: возраст не может быть отрицательным!\n");
    }

    else if (months <= 2) 
    {
        printf("Возрастная категория: новорожденный\n");
    }
    
    else if (months < 12) 
    {
        printf("Возрастная категория: младенец\n");
    }
    
    else if (months >= 12 && months < 36) 
    {
        printf("Возрастная категория: раннее детство\n");
    }
    
    else if (months >= 36 && months < 84) 
    {
        printf("Возрастная категория: дошкольник\n");
    }
    
    else if (months >= 84 && months < 156)
    {
        printf("Возрастная категория: школьник\n");
    }
    
    else if (months >= 156 && months <= 204) 
    {
        printf("Возрастная категория: подросток\n");
    }
    else
    {
        printf("Возрастная категория: старше 17 лет (или взрослый)\n");
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    printf("\nЗадание 1\n\n");
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    prac1(c);

    printf("\nЗадание 2\n\n");
    float x, y;
    char cc;
    printf("Введите выражение в формате (например: 5+3 или 2^3): ");
    scanf("%f %c %f", &x, &cc, &y);
    prac2(x, cc, y);

    printf("\nЗадание 3\n\n");
    int months;
    printf("Введите возраст ребенка в месяцах: ");
    scanf("%d", &months);
    prac3(months);

    return 0;
}