//
// Created by Administrator on 6/13/2020.
//

/*This is a sample example about 'Decorator patterns '*/
/*reference link :https://www.bogotobogo.com/DesignPatterns/decorator.php*/

#include <iostream>
#include <string>

using namespace std;

/*basic class*/
class Window
{
public:
    virtual void draw() = 0;
    virtual string getDescription() = 0;
    virtual ~Window() {};
};

class SimpleWindow : public Window
{
public:
    void draw(){ /*draw window */
    }
    string getDescription(){
        return "simple window\n";
    }
};

class WindowDecorator : public Window
{
protected:
    Window* m_decorateWindow;
public:
    WindowDecorator(Window* decorateWindow)
    : m_decorateWindow(decorateWindow){};
};

class VerticalScrollBarWindowDecorate : public WindowDecorator
{
private:
    void drawVerticalScrollBar(){};
public:
    VerticalScrollBarWindowDecorate(Window * decorateWindow) :
    WindowDecorator(decorateWindow) {};

    void draw(){
        drawVerticalScrollBar();                //draw decorator
        this->m_decorateWindow->draw();
    }

    string getDescription(){
        return this->m_decorateWindow->getDescription() + "with VerticalScrollBar\n";
    }
};

class HorizontalScrollBarDecorator  : public WindowDecorator
{
private:
    void drawVerticalScrollBar(){};
public:
    HorizontalScrollBarDecorator (Window * decorateWindow) :
            WindowDecorator(decorateWindow) {};

    void draw(){
        drawVerticalScrollBar();                //draw decorator
        this->m_decorateWindow->draw();
    }

    string getDescription(){
        return this->m_decorateWindow->getDescription() + "with HorizontalScrollBar\n";
    }
};

int main()
{
    Window *sample = new SimpleWindow();
    cout << sample->getDescription() << endl;

    Window *horiz = new HorizontalScrollBarDecorator(new SimpleWindow());
    cout << horiz->getDescription() << endl;

    Window *vert = new VerticalScrollBarWindowDecorate(new SimpleWindow());\
    cout << vert->getDescription() << endl;

    Window *decorateWindow = new HorizontalScrollBarDecorator(new VerticalScrollBarWindowDecorate(new SimpleWindow()));
    cout << decorateWindow->getDescription() << endl;


}


