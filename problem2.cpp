#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int n1=0,n2=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)cout<<n1;
        else if(i==2) cout<<n2;
        else if(i>=3)
        {
            int r=n1+n2;
            cout<<r;
            n1=n2;
            n2=r;

        }
        if(i<n)cout<<", ";
    }

}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}
