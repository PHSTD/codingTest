#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(my_string);
    char* answer = (char*)malloc(len-1);
    int x=0;
    for(int i=0;i<len;i++)
    {
        if(my_string[i] != letter[0])
        {
            answer[x++]=my_string[i];
        }
    }
    answer[x]=NULL;

    return answer;
}