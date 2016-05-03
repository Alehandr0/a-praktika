#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Получаем от пользователя параметр равный количеству строк
    int stroka;
    do
    {
        printf("Height ");
        stroka = GetInt(); 
    }
    while ( stroka < 0 || stroka > 23 );

// Умножаем количество строк на два. Это и будет число итераций
    for ( int j = 0; j < 2 * stroka; j++)
    {
// Определяем n которая с каждым значением j будет то равна то 0, то 1
        int n = j / 2, simbols = n;
        n = j % 2;
        string znak;

// Определяем символ для печати и сколько раз его печатать
        if ( n == 0 )
        {
            znak = " ";
            simbols = stroka - simbols - 1;
        }
        else
        {
            znak = "#";
            simbols += 2;
        }

// Этот цикл печатает символы
        for ( int i = 0; i < simbols; i++)
        {
            printf("%s", znak);
        }

// Если выполняется это условие, то ставим знак перехода на новую строку
        if ( n == 1 )
        {
            printf("\n");
        }
    }
}
/**
* Результат автоматической проверки находится по адресу:
* https://sandbox.cs50.net/checks/d61bb7264ea94751829ca7acede38019
* 
*/
