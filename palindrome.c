#include<stdio.h>
#include<string.h>
#define MAX 1000

int str_is_palindrome(char str[], int length) {
    
    int start = 0, end = length - 1;
    // we check 1st character with the last character
    // second character with the second last character and so on..
    while(start < end) {

        // if the characters dont match we return false
        if(str[start++] != str[end--])
            return 0;
    }

    return 1;
}

int main() {

    // character array
    char str [MAX];
    scanf("%s", &str);

    // if the function returns true string is palindrome otherwise it is not
    if (str_is_palindrome(str, strlen(str)))
        printf("Palindrome");
    else 
        printf("Not Palindrome");
    return 0;
}
