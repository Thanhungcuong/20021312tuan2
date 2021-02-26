#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int kt;
    if(n==2)
    {
        cout<<"yes";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) kt=0;
        else
            kt=1;

    }
    if(kt==1) cout<<"yes";
    else
        cout<<"no";
}
