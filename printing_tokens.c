#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[1000]={};
    fgets(s,1000,stdin);
    for(int i=0;i<1000;i++){
        if(s[i]==' '){
            s[i]='\n';
        }
        else if(s[i]=='\0'){
            break;
            
        }
    }
    for(int i=0;i<1000;i++){
        if(s[i]=='\0'){
            break;
        }else{
        printf("%c",s[i]);  
    }      
    }
    
      
    return 0;
}
