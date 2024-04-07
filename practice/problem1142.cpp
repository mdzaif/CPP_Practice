#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, j = 1, c = 4;
    cin>>n;
    for(int i = 1; i <= n; i++){

        while(true){
            if(j == c){
                    c = c+4;
                    j++;
                cout<<"PUM\n";
                break;
            }
            else
                cout<<j<<" ";
                j++;
        }
    }
    return 0;
}
