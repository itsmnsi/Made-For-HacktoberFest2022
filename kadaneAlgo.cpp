#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[] = {1, 8, -5, 13, -10, 8};
    int n = sizeof(a) / sizeof(int);
    int sum = 0;
    int ans = INT_MIN;
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (ans < sum)
        {
            ans = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << ans;
}