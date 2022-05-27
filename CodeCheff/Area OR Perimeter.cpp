#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int area = l*b;
    int perimeter = 2 * (l+b);

    if(area > perimeter)
    {
        cout<< "Area" <<endl;
        cout<< area <<endl;
    }
    else if(perimeter > area)
    {
        cout<< "Peri" <<endl;
        cout<< perimeter <<endl;
    }
    else
    {
        cout<< "Eq" <<endl;
        cout<<perimeter<<endl;
    }
    return 0;
}
