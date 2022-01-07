#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int duplicateArray(int a[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ a[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

    int a[6] = {5, 1, 2, 3, 4, 3};

    printArray(a, 6);

    int nilesh = duplicateArray(a, 6);

    cout<<endl << "The duplicate element is "  << nilesh << endl;

    return 0;
}