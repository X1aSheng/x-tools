﻿/***************************************************************************************************
 * Copyright 2023 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#include <QJsonObject>

#include "sakudpclienttool.h"
#include "sakudptransmittertool.h"

SAKUdpTransmitterTool::SAKUdpTransmitterTool(QObject *parent)
    : SAKSocketClientTransmitterTool{parent}
{}

SAKCommunicationTool *SAKUdpTransmitterTool::createTool()
{
    SAKCommunicationTool *tool = new SAKUdpClientTool();
    return tool;
}
