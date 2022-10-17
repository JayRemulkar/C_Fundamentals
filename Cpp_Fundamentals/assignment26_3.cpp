#include<iostream>
#include<stdlib.h>

using namespace std;

struct Hello
{
    float f;
    int i;
};

int main()
{
   
    struct Hello *arr = NULL;
    
    arr = (struct Hello*)malloc(5*sizeof(int));
    
    cout<<sizeof(arr);
    
  
}