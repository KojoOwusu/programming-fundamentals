#include <iostream>
#include <tuple>
#include <typeinfo>
#include <string>
#include "funchead.h"
 
using std::cin;
using std::cout;
using std::endl;

int main(){
    //auto numbers=input();
    //cout<<std::get<0>(numbers)+std::get<1>(numbers);

    output(6);
    output('K');
    output("Hello World",5.25f);
    output(3.14f);

    cout<<"---------------------"<<endl;
    cout<<factorial(4)<<endl;
}

//output function
void output(int a){
   // cout<<decltype(a);
    cout<<typeid(a).name()<<a<<endl;
}
void output(char a){
    cout<<typeid(a).name()<<a<<endl;   
}
void output(float a){
    cout<<typeid(a).name()<<a<<endl;

}
void output(char a[]){
    cout<<typeid(a).name()<<a<<endl;
}

void output(char a[], float b){
        cout<<a<<" "<<b<<endl;
    }
//input function
std::tuple<int, int> input(){
    int firstNum=0;
    int secondNum=0;
    cout<<"enter the first number"<<endl;
    cin>>firstNum;
    cout<<"enter second number"<<endl;
    cin>>secondNum;
    return {firstNum, secondNum};
}

int factorial(int a){
    if(a>1){
        return a*factorial(a-1);
    }
    return 1;
}

