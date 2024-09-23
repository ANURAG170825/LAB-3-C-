#include<iostream>

typedef int* VEC;
typedef VEC* MATRIX;    

int main(){
    
    int a=5;
    VEC v=&a;
    MATRIX m=&v;
    
    std::cout<<"value of a through v: "<< *v << std::endl;
    std::cout<<"value of a through m: " << **m << std::endl;
   return 0;
}