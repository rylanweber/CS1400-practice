#include "ex1301.h"
#include <stdexcept>
#include <iomanip>
using namespace std;

template <typename T>
ArrayList<T>::ArrayList(): capacity(INITIAL_CAPACITY), sz(0){
  elements = new T[capacity]();
}

template <typename T>
ArrayList<T>::ArrayList(int size): capacity(size), sz(size){
  elements = new T[capacity]();
}

template <typename T>
ArrayList<T>::ArrayList(const ArrayList<T>& list): capacity(list.capacity), sz(list.sz){
  elements = new T[capacity]();
  for(int i = 0; i < sz; i++){
    elements[i] = list.elements[i];
  }
}

template <typename T>
ArrayList<T>::ArrayList(initializer_list<T> list): capacity(list.size()), sz(list.size()){
  elements = new T[capacity]();

  int i = 0;
  for(T e : list){
    elements[i] = e;
    i++;
  }
}

template <typename T>
int ArrayList<T>::size(){ return sz; }

template <typename T>
bool ArrayList<T>::empty(){ return sz == 0;}

template <typename T>
T ArrayList<T>::get(int ndx) const{
  if(ndx >= sz){
    throw runtime_error(to_string(ndx) + " is out of range");
  }

  return elements[ndx];
}

template <typename T>
void ArrayList<T>::add(T e){
  if(sz == capacity){
    T* newElements = new T[2 * capacity]();
    for(int i = 0; i < sz; i++){
      newElements[i] = elements[i];
    }

    delete[] elements;
    elements = newElements;
    capacity *= 2;
  }

  elements[sz++] = e;
}

template <typename T>
ArrayList<T>& ArrayList<T>::remove(){
  if(sz == 0){
    throw runtime_error("Nothing to remove");
  }

  sz--;
  return *this;
}

template <typename T>
T* ArrayList<T>::begin(){ return elements; }

template <typename T>
T* ArrayList<T>::end(){ return elements + sz; }

template <typename T>
ArrayList<T>& ArrayList<T>::operator=(const ArrayList<T>& a){
  T* newElements = new T[a.capacity]();
  for(int i = 0; i < a.sz; i++){
    newElements[i] = a.elements[i];
  }

  delete[] elements;
  elements = newElements;
  sz = a.sz;
  capacity = a.capacity;
  return *this;
}

template <typename T>
T ArrayList<T>::operator[](int ndx) const{ return get(ndx); }

template <typename T>
T& ArrayList<T>::operator[](int ndx){
  if(ndx >= sz){
    throw runtime_error(to_string(ndx) + " is out of range");
  }

  return elements[ndx];
}

template <typename T>
ArrayList<T>& ArrayList<T>::operator<<(T e){
  add(e);
  return *this;
}

template <typename T>
ArrayList<T>::~ArrayList(){ delete [] elements; }

int main() {
  ArrayList<int> one(7);
  ArrayList<int> two = one;
  ArrayList<int> three;
  ArrayList<int> four = { 4, 8, 16 };

  two[2] = 99;

  for (int i = 0; i <one.size(); i++) {
    cout << setw(7) << "one: " << one[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < two.size(); i++) {
    cout << setw(7) << "two: " << two[i] << endl;
  }
  cout << endl;
  three << 99 << 88 << 77 << 66 << 55 << 44 << 33 << 22 << 11;
  for (int i = 0; i < three.size(); i++) {
    cout << setw(7) << "three: " << three[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < four.size(); i++) {
    cout << setw(7) << "four: " << four[i] << endl;
  }

  one = four;
  cout << endl;
  for (int i = 0; i <one.size(); i++) {
    cout << setw(7) << "one: " << one[i] << endl;
  }

  three.remove().remove().remove();
  cout << endl;
  for (int e : three) {
    cout << setw(7) << "three: " << e << endl;
  }

  return 0;
}