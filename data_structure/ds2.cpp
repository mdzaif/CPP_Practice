#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t>0)
    {
        int c = 0;
        cin>>n;
        int a[n];
        int a1[n];
        int i = 1, item;
        while(i<=n)
        {
            cin>>a[i];
            i++;
        }
        cin>>item;
        i = 1;
        int j = 1;
        while(i <= n)
        {
            if(a[i] == item)
            {
                a1[j] = i;
                j++;
                c++;
            }
            i++;
        }
        cout<<"Frequency: "<<c<<endl;
        n = c;
        j = 1;
        cout<<"Location:";
        while(j<=n)
        {
            cout<<" "<<a1[j];
            j++;
        }
        cout<<endl;
        t--;
    }
    return 0;
}
