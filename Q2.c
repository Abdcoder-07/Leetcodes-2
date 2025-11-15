//REVERSES THE STRING
#include<stdio.h>
#include<string.h>
void reversestring(char str[],int size){
    char temp;
       for(int i=0;i<size/2;i++){
        temp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]=temp;
    }
}
int main(){
    char str[100];
    printf("Enter string\n");
    scanf("%s", str);
    int n=strlen(str);
    reversestring(str,n);
    printf("%s",str);
}
