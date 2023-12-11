/*
To get theoretical idea about "signal handling" kindly visit below page.

https://www.tutorialspoint.com/cplusplus/cpp_signal_handling.htm

*/


#include "iostream"
#include <csignal> // header file for signal handling methods.
#include <windows.h> // header file for sleep methods in windows platform.
//#include <unistd.h> // header file for sleep methods in linux platform.

using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here  
    // terminate program  

    exit(signum);
}

int main() {
    // register signal SIGINT and signal handler  
    signal(SIGINT, signalHandler);

    while (1) {
        cout << "Going to sleep...." << endl;
        Sleep(1000); // 1000 milisec = 1 sec
    }

    return 0;
}
