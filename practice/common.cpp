#include<bits/stdc++.h>
using namespace std;

int fin(int a[]){
    for(int i = 0; i<4; )
}

int main()
{
    int n;
    cin>>n;
    int s = 1000, t = n, p = 0;
    for(int i = 0; i < 4; ++i){
        n = n/s;
        a[i] = n;
        if(p != n){
            cout<<n;
        }
        n = t-(n*s);
        t = n;
        s = s/10;

    }
    return 0;
}
