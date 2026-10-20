#include <string>

using namespace std;

class contact {
public:
  int id;
  string name;
  int nb;
  class contact *next;
};
