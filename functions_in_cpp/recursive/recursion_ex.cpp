#include <iostream>
using namespace std;




// direct recursion
int fib(int x){
    if(x<=0){
        return 1;
    }

    return x*fib(x-1);
}

// indirect recursion

void indirectRecursionB(int n); // Forward declaration

void indirectRecursionA(int n) {
    if (n > 0) {
        cout << n << " ";
        indirectRecursionB(n - 1); // Function A calls Function B
    }
}

void indirectRecursionB(int n) {
    if (n > 1) {
        cout << n << " ";
        indirectRecursionA(n / 2); // Function B calls Function A
    }
}

// int main() {
    // indirectRecursionA(10);
    // return 0;
// }

int main(){
    // int fib_ten=fib(3);
    // cout << fib_ten;
    indirectRecursionA(10);

}

