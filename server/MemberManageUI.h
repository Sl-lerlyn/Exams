﻿#ifndef MEMBERMANAGEUI_H
#define MEMBERMANAGEUI_H
//
#include <QWidget>
#include "ui_MemberManageUI.h"
#include "data.h"

class MemberManageUI : public QWidget,public Ui::MemberManageUI
{
    Q_OBJECT

public:
    explicit MemberManageUI(QWidget *parent = 0);
    ~MemberManageUI();
signals:
    void addUser(Student*);
    void addManager(User*);
    void deleteUserId(QString);
    void deleteManagerId(int);


private slots:
    void on_pushButton_add_user_clicked();
    void on_pushButton_delete_user_clicked();
    void on_pushButton_search_clicked();
    void on_pushButton_all_clicked();
    void showUser(QList<Student*>, QList<User *>);
    void showUserType(QList<QString>);
    void textClear();
private:
    QList<Student *> userList;
    QList<User *> managerList;
    QList<Student *> usearchList;
    QList<User *> msearchList;

};

#endif // MEMBERMANAGEUI_H
