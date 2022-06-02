#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string reverse_string;
    for(int i=str.size()-1 ; i>=0 ; i--)
    {
        reverse_string = reverse_string + str[i];
    }
    cout<<reverse_string<<endl;
    return 0;
}
