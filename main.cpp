#include <stdio.h>
#include <stdlib.h>
#include<string.h>




int main()
{



    char left_record[10];
    char right_record[10];
    FILE *pointer_to_left_file;
    FILE *pointer_to_right_file;

    pointer_to_left_file=fopen("plik.txt", "r");
    pointer_to_right_file=fopen("plik2.txt", "r");

    while ((fgets (left_record,100,pointer_to_left_file))!=NULL){

        rewind(pointer_to_right_file);
        while ((fgets (right_record,100,pointer_to_right_file))!=NULL){

                if (strstr(left_record,right_record)){

                    printf ("%s",left_record);
                }



        }

        }
         fclose(pointer_to_left_file);
         fclose(pointer_to_right_file);


    }


