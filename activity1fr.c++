#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    // Write C++ code here
    double base, height, width,area, perimeter, diagonal;
    
    std::cout<< " Input the base of the rectangle: ";
    std::cin>> base;
    std::cout<< "Input the height of the rectangle: ";
    std::cin>> height;
    
    area = base * height;
    perimeter = 2 * (base + height);
    diagonal = sqrt(pow(base,2.0)+ pow(height,2.0));
   
   
   std::cout<< std::fixed << std::setprecision(4);
   std::cout<<"Area = " << area << std::endl;
   std::cout<<"Perimeter = "<< perimeter<<std::endl;
   std::cout<<"Diagonal = "<< diagonal<<std::endl;
   
    return 0;
    
    
    
}
