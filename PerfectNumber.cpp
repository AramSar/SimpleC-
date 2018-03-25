#include <iostream>
#include <math.h>

bool isPrime (int n)
{
    if(n == 2 || n == 3) return true;
    if(n == 1) return false;
    bool is = true;
    for(int i = 2; i <= (int) sqrt(n); i++)
    {
        if(n%i == 0) {
          is = false;
          break;
        }
    }
    return is;
}

bool isPerfect (int n) 
{  
     //using the fact that (2^(p-1))*(2^p - 1) is perfect when p is prime and 2^p - 1 is prime
    bool isPer = false;
    double p = log((1+sqrt(1+8*n))/2)/log(2);
    if((int) p != p ) return false; //to chek that p is an integer
    if(isPrime(p) && isPrime(((1+sqrt(1+8*n))/2) - 1)) isPer = true; 
    return isPer;
    
}

int main() 
{   
    int num;
    std::cout << "Input a positive integer " << std::endl;
    std::cin >> num;
    
    int i = num;
    while(true)
    {
        if(isPerfect(i))
        {
            std::cout << "The closest perfect number greater than or equal to " << num << " is " << i << std::endl;
            break;
        }
        i++;
    }
    return 0;
}