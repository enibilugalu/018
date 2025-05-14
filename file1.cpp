#include <iostream>
using namespace std;

void sort(char word[], int length) 
{
    for (int i = 0; i < length - 1; i++) 
    {
        for (int j = i + 1; j < length; j++) 
        {
            if (word[i] > word[j]) {
                char x = word[i];
                word[i] = word[j];
                word[j] = x;
            }
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

    cout << "Отсортированное слово: " << word << endl;

    return 0;
}