#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b+c || a<=b-c || b>=a+c || b<=a-c ||c>=a+b || a<=a-b)
        cout<<"khong phai tam giac";
    else
    {
        cout<<a+b+c<<endl;
        if(a==b && b==c)
            cout<<"tam giac deu";
        else if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
            cout<<"tam giac can";
        else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            cout<<"tam giac vuong";
        else
            cout<<"tam giac thuong";
    }


    return 0;
}


