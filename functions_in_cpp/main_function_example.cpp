#include <iostream>
#include <string>
using namespace std;


// int main(){
//     cout<<"Without Parameter";
// }

// with cli paramters
int main(int argc,char* const argv[]){
    // cout<<argc;
    cout << typeid(argv).name();
    return 0;
}