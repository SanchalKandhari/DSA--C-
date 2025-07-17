#include <iostream>
using namespace std;
int getmin(int arr[],int n){
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
// int getmin(int arr[], int n) {
//     int minVal = INT_MAX;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] < minVal) {  // Corrected comparison
//             minVal = arr[i];
//         }
//     }
//     return minVal;  // Missing return fixed
// }
int getmax(int arr[],int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
// int getmax(int arr[], int n) {
//     int maxVal = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > maxVal) {  // Corrected comparison
//             maxVal = arr[i];
//         }
//     }
//     return maxVal;  // Missing return fixed
// }
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"maximum number is the given array is :"<<getmax(arr,size)<<endl;
    cout<<"minimum number is the given array is :"<<getmin(arr,size)<<endl;
    return 0;
}