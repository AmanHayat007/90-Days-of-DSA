#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3,1,4,8,9};

    Min Value  in array using loop
    int ans = INT_MAX;
    for(int i= 0;i<5;i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }

    // Max value in array using loop
    int ans = INT_MIN;
    for(int i = 0; i<5; i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout<<ans;
    return 0;
}