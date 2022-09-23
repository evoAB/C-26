#include <iostream>

using namespace std;

class Time
{
private:
    int h,m,s;
public:
     void setTime(int a,int b,int c)
     {
         h=a;
         m=b;
         s=c;
     }
     void showTime()
     {
         cout<<h<<":"<<m<<":"<<s<<endl;
     }
     void normalize();
     Time add(Time);
};
Time Time :: add(Time t)
{
    Time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    temp.normalize();
    return temp;
}
void Time :: normalize()
{
    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;
}
int main()
{
    Time t1, t2, t3;
    t1.setTime(3,30,45);
    t2.setTime(7,45,15);
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}
