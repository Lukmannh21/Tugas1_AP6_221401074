/*
nama : Lukman Nur Hakim
NIM  : 221401074
Kom  : C
*/

#include <iostream>

using namespace std;

int main (){
  int a, b, And,Or,Xor,Not,Shl,Shr;
  cin >> a;
  cin >> b;

  And = a & b;
  cout << " AND " << And << endl;
  Or = a | b;
  cout << " OR " << Or << endl;
  Xor = a ^ b;
  cout << " XOR " << Xor << endl;
  Not = ~b;
  cout << " NOT " << Not << endl;
  Shl = a << 1;
  cout << " SHL " << Shl << endl;
  Shr = a >> 1;
  cout << " SHR " << Shr << endl;

  return 0;
}