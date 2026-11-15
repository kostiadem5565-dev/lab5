#include <iostream>
#include <clocale>

using namespace std; 

void del(int arr[8][8], int i0)
{
    for (int i = i0; i < 8; i ++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 7) arr[i][j] = 0; 
            else arr[i][j] = arr[i+1][j];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int s, a, b;
    
    int arr[8][8] = 
    {
        { 1,  2,  3,  4,  5,  6,  7,  8 },
        { 9, 10, 11, 12, 13, 14, 15, 16 },
        {17, 18, 19, 20, 21, 22, 23, 24 },
        {25, 26, 27, 28, 29, 30, 31, 32 },
        {33, 34, 35, 36, 37, 38, 39, 40 },
        {41, 42, 43, 44, 45, 46, 47, 48 },
        {49, 50, 51, 52, 53, 54, 55, 56 },
        {57, 58, 59, 60, 61, 62, 63, 64 }
    };

    cout << "Первоначальный массив: " << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) cout << arr[i][j] << ' ';
        cout << endl;
    }

    // Запрос строки для первого задания
    cout << "\nВведите индекс строки для удаления (s): ";
    cin >> s;

    del(arr, s);

    cout << "Преобразованный массив с удалением строки " << s << ":" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) cout << arr[i][j] << ' ';
        cout << endl;
    }

    // Запрос диапазона a и b для второго задания
    cout << "\nВведите диапазон строк для удаления от a до b (через пробел): ";
    cin >> a >> b;

    int count = b - a + 1;
        for (int k = 0; k < count; k++) del(arr, a);
        
    cout << "Преобразованный массив с удалением строк от " << a << " до " << b << ":" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}