/*3. Write a program to read a text file character by character and write its content twice in separate file.*/
#include<stdio.h>
int main() {
      char ch ;
      FILE *ptr;
      ptr = fopen("3.1.txt","r");

      FILE *ptr2;
      ptr2 = fopen("mine.txt", "a");

      while(1)
      {
        ch ==fgetc(ptr);
        if(ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr2 , "%c",ch);
            fprintf(ptr2 , "%c",ch);
            printf("%c", ch);

        }
      }

  
 return 0;
}