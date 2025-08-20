#include <iostream>
#include <MyVec.h>

int main()
{
  MyVec <int> a(0);
  for(int i=0; i<10; i++) a.push(i);
  a.print();
}
