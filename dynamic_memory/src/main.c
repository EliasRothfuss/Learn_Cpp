#include <stdio.h>
#include <stdlib.h>



void insert (int* ptr, int index, int data){
    ptr[index] =  data;
}

int main()
{
    int num_of_elements = 5;

    // Dynamically allocate memory using malloc()
    int* mal_ptr = (int*)calloc(num_of_elements, sizeof(int));

    for (int i = 0; i < num_of_elements; i++)
    {
        insert(mal_ptr, i, i*2);
    }

    for (int i = 0; i < num_of_elements+3; i++)
    {
        printf("%d\n", mal_ptr [i]);
    }

    // free the memory again
    free(mal_ptr);
    return 0;
}
