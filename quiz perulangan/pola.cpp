#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int temp=m;
    int arr[n];
    for (int i=1; i<=n; i++)
    {
        if (temp==i)
        {
            cout << "* "; temp=temp+m;
            continue;
        }
        cout << i << " ";
    }
}