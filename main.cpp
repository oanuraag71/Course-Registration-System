#include <iostream>
#include "RegistrationSystem.h"

using namespace std;

int main() {
    RegistrationSystem rs;
    
    // Login loop - keep trying until successful
    while (!rs.login()) {
        cout << "Try again.\n" << endl;
    }
    
    // Student menu after successful login
    rs.studentMenu();
    
    return 0;
}
