#include<iostream>
using namespace std;

int gcd(int x,int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(12540,4580);
    return 0; 
}

int gcd(int x,int y){
    if(x % y == 0){
        return y;
    }else{
        return gcd(y, x%y);
    }
}