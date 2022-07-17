#include <stdio.h>
#include <stdlib.h>
#include<string.h>




int main(int argc, char*argv[])
{



    char left_record[10];
    char right_record[10];
    FILE *pointer_to_left_file;
    FILE *pointer_to_right_file;

    pointer_to_left_file=fopen(argv[1], "r");
    pointer_to_right_file=fopen(argv[2], "r");

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


