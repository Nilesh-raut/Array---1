#include <iostream>
using namespace std;

bool LinearSearch(int array1[], int size, int key)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (key == array1[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key, i;
    bool b = 0;
    int array[5];

    cout << "Please enter the element" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    cout << "The array is ";
    for (i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\nPlease enter the number for search " << endl;
    cin >> key;

    bool found = LinearSearch(array, 5, key);

    if (found == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}