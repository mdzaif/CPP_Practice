//#include<iostream>
//#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    float avgwt = 0, avgtat = 0;
    cout<<"Number of process: ";
    cin>>r;
    int bt[r], wt[r], tat[r];
    int i;
    wt[0] = 0;
    for(i = 0; i < r; i++)
    {
        cout<<"Process"<<"["<<i+1<<"]: ";
        cin>>bt[i];
    }
    cout<<"Brust Time: ";
    for(i = 0; i < r; i++)
    {
        cout<<bt[i]<<" ";
    }
    for(i = 1; i < r; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
    }
    cout<<"\nWaiting Time: ";
    for(i = 0; i < r; i++)
    {
        cout<<wt[i]<<" ";
    }
    for(i = 0; i < r; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
    cout<<"\nTurn Around Time: ";
    for(i = 0; i < r; i++)
    {
        cout<<tat[i]<<" ";
    }
    for(i = 0; i < r; i++)
    {
        avgwt = avgwt + wt[i];
    }
    for(i = 0; i < r; i++)
    {
        avgtat = avgtat + tat[i];
    }
    avgwt = avgwt / (float)r;
    avgtat = avgtat / (float)r;
    cout<<"\nAvg. of waiting time: "<<fixed<<setprecision(3)<<avgwt<<endl;
    cout<<"Avg. of turn around time: "<<avgtat<<endl;
    return 0;
}
