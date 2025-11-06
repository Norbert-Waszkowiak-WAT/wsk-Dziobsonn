#include <iostream>
using namespace std;
int suma(int* a, int n) {
    int źd = 0;
    for (int i = 0; i < n; i++) {
        źd += (*a + i);
    }
    return źd;
}


int main() {
    int tab[10] = { 23,2,21,89,6,7,9,4,2,10 };
    int* a = tab;
    int n = 9;
    cout << suma(a, n) << endl;
    return 0;
}