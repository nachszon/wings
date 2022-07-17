#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{


    char line[10];
    char line2[10];
    FILE *pointer_to_file;
    FILE *pointer_to_file2;

    pointer_to_file=fopen("plik.txt", "r");
    pointer_to_file2=fopen("plik2.txt", "r");

    while ((fgets (line,100,pointer_to_file))!=NULL){

        rewind(pointer_to_file2);
        while ((fgets (line2,100,pointer_to_file2))!=NULL){

                if (strstr(line,line2)){

                    printf ("%s",line);
                }



        }

        }
         fclose(pointer_to_file);
         fclose(pointer_to_file2);


    }






