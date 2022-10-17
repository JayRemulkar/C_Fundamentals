// 1 One class can extend amnother class

class Base
{}

class Derived extends Base
{}

////////////////////////////////////////////////
//2 One class implements one interface

interface Demo
{}

class Hello implements Demo
{}

//////////////////////////////////////////////
// 3 One class can implements more that one interface

interface Hello
{}

interface Demo
{}

class Marvellous implements Hello,Demo
{}

/////////////////////////////////////////////
//4 One interface can extend amother interface

interface Hello
{}

interface Demo extends Hello
{}

class Marvellous implements Demo
{}

/////////////////////////////////////////////
// 5 
