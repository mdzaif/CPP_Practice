#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i, j, temp1, temp2;
    float avgwt= 0, avgtat= 0;
    cout<<"Enter the number of process: ";
    cin>>n;
    cout<<"Enter the process numbers: ";
    int p[n], bt[n], wt[n], tat[n];
    wt[0] = 0;
    i = 0;
    while(i < n){
        cin>>p[i];
        i++;
    }
    cout<<"Enter the burst time: ";
    i = 0;
    while(i < n)
    {
        cin>>bt[i];
        i++;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            if(bt[i]< bt[j]){
                temp1 = bt[i];
                bt[i] = bt[j];
                bt[j] = temp1;

                temp2 = p[i];
                p[i] = p[j];
                p[j] = temp2;

            }
        }
    }
    i = 1;
    while(i < n)
    {
        wt[i]= wt[i-1]+bt[i-1];
        i++;
    }
    i = 0;
    while(i < n)
    {
        tat[i]= wt[i]+bt[i];
        i++;
    }
    cout<<endl;
    cout<<"Process   Burst Time  Waiting Time  Turn Around Time\n";
    i = 0;
    while(i < n)
    {
        cout<<"   "<<p[i]<<"\t     "<<bt[i]<<"\t\t "<<wt[i]<<"\t\t "<<tat[i]<<endl;
        i++;
    }
    i = 0;
    while(i < n)
    {
        avgwt = avgwt + wt[i];
        avgtat = avgtat + tat[i];
        i++;
    }
    cout<<endl;
    cout<<"Average Waiting Time: "<<fixed<<setprecision(2)<<avgwt/n<<endl;
    cout<<"Average Turn Around Time: "<<avgtat/n<<endl;
    return 0;
}
