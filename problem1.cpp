#include<iostream>
using namespace std;

void fact(int num)
{
    int r=1;
    for(int i=1;i<=num;i++)
    {
        r*=i;
    }
    cout<<r<<endl;
}

int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}
