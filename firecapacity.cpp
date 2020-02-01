#include<iostream>
using namespace std;
int main(){

  int maxCapacity;
  int currentCapacity;

  cout << "What is the maximum number of people in a meeting room?: " << endl;
  cin >> maxCapacity;
  cout << "Expected Number of People for the meeting: " << endl;
  cin >> currentCapacity;

  if(currentCapacity >= maxCapacity){
    cout << "You need to remove " << maxCapacity - currentCapacity << " people to not vilolate the firecode." << endl;
  }
  else{
    cout << "This meeting is good to go!"
  }
}
