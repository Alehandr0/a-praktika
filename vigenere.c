#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Прототип
char caesar(int b, int key);

int main(int n, char* w[])
{

    if (n != 2)
    {
        printf("Запуск программы должен быть с параметром. К примеру, как в кавычках \"./vigenere WELCOME\"\n");
        return 1;
    }

    int len_key = strlen(w[1]);
    int key_arr[len_key - 1];

// Далее проверяется каждая буква ключа и только если все символы являются буквами - ключ будет считаться действительным
    for(int i = 0; i < len_key; i++)
    {
        if (!isalpha(w[1][i]))
        {
            printf("Запуск программы должен быть с обязательным параметром в виде строки. К примеру, как в кавычках \"./vigenere TEXT\"\n");
            return 1;
        }
        w[1][i] = toupper(w[1][i]);
        key_arr[i] = w[1][i] - 65;
    }

// Пользовательский ввод с проверкой
    string s = GetString();
    if (s == NULL) return 1;

// Здесь проходит разделение фразы пользоательского ввода на отдельные символы, для кодировки
    int next=0;
    for(int i = 0, a = strlen(s); i < a; i++)
    {
        if (isalpha(s[i]))
        {
            next %= len_key;
            s[i] = caesar(s[i], key_arr[next]);
            next++;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

// Эта функция получает букву и ключ и возвращает закодированную букву
char caesar(int b, int key)
{
    int dop = 90;
    if (islower(b)) dop = 122;
    b = b + key;
    if (b > dop) b -= 26;
    return b;
}
/**
Результат автоматической проверки:
check50 2014.fall.pset2.vigenere vigenere.c
находится по адресу:
https://sandbox.cs50.net/checks/951c39f4ab80456d893ad5a13571cb47
*/
