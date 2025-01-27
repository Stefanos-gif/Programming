#include <iostream>
namespace Logger {
    namespace Debug {
        void log(std::string message) {
            std::cout << "[DEBUG] " << message << std::endl;
        }
    }

    namespace Error {
        void log(std::string message) {
            std::cout << "[ERROR] " << message << std::endl;
        }
    }
    
    // Alias for easier access
    namespace L = Debug;  // Shows namespace aliasing
}

int main() {
    Logger::Debug::log("Starting application...");
    Logger::Error::log("Failed to load std::cnfig");
    Logger::L::log("Using namespace alias");
    return 0;
}