#include <iostream>

using namespace std;

class Bill
{
private:
    int customer_id,unit;
    float bill;
public:
    void getdata(int a,int b)
    {
        customer_id=a;
        unit=b;
    }
    void calculateBill();
    void showBill()
    {
        cout<<"Customer's Electricity Bill : "<<bill<<endl;
    }
};

void Bill::calculateBill()
{
    if(unit<=100)
        bill=unit*1.20;
    if(unit>100 && unit<=200)
        bill=(unit-100)*2+120;
    if(unit>200)
        bill=(unit-200)*3+320;
}
int main()
{
    Bill b;
    b.getdata(123,231);
    b.calculateBill();
    b.showBill();
    return 0;
}
