#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = "jay";
    char brr[] = "Jay";
    char crr[] = "jay";
    int result;

    result = strcmp(arr, brr);
    printf("%d\n",result);   
    
    result = strcmp(arr, crr);
    printf("%d\n",result);       //  strcmp() is used to compare two strings if both are eqaul the function gives 0, and if not it gives 1 as outupt.


    return 0;

}