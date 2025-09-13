// Papri Sen
// 24070123070
// A3

#include <iostream>
#include <string>
using namespace std;


class Shape {
public:
    string color = "blue";
    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area formula: πr^2" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area formula: length × width" << endl;
    }
};

int main() {
    Circle c1;
    Rectangle r1;

   
    c1.displayColor();
    r1.displayColor(); 

    c1.area();
    r1.area();

    return 0;
}
/*
Output:
Color: blue
Color: blue
Area formula: πr^2
Area formula: length × width
*/
