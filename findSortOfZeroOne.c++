#include <iostream>
using namespace std;

int shortZeroOneArray(int a[], int size)
{

    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (a[i] == 1 && a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }

        if (a[i] == 0)
        {
            i++;
        }
        if (a[j] == 1)
        {
            j--;
        }
    }
      return a[size];
}

   
int main()
{

    int a[6] = {0, 0, 1, 0, 1, 0};
    shortZeroOneArray(a, 6);

   for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}