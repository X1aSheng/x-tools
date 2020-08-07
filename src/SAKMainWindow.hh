﻿/*
 * Copyright 2018-2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMenu>
#include <QLabel>
#include <QAction>
#include <QMetaEnum>
#include <QTabWidget>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QMainWindow>
#include <QTranslator>

namespace Ui {
    class SAKMainWindow;
}

class SAKQRCodeDialog;
class SAKUpdateManager;
class SAKMoreInformation;
class SAKMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit SAKMainWindow(QWidget *parent = Q_NULLPTR);
    ~SAKMainWindow();
private:
    QMenu *mToolsMenu;
    QAction *mDefaultStyleSheetAction;
    SAKUpdateManager *mUpdateManager;
    SAKMoreInformation *mMoreInformation;
    SAKQRCodeDialog *mQrCodeDialog;
private: 
    void initMenuBar();
    void initFileMenu();
    void initToolMenu();
    void initOptionMenu();
    void initWindowMenu();
    void initLanguageMenu();
    void initHelpMenu();
    void initLinksMenu();

    void changeStylesheet(QString styleSheetName);
    void changeAppStyle(QString appStyle);

    /// @brief 显示关于软件弹窗
    void about();
    /// @brief 切换软件显示语言，重启软件生效，该函数只能通过“选项”>>“语言”菜单下的菜单选项来调用
    void installLanguage();
    /// @brief 追加页面
    void appendRemovablePage();
    /// @brief 移除页面
    void removeRemovableDebugPage(int index);
    /// @brief 打开调试页面窗口
    void openDebugPageWidget();
    /// @brief 生成调试页面
    QWidget *debugPageFromType(int type);
private slots:
    /// @brief 显示工具窗口，该函数只能通过“工具”菜单的菜单项来调用
    void showToolWidget();
private:
    Ui::SAKMainWindow *mUi;
    QTabWidget *mTabWidget;
};

#endif // MAINWINDOW_H
