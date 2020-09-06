
#include "Mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

void MainWindow::myLayout(){
    QWidget *centerWindow = new QWidget;
    this->setCentralWidget(centerWindow);

    s = "";
    init_data();
    data = new QLineEdit("");

    button_0 = new QPushButton("0");
    button_1 = new QPushButton("1");
    button_2 = new QPushButton("2");
    button_3 = new QPushButton("3");
    button_4 = new QPushButton("4");
    button_5 = new QPushButton("5");
    button_6 = new QPushButton("6");
    button_7 = new QPushButton("7");
    button_8 = new QPushButton("8");
    button_9 = new QPushButton("9");
    button_ce = new QPushButton("CE");
    button_jia = new QPushButton("+");
    button_jian = new QPushButton("-");
    button_cheng = new QPushButton("*");
    button_chu = new QPushButton("÷");
    button_result = new QPushButton("=");
    button_sin = new QPushButton("sin");
    button_cos = new QPushButton("cos");
    button_tan = new QPushButton("tan");
    button_dian = new QPushButton(".");
    button_x = new QPushButton("x");
    button_a = new QPushButton("a");
    button_b = new QPushButton("b");
    button_c = new QPushButton("c");
    button_d = new QPushButton("d");
    button_e = new QPushButton("e");
    button_f = new QPushButton("f");




    //连接信号
    connect(button_0,SIGNAL(clicked(bool)),this,SLOT(button_0_clicked()));
    connect(button_1,SIGNAL(clicked(bool)),this,SLOT(button_1_clicked()));
    connect(button_2,SIGNAL(clicked(bool)),this,SLOT(button_2_clicked()));
    connect(button_3,SIGNAL(clicked(bool)),this,SLOT(button_3_clicked()));
    connect(button_4,SIGNAL(clicked(bool)),this,SLOT(button_4_clicked()));
    connect(button_5,SIGNAL(clicked(bool)),this,SLOT(button_5_clicked()));
    connect(button_6,SIGNAL(clicked(bool)),this,SLOT(button_6_clicked()));
    connect(button_7,SIGNAL(clicked(bool)),this,SLOT(button_7_clicked()));
    connect(button_8,SIGNAL(clicked(bool)),this,SLOT(button_8_clicked()));
    connect(button_9,SIGNAL(clicked(bool)),this,SLOT(button_9_clicked()));
    connect(button_jia,SIGNAL(clicked(bool)),this,SLOT(button_jia_clicked()));
    connect(button_jian,SIGNAL(clicked(bool)),this,SLOT(button_jian_clicked()));
    connect(button_cheng,SIGNAL(clicked(bool)),this,SLOT(button_cheng_clicked()));
    connect(button_chu,SIGNAL(clicked(bool)),this,SLOT(button_chu_clicked()));
    connect(button_ce,SIGNAL(clicked(bool)),this,SLOT(button_ce_clicked()));
    connect(button_result,SIGNAL(clicked(bool)),this,SLOT(button_result_clicked()));
    connect(button_sin,SIGNAL(clicked(bool)),this,SLOT(button_sin_clicked()));
    connect(button_cos,SIGNAL(clicked(bool)),this,SLOT(button_cos_clicked()));
    connect(button_tan,SIGNAL(clicked(bool)),this,SLOT(button_tan_clicked()));
    connect(button_dian,SIGNAL(clicked(bool)),this,SLOT(button_dian_clicked()));
    connect(button_x,SIGNAL(clicked(bool)),this,SLOT(button_x_clicked()));
    connect(button_a,SIGNAL(clicked(bool)),this,SLOT(button_a_clicked()));
    connect(button_b,SIGNAL(clicked(bool)),this,SLOT(button_b_clicked()));
    connect(button_c,SIGNAL(clicked(bool)),this,SLOT(button_c_clicked()));
    connect(button_d,SIGNAL(clicked(bool)),this,SLOT(button_d_clicked()));
    connect(button_e,SIGNAL(clicked(bool)),this,SLOT(button_e_clicked()));
    connect(button_f,SIGNAL(clicked(bool)),this,SLOT(button_f_clicked()));
    QGridLayout * layout = new QGridLayout;
    data->setFixedHeight(30);
    button_0->setMinimumHeight(50);
    button_1->setMinimumHeight(50);
    button_2->setMinimumHeight(50);
    button_3->setMinimumHeight(50);
    button_4->setMinimumHeight(50);
    button_5->setMinimumHeight(50);
    button_6->setMinimumHeight(50);
    button_7->setMinimumHeight(50);
    button_8->setMinimumHeight(50);
    button_9->setMinimumHeight(50);
    button_ce->setMinimumHeight(50);
    button_jia->setMinimumHeight(50);
    button_jian->setMinimumHeight(50);
    button_cheng->setMinimumHeight(50);
    button_chu->setMinimumHeight(50);
    button_result->setMinimumHeight(50);
    button_sin->setMinimumHeight(50);
    button_cos->setMinimumHeight(50);
    button_tan->setMinimumHeight(50);
    button_dian->setMinimumHeight(50);
    button_x->setMinimumHeight(50);
    button_a->setMinimumHeight(50);
    button_b->setMinimumHeight(50);
    button_c->setMinimumHeight(50);
    button_d->setMinimumHeight(50);
    button_e->setMinimumHeight(50);
    button_f->setMinimumHeight(50);

    layout->addWidget(data,1,1,1,4,Qt::Alignment());
       layout->addWidget(button_x,2,1,Qt::Alignment());
       layout->addWidget(button_a,2,2,Qt::Alignment());
       layout->addWidget(button_b,2,3,Qt::Alignment());
       layout->addWidget(button_c,2,4,Qt::Alignment());
       layout->addWidget(button_d,2,5,Qt::Alignment());
       layout->addWidget(button_e,2,6,Qt::Alignment());
       layout->addWidget(button_f,2,7,Qt::Alignment());

       layout->addWidget(button_sin,3,1,Qt::Alignment());
       layout->addWidget(button_cos,3,2,Qt::Alignment());
       layout->addWidget(button_tan,3,3,Qt::Alignment());
       layout->addWidget(button_dian,3,4,Qt::Alignment());

       layout->addWidget(button_1,4,1,Qt::Alignment());
       layout->addWidget(button_2,4,2,Qt::Alignment());
       layout->addWidget(button_3,4,3,Qt::Alignment());
       layout->addWidget(button_jia,4,4,Qt::Alignment());

       layout->addWidget(button_4,5,1,Qt::Alignment());
       layout->addWidget(button_5,5,2,Qt::Alignment());
       layout->addWidget(button_6,5,3,Qt::Alignment());
       layout->addWidget(button_jian,5,4,Qt::Alignment());

       layout->addWidget(button_7,6,1,Qt::Alignment());
       layout->addWidget(button_8,6,2,Qt::Alignment());
       layout->addWidget(button_9,6,3,Qt::Alignment());
       layout->addWidget(button_cheng,6,4,Qt::Alignment());

       layout->addWidget(button_ce,7,1,Qt::Alignment());
       layout->addWidget(button_0,7,2,Qt::Alignment());
       layout->addWidget(button_result,7,3,Qt::Alignment());
       layout->addWidget(button_chu,7,4,Qt::Alignment());
       layout->setMargin(12);
       centerWindow->setLayout(layout);
   }

