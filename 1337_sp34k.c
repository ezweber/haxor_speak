#include <stdio.h>
#include <string.h>

int main () {

    char str[100], rep[4] = "4310", ch[4] = "aelo";
    int i;

    printf("Enter string :  ");
  	scanf("%[^\n]", &str);

    
    for(i = 0; i <= strlen(str); i++)
  	{
        
  		if(str[i] == ch[0])  
		{
  			str[i] = rep[0];
 		}
        if(str[i] == ch[1])  
		{
  			str[i] = rep[1];
 		}
        if(str[i] == ch[2])  
		{
  			str[i] = rep[2];
 		}
        if(str[i] == ch[3])  
		{
  			str[i] = rep[3];
 		}
        


	}

    printf(str);
    printf("\n");

    return 0;
}

