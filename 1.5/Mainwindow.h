#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    int num1,num2,result,m;
    QLineEdit *data1;
    QLineEdit *data;

    QPushButton *button_zhishuhanshu;
    QPushButton *button_duishuhanshu;
    QPushButton *button_bijiao;
    QPushButton *button_gongyueshu;
    QPushButton *button_gongbeishu;
    QPushButton *button_0;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_ce;
    QPushButton *button_jia;
    QPushButton *button_jian;
    QPushButton *button_cheng;
    QPushButton *button_chu;
    QPushButton *button_result;
    QPushButton *button_sin;
    QPushButton *button_cos;
    QPushButton *button_tan;
    QPushButton *button_dian;
    QPushButton *button_x;
    QPushButton *button_a;
    QPushButton *button_b;
    QPushButton *button_c;
    QPushButton *button_d;
    QPushButton *button_e;
    QPushButton *button_f;
    QString s;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void myLayout();
    void operation();
    void hextodec(QString a);
    void dectodec(QString a);
    void tmptodec(QString a);
    void init_data1();
    void init_data();
private slots:

    void button_zhishuhanshu_clicked();
    void button_duishuhanshu_clicked();
    void button_bijiao_clicked();
    void button_gongyueshu_clicked();
    void button_gongbeishu_clicked();
    void button_0_clicked();
    void button_1_clicked();
    void button_2_clicked();
    void button_3_clicked();
    void button_4_clicked();
    void button_5_clicked();
    void button_6_clicked();
    void button_7_clicked();
    void button_8_clicked();
    void button_9_clicked();
    void button_ce_clicked();
    void button_result_clicked();
    void button_cheng_clicked();
    void button_chu_clicked();
    void button_jia_clicked();
    void button_jian_clicked();
    void button_sin_clicked();
    void button_cos_clicked();
    void button_tan_clicked();
    void button_dian_clicked();
    void button_x_clicked();
    void button_a_clicked();
    void button_b_clicked();
    void button_c_clicked();
    void button_d_clicked();
    void button_e_clicked();
    void button_f_clicked();
};


#endif
