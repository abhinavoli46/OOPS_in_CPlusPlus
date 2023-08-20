#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
 ull evenSum = 0, oddSum = 0;

void countEven(ull start,ull end)
{
    for(ull i = 0; i < end;i++)
    {
        if(i % 2 == 0)
        {
            evenSum += i;
        }
    }
}

void countOdd(ull start, ull end)
{
    for(ull i = 0;i<end;i++)
    {
        if(i % 2 == 1)
        {
            oddSum += i;
        }
    }
}

int main()
{
    ull start = 0, end = 1900000000;
   
    auto startTime = chrono::high_resolution_clock::now();
    std::thread t1(countEven,start,end);
    std::thread t2(countOdd,start,end);
    
    t1.join();
    t2.join();
    auto endTime = chrono::high_resolution_clock::now();
    cout << "\nEven Sum : " << evenSum;
    cout << "\nOdd Sum : " << oddSum; 
    auto duration =  chrono :: duration_cast<chrono::microseconds>(endTime - startTime);
    cout << "\nTimeCount : " << duration.count()/1000000;
    return 0;
}