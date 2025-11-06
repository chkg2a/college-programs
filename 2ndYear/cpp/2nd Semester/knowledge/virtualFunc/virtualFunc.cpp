#include <iostream>
#include <stdlib.h>

using namespace std;

class Entity {
public:
  string getName() { return "Entity"; }
};

class Player : public Entity {
  private:
    string m_Name;
  public:
    Player(const string & name) : m_Name(name){}
    string getName() { return m_Name; }
};

int main(int argc, char *argv[]) {
  Entity * e = new Entity();
  cout << e->getName() << endl;

  Player * p = new Player("Cherino");
  cout << p->getName() << endl;

  Entity * x = (Entity*)malloc(sizeof(Entity));
  cout << x->getName() << endl;

  Player * y = (Player*)malloc(sizeof(Player));
  cout << (*y).getName() << endl;
  free(x); 
  free(y);

  delete e;
  delete p;

  return 0; 
}
