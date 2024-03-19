/***************************************************************************************************
 * Copyright 2023 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#ifndef SAKCOMBOBOX_H
#define SAKCOMBOBOX_H

#include <QComboBox>

class SAKComboBox : public QComboBox
{
public:
    SAKComboBox(QWidget *parent = nullptr);

    void setCurrentIndexFromData(const QVariant &data);
    void setGroupKey(const QString &group, const QString &key, bool isIndex = true);

private:
    QString mKey;
    bool mIsIndex{true};

private:
    void readFromSettingsFile();
    void writeToSettingsFile();
};

#endif // SAKCOMBOBOX_H
