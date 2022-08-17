#include<stdio.h>
#include<string.h>
int main(){
    char input[10],term[10],non_term[10];
    printf("enter a string");
    scanf("%s",input);
    for (int i = 0; i < strlen(input); i++)
    {
        if(input[i]>='A' && input[i]<='Z')
            strncat(non_term,&input[i],1);
        else
         strncat(term,&input[i],1);
    }
    
    printf("term=%s\nnon_term=%s\n",term,non_term);
    // printf("%c",input[4]);
    return 0;
    
}