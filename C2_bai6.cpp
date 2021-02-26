#include <iostream>

using namespace std;
int main ()
{
    int m,n;
    cin  >> m  >> n;
    int e;
    for (int i=m;i>=1;i--)
    {
         if (m%i==0 && n%i==0)
         {
             e=i;
             break;
         }
    }

    cout<<m/e <<" "<<n/e;
        return 0;

}

