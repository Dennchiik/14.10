#include <iostream>
#include <string>

std::string replaceDotsWithExclamation(const std::string& input) {
    std::string modifiedString = input;

    for (size_t i = 0; i < modifiedString.length(); ++i) {
        if (modifiedString[i] == '.') {
            modifiedString[i] = '!';
        }
    }

    return modifiedString;
}

int main() {
    std::string inputString = "Привет. Как дела?";
    std::string result = replaceDotsWithExclamation(inputString);
    std::cout << result << std::endl;

    return 0;
}
