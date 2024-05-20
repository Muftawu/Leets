#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int lent = strlen(t);    

    int count = 0;
    bool output = false;

    if (strcmp(s, t) == 0) output = true;
    else if (lent > len_s) output = false;
    else {
        int* s_array = malloc(len_s * sizeof(int));
        int* t_array = malloc(lent * sizeof(int));
        for (int i=0; i<len_s; i++) {
            s_array[i] = s[i];
        }
        for (int i=0; i<lent; i++) {
            t_array[i] = t[i];
        }
        for (size_t i=0; i<len_s; i++) {
            for (size_t j=0; j<lent; j++) {
                if (s_array[i] == t_array[j]) {
                    count += 1;
                    t_array[j] = ' ';

                    //option 2 [remove current letter by reconstructing the array]
                    // for (int x=0; x<j; x++) {
                    //     t_array[x] = t[x];
                    // }
                    
                    // for (int y=j+1; y<lent; y++) {
                    //     t_array[y] = t[y];
                    // }
                    // // t_array = t_array;

                    // for (int x=0; x<j; x++) {
                    //     printf("%c", t_array[x]);
                    // }
                    // printf("\n");
                    // for (int y=j+1; y<lent; y++) {
                    //     printf("%c", t_array[y]);
                    // }
                    // printf("-------------------------------------\n");
                    // for (int y=0; y<lent; y++) {
                    //     printf("%c", t_array[y]);
                    // }
                    // printf("\n");
                }
                else count += 0;
            }
        }
        free(s_array);
        free(t_array);
    }

    if (count == len_s) output = true;
    else output;

    return output;
}

int main () {
    
    char* s1 = "anagram";
    char* t1 = "nagaram";  // true

    char* s2 = "aa";
    char* t2 = "a";        // false

    char* s3 = "rat";
    char* t3 = "car";       // false

    bool a = isAnagram(s1, t1);
    if (a) printf("true\n");
    else printf("false\n");

    bool b = isAnagram(s2, t2);
    if (b) printf("true\n");
    else printf("false\n");

    bool c = isAnagram(s3, t3);
    if (c) printf("true\n");
    else printf("false\n");

    

    return 0;
}