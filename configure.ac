#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([helloWorldService], [1.0], [lari.korpi@iki.fi])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE
AC_LANG([C++])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
LT_INIT

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([cpprest/json.h cpprest/http_listener.h iostream])
# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL

# Checks for library functions.
AC_CONFIG_FILES([Makefile
                 doc/Makefile
                 examples/Makefile
                 man/Makefile
                 scripts/Makefile
                 src/Makefile])
AC_OUTPUT
