#include <iostream>
using namespace std;

class Pet{
  public:
    Pet();
    Pet(string name, int age, string type, double weight);
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);
    string getName();
    int getAge();
    string getType();
    double getWeight();
    string Print();

  private:
    string name;
    int age;
    string type;
    double weight;
};

Pet::Pet(){
  name = "barkboi";
  age = 1;
  type = "purebreed";
  weight = 3.0;
}
Pet::Pet(string name, int age, string type, double weight){
  this -> name = name;
  this -> age = age;
  this -> type = type;
  this -> weight = weight;
}
void Pet::setName(string name){
  this -> name = name;
}
void Pet::setAge(int age){
  this -> age = age;
}
void Pet::setType(string type){
  this -> type = type;
}
void Pet::setWeight(double weight){
  this -> weight = weight;
}
string Pet:: getName(){
  return name;
}
int Pet:: getAge(){
  return age;
}
string Pet:: getType(){
  return type;
}
double Pet:: getWeight(){
  return weight;
}
string Pet:: Print(){
  return "Name: " + name + " Age: " + std::to_string(age) + " Type: " + type + " Weight " + std::to_string(weight);
}


int main(){
  Pet p1;
  Pet p2("Jackson", 19, "cat", 170.0);
  cout << p1.Print() << endl;
  cout << p2.Print() << endl;



}
