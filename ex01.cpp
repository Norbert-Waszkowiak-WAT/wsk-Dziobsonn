#include <iostream>
using namespace std;
int main(){
int x =21;
int* p = &x;

cout<< &x<<endl<<*p<<endl;

*p=23;

cout<<x<<endl;
return 0;
}