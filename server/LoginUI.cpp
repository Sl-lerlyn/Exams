﻿#include "LoginUI.h"
#include <QMessageBox>
LoginUI::LoginUI(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
}

void LoginUI::on_pushButton_login_clicked()
{
            Manager m;
            //自动填写。。。
            lineEdit_ID->setText("12345");
            lineEdit_PW->setText("12345");
            m.setId(lineEdit_ID->text().toInt());
            m.setPassword(lineEdit_PW->text());
            emit this->loginSignal(m);
}
