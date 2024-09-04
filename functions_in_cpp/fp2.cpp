#include <iostream>
using namespace std;


void pa(int arr[5]){
    for(int i =0 ;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    // Passing Array to Function
    int pa_arr[5]={1,2,3,4,5};
    pa(pa_arr);

}