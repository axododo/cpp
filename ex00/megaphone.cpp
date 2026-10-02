#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(int ac, char **av) {
  string st;
  st = av[1];
  string upp(st.size(), ' ');

  transform(st.begin(), st.end(), upp.begin(),
            [](unsigned char c) { return (toupper(c)); });
  cout << upp;
}
