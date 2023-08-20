#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int counter = 0;
std :: mutex m;
void fun()
{
    for(int i = 0;i<100000;i++)
    {
        if(m.try_lock())
        {
            counter++;
            m.unlock();
        }
    }
}

int main()
{
    std::thread t1(fun);
    std::thread t2(fun);

    t1.join();
    t2.join();
    cout << endl;
    cout << counter << endl;
    return 0;
}
