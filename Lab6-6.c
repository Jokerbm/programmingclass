#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
   int i,j,count = 19;
   char str[50][60],temp[25];
   for(i=0;i<=count;i++){
      scanf("%[^\n]%*c",str[i]);
   }
   for(i=0;i<=count;i++){
   	str[i][0] = toupper(str[i][0]);
   	for(j=1;j<=strlen(str[i]);j++){
   		str[i][j] = tolower(str[i][j]);
   		if (str[i][j] == ' '){
   			str[i][j+1] = toupper(str[i][j+1]);
   			j++;
   		}
   	}
   }
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   for(i=0;i<=count;i++)
      printf("%s\n",str[i]);
   
   return 0;
}