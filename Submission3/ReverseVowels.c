#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c; 
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

char* reverseVowels(char *s) {
    int n = strlen(s);

    int index[1000];      
    char vowels[1000];    
    int k = 0;            

  
    for (int i = 0; i < n; i++) {
        if (isVowel(s[i])) {
            index[k] = i;
            vowels[k] = s[i];
            k++;
        }
    }

   
    int ptr = k - 1;
    for (int i = 0; i < k; i++) {
        s[index[i]] = vowels[ptr];
        ptr--;
    }

    return s;
}

int main() {
    char s[100] = "leetcode";
    printf("%s\n", reverseVowels(s)); 
    return 0;
}
