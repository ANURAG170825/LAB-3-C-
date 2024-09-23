#include <iostream>

int main()
{
    double x=5.0;
    double y=10.0; 
    
    double* pointer_x=&x;

    double* pointer_y=&y;

    double sum = *pointer_x+*pointer_y;
    
    std::cout<< sum;
}