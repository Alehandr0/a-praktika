#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char letter(int b, int key)
{
    int dop=90;
    if (islower(b))
        dop=122;
        
    b = b + key;
    if (b > dop)
        b -= 26;
    return b;
}

int main(int n, char* ar[])
{
    if (n != 2)
    {
        printf("Запуск программы должен быть с параметром. К примеру, как в кавычках \"./caesar 71\"\n");
        return 1;
    }
    int key = 0, a = strlen(ar[1]);
    for (int i = a - 1; i >= 0; i--)
    {
        char pr = ar[1][i];
        if (isdigit(pr))
        {
            key += pow(10, a - i - 1) * (ar[1][i] - 48);
        }
        else
        {
            key = 0;
            break;
        }
    }
    key = key % 26;
    printf("Ключ = %i\n", key);
    
    
   
    string s = GetString();
    if (s != NULL)
    {
       for(int i = 0, phrase = strlen(s); i < phrase; i++)
        {
        if (isalpha(s[i]))
            s[i] = letter(s[i], key);

        printf("%c", s[i]);
        }
        printf("\n");
    }
}
