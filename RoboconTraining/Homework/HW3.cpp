#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,2,3,6,2,4};

    bool duplicate = false;
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if(duplicate==true) break;
    }

    if(duplicate==true)
        cout << "Array contains duplicates.\n";
    else
        cout << "Array does not contain duplicates.\n";

    return 0;

}