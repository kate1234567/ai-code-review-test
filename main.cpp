#include <iostream>
using namespace std;

int divide(int a, int b){
    return a / b;
}

int main(){

    int x = 10;
    int y = 0;

    cout << divide(x,y) << endl;

    int arr[5];

    for(int i = 0; i <= 5; i++){
        arr[i] = i;
    }

    return 0;
}
