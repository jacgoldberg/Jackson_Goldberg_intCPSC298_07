#include<iostream>
using namespace std;
int main(){
  int hoursWorked = 0;
  int hoursOverTime = 0;
  double amountLeft = 0;
  double payRate = 16.0;
  double overTime = 1.5;
  double socSecurity = 0.06;
  double incTaxF = 0.14;
  double incTaxS = 0.05;
  int medInsur = 10;
  double initialAmount = 0;

  cout << "How many hours did you work this week: " << endl;
  cin >> hoursWorked;
  cout << "How many hours of over time this week: " << endl;
  cin >> hoursOverTime;
  initialAmount = ((hoursWorked * payRate) + (hoursOverTime * (overTime * payRate)));
  amountLeft = initialAmount - (initialAmount * (socSecurity + incTaxF + incTaxS)) - medInsur;
  cout << "Your gross pay: " << amountLeft << endl;


}
