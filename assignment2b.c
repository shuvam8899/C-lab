#include <stdio.h>
#include <stdlib.h> 
  
int main()
{
    FILE *fptr1, *fptr2;
    char c;
  
   
  
    
    fptr1 = fopen("./txt.txt" ,"r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file  \n");
        exit(0);
    }
  
  
    
    fptr2 = fopen("./txt2.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file  \n");
        exit(0);
    }
  
   
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
  
    printf("Contents copied to the second file");
  
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
