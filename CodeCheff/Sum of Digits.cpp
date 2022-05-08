#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b=0;
        cin>>a;
        while(a>0)
        {
            int last_digit = a%10;
            b=b+last_digit;
            a = a/10;
        }
        cout<< b <<endl;
    }
    return 0;
}
