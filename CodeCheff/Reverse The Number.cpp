#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,remainder,reverse_number=0;
        cin>>n;
        while(n != 0)
        {
            remainder = n%10;
            reverse_number = (reverse_number * 10) + remainder;
            n = n/10;
        }
        cout<<reverse_number<<endl;
    }
    return 0;
}
