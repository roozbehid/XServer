#!/bin/sh

set -x

export BUILDDIR=`pwd`

NCPU=4

NDK=`which ndk-build`
NDK=`dirname $NDK`
NDK=`readlink -f $NDK`

# =========== xsproto ===========

[ -e X11/Xfuncproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/x11proto/snapshot/xproto-7.0.24.tar.gz | tar xvz || exit 1
ln -sf xproto-7.0.24 X11
cd X11
patch -p0 < ../xproto.diff || exit 1
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
}

# =========== fontsproto ===========

[ -e X11/fonts/fontstruct.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/fontsproto/snapshot/fontsproto-2.1.2.tar.gz | tar xvz || exit 1
ln -sf ../fontsproto-2.1.2 X11/fonts
cd X11/fonts
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
}

# =========== xtrans ===========

[ -e xtrans-1.2.7 ] || {
[ -e xtrans-1.2.7 ] || curl http://cgit.freedesktop.org/xorg/lib/libxtrans/snapshot/xtrans-1.2.7.tar.gz | tar xvz || exit 1

cd xtrans-1.2.7

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR -include strings.h" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cd $BUILDDIR
ln -sf ../xtrans-1.2.7 X11/Xtrans
}

# =========== xextproto ===========

[ -e X11/extensions/geproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/xextproto/snapshot/xextproto-7.2.1.tar.gz | tar xvz || exit 1
ln -sf ../xextproto-7.2.1 X11/extensions
cd X11/extensions
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
}

# =========== inputproto ===========

