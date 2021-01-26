#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int getNumber(){
    int input=0;
    cout<<"Input a number please"<<endl;
    cin>>input;
    return input;
}


int main(){
   int number=0; 
    number=getNumber();
    if(number%2==0){
        for(int i=1;i<=20;i++){
            cout<<i<<" x "<<number<<" = "<<number*i<<endl;
        }
    }
    else{
        int count=0;
        int n=1;
        while(count<30){
            if(n%number != 0){
                cout<<n<<endl;
                count++;
            }
            n++;
        }
    }
}