
#include<bits/stdc++.h>
using namespace std;
int distance(int L[]);
int check(int frame[],int rs);

	int main() {
		int ref[] = {7,0,1,2,0,3,0,4,2,3,0,3,0,3,2,1,2,0,1,7,0,1};
		int nF, rf = sizeof(ref)/sizeof(ref[0]);
		cin>>nF;
		int vd[nF][rf];
		int i,frame[nF], L[nF];
		for(i=0;i<nF;i++) {
			frame[i]=-1;
		}
		int pf=0;
		int a;
		for(int l=0;l<nF;l++)
		{
			if(frame[l]==-1) {

				frame[l]=ref[l];
				L[l]=l;
				pf++;
			}
			for(int p=0;p<nF;p++)
				vd[p][l]=frame[p];
		}
		for(i=nF;i<rf;i++) {
			if(check(frame, ref[i])==-1) {

				frame[distance(L)]=ref[i];
				L[distance(L)]=i;
				pf++;
				for( a=0;a<nF;a++)
					vd[a][i]=frame[a];
			}else {
				L[check(frame, ref[i])]=i;
			}

			for( a=0;a<nF;a++)
				vd[a][i]=frame[a];
		}
		cout<<"Total Page Fault "<<pf<<endl;
		for(a=0;a<nF;a++) {
			for(i=0;i<rf;i++)
            {
                cout<<vd[a][i]<<" ";
            }
			cout<<endl;
		}

	}
	int distance(int L[]) {
		int pos=0,j;
		int s = sizeof(L)/sizeof(L[0]);


		for(j=1;j<s;j++) {
			if(L[pos]>L[j]) {
				pos=j;
			}
		}
		return pos;
	}
	int check(int frame[],int rs) {
		int i;
		int s = sizeof(frame)/sizeof(frame[0]);
		for(i=0;i<s;i++) {
			if(frame[i]==rs)
				return i;
		}
		return -1;
	}
