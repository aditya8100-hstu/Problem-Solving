#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if (n%6 == 0) {
	        printf("%d\n", (n/6)*x);
	    }
	    else {
	        printf("%d\n", ((n/6)+1)*x);
	    }
	}
	return 0;
}
