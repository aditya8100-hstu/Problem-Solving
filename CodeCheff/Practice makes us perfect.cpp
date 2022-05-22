#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int count_digit = 0;
    if(a>=10)
        count_digit++;
    if(b>=10)
        count_digit++;
    if(c>=10)
        count_digit++;
    if(d>=10)
        count_digit++;

    cout<<count_digit<<endl;
    return 0;

}
