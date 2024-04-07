#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, al = 0, gas = 0, di = 0;
    while(true){
        cin>>n;
    if(n >= 1 && n<=4){
        if (n == 4){
            break;
        }
        else
        {
            if (n == 1){
                al++;
            }
            else if(n == 2){
                gas++;
            }
            else if(n == 3){
                di++;
            }
        }
    }
    }
    cout<<"MUITO OBRIGADO\n"<<"Alcool: "<<al<<"\n"<<"Gasolina: "<<gas<<"\n"<<"Diesel: "<<di<<endl;

    return 0;
}
