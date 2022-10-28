/*Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j. 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements in nums"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count=count+1;
            }
        }
    }
    cout<<"The number of good pairs: "<<count<<endl;

}