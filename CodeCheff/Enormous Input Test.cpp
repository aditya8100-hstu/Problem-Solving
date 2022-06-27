#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count_number=0;
    cin>>n>>k;
   for(int i=0;i<=n-1;i++)
    {
        int a;
        cin>>a;
        if(a%k==0)
            count_number++;
    }
    cout<<count_number<<endl;
    return 0;
}
