#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

int main(void)
{
    FILE* fp = fopen("yolo_bbox_data", "r");
    FILE* fp2 = fopen("yolo_label_data", "r");
    char c;
    char* string_save[MAX];
    char buffer[MAX];
    char buffer_matrix[MAX];
   
    fread(buffer, 1, MAX, fp2);
    printf("%s", buffer);
    fread(buffer_matrix, 1, MAX, fp);
    printf("%s", buffer_matrix);

    fclose(fp);
    fclose(fp2);
    
}