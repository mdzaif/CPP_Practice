#include<bits/stdc++.h>
using namespace std;

void showq(queue <int> q)
{
    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }
}

int main()
{
    queue<int> gquiz;
    gquiz.push(23);
    gquiz.push(34);
    gquiz.push(56);
    gquiz.push(65);

    cout<<"The gquiz is:";
    showq(gquiz);

    cout<<"\ngquiz.size(): "<<gquiz.size();
    cout<<"\ngquiz.front(): "<<gquiz.front();
    cout<<"\ngquiz.back(): "<<gquiz.back();

    cout<<"\ngquiz after pop(): ";
    gquiz.pop();
    showq(gquiz);
}
