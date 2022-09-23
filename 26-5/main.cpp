#include <iostream>

using namespace std;

class Date
{
private:
    int d,y;
    string m;
public:
    Date(int a, string b, int c)
    {
        d=a;
        m=b;
        y=c;
    }
    void displayDate()
    {
        cout<<d<<m<<y<<endl;
    }
};
int main()
{
    Date d(21,"Jan",2021);
    d.displayDate();
    return 0;
}
