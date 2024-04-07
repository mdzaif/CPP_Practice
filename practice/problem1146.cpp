#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    while(1){
        cin>>n;
        if(n > 0){
        for(int i = 1; i <= n; i++){
            if(i < n){
                cout<<i<<" ";
            }
            else if (i ==n){
                cout<<i<<endl;
                break;
                }
            }
        }
        else if(n == 0){
        break;
        }
    }

    return 0;
}



