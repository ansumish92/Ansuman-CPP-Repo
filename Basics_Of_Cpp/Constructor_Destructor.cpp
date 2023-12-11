/* This programme illustrates how to use a constructor and destructor. */

/* Below are some Important points of theory for CONSTRUCTOR */

/*
1. A constructor in CPP is a special method of a class which is called internally by the compiler automatically
once we declare an object of same class.
2. A constructor will not have any return type but can have arguments in it.
3. If we want to declare a constructor explicitly then we must have to declare it under "Public" Access specifier.
4. A constructor have the same name as that of class name. 
5. This is used to initialize Objects attributes.
6. Example of constructor is as below

class myClass{
   public:
   int a;
   myClass(){  -> Constructor
    // Body of constructor.
   }
};
7. There are 3 types of constructors are used in CPP. 
   -> Default constructor
   -> Parameterized constructor
   -> Copy constructor 
8. We can declare a constructor outside of the class as well.
9. We can have multiple constructor inside a class
*/


/* Below are some Important points of theory for DESTRUCTOR */

/*
1. A Destructor is a member function of a class which destructs or delete an object of same class .
2. Syntax of Destructor is as below.

class myClass{
   public:
   int a;
   ~ myClass(){  -> Destructor
    
   }
};
3. A Destructor is a special method/function is automatically invoked when an object is deleted/destroyed.
4. A Destructor does not have neither return type nor any aruments in it. NTOE: NOT EVEN void.
5. A Destructor can not be declared as static or constant.
6. If we want to declare a Destructor explicitly then we must have to declare it under "Public" Access specifier
   like constructor.
7. We can not access the address of a Destructor.
8. There can only be one Destructor inside a class.
9. The Destructor will be called in the reverse sequence of the call of constructor for different classes of objects.
   
   Ex: Suppose we have two objects i.e "ob1" and "ob2" of same class, the Constructor for "ob1" is called first and
   then for "ob2" whereas, the Destructor for "ob2" is called first and then for "ob1" once the scope of the objects
   are finished.

10. If we do not write our own destructor in class, compiler creates a default destructor for us.
    The default destructor works fine unless we have dynamically allocated memory or pointer in class.
    When a class contains a pointer to memory allocated in class, we should write a destructor to
    release memory before the class instance is destroyed. This must be done to avoid memory leak.
11. It is always a good idea to make destructors virtual in base class when we have a virtual function.
12. More Detail about virtual Destructors:
    https://www.geeksforgeeks.org/virtual-destructor/

*/

/******** PROGRAMMES FOR THE ABOVE CONCEPTS ********/

#include "iostream"
#include "string"

using namespace std;

#define CONSTRUCTOR (0) /* Enable this to build the code for Constructor */
#define DEFAULT_CONSTRUCTOR (0) /* Enable this to build the code for Default Constructor */
#define PARRAMETERIZED_CONSTRUCTOR (0) /* Enable this to build the code for Parameterized Constructor */
#define COPY_CONSTRUCTOR (0) /* Enable this to build the code for Copy Constructor */
#define DEFAULT_COPY_CONSTRUCTOR (0) /* Enable this for Default Copy Constructor. */
#define USER_DEFINED_COPY_CONSTRUCTOR (0) /* Enable this for User Defined Copy Constructor. */
#define DESTRUCTOR (1)   /* Enable this to build the code for Destructor. */


#if CONSTRUCTOR

class student {
    int roll_num;
    double fee;

public:
    /* Constructor of class student defined inside of the class.This will be called once object is created and it
    will initialize all the attributes/ data memmbers/ variables for that specific object. */
    student() {
        roll_num = 0;
        fee = 0;
        cout << "constructor is called And it is defined inside the class." << endl;
    }
};

class Data {
    int a;
    float b;
public:
    Data();
};

/* Constructor of class student defined outside of the class.This will be called once object is created and it
    will initialize all the attributes/ data memmbers/ variables for that specific object. */

Data::Data() {
    a = 0;
    b = 0.0;
    cout << "constructor is called And it is defined outside of the class." << endl;
}

int main() {
    /* after declaring the object "s1" the constructor will be called automatically and the output of the
    programme will be "constructor is called And it is defined inside the class." */
    student s1;

    /* after declaring the object "d1" the constructor will be called automatically and the output of the
    programme will be "constructor is called And it is defined outside of the class." */

    Data d1;
    return 0;
}

