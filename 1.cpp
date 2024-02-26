#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(vector<int> &arr, int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] != arr[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    vector<int> arr{1,2,3,2,1,3};
    if(isPalindrome(arr, arr.size())){
        cout<<"True";
    }
    else{
        cout<<"False" << endl;
    }
    return 0;
}