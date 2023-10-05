#ifndef __INTVECTOR_H__
#define __INTVECTOR_H__

#include <iostream>

using namespace std;

class IntVector{

 private:
    unsigned _capacity;

    unsigned _size;

    int* _data;

    void expand(); //good
    
    void expand(unsigned amount); //good
 public:
   IntVector(unsigned capacity = 0, int value = 0); // good

   ~IntVector(); //good

   unsigned size() const; //good

   unsigned capacity() const; //good

   bool empty() const; //good

   const int & at(unsigned index) const; //good

   const int & front() const; //good

   const int & back() const; //good

   int & at(unsigned index); //good

   void insert(unsigned index, int value); //good

   void erase(unsigned index); //good

   int & front(); //good

   int & back(); //good

   void assign(unsigned n, int value); //good

   void push_back(int value); //good

   void pop_back(); //good

   void clear(); //good

   void resize(unsigned size, int value = 0);

   void reserve(unsigned n);
};













#endif