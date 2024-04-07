#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,n,temp,temp1,temp2,twt=0,ttt=0;

     cout<<"Enter the number of process: ";
     cin>>n;
     int p[n], bt[n], wt[n], tt[n], pri[n];
     cout<<"Enter the process no: ";
     for(i = 0; i < n; i++){
        cin>>p[i];
     }
     cout<<"Enter Burst time: "<<endl;

     for(i=0;i<n;i++){
		cin>>bt[i];
    }
    cout<<"Enter Priority Time:"<<endl;
    for(i=0;i<n;i++){
		cin>>pri[i];
    }

    //sort according to burst time with process numbers.
    for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(pri[i]<pri[j]){
				temp=pri[i];
				pri[i]=pri[j];
				pri[j]=temp;

				temp1=bt[i];
				bt[i]=bt[j];
				bt[j]=temp1;

				temp2=p[i];
				p[i]=p[j];
				p[j]=temp2;
			}
		}
    }

    wt[0]=0;
    for(i=1;i<n;i++){
		wt[i]=wt[i-1]+bt[i-1];

    }
    //calculate the turn around time & total of wt and total of tt.
    for(i=0;i<n;i++){
		tt[i]=wt[i]+bt[i];
		ttt=ttt+tt[i];

		twt=twt+wt[i];
    }
    printf("\nProcess\t Brust_time\tPriority\tWaiting_time\t  Turn_Around_time\n");
    for(i=0;i<n;i++)
		printf("  P%d\t     %d\t\t   %d\t\t     %d\t\t\t%d\n",p[i],bt[i],pri[i],wt[i],tt[i]);
	printf("\nAverage waiting time: %.2f\n",(float)twt/n);
	printf("Average turnaround time: %.2f\n",(float)ttt/n);
	return 0;

}

