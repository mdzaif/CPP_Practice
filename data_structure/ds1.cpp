#include<bits/stdc++.h>
using namespace std;

int bs(int a[], int n, int item)
{
    int bg = 0;
    int en = n-1;
    int c = 0;
    int i = 0;
    int x = 0;
    int k = n;
    int mid;
    int compare[k];
    while(bg<=en)
    {
         mid =  bg+(en-bg)/2;
        if(a[mid] == item)
        {
            cout<<"No. of comparisions: "<<c<<endl;
            cout<<"Comparisions: ";
            x = 1;
            break;
        }
        else if(a[mid]>item)
        {
            compare[i]=a[mid];
            en = mid - 1;
            c++;
            i++;
        }
        else if(a[mid]<item)
        {
            compare[i]=a[mid];
            bg = mid + 1;
            c++;
            i++;
        }
    }
    k = i;
    i = 0;
    if (x == 1){
        //i = 0;
        while(i < k)
            {
                cout<<compare[i]<<" ";
                i++;
            }
            cout<<endl;
            return mid;
    }
    else{
        cout<<"No. of comparisions: "<<c<<endl;
        //i = 0;

        cout<<"Comparisions: ";
        while(i < k)
            {
                cout<<compare[i]<<" ";
                i++;
            }
            cout<<endl;

    }

    return -1;
}

int main()
{
    int t, n, item;
    cout<<"Enter the test case: ";
    cin>>t;
    while(t>0)
    {
    cout<<"Enter a size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    int i = 0;
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    cout<<"Enter the item: ";
    cin>>item;
    int result = bs(a, n, item);
    if(result == -1)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at: "<<result+1<<endl;
    }
    t--;
    }
    return 0;
}

