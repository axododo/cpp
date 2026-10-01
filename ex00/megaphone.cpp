#include <iostream>
#include <string>
using namespace std;

int main(int ac, char **av) {
  cout << av[1];
  char *cap;

  transform(av[1], NULL, cap, toupper);
  cout << av[1];
}
