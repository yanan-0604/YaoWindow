#ifndef EVENT_H
#define EVENT_H
#include<string>
enum class EventType 
{
    WindowShutdown,WindowResize,WindowMove,
    KeyPress,KeyDown,KeyRelease,
    MousePress,MouseDown,MouseRelease,MouseScrolled,MouseMove,
}

inline const char*EventTypetostring(EventType type)
{
    switch(type)
    {
        case EventType::WindowShutdown :return"Windowshutdown";break;
        case EventType::WindowResize   :return"WindowResize"  ;break;
        case EventType::WindowMove     :return"WindowMove"    ;break;
        case EventType::KeyPress       :return"KeyPress"      ;break;
        case EventType::KeyDown        :return"KeyDown"       ;break;
        case EventType::KeyRelease     :return"KeyRelease"    ;break;
        case EventType::MouseDown      :return"MouseRelease"  ;break;
        case EventType::MouseMove      :return"MouseMOve"     ;break;
        case EventType::MousePress     :return"MousePress"    ;break;
        case EventType::MouseScrolled  :return"MouseScrolled" ;break;
        default return "Unkowned";
    }

}

class Event{
    public:
    virtual ~Event()=default;
    
    virtual EventType GetEventType()const=0; 
    
    bool handle;
}
#define EVENT(type)\
static EventType GetstaticType(){return EventType::type;}\
virtual EventType GetEventType(){return GetstaticEventType();}\






#endif