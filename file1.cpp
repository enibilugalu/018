#include <iostream>
using namespace std;

void sort(char word[], int length) 
{

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (word[i] > word[j])
            {
                char x = word[i];
                word[i] = word[j];
                word[j] = x;
            }
        }
    }
}

void under(const char word[], int length) 
{
    for (int i = 0; i < length; i++) 
    {
        if (word[i] >= 'a' && word[i] <= 'z') 
        {
            cout << word[i];
        }
    }

    for (int i = 0; i < length; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            cout << word[i];
        }
    }
}

int main() 
{
    setlocale(LC_ALL, "rus");
    char word[256];

    cout << "Введите слово: ";
    cin >> word;

    int length = 0;
    while (word[length] != '\0') 
    {
        length++;
    }

    sort(word, length);

    cout << "Отсортированное слово: ";

    under(word, length);
    return 0;
}