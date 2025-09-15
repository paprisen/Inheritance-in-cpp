# Inheritance-in-cpp

Aim: To study different types of inheritance in C++ such as single, multiple, multilevel, and hierarchical inheritance, along with the role of access specifiers.

Tools: VS Code

## Theory:

In Object-Oriented Programming, inheritance is the process of creating new classes from existing ones. The existing class is called the base class (or parent class), and the new class is called the derived class (or child class). Inheritance promotes code reusability, reduces duplication, and establishes relationships between classes.

A derived class automatically contains the members of the base class, except for constructors, destructors, and private members (though private members can be accessed through public/protected functions of the base class).

## Types of Inheritance in C++
* Single Inheritance – One base class and one derived class.

```
class Base {
    // base class members
};

class Derived : public Base {
    // derived class members
};
```

* Multiple Inheritance – One derived class inherits from two or more base classes.

```
  class Base1 {
    // base1 members
};

class Base2 {
    // base2 members
};

class Derived : public Base1, public Base2 {
    // derived class members
};
```

* Multilevel Inheritance – A class is derived from another derived class, forming a chain.
  
```
class Base {
    // base members
};

class Intermediate : public Base {
    // intermediate members
};

class Derived : public Intermediate {
    // derived members
};
```

* Hierarchical Inheritance – Multiple classes are derived from a single base class.

```
class Base {
    // base members
};

class Derived1 : public Base {
    // derived1 members
};

class Derived2 : public Derived1 {
    // derived2 members
};

class Derived3 : public Derived1{
    // derived3 members
};
```

# Access Specifiers play a key role in inheritance:

* Public – Accessible everywhere.
* Private – Accessible only within the class where it is defined.
* Protected – Accessible in the base class and derived class, but not outside.

## Program 1: Single Inheritance

### Logic:

This program demonstrates the concept of single inheritance in C++. The base class Vehicle contains common attributes such as speed and price. The derived class Car inherits from Vehicle and adds an additional attribute name specific. In the main() function, an object of the Car class is created, which can access both its own data members and the inherited members of Vehicle. This shows how inheritance promotes code reusability by allowing the derived class to use features of the base class while extending its functionality.

## Algorithm:

1. Start

2. Define a base class Vehicle with data members: speed and price.

3. Define a derived class Car that inherits publicly from Vehicle and adds an extra data member: name.

4. In the main() function: --Create an object c1 of class Car. --Assign values to speed, price, and name.

5. Display the values of all data members using cout.

6. End 

## Program 2: Multiple Inheritance

### Logic:

This program demonstrates the concept of multiple inheritance in C++. The class Student stores student details like PRN and name, while the class Subject stores subject name and marks. The class Profile is created by inheriting publicly from both Student and Subject, and it adds an additional member div. In the main() function, an object of Profile is created, which can access members from both parent classes along with its own. This shows how multiple inheritance allows combining features of two or more classes into a single class. It highlights the advantage of code reusability and the ability to build more detailed objects using existing classes.

## Algorithm:

1. Start 

2. Define a base class Student with data members: prn and name.

3. Define another base class Subject with data members: sub and marks.

4. Define a derived class Profile that inherits publicly from both Student and Subject, and add one extra data member: div.

5. In the main() function: --Create an object p1 of the Profile class. --Assign values to name, prn, div, sub, and marks.

6. Display all the details using cout.

7. End

## Program 3: Multilevel Inheritance

### Logic:

This program demonstrates the concept of multilevel inheritance in C++. The base class Company contains attributes like company name and valuation along with a function sales(). The class Department is derived from Company and adds new members such as turnover, numcustom, and a function department(). Further, the class Employee is derived from Department, adding employee-specific details like name, ID, and salary. In the main() function, an object of Employee is created, which can access members from all three levels of inheritance. This shows how data and functions are passed through multiple levels of classes, promoting code reusability and hierarchy representation.

## Algorithm:

1. Start 

2. Define a base class Company with data members (cname, valuation) and a function sales().

3. Define a derived class Department that inherits publicly from Company, adds new data members (turnover, numcustom), and a function department().

4. Define a further derived class Employee that inherits publicly from Department and adds data members (name, id, salary).

5. In the main() function: --Create an object e1 of the Employee class. --Assign values to employee and company details.

6. Display all the information using cout.

7. End

## Program 4: Hierarchical Inheritance

### Logic:

This program demonstrates is based on the concept of inheritance in object-oriented programming. A base class Shape is created with a data member color, initialized to "blue", and a member function displayColor() that prints the color. Two derived classes, Circle and Rectangle, inherit from Shape using public inheritance. Both derived classes have their own area() functions that print their respective area formulas. In the main() function, objects of Circle and Rectangle are created. Since they inherit from Shape, they can access the displayColor() method, which prints the color "blue" for both. When the area() function is called on each object, the respective overridden method in each class is executed. This demonstrates how derived classes can share common functionality from a base class while also implementing their own specific behaviors.

## Algorithm:

1. Start

2. Define class Shape with color = "blue" and displayColor().

3. Create Circle and Rectangle classes inheriting from Shape.

4. Each defines its own area() method.

5. In main(), create Circle and Rectangle objects.

6. Call displayColor() and area() on both.

7. End


## Program-5: Access Specifiers

### Logic:

This program demonstrates the use of access specifiers and protected inheritance in C++. The base class Library has members with public, private, and protected access levels. The class User inherits from Library using protected inheritance, which means that the public and protected members of Library become protected in User. In the main() function, the program tries to access private and protected members, which is not allowed outside the class, leading to access errors. This illustrates how access specifiers control visibility and accessibility of class members in inheritance, ensuring data encapsulation and security of sensitive information.

## Algorithm:

1. Start 

2. Define a base class Github with: --A public function disp(). --A private function disp2().

3. Define a derived class User that inherits protectedly from Library. 

4. In the main() function: --Create an object l1 of Library and try to call disp2() (will cause an error because it is private). 

5. End

## Conclusion

Inheritance lets classes reuse and extend features of other classes, reducing duplication and improving structure. Single inheritance creates a base-to-derived link, multiple inheritance combines features from different classes, multilevel inheritance forms a chain, and hierarchical inheritance shares one base across many classes. Access specifiers (public, private, protected) control how members are shared.
