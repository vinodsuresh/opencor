PROJECT(OpenCOR)

# Minimum version of CMake required

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.9)

# Some in-house CMake functions/macros

INCLUDE(${CMAKE_SOURCE_DIR}/../cmake/common.cmake)

# Initialise the project

INITIALISE_PROJECT()

# Files that make up the console version of OpenCOR

SET(SOURCES
    src/main.cpp

    ../src/misc/common.cpp
    ../src/misc/utils.cpp
)

SET(HEADERS
    ../src/misc/common.h
    ../src/misc/utils.h
)

SET(RESOURCES
    ../res/common.qrc
)

# Various include directories

INCLUDE_DIRECTORIES(../src/misc)

# Third-party library which must be directly embedded in the console version of
# OpenCOR

INCLUDE_THIRD_PARTY_LIBRARY(.. LibQxt)

# Build the console version of OpenCOR

QT5_ADD_RESOURCES(SOURCES_RCS ${RESOURCES})

ADD_EXECUTABLE(${PROJECT_NAME}
    ${SOURCES}
    ${SOURCES_RCS}
)

QT5_USE_MODULES(${PROJECT_NAME}
    Core
)

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    ${QT_QTCORE_LIBRARY}
)

# Additional linker settings

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES
    LINK_FLAGS "${LINK_FLAGS_PROPERTIES}"
)

# Copy the console version of OpenCOR to the main build folder

COPY_FILE_TO_BUILD_DIR(${CMAKE_BINARY_DIR} bin
                       ${PROJECT_NAME}${CMAKE_EXECUTABLE_SUFFIX} ${PROJECT_NAME}.com)
