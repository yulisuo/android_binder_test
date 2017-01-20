LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SHARED_LIBRARIES := libutils

LOCAL_C_INCLUDES:= Test.h

LOCAL_SRC_FILES:= Test.cpp

LOCAL_MODULE:=libreftest

LOCAL_MODULE_TAGS:= optional

include $(BUILD_SHARED_LIBRARY)
