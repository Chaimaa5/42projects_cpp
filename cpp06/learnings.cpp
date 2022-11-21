static_cast:
In C++ the static_cast<>() will allow the compiler to check whether the pointer 
and the data are of same type or not. 
If not it will raise incorrect pointer assignment exception during compilation.

char c = 65; //1-byte data. ASCII of ‘A’
int *ptr = (int*)&c; //4-byte
int *ptr = static_cast<int>(&c);

dynamic_cast:

In major implementations, dynamic_cast works by comparing the vfptr - virtual function table pointer - of two classes.
That's one way to determine whether classes are related at run-time.

When performing a dynamic_cast there is a type check performed 
at a runtime and std::bad_cast exception is thrown 
or null pointer is returned when the cast is illegal. 
The mechanism allowing to do this is called RTTI.

When class are not polymorphic there is no way to perform that typecheck, 
because no type information is stored at the runtime.

In C++, RTTI can be used to do safe typecasts, using the dynamic_cast<> operator, 
and to manipulate type information at runtime, using the typeid operator and std::type_info class. 
In Object Pascal, RTTI can be used to perform safe type casts with the as operator,
 test the class to which an object belongs with the is operator, 
 and manipulate type information at run time with classes contained 
 in the RTTI unit[5] (i.e. classes: TRttiContext, TRttiInstanceType, etc.). In Ada, objects of tagged types also store a type tag, 
 which permits the identification of the type of these object at runtime. The in operator can be used to test, at runtime, 
 
 if an object is of a specific type and may be safely converted to it.[6]

RTTI is available only for classes that are polymorphic, 
which means they have at least one virtual method. In practice, 
this is not a limitation because base classes must have a virtual destructor 
to allow objects of derived classes to perform proper cleanup if they are deleted from a 
base pointer.