if UNITTESTS
check_PROGRAMS = xkb input
check_LTLIBRARIES = libxservertest.la

TESTS=$(check_PROGRAMS)

AM_CFLAGS = $(DIX_CFLAGS) $(GLIB_CFLAGS) @XORG_CFLAGS@
INCLUDES = @XORG_INCS@
TEST_LDADD=libxservertest.la $(XORG_SYS_LIBS) $(XSERVER_SYS_LIBS) $(GLIB_LIBS)

xkb_LDADD=$(TEST_LDADD)
input_LDADD=$(TEST_LDADD)

libxservertest_la_LIBADD = \
            $(XSERVER_LIBS) \
            $(top_builddir)/hw/xfree86/loader/libloader.la \
            $(top_builddir)/hw/xfree86/os-support/libxorgos.la \
            $(top_builddir)/hw/xfree86/common/libcommon.la \
            $(top_builddir)/hw/xfree86/parser/libxf86config.la \
            $(top_builddir)/hw/xfree86/dixmods/libdixmods.la \
            $(top_builddir)/hw/xfree86/modes/libxf86modes.la \
            $(top_builddir)/hw/xfree86/ramdac/libramdac.la \
            $(top_builddir)/hw/xfree86/ddc/libddc.la \
            $(top_builddir)/hw/xfree86/i2c/libi2c.la \
            $(top_builddir)/hw/xfree86/dixmods/libxorgxkb.la \
            $(top_builddir)/hw/xfree86/libxorg.la \
            $(top_builddir)/mi/libmi.la \
            $(top_builddir)/os/libos.la \
            @XORG_LIBS@

CLEANFILES=libxservertest.c

libxservertest.c:
	touch $@

all:
	@echo "Run 'make check' to run the test suite"

endif