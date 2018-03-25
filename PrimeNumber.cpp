#include <iostream>
#include <math.h>

bool isPrime (unsigned int n)
{
    if(n == 2 || n == 3) return true;
    if(n == 1) return false;
    bool is = true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) {
          is = false;
          break;
        }
    }
    return is;
}
int main() 
{   
    int num;
    std::cout << "Input a positive integer " << std::endl;
    std::cin >> num;
    
    int i = num;
    while(true)
    {
        if(isPrime(i))
        {
            std::cout << "The closest prime number greater than or equal to " << num << " is " << i << std::endl;
            break;
        }
        i++;
    }
    return 0;
}