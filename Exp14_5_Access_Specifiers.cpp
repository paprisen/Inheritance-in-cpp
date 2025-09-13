// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Library {
public:
    void disp() {  
        cout << "Library is Open!" << endl;
    }

protected:
    int books;  

private:
    void disp2() {  
        cout << "Total Books in Library: 3000" << endl;
    }

public:
    void callDisp2() { 
        disp2();
    }
};

class Member : protected Library {
public:
    int member_id;

    void setBooks(int b) {  
        books = b;
    }

    void showBooks() {  
        cout << "Books Borrowed: " << books << endl;
    }

    void showLibraryInfo() {  
        disp();
    }
};

int main() {
    Library l1;
    l1.callDisp2();    

    Member m1;
    m1.member_id = 100;
    m1.showLibraryInfo();   
    m1.setBooks(10);         
    m1.showBooks();         

    return 0;
}
/*
Output:
Total Books in Library: 3000
Library is Open!
Books Borrowed: 10
*/
