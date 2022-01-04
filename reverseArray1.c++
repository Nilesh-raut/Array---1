#include <iostream>
using namespace std;

void reverseArray(int array[], int size)
{
    int start = 0, last = size - 1;
    while (start <= last)
    {
        swap(array[start], array[last]);
        start++;
        last--;
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
    int array1[5] = {12, 24, 36, 48, 60};
    int array2[6] = {16, 32, 48, 64, 80, 96};

    cout << "The array is ";
    printArray(array1, 5);
    cout << "\nThe reverse array is ";
    reverseArray(array1, 5);
    printArray(array1, 5);

    cout << "\nThe next array is ";
    printArray(array2, 6);
    cout << "\nThe reverse array is ";
    reverseArray(array2, 6);
    printArray(array2, 6);

    return 0;
}