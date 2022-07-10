#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,countnum=0;
       cin>>a>>b;
       if(a%b != 0)
       {
           int r = a%b;
           cout<< b-r <<endl;
       }
       else
       {
           cout<<"0"<<endl;
       }
    }
    return 0;
}
