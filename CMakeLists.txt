cmake_minimum_required(VERSION 3.16)

project(SocketTool VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick WebSockets REQUIRED)

qt_add_executable(appSocketTool
    main.cpp
    ScoketController.h ScoketController.cpp
    Message.pb.h Message.pb.cc
    online.pb.h online.pb.cc
    ByteBuf.h ByteBuf.cpp
    HttpClient.h HttpClient.cpp
    Api.h Api.cpp
    ApiGetUserList.h ApiGetUserList.cpp
)

qt_add_qml_module(appSocketTool
    URI SocketTool
    VERSION 1.0
    QML_FILES main.qml 
)

set_target_properties(appSocketTool PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_compile_definitions(appSocketTool
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(appSocketTool
    PRIVATE Qt6::Quick
    Qt6::WebSockets
    ${PROJECT_SOURCE_DIR}/libprotobufd.lib
    )
target_include_directories(appSocketTool
    PRIVATE ${PROJECT_SOURCE_DIR}/google
)
