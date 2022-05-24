#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,remainder,reverse_number=0;
        cin>>a;
        int n=a;
        while(a != 0)
        {
            remainder = a%10;
            reverse_number = reverse_number*10 + remainder;
            a = a/10;
        }
        if(n == reverse_number)
            cout<<"wins"<<endl;
        else
            cout<<"loses"<<endl;
    }
    return 0;
}
