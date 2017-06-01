#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "wordlist.h"

WORDLIST *word_list = NULL;

int main(int argc, char *argv[]){
  FILE *fp;
  char c;
  char temp_word[WORD_MAX];
  int flag = 0;
  int windex = 0;
  WORDLIST *wlp;

  if(argc < 2){
    fprintf(stderr, "Error: No File Name\n");
    exit(1);
  }

  if((fp = fopen(argv[1], "r")) == NULL){
    fprintf(stderr, "Error: FILE Not Found\n");
    exit(1);
  }

  while((c = fgetc(fp)) != EOF){
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')||(c == '\'')){
      temp_word[windex++] = c;
      flag = 1;
    }
    else if(flag == 1){
      temp_word[windex] = '\0'; //終端文字の代入
      for(windex = 0; temp_word[windex] != '\0'; windex++)
        temp_word[windex] = tolower(temp_word[windex]);
      if((wlp = wordSearch(temp_word)) != NULL)
        wordCount(wlp);
      else
        wordAdd(temp_word);
      flag = windex = 0;
    }
  }

  wordStatistics();
  
  fclose(fp);
}
