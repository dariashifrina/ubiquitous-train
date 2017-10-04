#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int mystrlen( char * );
int mystrcmp(char *, char *);
char * mystrchr( char *s, char c );
char * mystrcpy( char *dest, char *source );

//string length fxn
int mystrlen( char * woo){
  int len = 0;
  while(woo[len]){
    len++;
      }
  return len;
}

//strcpy: functioncopies the string pointed to by source to the buffer pointed to by dest. strings may not overlap.

char * mystrcpy(char *dest, char *source){
  char *returnval = dest;
  while(*dest++ = *source++){
    ;
  }
  return returnval; 
}

/*
strncat: concatenates the first n chars of source array to end of dest array
returns pointer to destination array
*/
char *
mystrncat(char *dest, char *source, int n)
{
  char * retVal = dest;
  int i = 0;
  while (*dest)
    dest++;
  for (i = 0; i < n && source[i] != 0; i++)
    dest[i] = source[i];
  for ( ; i < n; i++)
    dest[i] = 0;
  return retVal;
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

char * mystrchr( char *s, char c){
  char *pointer = s;
  while(*pointer){
    if(*pointer == c){
      return pointer;
    }
    pointer++;
  }
  return NULL;
}



int main(){
  char s1[200] = "hello";
  char s2[200] = "goodbye";
  char s3[] = "This is a test";
  char s4[100];
  char s5[100];
  printf("testing mystrlen(s2):\n[standard]:%lu\n[mine]:%d\n", strlen(s2), mystrlen(s2));
  printf("testing mystrcmp(s1,s2):\n[standard]:%d\n[mine]:%d\n", strcmp(s1,s2), mystrcmp(s1,s2));
  printf("testing mystrchr(s3,'t'):\n[standard]:%s\n[mine]:%s\n", strchr(s3,'t'), mystrchr(s3,'t'));
  printf("testing mystrcpy(s4,s1):\n[standard]:%s\n[mine]:%s\ns4:%s\ns5:%s\n", strcpy(s4,s1),mystrcpy(s5,s1),s4, s5);
  return 0;
}
