#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if (n < m)
    {
        for (n = n + 1; n<m; n++)
        {
            if(n%5 == 2 || n%5 == 3)
            {
                cout<<n<<endl;
            }
        }
    }
    else if(n>m){

        for (m = m + 1; m<n; m++)
        {
            if(m%5 == 2 || m%5 == 3)
            {
                cout<<m<<endl;
            }
        }
    }
    return 0;
}
