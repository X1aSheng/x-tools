/******************************************************************************
 * Copyright 2023 Qsaker(wuuhaii@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 *****************************************************************************/
#ifndef SAKBASETOOLUI_HH
#define SAKBASETOOLUI_HH

#include <QWidget>
#include <QLoggingCategory>

class SAKBaseTool;
class SAKBaseToolUi : public QWidget
{
    Q_OBJECT
public:
    explicit SAKBaseToolUi(QWidget *parent = nullptr);

    void initialize(SAKBaseTool *tool,
                    const QString &settingsGroup,
                    const char *loggingCategory = nullptr);

protected:
    virtual void onIsWorkingChanged(bool isWorking);
    virtual void onBaseToolUiInitialized(SAKBaseTool *tool,
                                         const QString &settingsGroup);

protected:
    QLoggingCategory *mLoggingCategory{nullptr};
};

#endif // SAKBASETOOLUI_HH