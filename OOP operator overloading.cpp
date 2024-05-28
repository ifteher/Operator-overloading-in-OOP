///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;

class abc
{
    int m,n;
public:
    abc()
    {
        m=8;
        n=9;
    }

    void show()
    {
        cout<<m<<' '<<n;

   cout<<endl;
    }
    operator--()
    {
        --m;
        --n;
    }
    operator ++()
    {
        ++m;
        ++n;
    }
};
int main()
{
  abc x;
  x.show();
  --x;
  x.show();
  ++x;
  x.show();
return 0;
}
//class abc
//{
//    int m,n;
//public:
//    abc()
//    {
//        m=8;
//        n=9;
//    }
//    void show()
//    {
//        cout<<m<<n;
//    }
//    friend operator --(abc &p);
//};
