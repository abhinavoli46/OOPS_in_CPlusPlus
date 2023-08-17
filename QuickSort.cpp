#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr,int left,int right)
{
    int pivot = right;
    int index = left-1;
    for(int i = left;i<right;i++)
    {
        if(arr[i] <= arr[pivot])
        {
            index++;
            swap(arr[i],arr[index]);
        }
    }
    index++;
    swap(arr[index],arr[pivot]);
    return index;
}

void quickSort(vector<int>& arr,int left,int right)
{
    if(left < right)
    {
        int part = partition(arr,left,right);
        quickSort(arr,left,part-1);
        quickSort(arr,part+1,right);
    }
}
int main()
{
    vector<int> arr = {1,4,6,3,8,9};
    quickSort(arr,0,arr.size()-1);
    for(auto x : arr)
    {
        cout << x << " ";
    }
    return 0;

}