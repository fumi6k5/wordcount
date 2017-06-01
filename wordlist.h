#include <stdio.h>
#define WORD_MAX 32

typedef struct list{
  struct list *next;
  char word[WORD_MAX];
  int count;
}WORDLIST;

WORDLIST *wordSearch(char *s);
void wordCount(WORDLIST *r);
void wordAdd(char *s);
void wordStatistics(void);
