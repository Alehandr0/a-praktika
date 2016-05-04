#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Эта функция ведёт поиск начала слова и печатает первую букву в верхнем регистре
void PrintFirst(in, in0)
{
    if (isalpha(in0) && !isalpha(in))
    {
        printf("%c", toupper(in0));
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
