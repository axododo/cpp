#include "class.hpp"
#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
// using namespace std;

void contact::set(const std::string &value, const std::string key) {
  if (key == "fname")
    FirstName = value;
  else if (key == "lname")
    LastName = value;
  else if (key == "name")
    Nickname = value;
  else if (key == "pnum")
    PhoneNumb = value;
  else if (key == "secret")
    Secret = value;
}

std::string contact::get(const std::string &key) {
  if (key == "fname")
    return (FirstName);
  else if (key == "lname")
    return (LastName);
  else if (key == "name")
    return (Nickname);
  else if (key == "pnum")
    return (PhoneNumb);
  else if (key == "secret")
    return (Secret);
  return ("Not found...");
}

void search(contact *ct) {}

void add(contact *ct) {
  std::string value;
  cout << "\n First Name: ";
  cin >> value;
  if (value.empty())
    return;
  // cout << "error..";
  ct->set(value, "fname");
  cout << "\n Last Name: ";
  cin >> value;
  if (value.empty())
    return;
  // cout << "error..";
  ct->set(value, "lname");
  cout << "\n Nickname: ";
  cin >> value;
  if (value.empty())
    return;
  // cout << "error..";
  ct->set(value, "name");
  cout << "\n Phone Number: ";
  cin >> value;
  if (value.empty())
    return;
  // cout << "error";
  ct->set(value, "pnum");
  cout << "\n Darkest Secret: ";
  cin >> value;
  if (value.empty())
    return;
  // cout << "error..";
  ct->set(value, "secret");
}

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
