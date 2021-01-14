#include<bits/stdc++.h>

using namespace std;

int isPal(string str, int s,int e)
{
    if(s==e) return 1;
    if(str[s]!=str[e])return 0;

    if(s<e+1)
    {
        return isPal(str,s+1,e-1);
    }
    return 2;
}


int main()
{
    string str1;
    cin>>str1;
    string str;
    for(int i=0;i<str1.length();i++)
    {
        str.push_back(tolower(str1[i]));
    }
    if(isPal(str,0,str.length()-1)==1)cout<<"Odd Palindrome"<<endl;
    else if(isPal(str,0,str.length()-1)==2)cout<<"Even Palindrome"<<endl;
    else cout<<"Not a Palindrome"<<endl;
    return 0;
}
