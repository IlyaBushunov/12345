#include <iostream>

using namespace std;

void BubbleSort(int* arr, const int size, const int a = 1);
void MyBubbleSort (int* arr, const int size);

int main()
{
    int arr[7] = {5, 4, 3, 5, 6, 2, 9};
    BubbleSort(arr, 7);

    return 0;
}

void BubbleSort(int* arr, const int size, const int flag)
{
    for(int i = 0; i < size; i++) // ������� ����
    {
        for(int j = 0; j < size; j++) // ����, ������� �������� �� �������
            cout << arr[j] << " ";    // � ������� �������� �� �����

        for(int j = 0; j < size - 1; j++) // ����, ������� �������� �� �������
        {
            if(flag * arr[j] > flag * arr[j+1]) // ������� ����������. ����������� ����������
            {
                int temp = arr[j]; // ���������� �������� ����������
                arr[j] = arr[j+1]; // ������ �������� ��������� ��������
                arr[j+1] = temp;   // ������������ ��������� �������� ������������ ��������
            }
        }

        cout << endl; // ������� �� ����� ������
    }
}
void MyBubbleSort (int* arr, const int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j < size - 1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
