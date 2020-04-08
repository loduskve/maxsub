#include <iostream>

using namespace std;

int getmax(int* arr, int N)
{
    int max1, max2, i;
    for (i = 0, max1 = 0, max2 = 0; i < N; i++)
    {
        max1 += arr[i];
        if (max2 < max1)
        {
            max2 = max1;
        }
        if (max1 < 0)
        {
            max1 = 0;
        }
    }
    if (max2 < 0)
    {
        return 0;
    }
    else
        return max2;
}
int main()
{
    int count, * arr, sum = 3;
    while (sum != 0)
    {
        cin >> count;
        arr = new int[count];
        int i, max1, max2, k;
        for (i = 0, k = -1; i < count; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
            {
                k = 1;
            }
        }
        if (k == 1)
        {
            cout << getmax(arr, count) << endl << endl << endl;
        }
        else
        {
            cout << endl << 0 << endl;
        }
        sum--;
    }
    return 0;
}