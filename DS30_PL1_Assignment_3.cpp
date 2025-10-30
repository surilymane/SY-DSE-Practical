#include <iostream>
using namespace std;

// Function for area of circle.
double area(double radius)
{
    double area = 3.142 * radius * radius;

    return area;
}

// Function for area of rectangle.
double area(double length, double breadth)
{
    double area = length * breadth;

    return area;
}

// Function for area of triangle.
double area(float base, double height)
{
    double area = 0.5 * base * height;

    return area;
}

// Function for volume of box.
double volume(double length, double breadth = 1, double height = 1)
{
    double volume = length * breadth * height;

    return volume;
}

int main()
{
    int shape;
    double area_shape, volume_box;
    double length, breadth, height;

    do
    {
        cout<<"Enter 0 to stop, 1 for circle, 2 for rectangle, 3 for triangle, 4 for volume(1 parameter), 5 for volume(2 parameters) and 6 for volume(all parameters): ";
        cin>>shape;
        
        switch(shape)
        {
            case 0:
                cout<<"Terminating Program."<<endl;
                break;

            case 1:
                double radius;
                cout<<"Enter the radius of the circle: ";
                cin>>radius;
                area_shape = area(radius);
                cout<<"The area of circle is "<<area_shape<<"."<<endl;
                break;

            case 2:
                cout<<"Enter the length and breadth of the rectangle: ";
                cin>>length>>breadth;
                area_shape = area(length, breadth);
                cout<<"The area of rectangle is "<<area_shape<<"."<<endl;
                break;

            case 3:
                float base;
                cout<<"Enter the base and height of the triangle: ";
                cin>>base>>height;
                area_shape = area(base, height);
                cout<<"The area of triangle is "<<area_shape<<"."<<endl;
                break;
            
            case 4:
                cout<<"Enter the length of the box: ";
                cin>>length;
                volume_box = volume(length);
                cout<<"The volume of box (1 parameter) is "<<volume_box<<"."<<endl;
                break;

            case 5:
                cout<<"Enter the length and breadth of the box: ";
                cin>>length>>breadth;
                volume_box = volume(length, breadth);
                cout<<"The volume of box (2 parameters) is "<<volume_box<<"."<<endl;
                break;
            
            case 6:
                cout<<"Enter the length, breadth and height of the box: ";
                cin>>length>>breadth>>height;
                volume_box = volume(length, breadth, height);
                cout<<"The volume of box (all parameters) is "<<volume_box<<"."<<endl;
                break;

        }
    }while(shape != 0);

    return 0;
}