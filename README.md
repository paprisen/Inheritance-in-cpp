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

