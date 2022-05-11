#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,N,L;
    cin>>L;
    cin>>N;
    for(i=0;i<N;i++)
    {
        int W,H;
        cin>>W>>H;
        if(W<L || H<L)
            cout<<"UPLOAD ANOTHER"<<endl;
        else
        {
            if((W==H))
                cout<<"ACCEPTED"<<endl;
            else if((W>=L && W>=H))
                cout<<"CROP IT"<<endl;
        }
    }
    return 0;
}
