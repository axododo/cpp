#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main(int ac, char **av) {
  std::string st;
  int i = 1;
  // std::cout << ac;
  (void)av;

  if (ac == 1) {
    std::cout << "* LOUD AND UNBEARABLE NOISE *";
    return (0);
  }
  while (av[i]) {
    st = av[i];
    std::string upp(st.size(), ' ');

    transform(st.begin(), st.end(), upp.begin(),
              [](unsigned char c) { return (toupper(c)); });
    std::cout << upp;
    i++;
  }
  return (0);
}
