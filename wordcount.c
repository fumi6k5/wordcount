#include <stdio.h>
#include "wordlist.h"
WORDLIST *word_list;

void wordCount(WORDLIST *temp){
  temp->count++;
}
