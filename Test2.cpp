#include <iostream>
#include <string>
#include <vector> // dynamic unordered container 
#include <functional>

using namespace std;

/* Parameterize Data*/  /* Parameterize function using function pointer*/
template<typename Type>
void queryAnyTypeArray(const vector<Type> source,function<int(Type)> predicate){
    
     for (Type item:source) { 
        if (predicate(item)) { 
            cout<<item<<endl; //operator overloading 
            } 
     }
         
}

int main() {
     // Define an array of strings 
    const vector<string> names= {"Bosch", "Bangalore", "Mexico", "Canada" ,"India"}; 
    const vector<int> numbers={2,4,5,6,67,7,8};
    queryAnyTypeArray<string>(names, [](string str) -> int { return toupper(str[0]) == 'B';});
    queryAnyTypeArray<int>(numbers, [](int number) -> int { return number % 2==0;});
    return 0; 
} 