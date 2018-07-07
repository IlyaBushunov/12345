#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");

    int* arr;
    int size;
    cout << "¬ведите размер массива" << endl;
    cin >> size;

    arr = new int[size];
    cout << "¬ведите числовую последовательность" << endl;
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    int num;
    cout << "¬ведите число, которое хотите найти" << endl;
    cin >> num;

    int lind = -1;
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            if(lind == -1)
                cout << "Ёлемент найден по индексу: " << i + 1;
            else
                cout << ", " << i + 1;

            lind = i;
        }
    }

    if(lind == -1)
        cout << "Ёлемент не найден";

    delete[] arr;
    return 0;
}
