#include <iostream>


int main() 
{
    const int length = 10;
    int n[length];
    for(int i = 0; i < length; i++)
    {
	n[i]=0;
    }
    int input;
    std::cout << " Enter numbers " << std::endl;
    while (true) 
    {
        
        std::cin >> input;
        if(input > 10 || input < 1) break;
        n[input - 1]++;

    }
    for(int i = 0 ; i < length; i++){
        std::cout << "There are " << n[i] << " " << i+1 << "s" << std::endl;
    }
    return 0;
}