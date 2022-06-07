#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>0)
        {
            int smallest = a[0];
            for(int i=1;i<n;i++)
            {
                if(smallest>a[i])
                {
                    smallest = a[i];
                }
            }
            cout<< smallest << endl;
        }
    }
    return 0;
}
