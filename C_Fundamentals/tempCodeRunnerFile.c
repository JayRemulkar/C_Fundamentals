#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<unistd.h>

int main()
{
    DIR *folder;
    char arr[50];
    struct dirent *entry;
    int i = 0;

    printf("Enter the name of Directory");
    scanf("%[^'\n']s",arr);

    if((isDir(folder)) == 0)
    {
        folder = opendir(arr);
        if(folder == NULL)
        {
            printf("Unable to open the file");
            return -1;
        }

        while(entry = readdir(folder))
        {
            
        }
        closedir(folder);
    }
    else
    {
        printf("given file is not directory");
        return -1;
    }
    
    return 0;
}