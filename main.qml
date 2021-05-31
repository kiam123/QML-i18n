import QtQuick 2.14
import QtQuick.Window 2.14

Window {
    width: 640
    height: 480
    visible: true
//    title: qsTr("test i18n")
    title: qsTr("測試i18n")

    Text {
        id: text1
//        text: qsTr("welcome to here translate place")
        text: qsTr("歡迎來到翻譯地方")
        font.pixelSize: 25
        anchors.top: parent.top
    }

    Text {
        id: text2
//        text: qsTr("testing translate")
        text: qsTr("測試翻譯")
        font.pixelSize: 25
        anchors.top: text1.bottom
    }
}
