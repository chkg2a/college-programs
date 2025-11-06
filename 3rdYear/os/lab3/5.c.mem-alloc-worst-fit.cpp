#include <iostream>
#define max 25
using namespace std;

int main() {
  int frag[max], b[max], f[max], i, j, nb, nf, temp, highest = -1;
  static int bf[max], ff[max];
  cout << "\n\t\tMemory Management Scheme - Worst Fit";
  cout << "\nEnter the number of blocks: ";
  cin >> nb;
  cout << "Enter the number of files: ";
  cin >> nf;
  cout << "\nEnter the size of the blocks: \n";
  for (i = 0; i < nb; i++) {
    cout << "Block " << i << ": ";
    cin >> b[i];
  }
  cout << "Enter the size of the files:\n";
  for (i = 0; i < nf; i++) {
    cout << "File " << i << ": ";
    cin >> f[i];
  }
  for (i = 0; i < nf; i++) {
    for (j = 0; j < nb; j++) {
      if (bf[j] != 1) // if bf[j] is not allocated
      {
        temp = b[j] - f[i];
        if (temp >= 0)
          if (highest < temp) {
            ff[i] = j;
            highest = temp;
          }
      }
    }
    frag[i] = highest;
    if (highest > -1)
      bf[ff[i]] = 1;
    highest = -1;
  }
  cout << "\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement";
  for (i = 0; i < nf; i++)
    if (frag[i] > highest)
      cout << "\n"
           << i << "\t\t" << f[i] << "\t\t" << ff[i] << "\t\t" << b[ff[i]]
           << "\t\t" << frag[i];
    else
      cout << "\nMemory is not sufficient for file_No " << i;
  return 0;
}
