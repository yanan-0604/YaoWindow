#ifndef Base_H
#define Base_H
#include<memory>
class Base_window;

class Base_Platform{
    public:
        virtual ~Base_Platform()=default;
        virtual unique_ptr<Base_window> CreateWindow(WindowProps);
    protected:
        
};
#endif