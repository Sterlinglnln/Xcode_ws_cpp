//
//  sum.cpp
//  xcode_cpp_ws
//
//  Created by Larry Lin on 2025/10/1.
//

#include <iostream>

using namespace std;

class Sum {
private:
    int a;
    int b;
    
public:
    Sum(int x, int y) : a(x), b(y) {}
    
    int calculate() {
        return a + b;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    Sum sumObj(num1, num2);
    int result = sumObj.calculate();
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}
