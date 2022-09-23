#include <iostream>

using namespace std;
class Counter
{
private:
    int count;
public:
    Counter()
    {
        count=0;
    }
    void incCount()
    {
        count++;
    }
    void getcount()
    {
        cout<<"Count = "<<count<<endl;
    }

};

int main()
{
    Counter c;
    c.getcount();
    c.incCount();
    c.getcount();
    return 0;
}
