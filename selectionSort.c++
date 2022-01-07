#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{

    int a[6] = {40, 20, 60, 20, 50, 30};

    printArray(a, 6);
    cout << endl;
    selectionSort(a, 6);
    printArray(a, 6);

    return 0;
}