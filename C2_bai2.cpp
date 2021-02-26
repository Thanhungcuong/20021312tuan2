#include <iostream>
using namespace std;
int main()
{
    int x,y,z=1;
    cin>>x>>y;
    if(y==1)
    {
        cout<<x;
        return 0;
    }
    for(int i=0;i<y;++i)
    {
        z=x*x;
    }
    cout<<z;

}

