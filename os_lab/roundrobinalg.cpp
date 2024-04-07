#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, counter = 0, tq;
    float awt = 0, atat = 0;
    cout<<"Enter the number of processes: ";
    cin>>n;
    cout<<"Enter the time quantum: ";
    cin>>tq;
    int p[n], bt[n], bt1[n], wt[n], tat[n];
    cout<<"Enter the process number: ";
    int i = 0;
    while(i < n)
    {
        cin>>p[i];
        i++;
    }
    cout<<"Enter the brust time: ";
    i = 0;
   while(i < n)
   {
       cin>>bt[i];
       bt1[i] = bt[i];
       sum = sum + bt[i];
       i++;
   }
    while(counter != sum)
    {
        for(i = 0; i < n; i++)
        {

            if(bt[i] > tq)
            {
                bt[i] = bt[i] - tq;
                counter = counter + tq;
            }
            else if(bt[i] == 0)
            {
                continue;
            }
            else
            {
                counter = counter + bt[i];
                bt[i] = 0;
                tat[i] = counter;
            }
        }
    }

    i = 0;
    while(i < n)
    {
        wt[i] = tat[i] - bt1[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        i++;
    }
    cout<<endl;
    cout<<"Process   Burst Time  Waiting Time  Turn Around Time\n";
    for(i = 0; i < n; i++)
    {
        cout<<"   "<<p[i]<<"\t     "<<bt1[i]<<"\t\t "<<wt[i]<<"\t\t "<<tat[i]<<endl;
    }
    cout<<"\nTime quantum: "<<tq<<endl;
    cout<<"Average Waiting Time: "<<fixed<<setprecision(2)<<awt/n<<endl;
    cout<<"Average Turn Around Time: "<<atat/n<<endl;
    return 0;
}
