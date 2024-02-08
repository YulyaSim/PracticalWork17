// tema17.3 vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


class Vector
{
private:

    double x;
    double y;
    double z;

public:
    Vector() : x(0), y(0), z(0)
    { }
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
  
    double size()
    {
        return sqrt(x * x + y * y + z * z);
    }

    void Show()
    {
        cout << "\n" << x << " " << y << " " << z;
    }
   
};

int main()
{
    Vector v;
    v.Show();
    Vector V2(10, 20, 30);
    V2.Show();
    cout <<"\n" <<  V2.size();
}