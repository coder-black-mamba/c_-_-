// I Use Book/pointer_and_references.pdf as a learning Material


#include <iostream>
using namespace std;

int strirngLength(char* str){
    int length=0;
    while (*str!='\0')  
    {
        length++;
        str++;
    }

    return length;
    
}




int main(){
    //     For a type T, T∗ is the type ‘‘pointer to T.’’ That is, a variable of type T∗ can hold the address of an
    // object of type T. For example:
    // char c='a';
    // pointer to "c". here &c is the reference/memory_address of the variable c
    // char *p = &c;
    // p:->&c->c: 'a'
    char c='a';
    char* p =&c;
    char c2=*p;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&c<<endl;

    // Lets try out some of more pointer example
    // Pointer to int
    int *pi;
    // char** c;//pointer to pointer to char
    int* ap[15];//array of pointers



    // Decleare function pointer
    // function as pointer
    int (*fp)(char*);
    // cout<<fp;

    fp=strirngLength;
    // cout<<fp;

    char str[]="Hello World";
    int str_len=fp(str);
    cout<<str_len;
    
}