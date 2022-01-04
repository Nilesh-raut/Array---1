#include <iostream>
using namespace std;
int main()
{
    int nilesh[5];
    int sum = 0;
    int i;
    cout << "Enter the number in array " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> nilesh[i];
    }
    cout << "The array is ";
    for (i = 0; i < 5; i++)
    {
        cout << nilesh[i] << " ";
        sum = sum + nilesh[i];
    }
    cout << endl;
    cout << "The sum is " <<sum;
    return 0;
}