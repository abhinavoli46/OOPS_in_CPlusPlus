#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1239;
    int temp = num;
    int count = 0;
    while (temp>0)
    {
        count++;
        temp/=10;
    }
    int ans = 0;
    for(int i = count-1;i>= 0;i--)
    {
        ans += pow(10,i) * (num%10);
        num/= 10;
    }

    cout << ans;
    
    return 0;
}