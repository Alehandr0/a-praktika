#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define L 26
// Далее константа равнвна значению ASCII первого символа алфавита, так как в метка-1 используется функция toupper()
#define Bascii 65

// Прототип
char caesar(int b, int key);

int main(int n, char* w[])
{

    if (n != 2)
    {
        printf("Запуск программы должен быть с параметром. К примеру, как в кавычках \"./vigenere WELCOME\"\n");
        return 1;
    }

    int len_key = strlen(w[1]) - 1;
    int key_arr[len_key];
    printf("%s ,  len_key = %i Проверим, чтоб в ключе были только буквы.\n", w[1], len_key);

// Проверим, чтоб в ключе были только буквы
    for(int i = 0; i <= len_key; i++)
    {
// Далее проверяется каждая буква ключа и только если все символы буквы - ключ будет считаться действительным
        if (!isalpha(w[1][i]))
        {
            printf("Запуск программы должен быть с обязательным параметром в виде строки. К примеру, как в кавычках \"./vigenere TEXT\"\n");
            return 1;
        }
        w[1][i] = /* метка-1 */toupper(w[1][i]);
        key_arr[i] = w[1][i] - Bascii;

        printf("%i ", key_arr[i]);
    }
    printf("\n");

    string s = GetString();
    if (s == NULL) return 1;

    int next=0;
    for(int i = 0, a = strlen(s); i < a; i++)
    {
        if (isalpha(s[i]))
        {
            s[i] = caesar(s[i], key_arr[next]);
            next++; if (next > len_key) next = 0;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

// Эта функция получает букву и ключ и возвращает закодированную букву
char caesar(int b, int key)
{
    int dop=90;
    if (islower(b)) dop=122;
    b = b + key;
    if (b > dop) b -= 26;
    return b;
}
/**
Результат автоматической проверки:
check50 2014.fall.pset2.vigenere vigenere.c
находится по адресу:
https://sandbox.cs50.net/checks/af9edaec62644d31b279cbb225126a87
*/
