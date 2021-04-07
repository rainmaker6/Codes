#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
   // QLabel *x = new QLabel(this);//we made a new label and assign it to the parent of this widget
    //x->setText("Hello"); to show the text in the widget we display in qlabel this will display the message in widget
    //we can move the text around in the widget x->move(xCordinate,yCordinate);
    //we will display time in the qlabel and inherit qlabel
}

Widget::~Widget()
{
    delete ui;
}

