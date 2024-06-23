#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> numbers = {3, 41, 12, 9, 74, 15};
    
    
    int largest_number = numbers[0];
    
    
    for(int i = 1; i < numbers.size(); i++) {
        if(numbers[i] > largest_number) {
            largest_number = numbers[i];
        }
    }
    
   
    cout << "The largest number is: " << largest_number << endl;
    
    return 0;
}
