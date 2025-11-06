#include <iostream>
using namespace std;


void min_max(int *tab,int size, int* min,int* max){
    *min = *(tab);
    *max = *(tab);
    for(int*p = tab;p<tab+size;p++){
        if(*min>*p){
            *min=*p;
        }
        if(*max<*p){
            *max=*p;
        }
    }
    cout<<min<<" "<<max<<endl;
}

int main() {
    int tab[10] = { 23,2,21,89,6,7,9,4,2,10 };
   int ab[11]={21,32,11,10,2,5,10,12,9,0,18};
    int min =0;
    int max= 0;
    min_max(tab,10,&min,&max);
    cout<<"min ="<<min<<" "<<"max ="<<max<<endl;
    min_max(ab,11,&min,&max);
    cout<<"min ="<<min<<" "<<"max ="<<max<<endl;

    return 0;
}