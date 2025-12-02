#C Program to Concatenate Two Strings Without Using strcat
#include <stdio.h>

void concat(char *s1, char *s2) {
    int i = 0;
  
    // Move to the end of str1
    while (s1[i] != '\0')
        i++;

    // Copy characters from str2 to str1
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];  
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    s1[i] = '\0';
}

int main() {
    char s1[50] = "Hello ";
    char s2[] = "Geeks";

    concat(s1, s2);

    printf("%s", s1);
    return 0;
}

#Using Pointers
#include <stdio.h>

void concat(char *s1, char *s2) {
  
    // Move the pointer to the end of str1
    while (*s1)
        s1++;  

    // Copy characters from s1 to s1 using
  	// pointer arithmetic
    while (*s2) {
        *s1 = *s2;
        s1++;          
        s2++;         
    }

    *s1 = '\0';
}

int main() {
    char s1[50] = "Hello ";
    char s2[] = "Geeks";

  	// Concat string s1 and s2
    concat(s1, s2);

    printf("%s", s1);  
    return 0;
}