# Mystring Class

Mystring is a custom implementation of a string class in C++. It provides functionalities similar to the standard `std::string` class but with custom implementations for learning and educational purposes.

## Features

- Default constructor
- Parameterized constructor
- Copy constructor
- Destructor
- Size function
- Empty function
- Assignment operator
- Addition operator
- Subscript operator
- Find function
- Append function
- Erase function

## Class Overview

### Constructors and Destructor

- `Mystring()`: Default constructor.
- `Mystring(const char* str)`: Parameterized constructor that initializes the string with a C-style string.
- `Mystring(const Mystring& otherString)`: Copy constructor.
- `~Mystring()`: Destructor that deallocates the dynamic memory.

### Member Functions

- `const char* c_str() const`: Returns the C-style string.
- `int size() const`: Returns the length of the string.
- `bool empty() const`: Checks if the string is empty.
- `Mystring& operator=(const Mystring& str)`: Assignment operator.
- `Mystring& operator+=(const Mystring& str)`: Addition operator.
- `char& operator[](int index)`: Subscript operator.
- `int find(const Mystring& str)`: Finds the first occurrence of a substring.
- `Mystring append(const Mystring& str)`: Appends a string.
- `Mystring erase(int index, int length)`: Erases a portion of the string.

### Friend Functions

- `std::ostream& operator<<(std::ostream& os, const Mystring& str)`: Overloads the insertion operator for easy output.

## Getting Started

### Prerequisites

- A C++ compiler like g++.
- A terminal or command prompt.

### Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/Gauravpadda/Mystring-cpp-.git
   ```

2. Ensure you have `main.cpp`, `mystring.cpp`, and `mystring.h` in the repository.

### Compilation

To compile the code, run the following command:

```sh
g++ -o myprogram main.cpp mystring.cpp
```

### Usage

1. Run the compiled program:

   ```sh
   ./myprogram
   ```

2. The program will output the results of the test code in `main.cpp`.

## Example

Here is a simple example of how to use the `Mystring` class:

```cpp
#include <iostream>
#include "mystring.h"

int main() {
    Mystring str = "hello";
    std::cout << str << std::endl;
    
    Mystring str2 = " world";
    str += str2;
    std::cout << str << std::endl;

    str.erase(5, 6);
    std::cout << str << std::endl;

    return 0;
}
```

## Contributing

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by standard C++ `std::string` class.
- Implemented for educational purposes.
