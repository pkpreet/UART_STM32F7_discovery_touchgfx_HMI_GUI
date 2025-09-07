#ifndef GUIVIEW_HPP
#define GUIVIEW_HPP

#include <gui_generated/gui_screen/GUIViewBase.hpp>
#include <gui/gui_screen/GUIPresenter.hpp>



class GUIView : public GUIViewBase
{
public:
    GUIView();
    virtual ~GUIView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

//---Costume Functions----------------------------------------------------------------------
    virtual void StopSound();		//function declaration for stopping all sounds
    virtual void PlaySound1();		//function declaration for playing sound 1
    virtual void PlaySound2();		//function declaration for playing sound 2
    virtual void PlaySound3();		//function declaration for playing sound 3
    virtual void PlaySound4();		//function declaration for playing sound 4
//---Costume Functions End------------------------------------------------------------------

protected:
};

#endif // GUIVIEW_HPP
