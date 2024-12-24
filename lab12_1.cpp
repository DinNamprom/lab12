#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci(long long int);

int main(){
    // int x;
    // cin >> x;
    // cout << fibonacci(x);
    // return 0; 
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(long long int x) {
    if (x == 0) {
        return x;
    }else if (x == 1) {
        return x;
    }
    else {
        x = fibonacci(x-1) + fibonacci(x-2);
        return x;
    }
}
