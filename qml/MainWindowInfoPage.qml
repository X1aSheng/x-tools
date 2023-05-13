import QtQuick
import QtQuick.Layouts

import "common"

EDPane {
    id: root
    contentItem: Item {
        GridLayout {
                columns: 2
                EDLabel {
                    text: qsTr("Version:")
                }
                EDLabel {
                    text: Application.version
                }
                EDLabel {
                    text: qsTr("Report a bug:")
                }
                EDLabel {
                    text: "wuuhaii@outlook.com"
                }
                EDLabel {
                    text: qsTr("Build info:")
                }
                EDLabel {
                    text: edInterface.buildDateTime(edInterface.dateFormat() + " " + edInterface.timeFormat())
                }
                EDLabel {
                    text: qsTr("User QQ Group:")
                }
                Row {
                    spacing: 8
                    EDLabel {
                        id: qqGroupLabel
                        text: "952218522"
                        anchors.verticalCenter: parent.verticalCenter
                    }
                    EDButton {
                        text: qsTr("Copy")
                        onClicked: edInterface.setTextToClipboard(qqGroupLabel.text)
                    }
                }
                EDLabel {
                    text: qsTr("Copyright information:")
                }
                EDLabel {
                    text: String("Copyright 2023-%1 Qsaker. All rights reserved.").arg(edInterface.buildDateTime("yyyy"))
                }

                Item { Layout.fillHeight: true }
            }
    }
}