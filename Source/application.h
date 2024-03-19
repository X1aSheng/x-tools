/***************************************************************************************************
 * Copyright 2018-2024 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
#include <QSplashScreen>

class Application : public QApplication
{
    Q_OBJECT
public:
    explicit Application(int argc, char **argv);
    ~Application() override = default;

    void showSplashScreenMessage(const QString &msg);

signals:
    void activeMainWindow();

private:
    QSplashScreen *m_splashScreen{nullptr};

private:
    static void setupPalette(const QString &fileName);
};

#endif
