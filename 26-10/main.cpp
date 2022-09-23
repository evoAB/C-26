#include <iostream>

using namespace std;

class StaticCount
{
private:
    static int count;
public:
    void countCalled()
    {
        count++;
    }
    void displayResult()
    {
        cout<<"Count called : "<<count<<endl;
    }
};
int StaticCount :: count=0;
int main()
{
    StaticCount c;
    c.countCalled();
    c.countCalled();
    c.countCalled();
    c.displayResult();
    return 0;
}
