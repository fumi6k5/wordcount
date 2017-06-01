#include <stdio.h>
#include <string.h>
#include "wordlist.h"
WORDLIST *word_list;

WORDLIST *wordSearch(char *s){
  WORDLIST *temp;
  for(temp = word_list; temp != NULL; temp = temp->next)
    if(strcmp(temp->word, s) == 0)  //一致する単語が既にあった場合
      return temp;  //そのノードのアドレスを返す
  return NULL;  //NULLを返す
}
