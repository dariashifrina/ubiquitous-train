#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int mystrlen( char * );
int mystrcmp(char *, char *);
char * mystrchr( char *s, char c );

//string length fxn
int mystrlen( char * woo){
  int len = 0;
  while(woo[len]){
    len++;
      }
  return len;
}

/*strcmp fxn: compares two strings. Returns 0 if they are equal, returns
 difference of ASCII characters of first mismatched char if unequal*/

int mystrcmp(char *s1, char *s2){
  /*if( *s1 == *s2){
    return 0;
    }*/
  while (*s1 == *s2 && s1 && s2) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

//strchr fxn: returns a pointer to the first occurrence of the cahracter c in string s

int

int main(){
  char s1[200] = "hello";
  char s2[200] = "goodbye";
  char s3[200] = "pew";
  printf("testing mystrlen(s2):\n[standard]:%lu\n[mine]:%d\n", strlen(s2), mystrlen(s2));
  printf("testing mystrcmp(s1,s2):\n[standard]:%d\n[mine]:%d\n", strcmp(s1,s2), mystrcmp(s1,s2));
  return 0;
}
