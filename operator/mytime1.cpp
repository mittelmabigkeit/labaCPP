// usetime0.cpp -- ��������� ������������ ��������
#include <iostream>
#include "mytime0.h"
Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

/*const Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}*/
// ���������� ��������� + 
Time Time::operator-(const Time & t) const
{
    Time sum;
    sum.minutes = minutes - t.minutes;
    sum.hours = hours - t.hours;
    
    return sum;
}

void Time::Show() const
{
    std::cout << hours << " �����, " << minutes << " �����"<<std::endl;
    
}
int main()
{
    using std::cout;
    using std::endl;
     // ��������� ������ ����
    Time t1(5, 50);
    // �������� ������������ ��������
    t1.Show();
      // ��������� ������ ����
    Time t2(3, 20);
     // �������� ������������ ��������
    t2.Show();
    // �������� �����
    // ������ ����� ������ ������ Time
    Time sum1;
    //���������
    //sum1 = t1.Sum(t2); 
    sum1 = t1-t2;
    
    //�������� �������� ��� ��������!!!
    //������� ���������
    sum1.Show();
    

 system("pause");
    return 0;
}
