#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
  const int NUM_COL = 5;
  const int NUM_ROW = 4;
  int list[NUM_ROW][NUM_COL];
  string str[5];
  string row;

  for(int i = 0; i < NUM_ROW; i++){
    cout << "Please enter in five numbers: " << endl;

    for(int j = 0; j < NUM_COL; j++){
      cout << "Number " << j << ": " << endl;
      cin >> list[i][j];
    }
  }


  return 0;
}
