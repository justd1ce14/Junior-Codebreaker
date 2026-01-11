#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

/* Junior Codebreaker Programming Assignment */

int main(int argc, char** argv)
{
  char input[MAX_LENGTH];
  fgets(input,MAX_LENGTH, stdin);
  while (input[0] != 'q')
  {
    int counts[26] = {0};
    int len = strlen(input);
  for (int i = 0; i < len; i++) {
     if (isalpha(input[i])) {
         char upper = toupper(input[i]);
         counts[upper - 'A']++;
     }
  }
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c%d ", 'A' + i, counts[i]);
        }
    }
    printf("\n");
    fgets(input, MAX_LENGTH, stdin);
  }
  return 0;
}

        
