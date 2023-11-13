#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], ch;
    int i, length, is_word_started;

    gets(s);
    length = strlen(s);
    is_word_started = 0;

    for (i = 0; i < length; i++) {
        if('a' <= s[i] && 'z' >= s[i]){
            if (is_word_started == 0){
                    is_word_started = 1;
                    ch = 'A' + s[i] - 'a';
                      printf("%c", ch);
            }
            else {
                printf("%c", ch);
            }
        }
        else if ((s[i] >= 'A' && 'Z' >= s[i]) || (s[i] >= 0 && 9 >= s[i])){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            printf("%c", s[i]);
        }
        else {
            if(is_word_started == 1){
                is_word_started = 0;
                printf("\n");
            }
        }
    }
    printf("\n");

    return 0;
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], word[100];
    int i, j, length, is_word_started;

    gets(s);

    length = strlen(s);

    is_word_started = 0;

    for(i = 0, j = 0; i<length; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(is_word_started == 0){
                is_word_started = 1;
                word[j] = 'A' + s[i] - 'a'; // first charecter is capital
                j++;
            }
            else {
                word[j] = s[i];
                j++;
            }
        }
        else if (s[i] >= '0' && s[i] <= '9'){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            word[j] = s[i];
            j++;
        }
        else {
            if (is_word_started == 1){
                is_word_started = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }
    }

    return 0;
}
