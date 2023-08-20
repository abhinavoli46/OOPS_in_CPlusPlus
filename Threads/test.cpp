#include<bits/stdc++.h>
using namespace std;
std::mutex m;
int counter = 0;
void fun()
{
    m.lock();
        counter++;
        std::thread::id this_id = std::this_thread::get_id();
        cout << "\nIncreased by " << this_id;
    m.unlock();
}


int main()
{
    std:: thread t1(fun);
    std::thread t2(fun);
    t1.join();
    t2.join();
    cout << endl;
    cout << counter;
    return 0;
}