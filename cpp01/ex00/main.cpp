#include "Zombie.hpp"

int main() {
  Zombie Zombie1("halalshdsi");
  Zombie1.announce();
  Zombie *zombie2 = newZombie("Foo");
  zombie2->announce();
  delete zombie2;
}
