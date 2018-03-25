#include <iostream>


int main() 
{
    const int length = 10;
    int n[length];
    std::cout << "Enter " << length << " numbers " << std::endl;
    int max = n[0];
    int k = 0;
    
    for (int i = 0; i < length; i++) 
    {
        std::cin >> n[i];
        if(n[i] > max)
        {
            max = n[i];
            k = i;
        }
    }
    
    n[k] = 0;
   
    
    return 0;
}