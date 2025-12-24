#include<Window/Windowwindow.h>

Windwindow::Winwindow(const WindowProps&props)
{
    Init(props);
}
bool Winwindow::Init(const WindowProps&props)
{
    WNDCLASSEX wc = {};
    wc.hInstance = GetModuleHandle(nullptr);  
    wc.lpfnWndProc = WindowProc;
    wc.lpszClassName = "MyClass";
    RegisterClassEx(&wc);

    m_Windowhandle = CreateWindowEx(
    0, "MyClass", props.name,
    WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, props.width, props.Height,
    nullptr, nullptr,
    GetModuleHandle(nullptr),  
    nullptr);
}

