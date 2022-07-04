#include <iostream>

using namespace std;

int main() {
  int power;
  cout << "Power to be raised to" << endl;
  cin >> power;
  int base = 1;
  if (power > 63){
    return 0;
  }
  else{
  for(int  x = 0; x < power; x++){
    base *= 2;
  }
  cout << base << endl;
}
}

// initalize at 1,as to the first power you multiply by 2 and if you start at 2 you then get 4
// Every iteration you do you add one to x, keeps track of how many powers you have done
// Multiply by two everytime as that is your base