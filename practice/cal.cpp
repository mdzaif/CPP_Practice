/*#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t = 1;

    cin >> t;

    while (t--)
    {
        long long int n,ct=0;
        cin >>n;
        long long int x=1;
        while((x<<1)-1<=n){
            x=(x<<1);
            // cout<<x<<"\n";
            ct++;
        }
        cout<<ct;

        cout << "\n";
    }
}*/

/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m;
    cin>>m;
    for(int i=1;i<m;i++){
        for(int j=i;j<m;j++)cout<<" ";
        for(int p=1;p<=i;p++)cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=2*m;i++)cout<<"*";
    cout<<"\n";
    for(int i=1;i<=2*m;i++)cout<<"*";
    cout<<"\n";
    for(int i=1;i<m;i++){
        for(int j=1;j<=i;j++)cout<<" ";
        for(int p=i;p<m;p++)cout<<"*";
        cout<<"\n";
    }


    return 0;
}*/
#include<bits/stdc++.h>
//bablu
using namespace std;

int main()
{
    int t, i, x;
    char c;
    cin>>t;
    if (t>=1 && t<=101){
    for(i = 1; i<=t; i++){
        cin>>x;
        cin>>c;
        if(x < 60){
            x = 60 - x;
            x = x + 40;
            x = x + 60;
            cout<<x<<" minutes"<<endl;
        }
        else if(x >= 60 && x < 80)
        {
            x = (80 - x) * 2;
            x = x + 60;
            cout<<x<<" minutes"<<endl;
        }
        else if(x >= 80&& x < 100){
            x = (100 - x) * 3;
            cout<<x<<" minutes"<<endl;
        }
        else{
            cout<<"0 minutes"<<endl;
        }
    }
    }
    return 0;
}
