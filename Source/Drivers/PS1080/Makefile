include ../../../ThirdParty/PSCommon/BuildSystem/CommonDefs.mak

BIN_DIR = ../../../Bin

INC_DIRS = \
	. \
	Include \
	../../../Include \
	../../../ThirdParty/PSCommon/XnLib/Include

SRC_FILES = \
	Core/*.cpp	\
	DDK/*.cpp 	\
	DriverImpl/*.cpp\
	Formats/*.cpp	\
	Include/*.cpp	\
	Sensor/*.cpp	\
	../../../ThirdParty/LibJPEG/*.c


ifeq ("$(OSTYPE)","Darwin")
	INC_DIRS += /opt/local/include
	LIB_DIRS += /opt/local/lib
	LDFLAGS += -framework CoreFoundation -framework IOKit
endif

LIB_NAME = PS1080

LIB_DIRS = ../../../ThirdParty/PSCommon/XnLib/Bin/$(PLATFORM)-$(CFG)
USED_LIBS = XnLib dl pthread usb-1.0
ifneq ("$(OSTYPE)","Darwin")
        USED_LIBS += rt  
endif

CFLAGS += -Wall

OUT_DIR := $(OUT_DIR)/OpenNI2/Drivers

include ../../../ThirdParty/PSCommon/BuildSystem/CommonCppMakefile
