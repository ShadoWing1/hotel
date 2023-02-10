#include <iostream>
#include <ctime>
#include <chrono>

int main(int argc, char const *argv[])
{
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);

    std::cout << "Current time: " << std::ctime(&now_time) << std::endl;

    return 0;
}
