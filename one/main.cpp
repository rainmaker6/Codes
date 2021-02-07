#include<qapplication.h>//there is only one qapp obj that uses qt
//it manages various app-wide res such as font,cursor
#include<qpushbutton.h>//it is classical GUI push button
#include<qfont.h>//optimized loading and using of fonts
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])//this is the main function entry point
//argc is the number of command-line arguments and argv is the array of command-line arguments
{
    QApplication a(argc, argv);//a is this program's app
    QPushButton hello("Hello World!",0);//push button is created 0 is for the parent window constructor
    //inside which the button should be located
    QPushButton quit("Quit",0);//this time the button called quit and what it does is the same
    QPushButton button("True",0);
    QPushButton button1("False",0);
    button.resize(75,40);
    button1.resize(80,35);
    QObject::connect(&button,SIGNAL(clicked()),&a,SLOT(quit()));
    QObject::connect(&button1,SIGNAL(clicked()),&a,SLOT(quit()));
    a.setActiveWindow(&button);
    a.setActiveWindow(&button1);
    button.show();
    button1.show();
    quit.resize(75,30);
    quit.setFont(QFont("Times",18,QFont::Bold));//18 point bold form times family
    QObject::connect(&quit,SIGNAL(clicked()),&a,SLOT(quit()));//connect() is a static function in QObject
    //this line establish one way connection between the 2 qt objects signals to send messages and slot to
    //recieve messages all widgets are qt objects They inherit QWidget which in turn inherits QObject.
    //Here, the clicked() signal of quit is connected to the quit() slot of a, so that when the button
    //is clicked, the application quits.
    a.setActiveWindow(&quit);
    quit.show();
    hello.resize(100,30);//100 pixel wide and 30 pixel high
    a.setActiveWindow(&hello);//now the push button is chosen as the main active window setMainWidget
    hello.show();//this is to make it visible
    return a.exec();//this is where main() passes control to Qt and exec() is return when the app exits
    //https://doc.qt.io/archives/3.3/tutorial1-01.html
}
