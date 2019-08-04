#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the counterGame function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char* counterGame(long n)
 {
     unsigned long long int h=1,countzero=0,countone=0;
     long n1=n;
     /*for(int i=0;i<32;i++)
     {
         if((((n)&(1<<i))==0)&&h==1)
         {
             countzero++;
         }
         else if((n)&(1<<i))
         {
             h=0;
         countone++;
         }
         else
         continue;
     }*/
    while(n1!=0)
    {
        if(n1&1)
        countone++;
        n1=n1>>1;
    }
    n1=n;
        while(n1!=0)
    {
        if((n1&1)==0)
        countzero++;
        else
        break;
        n1=n1>>1;
    }
     countone--;
     printf("%d %d\n",countone,countzero);
     if(countone%2==0)
     h=1;
     else
     h=0;
     if(h==1)
     {
         if(countzero%2==0)
         return "Richard";
          else
          return "Louise";
     }
     else
     {
          if(countzero%2==0)
         return "Louise";
          else
          return "Richard";
     }
 }

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* n_endptr;
        char* n_str = readline();
        long n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        char* result = counterGame(n);

        fprintf(fptr, "%s\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
