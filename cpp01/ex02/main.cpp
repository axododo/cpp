#include <iostream>
#include <string>

int main() {
  std::string brain = "HI THIS IS BRAIN";
  std::string *ptr = &brain;
  std::string &ref = brain;

  std::cout << &brain << "\n" << ptr << "\n" << &ref;
  std::cout << "\n" << brain << "\n" << *ptr << "\n" << ref;
}
