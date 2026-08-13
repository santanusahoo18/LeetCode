#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    int maximum=0,prefix=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];   
    }
    for(int i=0;i<n;i++){
        prefix=prefix+arr[i];
        int ans=sum-prefix; 
        if(prefix==ans){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<divide(arr);


    return 0;

}