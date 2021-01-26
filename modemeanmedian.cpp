#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int sum(std::vector<int> numbers){
    int sum=0;
    for(unsigned int i=0;i<numbers.size();i++){
        sum+=numbers.at(i);
    }
    return sum;
}
void sort(std::vector<int> &numbers){
     std::sort(numbers.begin(), numbers.end());
     
}


void getNumbercount(std::vector<int> numbers){
    int count=1;
    int countArray[5];
    int mode=0;
    //int countMode=1;
    for(int i=0;i<=numbers.size();i++){
        for(int j=1;i<numbers.size();i++){
            if(numbers[i]==numbers[j]){
                count++;
            }
        }
    }
}

int main(){
    char numbers[5];
    float mean=0;
    std::vector<int> intArray;
    std::cout<<"Enter 5 numbers"<<std::endl;
    std::cin>>numbers;
    for(unsigned int i=0;i<5;i++){
       intArray.push_back(static_cast<int>(numbers[i])-48);
    
    }
    mean=sum(intArray)/5.0;
    std::cout<<"The mean is "<<mean<<std::endl;
    sort(intArray);
    std::cout<<"The median is "<<intArray.at(2)<<endl;
    getNumbercount(intArray);
}

