#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "IntVector.h"
using namespace std;

int main() {

IntVector v;


cout<< "Size: " << v.size() << endl;
cout<< "Capacity: " << v.capacity() << endl;

cout << "empty? " << v.empty() << endl;

v.push_back(3);
v.push_back(7);
v.push_back(15);
v.push_back(9);
v.push_back(5);
v.push_back(6);

cout<< "Size: " << v.size() << endl;
cout<< "Capacity: " << v.capacity() << endl;

cout << "empty? " << v.empty() << endl;

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}
cout << endl;

cout << v.front() << endl;
cout << v.back() << endl;

v.insert(0,88);

cout << endl;

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;

v.erase(0);

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;

v.pop_back();

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;
 
v.assign(10,5);

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;

v.resize(20);

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;

v.resize(60,5);

for(unsigned i = 0; i < v.size(); i++){
  cout << v.at(i) << " ";
}

cout << endl;

v.reserve(80);

cout << v.capacity() << endl;


return 0;
}
