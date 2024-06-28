#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

// Declaration of Mystring class
class Mystring {
private:
    char* data; // Data of string
    int len;   // Length of string

public:
    // Default constructor
    Mystring();

    // Parameterized constructor
    Mystring(const char* str);

    // Copy constructor
    Mystring(const Mystring& otherString);

    // Destructor
    ~Mystring();

    // Return C-style string
    const char* c_str() const;

    // Size function
    int size() const;

    // Empty function
    bool empty() const;

    // Assignment operator
    Mystring& operator=(const Mystring& str);

    // Addition operator +=
    Mystring& operator+=(const Mystring& str);

    // [] operator
    char& operator[](int index);

    // Find function
    int find(const Mystring& str);

    // Append function
    Mystring append(const Mystring& str);


    //erase function 

    Mystring erase(int index,int length);



    // Overload insertion operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Mystring& str);
};

#endif