[ -e X11/extensions/XI.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/inputproto/snapshot/inputproto-2.3.tar.gz | tar xvz || exit 1
cd inputproto-2.3
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in inputproto-2.3/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== kbproto ===========

[ -e X11/extensions/XKBproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/kbproto/snapshot/kbproto-1.0.6.tar.gz | tar xvz || exit 1
cd kbproto-1.0.6
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in kbproto-1.0.6/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== xineramaproto ===========

[ -e X11/extensions/panoramiXproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/xineramaproto/snapshot/xineramaproto-1.2.1.tar.gz | tar xvz || exit 1
cd xineramaproto-1.2.1
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in xineramaproto-1.2.1/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== renderproto ===========

[ -e X11/extensions/renderproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/renderproto/snapshot/renderproto-0.11.1.tar.gz | tar xvz || exit 1
cd renderproto-0.11.1
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in renderproto-0.11.1/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== xfixesproto ===========

[ -e X11/extensions/xfixesproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/fixesproto/snapshot/fixesproto-5.0.tar.gz | tar xvz || exit 1
cd fixesproto-5.0
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in fixesproto-5.0/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== damageproto ===========

[ -e X11/extensions/damageproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/damageproto/snapshot/damageproto-1.2.1.tar.gz | tar xvz || exit 1
cd damageproto-1.2.1
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in damageproto-1.2.1/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== compositeproto ===========

[ -e X11/extensions/compositeproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/compositeproto/snapshot/compositeproto-0.4.2.tar.gz | tar xvz || exit 1
cd compositeproto-0.4.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in compositeproto-0.4.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== bigreqsproto ===========

[ -e X11/extensions/bigreqsproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/bigreqsproto/snapshot/bigreqsproto-1.1.2.tar.gz | tar xvz || exit 1
cd bigreqsproto-1.1.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in bigreqsproto-1.1.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== scrnsaverproto ===========

[ -e X11/extensions/saver.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/scrnsaverproto/snapshot/scrnsaverproto-1.2.2.tar.gz | tar xvz || exit 1
cd scrnsaverproto-1.2.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in scrnsaverproto-1.2.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== videoproto ===========

[ -e X11/extensions/Xv.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/videoproto/snapshot/videoproto-2.3.2.tar.gz | tar xvz || exit 1
cd videoproto-2.3.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in videoproto-2.3.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== resourceproto ===========

[ -e X11/extensions/XResproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/resourceproto/snapshot/resourceproto-1.2.0.tar.gz | tar xvz || exit 1
cd resourceproto-1.2.0
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in resourceproto-1.2.0/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== xcmiscproto ===========

[ -e X11/extensions/xcmiscproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/xcmiscproto/snapshot/xcmiscproto-1.2.2.tar.gz | tar xvz || exit 1
cd xcmiscproto-1.2.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in xcmiscproto-1.2.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== randrproto ===========

[ -e X11/extensions/randr.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/randrproto/snapshot/randrproto-1.4.0.tar.gz | tar xvz || exit 1
cd randrproto-1.4.0
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in randrproto-1.4.0/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== xf86bigfontproto ===========

[ -e X11/extensions/xf86bigfproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/xf86bigfontproto/snapshot/xf86bigfontproto-1.2.0.tar.gz | tar xvz || exit 1
cd xf86bigfontproto-1.2.0
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in xf86bigfontproto-1.2.0/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== recordproto ===========

[ -e X11/extensions/recordproto.h ] || {
curl http://cgit.freedesktop.org/xorg/proto/recordproto/snapshot/recordproto-1.14.2.tar.gz | tar xvz || exit 1
cd recordproto-1.14.2
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
cd $BUILDDIR
for F in recordproto-1.14.2/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== libpixman-1.a ===========

[ -e libpixman-1.a ] || {
curl http://cairographics.org/releases/pixman-0.30.2.tar.gz | tar xvz || exit 1
cd pixman-0.30.2

env CFLAGS="-I$NDK/sources/android/cpufeatures" \
LDFLAGS="-L$NDK/sources/android/libportable/libs/armeabi -lportable" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
--disable-arm-iwmmxt

cd pixman

$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf $BUILDDIR/pixman-0.30.2/pixman/.libs/libpixman-1.a $BUILDDIR/libpixman-1.a
}

# =========== libfontenc.a ===========

[ -e libfontenc.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libfontenc/snapshot/libfontenc-1.1.2.tar.gz | tar xvz || exit 1

cd libfontenc-1.1.2

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR -include strings.h" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf ../libfontenc-1.1.2/include/X11/fonts/fontenc.h X11/fonts/
ln -sf libfontenc-1.1.2/src/.libs/libfontenc.a ./
}

# =========== libXfont.a ===========

ln -sf $BUILDDIR/../../../../../obj/local/armeabi-v7a/libfreetype.a $BUILDDIR/

[ -e libXfont.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libXfont/snapshot/libXfont-1.4.6.tar.gz | tar xvz || exit 1

cd libXfont-1.4.6

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h \
-I$BUILDDIR/../../../../../jni/freetype/include \
-DNO_LOCALE" \
LDFLAGS="-L$BUILDDIR" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libXfont-1.4.6/src/.libs/libXfont.a ./
for F in libXfont-1.4.6/include/X11/fonts/* ; do
ln -sf ../$F X11/fonts/
done
}

# =========== libXau.a ==========

[ -e libXau.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libXau/snapshot/libXau-1.0.8.tar.gz | tar xvz || exit 1

cd libXau-1.0.8

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h" \
LDFLAGS="-L$BUILDDIR" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libXau-1.0.8/.libs/libXau.a ./
ln -sf ../libXau-1.0.8/include/X11/Xauth.h X11/
}

# =========== libXdmcp.a ==========

[ -e libXdmcp.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libXdmcp/snapshot/libXdmcp-1.1.1.tar.gz | tar xvz || exit 1

cd libXdmcp-1.1.1

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h" \
LDFLAGS="-L$BUILDDIR" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libXdmcp-1.1.1/.libs/libXdmcp.a ./
ln -sf ../libXdmcp-1.1.1/include/X11/Xdmcp.h X11/
}

# =========== xcbproto ===========
[ -e proto-1.8 ] || {
curl http://cgit.freedesktop.org/xcb/proto/snapshot/proto-1.8.tar.gz | tar xvz || exit 1
cd proto-1.8
$BUILDDIR/setCrossEnvironment.sh \
./autogen.sh --host=arm-linux-androideabi \
|| exit 1
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1
cd $BUILDDIR
}

# =========== libxcb.a ==========

[ -e libxcb.a ] || {
curl http://cgit.freedesktop.org/xcb/libxcb/snapshot/libxcb-1.9.1.tar.gz | tar xvz || exit 1

cd libxcb-1.9.1

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h" \
LDFLAGS="-L$BUILDDIR" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libxcb-1.9.1/src/.libs/libxcb.a ./
mkdir -p xcb
ln -sf ../libxcb-1.9.1/src/xcb.h xcb/
ln -sf ../libxcb-1.9.1/src/xproto.h xcb/
ln -sf ../libxcb-1.9.1/src/xcbext.h xcb/
}

[ -e libandroid_support.a ] || {
mkdir -p android_support
cd android_support
$BUILDDIR/setCrossEnvironment.sh \
env NDK=$NDK \
sh -c '$CC $CFLAGS -Drestrict=__restrict__ -ffunction-sections -fdata-sections \
	-I $NDK/sources/android/support/include \
	-c $NDK/sources/android/support/src/musl-multibyte/*.c && \
	ar rcs ../libandroid_support.a *.o' \
|| exit 1
cd $BUILDDIR
}

# =========== libX11.a ==========

[ -e libX11.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libX11/snapshot/libX11-1.6.2.tar.gz | tar xvz || exit 1

cd libX11-1.6.2

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h" \
LDFLAGS="-L$BUILDDIR" \
$BUILDDIR/setCrossEnvironment.sh \
LIBS="-lXau -lXdmcp -landroid_support" \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

echo "all: makekeys" > src/util/Makefile
echo "makekeys:" >> src/util/Makefile
echo "	/usr/bin/gcc makekeys.c -o makekeys -I /usr/include" >> src/util/Makefile

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libX11-1.6.2/src/.libs/libX11.a ./
for F in libX11-1.6.2/include/X11/*.h ; do
ln -sf ../$F X11
done
}

# =========== libxkbfile.a ==========

[ -e libxkbfile.a ] || {
curl http://cgit.freedesktop.org/xorg/lib/libxkbfile/snapshot/libxkbfile-1.0.8.tar.gz | tar xvz || exit 1

cd libxkbfile-1.0.8

[ -e configure ] || \
autoreconf -v --install \
|| exit 1

env CFLAGS="-isystem$BUILDDIR \
-include strings.h" \
LDFLAGS="-L$BUILDDIR" \
LIBS="-lxcb -lXau -lXdmcp -landroid_support" \
$BUILDDIR/setCrossEnvironment.sh \
./configure \
--host=arm-linux-androideabi \
|| exit 1

cp -f `which libtool` ./

$BUILDDIR/setCrossEnvironment.sh \
sh -c 'ln -sf $CC gcc'

env PATH=`pwd`:$PATH \
$BUILDDIR/setCrossEnvironment.sh \
make -j$NCPU V=1 2>&1 || exit 1

cd $BUILDDIR
ln -sf libxkbfile-1.0.8/src/.libs/libxkbfile.a ./
for F in libxkbfile-1.0.8/include/X11/extensions/*.h ; do
ln -sf ../$F X11/extensions/
done
}

# =========== xsdl ==========

ln -sf $BUILDDIR/../../../../../libs/armeabi-v7a/libsdl-1.2.so $BUILDDIR/libSDL.so
ln -sf $NDK/sources/android/libportable/libs/armeabi-v7a/libportable.a $BUILDDIR/libpthread.a # dummy
ln -sf $NDK/sources/android/libportable/libs/armeabi-v7a/libportable.a $BUILDDIR/libts.a # dummy

[ -e Makefile ] || \
env CFLAGS=" \
	-isystem$BUILDDIR \
	-include strings.h\
	-include linux/time.h \
	-DFNONBLOCK=O_NONBLOCK \
	-DFNDELAY=O_NDELAY \
	-I$BUILDDIR/pixman-0.30.2/pixman \
	-I$BUILDDIR/../../../../../jni/sdl-1.2/include" \
LDFLAGS="-L$BUILDDIR" \
./setCrossEnvironment.sh \
LIBS="-lfontenc -lfreetype -llog" \
../configure \
--host=arm-linux-androideabi \
--prefix=/usr \
--disable-xorg --disable-dmx --disable-xvfb --disable-xnest --disable-xquartz --disable-xwin \
--disable-xephyr --disable-xfake --disable-xfbdev --disable-unit-tests --disable-tslib \
--disable-shm --disable-mitshm --disable-dri --disable-dri2 --disable-glx --disable-xf86vidmode \
--enable-xsdl --enable-kdrive --enable-kdrive-kbd --enable-kdrive-mouse --enable-kdrive-evdev \
|| exit 1

{ ./setCrossEnvironment.sh make -j$NCPU V=1 2>&1 || exit 1 ; } | tee build.log

exit 0