#include <iostream>
#include <string>

void Square(int& x)
{
    x *= x;
}

int main() 
{   
    int length = 10;
    int nums[length]; 
    std::cout << "Enter 10 integers " << std::endl;
     for(int i = 0; i < length; i++)
    {
        std::cin >> nums[i];
        int& x = nums[i];
        Square(x);
        std::cout << nums[i] << " ";
        
    }
    
   
    return 0;
}