#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,k,count_number=0,i;
    cin>>l>>r>>k;
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
            count_number++;
    }
    cout<<count_number<<endl;
    return 0;
}
