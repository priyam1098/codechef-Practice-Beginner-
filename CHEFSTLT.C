#include <stdio.h>
#include<math.h>

int main()
{
    int T,i,len,count=0,count1=0;
    char S1[100],S2[100];
    scanf("%d",&T);
    while(T--){
        scanf("%s %s",&S1,&S2);
        len=strlen(S1);
        for(i=0;i<len;i++){
            if(S1[i]==S2[i]){
                if(S1[i]=='?' && S2[i]=='?'){
                    count++;
                    S1[i]='a';
                    S2[i]='a';
                }
                else{
                    continue;
                }
            }
            else{
                count++;
                if(S1[i]=='?' && S2[i]!='?'){
                    S1[i]=S2[i];
                }
                else if(S1[i]!='?'&& S2[i]=='?'){
                    S2[i]=S1[i];
                }
            }
        }
    for(i=0;i<len;i++){
        if(S1[i]!=S2[i]){
            count1++;
        }
    }
        
    printf("%d %d\n",count1,count);
    count=0;
    count1=0;
    }
    return 0;
}






