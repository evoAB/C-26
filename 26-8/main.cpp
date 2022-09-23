#include <iostream>

using namespace std;

class Bank
{
private:
    int p,roi,y,si;
public:
    Bank(int a, int b, int c)
    {
        p=a;
        roi=b;
        y=c;
    }
    void simpleInterest()
    {
        si=p*roi*y/100;
    }
    void showSI()
    {
        cout<<"Simple Interest : "<<si<<endl;
    }
};
int main()
{
    Bank b(10000,4,2);
    b.simpleInterest();
    b.showSI();
    return 0;
}
