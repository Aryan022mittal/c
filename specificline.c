#include<stdio.h>
int main(void)
{
    FILE *fileptr1,*fileptr2;
    char filechar[100];
    char c;
    int delete_line, temp = 1;
    printf("Enter file name :");
    scanf("%s",filechar);
    fileptr1 = fopen(filechar, "r");
    c = getc(fileptr1);
    while (c != EOF)
    {
        printf("%c",c);
        c = getc(fileptr1);
    }
    printf("enter the line number to be deleted and replace :");
    scanf("%d",&delete_line);
    rewind(fileptr1);
    fileptr2 = fopen("replica.c", "w");
    c = getc(fileptr2);
    while (c != EOF)
    {
        if(c == 'n')
        {
           temp++;
        }
        if (temp !=delete_line)
        {
            putc(c,fileptr2);
        }
        else
          {
             while ((c = getc(fileptr1)) != 'n')
             {
                
             }
             printf("Enter the new text");
             scanf("%s",filechar);
             fflush(stdin);
             putc('n',fileptr2);
             fputs("n",fileptr2);
             temp++;
          }
          c = getc(fileptr1);
        
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filechar);
    rename("replica.c",filechar);
    fileptr1 = fopen(fileptr1 , "r");
    c = getc(fileptr1);
    while (c !=EOF)
    {
        printf("%c",c);
        c = getc(fileptr1);
    }
    fclose(fileptr1);
    
    /* printf("Enter file name :");
    scanf("%s",filechar);
    fileptr1 = fopen(filechar, "r");
    c = getc(fileptr1);
    while (c != EOF)
    {
        printf("%c",c);
        c = getc(fileptr1);
    }*/
    return 0;
}