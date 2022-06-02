#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int Pa , Pb , Qa , Qb;
        cin>>Pa>>Pb>>Qa>>Qb;
        int a = max(Pa , Pb);
        int b = max(Qa , Qb);
        if(a>b)
            cout<<"Q"<<endl;
        else if(a<b)
            cout<<"P"<<endl;
        else if(a==b)
            cout<<"TIE"<<endl;
    }
    return 0;
}
