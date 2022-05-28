#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<10)
        cout<<"1"<<endl;
    else if(a>=10 && a<100)
        cout<<"2"<<endl;
    else if(a>=100 && a<1000)
        cout<<"3"<<endl;
    else
        cout<<"More than 3 digits"<<endl;
    return 0;
}
