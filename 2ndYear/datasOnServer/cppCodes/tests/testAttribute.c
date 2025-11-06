#define __wur __attribute__((warn_unused_result))

int addNumbers(int num1, int num2) __wur {
  return num1 + num2;
}

int main(){
  addNumbers(1, 2);
  return 0;
}
