//
// Created by victory on 6/14/2020.
//

/*abstract factory patterns example */
/*reference link : https://www.bogotobogo.com/DesignPatterns/abstractfactorymethod.php*/


#include <iostream>

class Button
{
public:
    virtual void paint() = 0;
};

class WinButton : public Button
{
public:
    void paint() {
        std::cout << "Windows Button \n";
    };
};

class MacButton : public Button
{
public:
    void paint() {
        std::cout << "Mac Button \n";
    }
};

class ScrollBar
{
public:
    virtual void paint() = 0;
};

class WinScrollBar : public ScrollBar
{
public:
    void paint() {
        std::cout << "Windows ScrollBar \n";
    };
};

class MacScrollBar : public ScrollBar
{
public:
    void paint() {
        std::cout << "Mac ScrollBar \n";
    }
};



class GuiFactory
{
public:
    virtual Button * createButton() = 0;
    virtual ScrollBar * createScrollBar() = 0;
};

class WinFactory : public GuiFactory
{
public:
    Button * createButton(){
        return new WinButton;
    }
    ScrollBar * createScrollBar(){
        return new WinScrollBar;
    }
};
class MacFactory : public GuiFactory
{
public:
    Button * createButton(){
        return new MacButton;
    }
    ScrollBar * createScrollBar(){
        return new MacScrollBar;
    }

};

int main(void)
{


    GuiFactory * i_GuiFactory;
    Button * i_button;
    ScrollBar * i_scrollBar;

    i_GuiFactory = new WinFactory;
    i_button = i_GuiFactory->createButton();
    i_scrollBar = i_GuiFactory->createScrollBar();
    i_button->paint();
    i_scrollBar->paint();

    i_GuiFactory = new MacFactory;
    i_button = i_GuiFactory->createButton();
    i_scrollBar = i_GuiFactory->createScrollBar();
    i_button->paint();
    i_scrollBar->paint();






    return 0;
}

