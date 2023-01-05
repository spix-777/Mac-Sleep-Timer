#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <unistd.h>

int main(int argc, char* argv[]) {
    // Define the flags
    int minutes = 0;
    int hours = 0;
    int c;
    while ((c = getopt(argc, argv, "m:h:")) != -1) {
        switch (c) {
            case 'm':
                minutes = atoi(optarg);
                break;
            case 'h':
                hours = atoi(optarg);
                break;
            default:
                break;
        }
    }

    // Calculate the total number of seconds to wait
    int seconds = minutes * 60 + hours * 3600;

    // Sleep for the specified number of seconds
    std::this_thread::sleep_for(std::chrono::seconds(seconds));

    // Put the Mac to sleep
    std::cout << "Putting the Mac to sleep..." << std::endl;
    int result = std::system("pmset sleepnow");
    if (result != 0) {
        std::cerr << "Error putting the Mac to sleep." << std::endl;
        return 1;
    }
    return 0;
}

