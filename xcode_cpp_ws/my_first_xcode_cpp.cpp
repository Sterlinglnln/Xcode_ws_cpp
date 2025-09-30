//
//  my_first_xcode_cpp.cpp
//  xcode_cpp_ws
//
//  Created by Larry Lin on 2025/10/1.
//

#include <iostream>

using namespace std;

class myFirstXcodeCpp {
private:
    string name;

public:
    myFirstXcodeCpp(string n) : name(n) {
        cout << "Hello, " << name << "!" << endl;
    }
};

int main() {
    string message;
    cout << "Message from sterlinglnln: ";
    getline(cin, message);
    
    myFirstXcodeCpp name1("Larry");
    
    return 0;
}
