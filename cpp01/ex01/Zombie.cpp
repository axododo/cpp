#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) { Zombie::name = name; }

Zombie::~Zombie(void) { std::cout << name << ":" << " destroyed\n"; }
Zombie::Zombie(void) {}
void Zombie::setName(std::string name) { this->name = name; }
void Zombie::announce() {
  std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n";
}
