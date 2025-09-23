// cpp code
#include <cstdio> // includes printf library
#include <array>  // includes array library
#include <string> // to use strings

// \n endline character

int main() {

    std::array<char, 8> squid = {'h','i', ' ', 't', 'h', 'e', 'r', 'e'};

    std::printf("%c\n", squid.at(1));

    std::array<std::string, 2> squid_str = {"hi", "there"};

    std::printf("%s\n", squid_str.at(0).c_str());


    char ex = 'B';

    std::printf("this is a number %i\n", ex);
    return 0;
}