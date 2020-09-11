
#include "Mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QString>
#include <QVector>
#include <QDebug>
#define pi 3.14159265
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

void MainWindow::myLayout(){
    QWidget *centerWindow = new QWidget;
    this->setCentralWidget(centerWindow);

    s = "";
    //init_data();

    data = new QLineEdit("");
    data1 = new QLineEdit("");
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
    data1->setFixedHeight(30);
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

    layout->addWidget(data,1,1,1,7,Qt::Alignment());
    layout->addWidget(data1,2,1,1,7,Qt::Alignment());
       layout->addWidget(button_x,3,1,Qt::Alignment());
       layout->addWidget(button_a,3,2,Qt::Alignment());
       layout->addWidget(button_b,3,3,Qt::Alignment());
       layout->addWidget(button_c,3,4,Qt::Alignment());
       layout->addWidget(button_d,3,5,Qt::Alignment());
       layout->addWidget(button_e,3,6,Qt::Alignment());
       layout->addWidget(button_f,3,7,Qt::Alignment());

       layout->addWidget(button_sin,4,1,Qt::Alignment());
       layout->addWidget(button_cos,4,2,Qt::Alignment());
       layout->addWidget(button_tan,4,3,Qt::Alignment());
       layout->addWidget(button_dian,4,4,Qt::Alignment());

       layout->addWidget(button_1,5,1,Qt::Alignment());
       layout->addWidget(button_2,5,2,Qt::Alignment());
       layout->addWidget(button_3,5,3,Qt::Alignment());
       layout->addWidget(button_jia,5,4,Qt::Alignment());

       layout->addWidget(button_4,6,1,Qt::Alignment());
       layout->addWidget(button_5,6,2,Qt::Alignment());
       layout->addWidget(button_6,6,3,Qt::Alignment());
       layout->addWidget(button_jian,6,4,Qt::Alignment());

       layout->addWidget(button_7,7,1,Qt::Alignment());
       layout->addWidget(button_8,7,2,Qt::Alignment());
       layout->addWidget(button_9,7,3,Qt::Alignment());
       layout->addWidget(button_cheng,7,4,Qt::Alignment());

       layout->addWidget(button_ce,8,1,Qt::Alignment());
       layout->addWidget(button_0,8,2,Qt::Alignment());
       layout->addWidget(button_result,8,3,Qt::Alignment());
       layout->addWidget(button_chu,8,4,Qt::Alignment());
       layout->setMargin(12);
       centerWindow->setLayout(layout);
   }

MainWindow::~MainWindow()
{

}
QVector<double> a1;
QVector<int> b1;
int n=0,m,m1,p=0;
double a,b;
char format='g';
int precision;
double z;
QString s3="",s1="",s2="",s4="";
void MainWindow::hextodec(QString a){
    int x=0;
    bool ok=true;
    QString c="",d;
    d=a.mid(2);
    x=d.toInt(&ok,16);
    z=x;
    a1.push_back(z);
    c+=QString::number(x,10);
    s3+=c;
}
void MainWindow::dectodec(QString a){
    s3+=s1;
    bool ok=true;
    QString c="";
    z=a.toDouble(&ok);
    a1.push_back(z);

}
void MainWindow::tmptodec(QString a){
    int x=0;
    bool ok=true;
    QString c="",d;
    d=a.mid(2);
    x=d.toInt(&ok,2);
    z=x;
    a1.push_back(z);
    c+=QString::number(x,10);
    s3+=c;
}


void MainWindow::button_0_clicked(){
    s1 += "0";
    s2 += "0";
    data->setText(s2);

}

void MainWindow::button_1_clicked(){
    s1 += "1";
    s2 += "1";
    n++;
    data->setText(s2);

}

void MainWindow::button_2_clicked(){
    s1 += "2";
    s2 += "2";
    n++;
    data->setText(s2);

}

void MainWindow::button_3_clicked(){
    s1 += "3";
    s2 += "3";
    n++;
    data->setText(s2);

}

void MainWindow::button_4_clicked(){
    s1 += "4";
    s2 += "4";
    n++;
    data->setText(s2);

}

void MainWindow::button_5_clicked(){
    s1 += "5";
    s2 += "5";
    n++;
    data->setText(s2);

}

void MainWindow::button_6_clicked(){
    s1 += "6";
    s2 += "6";
    n++;
    data->setText(s2);

}

void MainWindow::button_7_clicked(){
    s1 += "7";
    s2 += "7";
    n++;
    data->setText(s2);

}

void MainWindow::button_8_clicked(){
    s1 += "8";
    s2 += "8";
    n++;
    data->setText(s2);

}

void MainWindow::button_9_clicked(){
    s1 += "9";
     s2 += "9";
     n++;
    data->setText(s2);

}
void MainWindow::button_x_clicked(){
    s1 += "x";
    s2 += "x";
    n++;
    data->setText(s2);
}
void MainWindow::button_a_clicked(){
    s1 += "a";
    s2 += "a";
    n++;
    data->setText(s2);
}
void MainWindow::button_b_clicked(){
    s1 += "b";
    s2 += "b";
    n++;
    data->setText(s2);
}
void MainWindow::button_c_clicked(){
    s1 += "c";
    s2 += "c";
    n++;
    data->setText(s2);
}
void MainWindow::button_d_clicked(){
    s1 += "d";
    s2 += "d";
    n++;
    data->setText(s2);
}
void MainWindow::button_e_clicked(){
    s1 += "e";
    s2 += "e";
    n++;
    data->setText(s2);
}
void MainWindow::button_f_clicked(){
    s1 += "f";
    s2 += "f";
    n++;
    data->setText(s2);
}

