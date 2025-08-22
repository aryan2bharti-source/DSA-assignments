#include <iostream>
using namespace std;
int linearSearch(int arr[], int i, int target, int n){
    if(i >= n){
    cout << "target not found";
    return -1;
    }

    if(arr[i] == target){
        cout << "target is at position" << i+1 << endl;
        return i;

    }

    return linearSearch(arr, i+1, target, n);

}
int main(){
    int n;
    cout << "Array of how many integers?";
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "what is the target?" << endl;
    int target;
    cin >> target;
    linearSearch(arr, 0, target, n);


    return 0;
}