#include <math.h>
#include <cs50.h>
#include <stdio.h>

// Функция получает количество центов и возвращает количество монет
int coins(penny)
{
    int ostatok, monet=0;
    for (int i = 4; i > 0; i--)
    {
        int nominal;
        switch (i)
        {
            case 1: nominal = 1; break;     //  Один цент
            case 2: nominal = 5; break;
            case 3: nominal = 10; break;
            case 4: nominal = 25; break;
            case 5: nominal = 50; break;    //  Пятдесят центов
            case 6: nominal = 100; break;   //  Один доллар
            case 7: nominal = 200; break;   //  Два доллара
            case 8: nominal = 500; break;   //  Пять долларов
        }
     
        ostatok = penny % nominal;
        monet += (penny - ostatok) / nominal;
        penny = ostatok;
    }
    return monet;
}

int main(void)
{
// Получаем от пользователя параметр количества сдачи
    float money;
    int penny;
    do
    {
        printf("How much change is owed? ");
        money = GetFloat() * 10000.000;
        penny = floor(floor(money) / 100);
    }
    while (penny < 1);

    printf("%i\n", coins(penny));
}
/**
* Результат автоматической проверки находится по адресу:
* https://sandbox.cs50.net/checks/e45bc3db9b424b80a548964ba9ca28c3
* 
*/
