#include<iostream>

using namespace std;
int main() {
  int num1, num2;
  cout <<"Enter two integers: " <<endl;
  cin >> num1;
  cin >> num2;
  
  if (num1 > num2)
  {
    cout << num1 <<"is greater"<<endl;
  }
  else {
    cout << num2 <<" is greater"<<endl;
  }
  return 0;
}