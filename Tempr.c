#include <stdio.h>
#include <conio.h>

//Проект номер один 
int main()
{
    //где f - фаренгейты, c -  цельсии
    float f, c;
    //нижняя границы таблицы
    int min = 0;
    //верхняя граница таблицы
    int max = 300;
    //шаг таблицы
    int step = 20;

    f = min;
    printf("Faringates ---> Celsius: \n\n");
    while (f <= max)
    {
        c = 5 * (f - 32) / 9;
        printf("Faringates: \tCelsius: \n");
        printf("%.0f\t\t%.2f\n\n", f, c);
        f += step;
    }

    printf("Celsius ---> Faringates: \n\n");
    c = -17;
    while (c <= 148)
    {
        f = (c * 1.8) + 32;
        printf("Celsius: \tFaringates: \n");
        printf("%.0f\t\t%.2f\n\n", c, f);
        c++;
    }
    getch();
    return 0;
}
