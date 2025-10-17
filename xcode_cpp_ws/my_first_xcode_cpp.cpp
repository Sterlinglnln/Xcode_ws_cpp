//
//  my_first_xcode_cpp.cpp
//  xcode_cpp_ws
//
//  Created by Larry Lin on 2025/10/1.
//

#include <iostream>

using namespace std;

class MyFirstXcodeCpp {
public:
    void greet() {
        cout << "Hello, Larry!" << endl;
    }
};

int main() {
    MyFirstXcodeCpp greeter;
    
    string greeting;
    cout << "Message from larry: ";
    getline(cin, greeting);
    
    cout << "Message received: ";
    greeter.greet();
    
    return 0;
}
