#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, p;
    cin>>n;
    t = n;
    n = n + (n - 1);
    int a[n][n];
    p = n;
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            a[i][j] = t;
        }
    }
    p = p -1;
    for(i = 1; i < p; i++)
    {

        for(j = 1; j < p; j++)
        {
            a[i][j] = t-1;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
           cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
