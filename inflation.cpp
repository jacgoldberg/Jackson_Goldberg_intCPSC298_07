#include<iostream>
using namespace std;
int main(){
  double cost;
  double totalCost;
  double inflationRate;
  int numYears;

  cout << "Current Price: " << endl;
  cin >> cost;
  cout << "Number of Years: " << endl;
  cin >> numYears;
  cout << "Inflation Rate" << endl;
  cin >> inflationRate;
  inflationRate = inflationRate/100;
  for(int i = 1; i < numYears; ++i){
    cost += cost * inflationRate;
  }
  cout << "The totalPrice: " << cost << endl;

}
