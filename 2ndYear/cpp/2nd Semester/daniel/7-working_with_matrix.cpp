#include <iostream>
using namespace std;

class Matrix{
  int value[3][3];
  public:
    Matrix(){
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          value[i][j] = 0;
        }
      }
    }
    Matrix(bool){
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          value[i][j] = (rand()% 10)+1;
        }
      }
    }
    Matrix(int x[3][3]){
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          value[i][j] = x[i][j];
        }
      }
    }
    Matrix operator+(Matrix obj){
      Matrix matTemp;
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          matTemp.value[i][j] = this->value[i][j] + obj.value[i][j];
        }
      }
      return matTemp;
    }
    Matrix operator-(Matrix obj){
      Matrix matTemp;
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          matTemp.value[i][j] = this->value[i][j] - obj.value[i][j];
        }
      }
      return matTemp;
    }
    Matrix operator=(Matrix obj){
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          this->value[i][j] = obj.value[i][j];
        }
      }
      return *this;
    }
    Matrix operator*(Matrix obj){
      Matrix matTemp;
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          for(int k = 0; k < 3; k++){
            matTemp.value[i][j] += this->value[i][k] * obj.value[k][j];
          }
        }
      }
      return matTemp;
    }
    void transposeMat(){
      Matrix maxTemp;
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          maxTemp.value[i][j] = this->value[j][i];
        }
      }
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          this->value[i][j] = maxTemp.value[i][j];
        }
      }
    }
    void displayValue(){
      for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          cout << this->value[i][j] << " ";
        }
      cout << "\n";
      }
    }
};

#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
  srand(time(0));
  Matrix mat1(true);
  Matrix mat2(true);
  Matrix mat3;
  mat1.displayValue();
  cout << "--------" << endl;
  mat3 = mat1 * mat2;
  // mat1.transposeMat();
  mat3.displayValue();
  return 0;

}
