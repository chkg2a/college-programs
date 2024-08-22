#include <iostream>

using namespace std;

int main (int argc, char *argv[]) 
{
  int range;
  cout << "Enter the range: ";
  cin >> range;
  for (int i = 1; i <= 10; ++i)
  {
    for (int j = 1; j <= range; ++j )
    {
      cout << i << " x " << j << " = " << i * j << endl;

    }
    cout << endl;
  }
  return 0;
}