#elif DEFAULT_CONSTRUCTOR

/*
1. Default constructor is the constructor which doesn’t take any argument.It has no parameters.
2. It is also called a zero - argument constructor.*/

class MyClass {

public:
    int a, b;
    MyClass(){
        a = 10;
        b = 20;
    }
};

int main() {
    
    /* Default Constructor is called when the object is created. */
    MyClass M1;
    cout << "Default Constructor Is Called After creating object M1.Value of a and b is :" << M1.a << " " << M1.b << endl;
    return 0;
}

#elif COPY_CONSTRUCTOR

/*
1. A copy constructor is a member function that initializes an object using another object of the same
   class.
2. In simple terms, a constructor which creates an object by initializing it with an object of the same
   class, which has been created previously is known as a copy constructor.
3. Syntax of copy constructor is as below,

    className(const ClassName &Old_obj);

4. The copy constructor is used to initialize the members of a newly created object by copying the
   members of an already existing object.
5. Copy constructor takes a reference to an object of the same class as an argument.
6. The process of initializing members of an object through a copy constructor is known as
   "copy initialization".
7. It is also called member-wise initialization because the copy constructor initializes one object
   with the existing object, both belonging to the same class on a member-by-member copy basis.
8. The copy constructor can be defined explicitly by the programmer. If the programmer does not define
   the copy constructor, the compiler does it for us.

9. Types of Copy Constructor,
    -> Default Copy Constructor
    -> User Defined Copy Constructor

10. Links for Detail in Copy Constructor :
    https://www.geeksforgeeks.org/copy-constructor-in-cpp/.
*/

class Point {
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Copy constructor
    Point(const Point& p1)
    {
        x = p1.x;
        y = p1.y;
    }

    int getX() { return x; }
    int getY() { return y; }
};

int main()
{
    Point p1(10, 15); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here

    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX()
        << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX()
        << ", p2.y = " << p2.getY();
    return 0;
}

#elif DEFAULT_COPY_CONSTRUCTOR

/*
   1. An implicitly defined copy constructor will copy the bases and members of an object in the same
   order that a constructor would initialize the bases and members of the object.
*/

class Sample {
    int id;

public:
    void init(int x) { id = x; }
    void display() {
        cout << endl << "ID=" << id << endl;
    }
};

int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    // Implicit Copy Constructor Calling
    Sample obj2(obj1); // or obj2=obj1;
    cout << "DEFAULT_COPY_CONSTRUCTOR Is Called." << endl;
    obj2.display();
    return 0;
}

#elif USER_DEFINED_COPY_CONSTRUCTOR

/*
  1. A user-defined copy constructor is generally needed when an object owns pointers or non-shareable
  references, such as to a file, in which case a destructor and an assignment operator should also be written
*/

class Sample
{
    int id;
public:
    void init(int x)
    {
        id = x;
    }
    Sample(){  //default constructor with empty body

    }

    Sample(Sample& t)   //copy constructor
    {
        id = t.id;
    }
    void display()
    {
        cout << endl << "ID=" << id << endl;
    }
};
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); //or obj2=obj1;    copy constructor called. Copying of obj1 value into obj2 also.
    cout << "USER_DEFINED_COPY_CONSTRUCTOR Is Called." << endl;
    obj2.display();
    return 0;
}

#elif PARRAMETERIZED_CONSTRUCTOR

/*
1. It is possible to pass arguments to constructors.
2. Typically, these arguments help initialize an object when it is created.
3. To create a parameterized constructor, simply add parameters to it the way we would to any other function.
4. When you define the constructor’s body, use the parameters to initialize the object. 
*/

class MyClass {
    int a;
    float b;
public:
   
    /* Below is the paramterized constructor. */
    MyClass(int x, float y) {
        a = x;
        b = y;
        cout << " Parameterzied Constructor Is Called After Creating the Objects " << endl;
        cout << "Value of a and b are: " << a << "  " << b << endl;
    }
};

int main() {
    /* Parameterized constructor is called and we should assign areguments to object at the time of
    creation of the same. */
    MyClass M1(10, 10.22), M2(50, 50.55);
    return 0;
}

#elif DESTRUCTOR

class Test
{
public:
    Test() // Constructor
    {
        cout << "Constructor called." << endl;
    }

    ~Test() // Destructor
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Test t, t1, t2, t3;
    return 0;
}

#else

/* DO NOTHING */
#endif
