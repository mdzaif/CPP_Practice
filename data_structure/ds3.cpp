#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, temp1;
    cin>>n;
    string name[n];
    string temp2;
    int age[n], salary[n];

    cout<<"Name\tAge\tSalary"<<endl;
    int i = 0;
    while(i<n)
    {
        cin>>name[i];
        cin>>age[i];
        cin>>salary[i];
        i++;
    }
    i = 0;
    int j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(salary[j]>salary[j+1])
            {
                temp = salary[j];
                salary[j] = salary[j+1];
                salary[j+1] = temp;

                temp1 = age[j];
                age[j] = age[j+1];
                age[j+1] = temp1;

                temp2 = name[j];
                name[j] = name[j+1];
                name[j+1] = temp2;
            }
        }
    }

    cout<<endl;
    cout<<"Name\tAge\tSalary"<<endl;
    i = 0;
    while(i < n)
    {
        cout<<name[i]<<"\t"<<age[i]<<"\t"<<salary[i]<<endl;
        i++;
    }

    return 0;
}
