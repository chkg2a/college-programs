#include <iostream>

using namespace std;

void operate_on_diff_operations(double x, double y, int datatype)
{
  if (datatype == 1){
    cout << x << " + " << y << " = " << int(x + y) << endl;
    cout << x << " - " << y << " = " << int(x - y) << endl;
    cout << x << " * " << y << " = " << int(x * y) << endl;
    cout << x << " / " << y << " = " << int(x / y) << endl;
  }
  else{
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " / " << y << " = " << x / y << endl;
  }
}

int main()
{
  cout << "Using integer" << endl; 
  operate_on_diff_operations(16,6,1); // datatype == 1 tells the function to use integer values
 
  cout << "Using char" << endl;
  operate_on_diff_operations('A','B',1);

  cout << "Using float" << endl;
  operate_on_diff_operations(1.52,3.45,0);

  cout << "Using double" << endl;
  operate_on_diff_operations(23.41232,1.41251,0);
}
