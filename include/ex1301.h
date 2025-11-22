#ifndef _ARRYLIST_H_
#define _ARRYLIST_H_

#include <iostream>
#include <initializer_list>

template<typename T>
class ArrayList {
public:
  ArrayList();
  ArrayList(int);
  ArrayList(const ArrayList<T>&);
  ArrayList(std::initializer_list<T>);

  virtual int size();
  virtual bool empty();
  virtual T get(int ndx) const;
  virtual void add(T e);
  virtual ArrayList<T>& remove();

  virtual T* begin();
  virtual T* end();

  virtual ArrayList<T>& operator=(const ArrayList<T>& a);
  virtual T operator[](int ndx) const;
  virtual T &operator[](int ndx);
  virtual ArrayList<T>& operator<<(T e);
  virtual ~ArrayList();

private:
  T* elements;
  int sz;
  int capacity;
  static const int INITIAL_CAPACITY = 8;
};

#endif