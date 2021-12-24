#include<iostream>
#include<ctime>
using namespace std;

long int fibonacci(long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long int fibonacci(long int y){
    if(y <= 1){
        return y;
    }else{
        return fibonacci(y-1)+fibonacci(y-2);
    }
     
}