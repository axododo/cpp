#include "class.hpp"
#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

void add(contact *ct) {
  cout << "name: ";
  cin >> ct->name;
  cout << "number: ";
  cin >> ct->nb;
  /*if (!ct->name.empty() || ct->nb == 0) {
    cout << "Error";
    return;
  }*/
  ct->id++;
}

void initlass(contact *ct) {
  ct->name = "null";
  ct->nb = 0;
  ct->id = 0;
}

void search(contact *ct) {}

int main() {
  contact ct;
  string line;

  while (1) {
    cout << ">";
    cin >> line;
    // cout << line;

    if (line == "add")
      add(&ct);
    if (line == "search")
      search(&ct);
    if (line[1] == 'q')
      break;
  }
}
