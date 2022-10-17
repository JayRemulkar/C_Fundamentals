#include<iostream>

using namespace std;

int main()
{
    struct demo
    {
        int no1;
        int no2;
    };

    struct demo obj;
    struct demo *p = &obj;
    struct demo **q = &p;

    typedef struct demo DEMO;
    typedef struct demo* PDEMO;
    typedef struct demo** PPDEMO;

    DEMO obj;

    PDEMO p = &obj;

    PPDEMO q = &p;
    
    return 0;
}