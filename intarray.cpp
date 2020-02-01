#include <iostream>
using namespace std;
int main(){

  int temp = 0;
  const int NUM_ITEMS = 10;
  int array[NUM_ITEMS];

  for(int i = 0; i < 9; i++){
      cout << "Pease Enter a Number: " << endl;
      cin >> temp;
      if(temp >= 0){
        array[i] = temp;
      }
  }

  for (int i = 0; i < NUM_ITEMS - 1; i++){
    cout << array[i] << endl;
  }
  cout << endl;


  return 0;
}
