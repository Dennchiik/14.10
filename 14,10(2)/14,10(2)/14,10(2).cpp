#include <iostream>
#include <string>

int countOccurrences(const std::string& inputString, char targetChar) {
    int count = 0;
    for (char c : inputString) {
        if (c == targetChar) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string strings[] = { "Hello, world!", "This is a test.", "The quick brown fox." };

    char targetCharacter;
    std::cout << "Введите символ для подсчета: ";
    std::cin >> targetCharacter;

    for (const std::string& str : strings) {
        int count = countOccurrences(str, targetCharacter);
        std::cout << "Символ '" << targetCharacter << "' встречается " << count << " раз в строке: " << str << std::endl;
    }

    return 0;
}
