#include <string>

using namespace std;

class contact {
private:
  std::string FirstName;
  std::string LastName;
  std::string Nickname;
  std::string PhoneNumb;
  std::string Secret;

public:
  void set(const std::string &key, const std::string value);
  std::string get(const std::string &key);
};

class phonebook {
private:
  contact ct[8];
  int count;
  int index;

public:
  phonebook();
  int regist(contact *ct);
  int add();
  void search();
};
