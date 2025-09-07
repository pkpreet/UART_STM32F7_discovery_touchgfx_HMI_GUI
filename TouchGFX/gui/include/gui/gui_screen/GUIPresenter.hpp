#ifndef GUIPRESENTER_HPP
#define GUIPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class GUIView;

class GUIPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    GUIPresenter(GUIView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~GUIPresenter() {}

private:
    GUIPresenter();

    GUIView& view;
};

#endif // GUIPRESENTER_HPP
