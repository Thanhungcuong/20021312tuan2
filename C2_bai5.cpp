#include <iostream>

using namespace std;
int main ()
{
    int m,n;
    cin  >> m  >> n;
    for (int i=n;i<=n;i--){
        if (m%i==0 && n%i==0)
    {
        cout  <<i;
        break;
    }
    }
        return 0;
}
