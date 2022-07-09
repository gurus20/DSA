#include <stdio.h>
#include <string.h>

void alternating_character(char str[]){
    int len = strlen(str);
    char str1[len];

    int i,j=0;
    for(i=0;i<len;i++){

        if(str[i]=='A'){
            if(j==0){
                str1[j]='A';
            }
            else{
                if(str1[j-1]=='A'){
                    str1[j]='B';
                }
                else{
                    str1[j]='A';
                }
            }
            j++;
        }
    }

}

int main(){

    char str[]="AABAAB";
    alternating_charater(str);
    return 0;
}