#include <iostream>

int postInc (int& x)
{
    x += 1;
    return x-1;
}

int preInc (int& x)
{
    x += 1;
    return x;
}
int main()
{   
    int z = 4;
    int x = 4;
    int& y = x;
// test for postInc(y)
    
//    std::cout << z++ <<std::endl;
//    std::cout << z <<std::endl;
//    std::cout << postInc(y) <<std::endl;
//    std::cout << x <<std::endl;
 
// test for preInc(y)
    std::cout << ++z <<std::endl;
    std::cout << z <<std::endl;
    std::cout << preInc(y) <<std::endl;
    std::cout << x <<std::endl;
    return 0;
}