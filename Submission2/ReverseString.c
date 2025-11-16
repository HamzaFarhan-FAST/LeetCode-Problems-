#include <stdio.h>

int main(){

    printf("Enter the length of alphabets you wanna enter: ");
    int numalpha;
    scanf("%d", &numalpha);

    char arr[numalpha];

    printf("Enter %d alphabets: \n", numalpha);
    for(int i = 0; i < numalpha ; i++){
        scanf(" %c", &arr[i]);
    }

    int m = 0, n = numalpha - 1;
    char temp ;
    while (m < n)
    {
        temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp;
        m++;
        n--;
    }
    
    for (int z = 0; z < numalpha; z++)
    {
        printf("%c", arr[z]);
    }
    

}