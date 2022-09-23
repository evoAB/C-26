#include <iostream>

using namespace std;

class Cube
{
private:
    int s,vc;
public:
    Cube(int a)
    {
        s=a;
    }
    void showVolume()
    {
        cout<<"Volume of cube : "<<vc<<endl;
    }
    void volumeC()
    {
        vc=s*s*s;
    }
};
int main()
{
    Cube c(4);
    c.volumeC();
    c.showVolume();
    return 0;
}
