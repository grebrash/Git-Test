#include <iostream>
using namespace std;

int sum(int n);

int main(){
  int n;
  
  cout << "Hello World!" << endl;
  cout << "Enter number: ";
  cin >> n;
  cout << "The sum of 1 to n is: " << sum(n) << endl;

  return 0;
}

int sum(int n){
  int total = 0;
  for(int i = 1; i <= n; i++)
    total += i;
  return total;
}
