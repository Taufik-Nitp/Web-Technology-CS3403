#include <stdio.h>        // accessing an array with the help of pointer.
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];     // you can also take ptr= marks 
    for (int i = 0; i < 4; i++)
    {
        printf("write the value of marks %d\n", i + 1);
        scanf("%d", ptr);
        ptr++;       // It gives the next adress automatically.
    }
    ptr=&marks[0];     // it is necessary to define here again for this loop working.
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d marks is %d\n", i + 1, *ptr);
        ptr++;
    }

    return 0;
}