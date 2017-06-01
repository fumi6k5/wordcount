#include <stdio.h>
#include "wordlist.h"
WORDLIST *word_list;

void wordStatistics(void){
  WORDLIST *temp;
  for(temp = word_list; temp != NULL; temp = temp->next)
    printf("%5d回: %s\n", temp->count, temp->word);
}
