#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"inside Marvellous fun \n";

    }
}
namespace Infosystem
{
    void fun()
    {
        std::cout<<"inside Infosysem fun \n";

    }
}


int main()
{
    std::cout<<"Jay Ganesh \n";

    using namespace Marvellous;
    using namespace Infosystem;

    //fun();        //compiler will unable to understand whoes function should call

    Marvellous::fun();        
    
    return 0;
}