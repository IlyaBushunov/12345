#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");

    int* arr;
    int size;
    cout << "������� ������ �������" << endl;
    cin >> size;

    arr = new int[size];
    cout << "������� �������� ������������������" << endl;
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    int num;
    cout << "������� �����, ������� ������ �����" << endl;
    cin >> num;

    int lind = -1;
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
        {
            if(lind == -1)
                cout << "������� ������ �� �������: " << i + 1;
            else
                cout << ", " << i + 1;

            lind = i;
        }
    }

    if(lind == -1)
        cout << "������� �� ������";

    delete[] arr;
    return 0;
}
