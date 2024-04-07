#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n >= 10 && n<=99)
    {
        int n1 = n/10;
        int n2 = n -(n1*10);

        if(n1 == 0 || n2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else if(n1%n2 == 0 || n2%n1 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
