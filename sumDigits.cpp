#include <iostream>
#include <math.h>

int digits(int a)
{
    int count = 0;
    while(true){
        a = a/10;
        count++;
        if(a == 0) break;
    }
    return count;    
}

int sumDig(int a)
{   int l = digits(a);
    int rev = 0;
    for(int i = 0; i < l; i++)
    {
        rev += (a%10);
        a/=10;
    }
    return rev;
}

int main() 
{   
    int number;
    std::cout << "Enter the number " << std::endl;
    std::cin >> number;
    std::cout << sumDig(number);
    return 0;
}