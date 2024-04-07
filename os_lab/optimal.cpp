#include<bits/stdc++.h>
using namespace std;
int distance(int frame[],int ref[],int i) {
		int pos=0,j,k, s = sizeof(frame)/sizeof(frame[0]), rs = sizeof(ref)/sizeof(ref[0]);
		int dist[s];
		for(j=0;j<s;j++) {
			for(k=i;k<rs;k++) {
				if(frame[j]==ref[k]) {
					dist[j]=k;
					break;
				}

			}
			dist[j]=k;
		}

		for(j=1;j<s;j++) {
			if(dist[pos]<dist[j]) {
				pos=j;
			}
		}
		return pos;
	}
	bool check(int frame[],int rs) {
		int i, s = sizeof(frame)/sizeof(frame[0]);
		for(i=0;i<s;i++) {
			if(frame[i]==rs)
				return true;
		}
		return false;
	}

	int main(){
		int ref[]= {7,0,1,2,0,3,0,4,2,3,0,3,0,3,2,1,2,0,1,7,0,1};
		int nF, rf = sizeof(ref)/sizeof(ref[0]);
		cin>>nF;
		int vd[nF][rf];
		int i,frame[nF];
		for(i=0;i<nF;i++) {
			frame[i]=-1;
		}
		int pf=0;
		int a;
		for(int l=0;l<nF;l++)
		{
			if(check(frame, ref[l])==false&&frame[l]==-1) {

				frame[l]=ref[l];
				pf++;
			}
			for(int p=0;p<nF;p++)
				vd[p][l]=frame[p];
		}
		for(i=nF;i<rf;i++) {
			if(check(frame, ref[i])!=true) {
				frame[distance(frame,ref,i)]=ref[i];
				pf++;
				for( a=0;a<nF;a++)
					vd[a][i]=frame[a];
			}

			for( a=0;a<nF;a++)
				vd[a][i]=frame[a];
		}
		cout<<"Total Page Fault "<<pf<<endl;
		for(i=0;i<rf;i++)
			cout<<ref[i]<<" ";
		cout<<endl;
		for(a=0;a<nF;a++) {
			for(i=0;i<rf;i++) {
				cout<<vd[a][i]<<" ";
            }
            cout<<endl;
		}

	}
