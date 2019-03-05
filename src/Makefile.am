AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = $(ACLOCAL_FLAGS)

bin_PROGRAMS = microServiceController

microServiceController_SOURCES = main.cpp
microServiceController_LDADD = microServiceController.la

lib_LTLIBRARIES = libMicroServiceController.la
libMicroServiceController_la_LDFLAGS = -version-info 0:0:0
libMicroServiceController_la_SOURCES = microServiceController.cpp microServiceController.h
