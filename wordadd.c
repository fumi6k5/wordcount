#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "wordlist.h"
WORDLIST *word_list;

void wordAdd(char *s){
  WORDLIST *temp;

  temp = (WORDLIST *)malloc(sizeof(WORDLIST));
  strcpy(temp->word, s);  //文字列sをtemp->wordにコピー
  temp->count = 1;  //カウントを1にセット

  temp->next = word_list; //tempをリストの先頭に接続
  word_list = temp;
}
