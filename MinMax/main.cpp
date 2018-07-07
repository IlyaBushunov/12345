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

    int min, max;
    min = max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }

    cout << "–езультат" << endl;
    cout << min << endl;
    cout << max;

    delete[] arr;
    return 0;
}
