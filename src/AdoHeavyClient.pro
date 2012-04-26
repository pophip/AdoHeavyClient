#-------------------------------------------------
#
# Project created by QtCreator 2012-03-29T22:06:14
#
#-------------------------------------------------

QT       += core gui

TARGET = AdoHeavyClient
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp \
    ConsoleWidget.cpp \
    PublishingWidget.cpp \
    PublishedFilesView.cpp \
    SelectedFoldersView.cpp \
    Log.cpp \
    FileHasher.cpp \
    HashSum.cpp \
    ChunkByChunkFileReader.cpp \
    ChunkByChunkFileReaderIterator.cpp \
    FileChunk.cpp \
    test/ChunkByChunkFileReaderTest.cpp \
    test/FileHasherTest.cpp

HEADERS  += \
    ConsoleWidget.h \
    PublishingWidget.h \
    PublishedFilesView.h \
    SelectedFoldersView.h \
    Log.h \
    FileHasher.h \
    HashSum.h \
    ChunkByChunkFileReader.h \
    ChunkByChunkFileReaderIterator.h \
    FileChunk.h \
    test/ChunkByChunkFileReaderTest.h \
    test/FileHasherTest.h

LIBS += -lssl
