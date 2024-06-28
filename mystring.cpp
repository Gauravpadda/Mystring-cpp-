#include "mystring.h"
#include <cstring>

// Default constructor
Mystring::Mystring() {
    data = new char[1];
    len = 0;
    data[0] = '\0';  // null character
}

// Parameterized constructor
Mystring::Mystring(const char* str) {
    len = strlen(str);
    data = new char[len + 1];
    strcpy(data, str);
}

// Copy constructor
Mystring::Mystring(const Mystring& otherString) {
    len = otherString.len;
    data = new char[len + 1];
    strcpy(data, otherString.data);
}

// Destructor
Mystring::~Mystring() {
    delete[] data;
}

// Return C-style string
const char* Mystring::c_str() const {
    return data;    
}

// Size function
int Mystring::size() const {
    return len;
}

// Empty function
bool Mystring::empty() const {
    return len == 0;
}

// Assignment operator
Mystring& Mystring::operator=(const Mystring& str) {
    if (this == &str) {
        return *this;
    }
    delete[] data;

    len = str.len;
    data = new char[len + 1];
    strcpy(data, str.data);

    return *this;
}

// Addition operator +=
Mystring& Mystring::operator+=(const Mystring& str) {
    char* newData = new char[len + str.len + 1];
    strcpy(newData, data);
    strcat(newData, str.data);

    delete[] data;
    data = newData;
    len += str.len;

    return *this;
}

// [] operator
char& Mystring::operator[](int index) {
    if (index >= len) {
        throw std::out_of_range("out of range");
    }
    return data[index];
}

// Find function
int Mystring::find(const Mystring& str) {
    if (str.len > len) return -1;

    for (int i = 0; i <= len - str.len; i++) {
        int j;
        for (j = 0; j < str.len; j++) {
            if (data[i + j] != str.data[j]) break;
        }
        if (j == str.len) return i;
    }
    return -1;
}

// Append function
Mystring Mystring::append(const Mystring& str) {
    char* newData = new char[len + str.len + 1];
    strcpy(newData, data);
    strcat(newData, str.data);

    delete[] data;
    data = newData;
    len += str.len;

    return *this;
}

// Overload insertion operator
std::ostream& operator<<(std::ostream& os, const Mystring& str) {
    os << str.c_str();
    return os;
}


//erase function 
Mystring Mystring::erase(int index,int length){
    if(index>=len || index <0 || length<0 || index+length>len) throw std::out_of_range("index of out of range");


    char *joined=new char[len-length+1];
    
    for(int i=0;i<index;i++){
        joined[i]=data[i];
       
    }

    for(int i=index+length+1;i<len;i++){
        joined[i-length]=data[i];
    }
    joined[len-length]='\0';
    delete [] data;
    data=joined;
    len=len-length;
    return *this;

}
