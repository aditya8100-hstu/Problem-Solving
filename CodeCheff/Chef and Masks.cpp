#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int d = x*100;
        int c = y*10;
        if(d>c)
            cout<< "Cloth" <<endl;
        else if(c>d)
            cout<<"Disposable" <<endl;
        else
            cout<<"Cloth"<<endl;
    }
    return 0;
}
