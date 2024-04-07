#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  c, n, j = 1;
    cin>>c>>n;

    for(int i = 1; i <= (n/c); i++){
        int c1 = 1;
        while(true){
                cout<<j<<" ";
                j++;
                c1++;
            if(c == c1)
            {
                cout<<j<<endl;
                j++;
                break;
            }

        }
    }
    return 0;
}


