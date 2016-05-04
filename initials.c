#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Эта функция проверяет закодирована ли загланая английская буква числовым аргументом в соответствии с ASCII
bool IsCapital(int n)
{
    if (n >= 'A' && n <= 'Z')
        return 1;
    else
        return 0;
}

// Эта функция ведёт поиск начала слова и печатает первую букву в верхнем регистре
void PrintFirst(in, in0)
{
    in = toupper(in);
    in0 = toupper(in0);
    if (IsCapital(in0) && !IsCapital(in))
    {
        printf("%c", in0);
    }
}

int main(void)
{
    string s = GetString();
    if (s != NULL)
    {
        
        for(int i = 0, a = strlen(s); i < a; i++)
        {
            PrintFirst(s[i-1], s[i]);
        }
        printf("\n");
    }
}
/**
* Результат автоматической проверки находится по адресу:
* https://sandbox.cs50.net/checks/f8d51792e6eb4b5eb0ce52344a5553a7
* 
*/
