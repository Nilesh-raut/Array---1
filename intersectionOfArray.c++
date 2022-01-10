#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cout << "Please enter the value of m " << endl;
    cin >> m;

    cout << "Please enter the value of m " << endl;
    cin >> n;

    int arr1[m];
    int arr2[n];

    cout << "Please enter value in array " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }

    int min_num = -13000000;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i];
                arr2[j] = min_num;
                break;
            }
        }
    }
    return 0;
}