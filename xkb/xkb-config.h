#ifndef _XKB_CONFIG_H_
#define _XKB_CONFIG_H_

/* Default set of XKB rules. */
#define XKB_DFLT_RULES "base"

/* Default XKB model. */
#define XKB_DFLT_MODEL "pc104"

/* Default XKB layout. */
#define XKB_DFLT_LAYOUT "us"

/* Default XKB variant. */
#define XKB_DFLT_VARIANT ""

/* Default XKB options. */
#define XKB_DFLT_OPTIONS ""

#ifdef _WIN32
/* Path to XKB definitions. */
#define XKB_BASE_DIRECTORY "d:\\Projects\\xsdl\\usr\\share\\X11\\xkb"
#else
#define XKB_BASE_DIRECTORY "/usr/share/X11/xkb"
#endif

/* Path to xkbcomp. */
#define XKB_BIN_DIRECTORY "c:\\Program Files\\VcXsrv"

#endif /* _XKB_CONFIG_H_ */