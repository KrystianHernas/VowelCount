#include <iostream>
#include <vector>
//#include <iterator>
#include <string>
//#include <map>
//#include <algorithm>
//#include <stdexcept>

std::string inputString();
int getCount(const std::string&); 
bool isVowel(char);

int main()
{
    std::cout << getCount(inputString());
    return 0;
}

std::string inputString() {
    std::string str; std::cout << "Input string: " << std::endl; std::cin >> str;
    return str;
}

bool isVowel(char v) {
    const int s = 5;    char w[s] = { 'a','e','i','o','u' };
    for (int i = 0; i < s; i++) if (v==w[i]) return true;
    return false;
}

int getCount(const std::string& inputStr) {
    int num_vowels = 0;
    for (int i = 0; i < inputStr.size(); i++) if (isVowel(inputStr[i])) num_vowels++;
    return num_vowels;
}