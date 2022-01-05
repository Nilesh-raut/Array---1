#include <iostream>
using namespace std;

void swapAlternate(int array[], int n)
{
    int i = 0;
    while (i + 1 < n)
    {
        swap(array[i], array[i + 1]);
        i = i + 2;
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

    int array1[7] = {16, 32, 48, 64, 80, 96, 112};
    int array2[8] = {5,10,15,20,25,30,35,40};

    cout << "The swap alternate array is ";
    swapAlternate(array1, 7);
    printArray(array1, 7);


    cout<<endl;
    cout << "The swap alternate array is ";
    swapAlternate(array2, 8);
    printArray(array2, 8);
    return 0;
}