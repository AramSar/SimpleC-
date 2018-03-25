#include <iostream>


int main()
{   
    int max;
    int min;
    int& maxp =max;
    int& minp =min;
    
    int length = 10;
    int nums[length]; 
    std::cout << "Enter 10 integers " << std::endl;
     for(int i = 0; i < length; i++)
    {
        std::cin >> nums[i];
    }
    maxp = nums[0];
    minp = nums[0];
    for(int i = 0; i < length; i++)
    {
        if(nums[i] > maxp) maxp = nums[i];
        if(nums[i] < minp) minp = nums[i];
    }
    
    std::cout << "Max= " << max << " Min= " << min << std::endl;
    return 0;
}