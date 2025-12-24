#ifndef Windowwindow_H
#define Windowwindow_H
#include<Window/Window_base.h>
#include<Windows.h>
class WinWindow:public Base_window{
    public:
    WinWindow(const WindowProps&props=WindowProps());
    ~WinWindow();
    virtual bool Init(const WindowProps&props);

    virtual unsigned int GetHeight()const override;
    virtual unsigned int GetWidth()const override;

    virtual bool GetVcsy()const override;
    virtual void SetVcsy(bool enable)override;
    private:
    HWND m_Windowhandle;
    unsigned int m_Width;
    unsigned int m_Height;
};
#endif