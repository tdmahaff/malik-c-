#include <iostream>
using namespace std;

bool isPalindrome(string);

int main()
{
    
    string str1;
    
    cout << "Enter a string: ";
    cin >> str1;

    if (isPalindrome(str1)) {
        cout << "String is a palindrome";
    }
    else
        cout << "String is not a palindrome";

    return 0;

}

bool isPalindrome(string str)
{
    int length = str.length(); //Step 1
    for (int i = 0; i < length / 2; i++) //Step 2
        if (str[i] != str[length - 1 - i])
            return false;
    return true;
}
