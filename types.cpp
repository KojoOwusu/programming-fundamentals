#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using std::cout;
using std::cin;

int countletters(char* line,size_t SIZE){
    int count=0; 
    for(int i=0;i<SIZE;i++){
       count++;
   } 
   return count;
}

int main(){
    typedef std::string STRINGARR[10]; 
    typedef int* intPtr;
    int a {};
    intPtr p1;
    int &ref = a;
    const int constinteger=4;

    a=5;
    p1=&a;
    (*p1)++;
    ref++;
    std::cout<<a<<std::endl;

    int hexnum(0xf3f2);
    std::cout<<hexnum<<std::endl;
    int octnum(04737);
    std::cout<<octnum<<std::endl;
    int letterA('a');
    std::cout<<letterA<<std::endl;

    std::cout<<"Enter hyphen connected sentence"<<std::endl;
    char line[30];
    std::cin.getline(line,30);

    
    int counter=0;
    char temp[10];
    for(int i=0;i<30;i++){
   if(isalpha(line[i])){
    counter++;
    //cout<<line[i];
    temp[i]=line[i];
    }
    else{     
    cout<<"["<<counter<<"]"<<temp;
    counter=0;
    cout<<" \n";
    }
    //strcpy(temp,"");
    line[i]+1;

    STRINGARR words;
    cout<<"type 10 strings"<<std::endl;
    
    for(i=0;i<10;i++){
        getline(cin,words[i]);
    }
   

}
}