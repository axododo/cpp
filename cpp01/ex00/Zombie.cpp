#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) { Zombie::name = name; }

Zombie::~Zombie(void) { std::cout << name << ":" << " destroyed\n"; }

void Zombie::announce() {
  std::cout << name << ": " << "BraiiiiiiinnnzzzZ...\n";
}
