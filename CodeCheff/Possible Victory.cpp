#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int result = (((20-o)*6)*6)+c;
    if(result>r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
