#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int r1 = a/60;
    int h = 21+r1;
    int r2 = a%60;
    int m = 00+r2;
    if(r2<10)
        cout<<h<<":0"<<m<<endl;
    else
        cout<<h<<":"<<m<<endl;
    return 0;
}
