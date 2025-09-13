// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Vehicle {
public:
    int speed;      
    double price;   
};

class Car : public Vehicle {
public:
    string brand;  
    string name;
};

int main() {
    Car c1;

    c1.speed = 180;
    c1.price = 25000;
    c1.brand = "Honda";
    c1.name = "Jazz";

    cout << "speed:" << c1.speed << " km/h" << endl;
    cout << "price:" << c1.price << endl;
    cout << "brand:" << c1.brand << endl;
    cout << "name:" << c1.name << endl;

    return 0;
}

/*
Output:
speed:180 km/h
price:25000
brand:Honda
name:Jazz
*/
