#############################################################################
# Makefile for building: tab_view
# Generated by qmake (2.01a) (Qt 4.8.1) on: Wed Apr 18 22:50:50 2012
# Project:  tab_view.pro
# Template: app
# Command: /home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/bin/qmake -spec ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile tab_view.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ -I. -I../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/include/QtCore -I../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/include/QtGui -I../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/include -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib
LIBS          = $(SUBLIBS)  -L/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib -lQtGui -L/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib -L/usr/X11R6/lib64 -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		LocalFolderWidget.cpp moc_LocalFolderWidget.cpp
OBJECTS       = main.o \
		LocalFolderWidget.o \
		moc_LocalFolderWidget.o
DIST          = ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/debug.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/declarative_debug.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf \
		tab_view.pro
QMAKE_TARGET  = tab_view
DESTDIR       = 
TARGET        = tab_view

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: tab_view.pro  ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++/qmake.conf ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/debug.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/declarative_debug.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf \
		../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf \
		/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtGui.prl \
		/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtCore.prl
	$(QMAKE) -spec ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile tab_view.pro
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/unix.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/linux.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/gcc-base-unix.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-base.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/common/g++-unix.conf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/qconfig.pri:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/modules/qt_webkit_version.pri:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_functions.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt_config.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/exclusive_builds.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_pre.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/debug.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/default_post.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/declarative_debug.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/gdb_dwarf_index.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/warn_on.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/qt.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/unix/thread.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/moc.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/resources.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/uic.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/yacc.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/lex.prf:
../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/features/include_source_dir.prf:
/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtGui.prl:
/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../../../bin/QtSDK/Desktop/Qt/4.8.1/gcc/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile tab_view.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/tab_view1.0.0 || $(MKDIR) .tmp/tab_view1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/tab_view1.0.0/ && $(COPY_FILE) --parents LocalFolderWidget.h .tmp/tab_view1.0.0/ && $(COPY_FILE) --parents main.cpp LocalFolderWidget.cpp .tmp/tab_view1.0.0/ && (cd `dirname .tmp/tab_view1.0.0` && $(TAR) tab_view1.0.0.tar tab_view1.0.0 && $(COMPRESS) tab_view1.0.0.tar) && $(MOVE) `dirname .tmp/tab_view1.0.0`/tab_view1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/tab_view1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_LocalFolderWidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_LocalFolderWidget.cpp
moc_LocalFolderWidget.cpp: LocalFolderWidget.h
	/home/pierre/bin/QtSDK/Desktop/Qt/4.8.1/gcc/bin/moc $(DEFINES) $(INCPATH) LocalFolderWidget.h -o moc_LocalFolderWidget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp LocalFolderWidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

LocalFolderWidget.o: LocalFolderWidget.cpp LocalFolderWidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LocalFolderWidget.o LocalFolderWidget.cpp

moc_LocalFolderWidget.o: moc_LocalFolderWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_LocalFolderWidget.o moc_LocalFolderWidget.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

