//Namespaces are used oto organize codes into logical groups
//Useful to avoid "name" conflicts in codes

#include <iostream>

namespace std{
  class brooo {
    int a = 10; 
    public:
      ostream & operator<<(ostream & out, brooo & obj){
        out << obj.a;
      }
  };
}

int main (int argc, char *argv[]) {
  return 0;
}
