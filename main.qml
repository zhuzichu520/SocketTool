import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.Dialogs
import com.zhuzichu.controller
import Http

ApplicationWindow {

    id:root
    width: 880
    height: 800
    visible: true
    title: qsTr("SocketTool")

    ListModel{
        id:receiveModel
    }

    ListModel{
        id:userModel
    }

    ApiGetUserList{
        id:getUserList
        onSuccess:
            (data)=>{
                console.debug(JSON.stringify(data))
            }
    }

    ScoketController{
        id:controller
        onTextMessageReceived:
            (text)=> {
                console.debug(text)
                var time = getCurrentTime()
                receiveModel.append({time:time,text:text})
            }
        onErrorMessage:
            (text)=>{
                showErrorDialog(text)
            }
        onLineStatusChanged:
            (json)=>{
                userModel.clear()
                userModel.append(JSON.parse(json).users)
                console.debug(json)
            }
    }

    menuBar: MenuBar{
        Menu{
            id:toolFile
            title: "文件"
            MenuItem{
                text:"另存为"
            }
        }
        Menu{
            id:toolMenu
            title: "工具"
            MenuItem{
                text:"Protobuf"
            }
        }
    }

    Rectangle{
        id:sendPane
        anchors{
            top: parent.top
            bottom: parent.bottom
            left: parent.left
            right: centerDivder.left
        }

        ColumnLayout{

            width: parent.width

            Text{
                text:"服务器配置 状态：" + getStateString(controller.state)
                font.pixelSize: 14
                Layout.topMargin: 14
                Layout.leftMargin: 14
            }

            Rectangle{
                height: 34
                Layout.fillWidth: true
                Layout.leftMargin: 14
                Layout.rightMargin: 14
                Layout.topMargin: 8
                border{
                    width: 1
                    color: "#999999"
                }

                Rectangle{
                    id:layoutLeft
                    color:"#FFE9ECEF"
                    width: 80
                    border{
                        width: 1
                        color: "#999999"
                    }
                    anchors{
                        left: parent.left
                        top:parent.top
                        bottom: parent.bottom
                    }
                    Text {
                        anchors.centerIn: parent
                        color:"#666666"
                        text: qsTr("服务地址")
                        font.pixelSize: 12
                    }
                }

                RowLayout{
                    height: parent.height
                    anchors{
                        left:layoutLeft.right
                        right:layoutRight.left
                    }
                    TextField{
                        id:inputHostname
                        implicitHeight: parent.height
                        Layout.fillWidth: true
                        background:Item{}
                        text: "ws://192.168.2.24:9999/ws"
                        verticalAlignment:Text.AlignVCenter
                    }
                }


                Rectangle{
                    id:layoutRight
                    property color colorPrimary: controller.state===3?"#FFDC3545":"#FF28A745"
                    color: mouseConnect.containsMouse ? Qt.darker(colorPrimary,1.2) : colorPrimary
                    width: 80
                    border{
                        width: 1
                        color: "#999999"
                    }
                    anchors{
                        right: parent.right
                        top:parent.top
                        bottom: parent.bottom
                    }
                    Text {
                        anchors.centerIn: parent
                        color:"#FFFFFF"
                        text: controller.state===3?"关闭连接":"开启连接"
                        font.pixelSize: 12
                    }
                    MouseArea{
                        id:mouseConnect
                        anchors.fill: parent
                        hoverEnabled: true
                        cursorShape: Qt.PointingHandCursor
                        onClicked: {
                            if(controller.state===3){
                                controller.closeScoket()
                            }else{
                                controller.connectSocket(inputHostname.text,inputAccid.text,inputToken.text)
                            }
                        }
                    }
                }
            }

            Rectangle{
                height: 34
                Layout.fillWidth: true
                Layout.leftMargin: 14
                Layout.rightMargin: 14
                Layout.topMargin: 8
                border{
                    width: 1
                    color: "#999999"
                }

                Rectangle{
                    id:layoutAccid
                    color:"#FFE9ECEF"
                    width: 80
                    border{
                        width: 1
                        color: "#999999"
                    }
                    anchors{
                        left: parent.left
                        top:parent.top
                        bottom: parent.bottom
                    }
                    Text {
                        anchors.centerIn: parent
                        color:"#666666"
                        text: qsTr("accid")
                        font.pixelSize: 12
                    }
                }

                TextField{
                    id:inputAccid
                    background:Item{}
                    anchors{
                        left:layoutAccid.right
                        right:parent.right
                        verticalCenter: parent.verticalCenter
                    }
                    text:"admin"
                    placeholderText: "请输入accid"
                }
            }


            Rectangle{
                height: 34
                Layout.fillWidth: true
                Layout.leftMargin: 14
                Layout.rightMargin: 14
                Layout.topMargin: 8
                border{
                    width: 1
                    color: "#999999"
                }

                Rectangle{
                    id:layoutToken
                    color:"#FFE9ECEF"
                    width: 80
                    border{
                        width: 1
                        color: "#999999"
                    }
                    anchors{
                        left: parent.left
                        top:parent.top
                        bottom: parent.bottom
                    }
                    Text {
                        anchors.centerIn: parent
                        color:"#666666"
                        text: qsTr("token")
                        font.pixelSize: 12
                    }
                }

                TextField{
                    id:inputToken
                    background:Item{}
                    anchors{
                        left:layoutToken.right
                        right:parent.right
                        verticalCenter: parent.verticalCenter
                    }
                    text:"21232f297a57a5a743894a0e4a801fc3"
                    placeholderText: "请输入token"
                }
            }

            Rectangle{
                Layout.fillWidth: true
                height: 1
                color: "#EEEEEE"
                Layout.topMargin: 10
            }


            Text{
                text:"发包设置"
                font.pixelSize: 14
                Layout.topMargin: 6
                Layout.leftMargin: 14
            }


            Rectangle{
                color:"#FFE9ECEF"
                height: 200
                Layout.fillWidth: true
                Layout.leftMargin: 14
                Layout.rightMargin: 14
                Layout.topMargin: 5

                ScrollView {
                    ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
                    ScrollBar.vertical.policy: ScrollBar.AlwaysOn
                    anchors.fill: parent
                    TextArea {
                        id:inputSend
                        color:"#666666"
                        font.pixelSize: 12
                        background: Item{}
                        wrapMode: Text.WrapAnywhere
                        placeholderText: "需要发送到服务端的内容"
                        placeholderTextColor: "#999999"
                    }
                }

                Rectangle{
                    anchors.fill: parent
                    border{
                        width: 1
                        color: "#999999"
                    }
                    color: "#00000000"
                }

            }

            Rectangle{
                id:layoutSend
                property color colorPrimary: "#FF28A745"
                color: mouseSend.containsMouse ? Qt.darker(colorPrimary,1.2) : colorPrimary
                height: 34
                Layout.fillWidth: true
                Layout.leftMargin: 14
                Layout.rightMargin: 14
                Text {
                    anchors.centerIn: parent
                    color:"#FFFFFF"
                    text: qsTr("发送到服务端")
                    font.pixelSize: 12
                }
                MouseArea{
                    id:mouseSend
                    anchors.fill: parent
                    hoverEnabled: true
                    cursorShape: Qt.PointingHandCursor
                    onClicked: {
                        controller.sendMessage(inputAccid.text,userModel.get(userList.currentIndex).accid,inputSend.text)
                    }
                }
            }

            Rectangle{
                Layout.fillWidth: true
                height: 1
                color: "#EEEEEE"
                Layout.topMargin: 10
            }

            Text{
                text:"调试消息"
                font.pixelSize: 14
                Layout.topMargin: 6
                Layout.leftMargin: 14
            }


        }


    }

    Rectangle{
        id:receivePane
        anchors{
            top: parent.top
            bottom: parent.bottom
            right: parent.right
            left: centerDivder.right
        }

        ColumnLayout{

            width: parent.width
            height: parent.height
            Text{
                text: userModel.get(userList.currentIndex).name + "的消息记录"
                font.pixelSize: 14
                Layout.topMargin: 14
                Layout.leftMargin: 14
            }

            ListView{
                id:receiveList
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.topMargin: 10
                model: receiveModel
                clip: true
                spacing: 14
                onCountChanged:{
                    contentY = Number.MAX_VALUE
                }
                delegate: ColumnLayout{
                    width: receiveList.width
                    spacing: 4
                    RowLayout{
                        spacing: 20
                        Text{
                            text: "收到消息"
                            color:"#FF007BFF"
                            leftPadding: 14
                        }
                        Text{
                            text: model.time
                            color:"#333333"
                        }
                    }

                    Text{
                        text:model.text
                        Layout.fillWidth: true
                        wrapMode: Text.WrapAnywhere
                        Layout.leftMargin: 14
                        Layout.rightMargin: 14
                    }

                }
            }

        }


    }

    Rectangle{
        id:centerDivder
        anchors{
            top: parent.top
            bottom: parent.bottom
            horizontalCenter: parent.horizontalCenter
        }
        width: 100
        color: "#EEEEEE"

        Text{
            id:onlineTitle
            text:"在线列表"
            color: "#333333"
            anchors{
                horizontalCenter: parent.horizontalCenter
                top: parent.top
                topMargin: 14
            }
        }



        ListView{
            id:userList
            model:userModel
            clip: true
            anchors{
                top: onlineTitle.bottom
                bottom: parent.bottom
                topMargin: 8
                leftMargin: 5
                rightMargin: 5
                left: parent.left
                right: parent.right
            }
            spacing:5
            delegate: Rectangle{
                color:ListView.isCurrentItem?"#EEEEEE":"#FFFFFF"
                width: userList.width
                height: 48

                MouseArea{
                    id:mouseUser
                    anchors.fill: parent
                    cursorShape: Qt.PointingHandCursor
                    onClicked: {
                        userList.currentIndex = index
                    }
                }

                Rectangle{
                    radius: 4
                    width: 8
                    height: 8
                    anchors{
                        verticalCenter: parent.verticalCenter
                        left: parent.left
                        leftMargin: 5
                    }
                    color:model.online ?"#FF28A745":"#FFDC3545"
                }

                Text{
                    text:model.name
                    anchors{
                        verticalCenter: parent.verticalCenter
                        left: parent.left
                        leftMargin: 20
                    }
                }

            }
        }

    }

    MessageDialog {
        id:errorDialog
        title: "错误提示"
        buttons: MessageDialog.Ok
    }

    function showErrorDialog(error){
        errorDialog.text = error
        errorDialog.open()
    }

    function getStateString(state){
        switch (state) {
        case 0:
            userModel.clear()
            return "未连接";
        case 1:
            return "正在执行主机名查找"
        case 2:
            return "正在建立连接";
        case 3:
            return "连接成功";
        case 4:
            return "绑定到地址和端口";
        case 5:
            return "即将关闭";
        case 6:
            return "仅供内部使用";
        default:
            return "尚未创建";
        }
    }

    function getCurrentTime() {
        var date = new Date();//当前时间
        var hour = repair(date.getHours());//时
        var minute = repair(date.getMinutes());//分
        var second = repair(date.getSeconds());//秒
        //当前时间
        var curTime = hour + ":" + minute + ":" + second;
        return curTime;
    }

    function repair(i){
        if (i >= 0 && i <= 9) {
            return "0" + i;
        } else {
            return i;
        }
    }

}
