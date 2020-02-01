#include<iostream>
using namespace std;
void zeroBooth(int& x, int& y){
  x = 0;
  y = 0;
}
int main(){
  int x = 7;
  int y = 10;
  zeroBooth(x,y);
  cout << x << endl;
  cout << y << endl;
  return 0;
}
