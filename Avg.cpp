#include <iostream>
int avg(int arr[], int length)
{
    int sum = 0;
    int avg;
    for (int i = 0; i < length; i++) 
    {
        sum+= arr[i];
    }
    avg = sum/length;
    return avg;
}

int main() 
{
    const int length = 10;
    int n[length];
    std::cout << "Enter " << length << " numbers " << std::endl;
    for (int i = 0; i < length; i++) 
    {
        std::cin >> n[i];
    }
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        if(n[i]>= avg(n, length)) count++;
    }
    std::cout << "Number of scores above or equal to the average is " << count;
    std::cout << " Number of scores below the average is " << length - count << std::endl;
    
    
    return 0;
}