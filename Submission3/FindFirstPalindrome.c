#include <stdio.h>
#include <string.h>

int isPalindrome(char *s) {
    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

char* firstPalindrome(char strs[][100], int size) {
    for (int i = 0; i < size; i++) {
        if (isPalindrome(strs[i])) {
            return strs[i];
        }
    }
    return "";   
}

int main() {
    char words[5][100] = {"abc", "car", "ada", "racecar", "cool"};

    char* ans = firstPalindrome(words, 5);
    printf("%s\n", ans);   

    return 0;
}
