cmake_minimum_required(VERSION 3.16)

project(SocketTool VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick WebSockets REQUIRED)

qt_add_executable(appSocketTool
    main.cpp
    ScoketController.h ScoketController.cpp
    ByteBuf.h ByteBuf.cpp
    HttpClient.h HttpClient.cpp
    Api.h Api.cpp
    ApiGetUserList.h ApiGetUserList.cpp
    message.pb.h message.pb.cc
    online.pb.h online.pb.cc
    user.pb.h user.pb.cc
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
    )

if (CMAKE_HOST_WIN32)
    set(WINDOWS 1)
elseif (CMAKE_HOST_APPLE)
    set(MACOS 1)
elseif (CMAKE_HOST_UNIX)
    set(LINUX 1)
endif ()

if (MACOS)
    message("配置MACOS VCPKG 路径")
    target_link_libraries(appSocketTool
        PRIVATE
        ${PROJECT_SOURCE_DIR}/libprotobufd.a
        )
elseif (WINDOWS)
     message("配置WINDOWS VCPKG 路径")
    target_link_libraries(appSocketTool
        PRIVATE
        ${PROJECT_SOURCE_DIR}/libprotobufd.lib
        )
elseif (LINUX)
    message("配置LINUX VCPKG 路径")
endif ()

target_include_directories(appSocketTool
    PRIVATE ${PROJECT_SOURCE_DIR}/google
)
