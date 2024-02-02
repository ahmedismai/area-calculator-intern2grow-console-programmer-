#include <iostream>
using namespace std;

class Shape
{
protected:
    double area;
    public:
    virtual double CalArea() = 0;
};

class Square : public Shape {
private:
    int side;
public:
    Square(int _side)
    {
        side = _side;
    }
    double CalArea() 
    {
        area = side * side;
        return area;
    }
};

class Rec : public Shape
{
private:
    int length;
    int width;
public:
    Rec(int _length,int _width)
    {
        length = _length;
        width = _width;
    }
    double CalArea()
    {
        area = length * width;
        return area;
    }
};

class Circle : public Shape
{
private:
    int radius;
public:
    Circle(int _radius)
    {
        radius = _radius;
    }
    double CalArea()
    {
        area=(3.14*radius*radius);
        return area;
    }
};




int main()
{
    int num;
    int side;
    int length, Width;
    double radius;

    cout << "please Choose Number From 1 To 3: " << endl;
    cout << " 1 = Square\n 2 = Rec\n 3 = Circle " << endl;
    cin >> num;

    while (true) {
        if(num == 1)
        {
            cout << "Enter The side Of Square: " << endl;
            cin >> side;

            Square s(side);

            cout << "This is The Area Of Circle: \n" << s.CalArea();
            break;
        }
        else if(num == 2)
        {
            cout << "Enter The length Of Rec: " << endl;
            cin >> length;
            cout << "Enter The width Of Rec: " << endl;
            cin >> Width;

            Rec r(length, Width);

            cout << "This is The area of Rec: \n" << r.CalArea();
            break;
        }
        else if(num == 3)
        {
            cout << "Enter The Radius Of Circle: " << endl;
            cin >> radius;
            Circle c(radius);
            cout << "This is The Area Of Circle: \n" << c.CalArea();
            break;
        }
        else
        {
            cout << "Please Enter Your Choice Again: " << endl;
            cin >> num;
        }
    }
}