﻿/******************************************************************************
 * Copyright 2018-2021 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 *****************************************************************************/
#ifndef SAKINPUTDATAPRESETITEM_HH
#define SAKINPUTDATAPRESETITEM_HH

#include <QTimer>
#include <QWidget>
#include <QAction>
#include <QCheckBox>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>

namespace Ui {
    class SAKInputDataPresetItem;
}

// Preset data parameters editting widget
class SAKInputDataPresetItem:public QWidget
{
    Q_OBJECT
public:
    struct SAKStructDataPresetItemContext {
        quint64 id;
        quint32 format;
        QString description;
        QString text;
    };
public:
    SAKInputDataPresetItem(QWidget *parent = Q_NULLPTR);
    SAKInputDataPresetItem(SAKStructDataPresetItemContext context,
                           QWidget *parent = Q_NULLPTR);
    ~SAKInputDataPresetItem();

    /**
     * @brief itemID: Get the id of the item
     * @return The id of the item
     */
    quint64 itemID();

    /**
     * @brief itemDescription: Get the description of the item
     * @return The description of the item
     */
    QString itemDescription();

    /**
     * @brief itemText: Get the text of the item
     * @return The text of the item
     */
    QString itemText();

    /**
     * @brief itemTextFromat: Get the text format of the item
     * @return The text format of the item
     */
    int itemTextFromat();
private:
    quint16 mItemId;
private:
    void initializingItem();
private:
    Ui::SAKInputDataPresetItem *mUi;
    QComboBox *mTextFormatComboBox;
    QLineEdit *mDescriptionLineEdit;
    QTextEdit *mInputTextEdit;
signals:
    void formatChanged(quint64 id, quint32 format);
    void descriptionChanged(quint64 id, const QString &text);
    void textChanged(quint64 id, const QString &text);
};

#endif