void MainWindow::button_ce_clicked(){
    s1="";
    s2="";
    s3="";
    s4="";
    n=0;
    data->setText("");
    data1->setText("");

}

void MainWindow::button_jia_clicked(){
   m=1;
   if(p==1){

       bool ok=true;
        QString c="";
       a=s1.toDouble(&ok);
        b=a*pi/180;
        z=sin(b);
        a1.push_back(z);
       c= QString::number(z,format='g',precision=6);
       s3+=c;
   }else if(p==2){

       bool ok=true;
        QString c="";
       a=s1.toDouble(&ok);
        b=a*pi/180;
        z=cos(b);
        a1.push_back(z);
       c= QString::number(z,format='g',precision=6);
       s3+=c;
   }else if(p==3){

       bool ok=true;
        QString c="";
       a=s1.toDouble(&ok);
        b=a*pi/180;
        z=tan(b);
        a1.push_back(z);
       c= QString::number(z,format='g',precision=6);
       s3+=c;
   }
 else if(s1[1]!="x"&&s1[1]!="b"){s2 +="十进制";
       dectodec(s1);
   }else if(s1[1]=="x"){s2 +="十六进制";
    hextodec(s1);
   }else if(s1[1]=="b"){s2 +="二进制";
       tmptodec(s1);
   }
    s2 += "+";
    s3+="+";
    s1="";
    b1.push_back(m);
    data->setText(s2);
    data1->setText(s3);
    operat_flag = 1;
    operat = 1;
    n=0;
    p=0;
}

void MainWindow::button_jian_clicked(){
    m=2;
    if(p==1){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=sin(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==2){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=cos(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==3){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=tan(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }
    else if(n==0){s1 += "-";
        s2 += "-";
        n++;
        data->setText(s2);
    return;}
    else if(s1[1]!="x"&&s1[1]!="b"){s2 +="十进制";
        dectodec(s1);
    } else if(s1[1]=="x"){s2 +="十六进制";
        hextodec(s1);
    }else if(s1[1]=="b"){s2 +="二进制";
    tmptodec(s1);
    }
    s2 += "-";
    s3+="-";
    s1="";
    b1.push_back(m);
    data->setText(s2);
    data1->setText(s3);
    operat_flag = 1;
    operat = 2;
    n=0;
}

void MainWindow::button_cheng_clicked(){
    m=3;if(p==1){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=sin(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==2){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=cos(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==3){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=tan(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }
    else if(s1[1]!="x"&&s1[1]!="b"){s2 +="十进制";
        dectodec(s1);
    }else if(s1[1]=="x"){s2 +="十六进制";
        hextodec(s1);
    }else if(s1[1]=="b"){s2 +="二进制";
    tmptodec(s1);
    }
    s2 += "*";
    s3+="*";
    s1="";
    b1.push_back(m);
    data->setText(s2);
    data1->setText(s3);
    n=0;
}

void MainWindow::button_chu_clicked(){
    m=4;if(p==1){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=sin(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==2){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=cos(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==3){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=tan(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }
    else if(s1[1]!="x"&&s1[1]!="b"){s2 +="十进制";
        dectodec(s1);
    }else if(s1[1]=="x"){s2 +="十六进制";
        hextodec(s1);
    }else if(s1[1]=="b"){s2 +="二进制";
    tmptodec(s1);
    }
    s2 += "/";
    s3+="/";
    s1="";
    b1.push_back(m);
    data->setText(s2);
    data1->setText(s3);

    n=0;
}


void MainWindow::button_sin_clicked(){
    p=1;
    s2+="sin";
    data->setText(s2);
}
void MainWindow::button_cos_clicked(){
    p=2;
    s2+="cos";
    data->setText(s2);
}
void MainWindow::button_tan_clicked(){
    p=3;
    s2+="tan";
    data->setText(s2);
}
void MainWindow::button_dian_clicked(){
    s1 += ".";
     s2 += ".";
     n++;
    data->setText(s2);
}

void MainWindow::button_result_clicked(){
    if(p==1){
        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=sin(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==2){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=cos(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }else if(p==3){

        bool ok=true;
         QString c="";
        a=s1.toDouble(&ok);
         b=a*pi/180;
         z=tan(b);
         a1.push_back(z);
        c= QString::number(z,format='g',precision=6);
        s3+=c;
    }
    else if(s1[1]!="x"&&s1[1]!="b"){s2 +="十进制";
        dectodec(s1);
    }else if(s1[1]=="x"){s2 +="十六进制";
        hextodec(s1);
    }else if(s1[1]=="b"){s2 +="二进制";
        tmptodec(s1);
    }
    s2 += "=";
    s3+="=";
    for(auto i = 0; i < b1.size(); ++i){
        if(b1[i]==3){a1[i]=a1[i]*a1[i+1];
            a1.erase(a1.begin()+i+1);
            b1.erase(b1.begin()+i);--i;continue;
        }
        if(b1[i]==4){a1[i]=a1[i]/a1[i+1];
          a1.erase(a1.begin()+i+1);
          b1.erase(b1.begin()+i);
       }
    }
    for(auto i = 0; i < b1.size();){
        if(b1[i]==1){a1[i]=a1[i]+a1[i+1];
            a1.erase(a1.begin()+i+1);
          b1.erase(b1.begin()+i);continue;
        }
        if(b1[i]==2){a1[i]=a1[i]-a1[i+1];
          a1.erase(a1.begin()+i+1);
          b1.erase(b1.begin()+i);
       }}
    s4 = QString::number(a1[0],format='g',precision=6);
     a1.erase(a1.begin());
    s3+=s4;
    s3+="  ";
    data->setText(s2);
    data1->setText(s3);

    s1=s4;
    s2=s4;
    s3="";
    s4="";
    n=0;
}



