#include <iostream>
#include <algorithm>
#include <string>


bool is_palindromes(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    return str == rev;
}


int main()
{
    std::string s;
    std::cout << "Enter a string" << std::flush;
    std::getline(std::cin, s);
    std::cout <<  s << (is_palindromes(s) ? "is" : "is not") << "a palindrome" << std::endl;
}