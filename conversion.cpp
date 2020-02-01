#include<iostream>
using namespace std;
void input(int& feet, int& inches){
  cout << "Enter Inches: " << endl;
  cin >> inches;
  cout << "Enter Feet: " << endl;
  cin >> feet;
}
void calculate(int feet, int inches, int& metters, int& centemeters){
  double hold = (feet * 12) + inches;
  metters = hold / 39.3701;
  centemeters = ((hold / 39.3701) - metters) * 10;
}
void output(int& metters, int& centemeters){
  cout << "- - - This is the conversion - - -" << endl;
  cout << "Metters: " << metters << endl;
  cout << "This is the length in centemeters: " << centemeters << endl;
  cout << "Together: " << metters << "." << centemeters << endl;
}
int main(){
  int feet = 0;
  int inches = 0;
  int metters = 0;
  int centemeters = 0;
  char sure = 'y';
  do{
  input(feet, inches);
  calculate(feet, inches, metters, centemeters);
  output(metters, centemeters);
  cout << "Would you like to go again? (y/n): " << endl;
  cin >> sure;
}while(sure == 'y');
cout << "Done" <<  endl;
  return 0;
}
