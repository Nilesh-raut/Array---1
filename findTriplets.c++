#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 1, 2, 3};
    int k = 6;

    bool check1 = 0;
    bool check2 = 0;
    bool check3 = 0;
    // cout<<"hi";

    for (int i = 0; i < 6; i++)
    {
        // cout<<"81";
        for (int j = i + 1; j < 6; j++)
        {
            // cout<<"08";
            for (int m = j + 1; m < 6; m++)
            {
                // cout<<"46";

                if (check1 == 1)
                {
                    break;
                }

                if (arr[i] + arr[j] + arr[m] == k)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[m] << " ";
                    check1++;
                    check2++;
                    check3++;
                }
            }

            if (check2 == 1)
            {
                break;
            }
        }

        if (check3 == 1)
        {
            break;
        }
    }

    return 0;
}