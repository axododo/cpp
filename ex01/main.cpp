#include "class.hpp"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
// using namespace std;

phonebook::phonebook() : count(0), index(0) {}

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

static std::string shorthis(std::string value) {
  if (value.length() > 10) {
    return value.substr(0, 9) + ".";
  }
  return (value);
}

void phonebook::display(std::string index) {
  if (index.length() != 1 || index[0] < '0' || index[0] > '7') {
    std::cout << "Index invalide.\n";
    return;
  }
  int i = index[0] - '0';
  if (i > count) {
    cout << "no valid contact...";
    return;
  }
  std::cout << "\n    " << " contacts:" << i << "  \n";

  // std::cout << "\nnb:   " << i << "\n";
  std::cout << "fname:  " << ct[i].get("fname") << "\n";
  std::cout << "lname:  " << ct[i].get("lname") << "\n";
  std::cout << "name:   " << ct[i].get("name") << "\n";
  std::cout << "phone:  " << ct[i].get("pnum") << "\n";
  std::cout << "secret: " << ct[i].get("secret") << "\n";
}

void phonebook::search() {
  int i = 0;
  if (count == 0) {
    std::cout << "no contact...\n";
    return;
  }
  std::string entry;
  std::cout << "  Contact: \n";
  std::cout << std::right << std::setw(10) << "index" << "|" << std::setw(10)
            << "First name" << "|" << std::setw(10) << "Last name" << "|"
            << std::setw(10) << "Nickname" << "\n";
  while (i < count) {
    std::cout << std::right << std::setw(10) << i << "|" << std::setw(10)
              << shorthis(ct[i].get("fname")) << "|" << std::setw(10)
              << shorthis(ct[i].get("lname")) << "|" << std::setw(10)
              << shorthis(ct[i].get("name")) << "\n";
    i++;
  }
  cout << "index contact ?>";
  getline(cin, entry);
  display(entry);
}

int phonebook::regist(contact *newct) {
  std::string value;
  cout << "\n First Name: ";
  getline(std::cin, value);
  if (value.empty())
    return (1);
  // cout << "error..";
  newct->set(value, "fname");

  cout << "\n Last Name: ";
  std::getline(std::cin, value);
  if (value.empty())
    return (1);
  // cout << "error..";
  newct->set(value, "lname");

  cout << "\n Nickname: ";
  std::getline(std::cin, value);
  if (value.empty())
    return (1);
  // cout << "error..";
  newct->set(value, "name");

  cout << "\n Phone Number: ";
  std::getline(std::cin, value);
  if (value.empty())
    return (1);
  // cout << "error";
  newct->set(value, "pnum");

  cout << "\n Darkest Secret: ";
  std::getline(std::cin, value);
  if (value.empty())
    return (1);
  // cout << "error..";
  newct->set(value, "secret");

  return (0);
}

int phonebook::add() {
  contact newct;
  cout << "\n  Save new contact";
  if (regist(&newct)) {
    cout << "error save new contact...";
    return (1);
  }
  ct[index] = newct;
  index = (index + 1) % 8;
  if (count < 8)
    count++;
  return (0);
}

int main() {
  phonebook pb;
  string line;
  while (1) {
    cout << "\n>";
    if (!std::getline(std::cin, line))
      break;
    // cout << line;
    if (line == "add")
      pb.add();
    if (line == "search")
      pb.search();
    if (line == "q")
      break;
  }
}