MainWindow::~MainWindow()
{

}

void MainWindow::init_data()
{
    num1 = 0;
    num2 = 0;

    operat_flag = 0;
}
int n=0;

void MainWindow::readNum(int num)
{
      //如果是第一个操作数
      if(operat_flag == 0){

        num1 = num1 * 10 + num;
      }
      //如果是第二个操作数
      else{
          num2 = num2 * 10 + num;
      }n++;
}

void MainWindow::operation()
{
    switch(operat){
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    }
    //把结果存到num1中，清零num2
    num1 = result;
    num2 = 0;
    s = QString::number(result,10);
}

void MainWindow::button_0_clicked(){
    s += "0";
    data->setText(s);
    readNum(0);
}

void MainWindow::button_1_clicked(){
    s += "1";
    data->setText(s);
    readNum(1);
}

void MainWindow::button_2_clicked(){
    s += "2";
    data->setText(s);
    readNum(2);
}

void MainWindow::button_3_clicked(){
    s += "3";
    data->setText(s);
    readNum(3);
}

void MainWindow::button_4_clicked(){
    s += "4";
    data->setText(s);
    readNum(4);
}

void MainWindow::button_5_clicked(){
    s += "5";
    data->setText(s);
    readNum(5);
}

void MainWindow::button_6_clicked(){
    s += "6";
    data->setText(s);
    readNum(6);
}

void MainWindow::button_7_clicked(){
    s += "7";
    data->setText(s);
    readNum(7);
}

void MainWindow::button_8_clicked(){
    s += "8";
    data->setText(s);
    readNum(8);
}

void MainWindow::button_9_clicked(){
    s += "9";
    data->setText(s);
    readNum(9);
}

void MainWindow::button_ce_clicked(){
    s = "";
    data->setText("");
    //初始化数据
    init_data();
}

void MainWindow::button_jia_clicked(){
    s += "+";
    data->setText(s);
    operat_flag = 1;
    operat = 1;
}

void MainWindow::button_jian_clicked(){
    s += "-";
    data->setText(s);
    operat_flag = 1;
    operat = 2;
}

void MainWindow::button_cheng_clicked(){
    s += "*";
    data->setText(s);
    operat_flag = 1;
    operat = 3;
}

void MainWindow::button_chu_clicked(){
    s += "/";
    data->setText(s);
    operat_flag = 1;
    operat = 4;
}
void MainWindow::button_sin_clicked(){
    s+="sin";
     data->setText(s);
}
void MainWindow::button_x_clicked(){}
void MainWindow::button_a_clicked(){}
void MainWindow::button_b_clicked(){}
void MainWindow::button_c_clicked(){}
void MainWindow::button_d_clicked(){}
void MainWindow::button_e_clicked(){}
void MainWindow::button_f_clicked(){}
void MainWindow::button_cos_clicked(){}
void MainWindow::button_tan_clicked(){}
void MainWindow::button_dian_clicked(){}

void MainWindow::button_result_clicked(){
    operation();
    QString a = QString::number(result,10);
    data->setText(a);
}
