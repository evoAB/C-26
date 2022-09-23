#include <iostream>

using namespace std;

class Box
{
private:
    int l,b,h,vol_b;
public:
    Box(int m,int n,int o)
    {
        l=m;
        b=n;
        h=o;
    }
    void volumeBox()
    {
        vol_b=l*b*h;
    }
    void dispVol()
    {
        cout<<"Volume of the Box : "<<vol_b<<endl;
    }
};
int main()
{
    Box b(3,4,5);
    b.volumeBox();
    b.dispVol();
    return 0;
}
