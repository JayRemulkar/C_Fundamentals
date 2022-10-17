#include<stdio.h>
#include<string.h>

int main()
{
    char arr[5] = "jay";
    char brr[5] = "";
   
    strcpy(brr,arr);

    printf("%s\n",arr);  // this function copys the string in another object

    printf("%s\n",brr);   
    


    return 0;

}