#include <iostream>

using namespace std;

class Student
{
private:
    int rollno,per;
    string name;
public:
    Student(int a, string b, int c)
    {
        rollno=a;
        name=b;
        per=c;
    }
    void showData()
    {
        cout<<"Roll No. - "<<rollno<<endl;
        cout<<"Name - "<<name<<endl;
        cout<<"Percentage - "<<per<<endl;
    }
};
int main()
{
    Student s(21,"Krishna",99);
    s.showData();
    return 0;
}
