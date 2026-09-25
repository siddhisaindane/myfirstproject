#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left, right;
    char temp;

    printf("Enter a word: ");
    scanf("%s", str);

    left = 0;
    right = strlen(str) - 1; // Get the index of the last character

    // Swap characters moving towards the center
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
