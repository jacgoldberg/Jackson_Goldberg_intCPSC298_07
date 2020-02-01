#include<iostream>
using namespace std;
float addTax(int taxRate, float cost){
  cost += (cost * taxRate / 100);
}
int main(){
  float cost = 6;
  int taxRate = 20;
  cost = addTax(taxRate,cost);
  cout << cost << endl;
  return 0;
}
