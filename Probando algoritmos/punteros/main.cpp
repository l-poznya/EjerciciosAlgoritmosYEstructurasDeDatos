#include <iostream>

using namespace std;

int main()
{
     int n;

     int &x = n;

     int *p;

     p = &n;

     *p= 5;



     cout<<" &x = "  <<&x<<endl;
     cout<<" &n = "  <<&n<<endl<<endl;
     cout<<"  x = "  <<x<<endl;
     cout<<"  n = "  <<n<<endl<<endl;
     cout<<" &p = "  <<&p<<endl;
     cout<<" *p = "  <<*p<<endl;



}
