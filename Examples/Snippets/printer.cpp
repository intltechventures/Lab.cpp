#include <iostream>
#include <type_traits>
#include <utility>

template<typename ...Args>
void printer(Args&&... args) { 
    (std::cout << ... << args) << '\n';
}

// See C++17 example: http://en.cppreference.com/w/cpp/language/fold

int main()
{
  printer(1,3,3,"abc");
}
