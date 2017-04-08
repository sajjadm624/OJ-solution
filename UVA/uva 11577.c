#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
     char letter[26], sentence[201];
     int freq[26], tc,a,i,j,max=0;
     for(i=0 ; i<26 ; i++)
     {
         letter[i]='a'+i;
     }
     scanf("%d ", &tc);
         for(i=0 ; i<tc ; i++)
         {
             gets(sentence);
             for(a=0 ; a<26 ; a++)
                freq[a]=0;

             for(j=0 ; j<strlen(sentence) ; j++)
             {
                 sentence[j]=tolower(sentence[j]);
                 for(a=0 ; a<26 ; a++)
                 {
                     if(sentence[j] == letter[a])
                        freq[a]+=1;
                 }
             }
             for(a=0 , max=0 ; a<26 ; a++)
             {
                 if(freq[a]>=max)
                    max=freq[a];
             }
             for(a=0 ; a<26 ; a++)
             {
                 if(freq[a]==max)
                    printf("%c", letter[a]);
             }
             printf("\n");
         }
     return 0;
}
