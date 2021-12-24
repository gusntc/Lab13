#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(15);
    return 0; 
}

int fibonacci(int y){
    if(y <= 1){
        return y;
    }else{
        return fibonacci(y-1)+fibonacci(y-2);
    }
     
}