/* THIS IS A GENERATED FILE
 *
 * Do not change!  Changing this file implies a protocol change!
 */

#ifdef HAVE_DIX_CONFIG_H
#include <dix-config.h>
#endif

#include <X11/X.h>
#include <X11/Xatom.h>
#include "misc.h"
#include "dix.h"
extern Atom
dix_MakeAtom(const char* string, unsigned len, Bool makeit);

void MakePredeclaredAtoms(void)
{
    if (dix_MakeAtom("PRIMARY", 7, 1) != XA_PRIMARY) AtomError();
    if (dix_MakeAtom("SECONDARY", 9, 1) != XA_SECONDARY) AtomError();
    if (dix_MakeAtom("ARC", 3, 1) != XA_ARC) AtomError();
    if (dix_MakeAtom("ATOM", 4, 1) != XA_ATOM) AtomError();
    if (dix_MakeAtom("BITMAP", 6, 1) != XA_BITMAP) AtomError();
    if (dix_MakeAtom("CARDINAL", 8, 1) != XA_CARDINAL) AtomError();
    if (dix_MakeAtom("COLORMAP", 8, 1) != XA_COLORMAP) AtomError();
    if (dix_MakeAtom("CURSOR", 6, 1) != XA_CURSOR) AtomError();
    if (dix_MakeAtom("CUT_BUFFER0", 11, 1) != XA_CUT_BUFFER0) AtomError();
    if (dix_MakeAtom("CUT_BUFFER1", 11, 1) != XA_CUT_BUFFER1) AtomError();
    if (dix_MakeAtom("CUT_BUFFER2", 11, 1) != XA_CUT_BUFFER2) AtomError();
    if (dix_MakeAtom("CUT_BUFFER3", 11, 1) != XA_CUT_BUFFER3) AtomError();
    if (dix_MakeAtom("CUT_BUFFER4", 11, 1) != XA_CUT_BUFFER4) AtomError();
    if (dix_MakeAtom("CUT_BUFFER5", 11, 1) != XA_CUT_BUFFER5) AtomError();
    if (dix_MakeAtom("CUT_BUFFER6", 11, 1) != XA_CUT_BUFFER6) AtomError();
    if (dix_MakeAtom("CUT_BUFFER7", 11, 1) != XA_CUT_BUFFER7) AtomError();
    if (dix_MakeAtom("DRAWABLE", 8, 1) != XA_DRAWABLE) AtomError();
    if (dix_MakeAtom("FONT", 4, 1) != XA_FONT) AtomError();
    if (dix_MakeAtom("INTEGER", 7, 1) != XA_INTEGER) AtomError();
    if (dix_MakeAtom("PIXMAP", 6, 1) != XA_PIXMAP) AtomError();
    if (dix_MakeAtom("POINT", 5, 1) != XA_POINT) AtomError();
    if (dix_MakeAtom("RECTANGLE", 9, 1) != XA_RECTANGLE) AtomError();
    if (dix_MakeAtom("RESOURCE_MANAGER", 16, 1) != XA_RESOURCE_MANAGER) AtomError();
    if (dix_MakeAtom("RGB_COLOR_MAP", 13, 1) != XA_RGB_COLOR_MAP) AtomError();
    if (dix_MakeAtom("RGB_BEST_MAP", 12, 1) != XA_RGB_BEST_MAP) AtomError();
    if (dix_MakeAtom("RGB_BLUE_MAP", 12, 1) != XA_RGB_BLUE_MAP) AtomError();
    if (dix_MakeAtom("RGB_DEFAULT_MAP", 15, 1) != XA_RGB_DEFAULT_MAP) AtomError();
    if (dix_MakeAtom("RGB_GRAY_MAP", 12, 1) != XA_RGB_GRAY_MAP) AtomError();
    if (dix_MakeAtom("RGB_GREEN_MAP", 13, 1) != XA_RGB_GREEN_MAP) AtomError();
    if (dix_MakeAtom("RGB_RED_MAP", 11, 1) != XA_RGB_RED_MAP) AtomError();
    if (dix_MakeAtom("STRING", 6, 1) != XA_STRING) AtomError();
    if (dix_MakeAtom("VISUALID", 8, 1) != XA_VISUALID) AtomError();
    if (dix_MakeAtom("WINDOW", 6, 1) != XA_WINDOW) AtomError();
    if (dix_MakeAtom("WM_COMMAND", 10, 1) != XA_WM_COMMAND) AtomError();
    if (dix_MakeAtom("WM_HINTS", 8, 1) != XA_WM_HINTS) AtomError();
    if (dix_MakeAtom("WM_CLIENT_MACHINE", 17, 1) != XA_WM_CLIENT_MACHINE) AtomError();
    if (dix_MakeAtom("WM_ICON_NAME", 12, 1) != XA_WM_ICON_NAME) AtomError();
    if (dix_MakeAtom("WM_ICON_SIZE", 12, 1) != XA_WM_ICON_SIZE) AtomError();
    if (dix_MakeAtom("WM_NAME", 7, 1) != XA_WM_NAME) AtomError();
    if (dix_MakeAtom("WM_NORMAL_HINTS", 15, 1) != XA_WM_NORMAL_HINTS) AtomError();
    if (dix_MakeAtom("WM_SIZE_HINTS", 13, 1) != XA_WM_SIZE_HINTS) AtomError();
    if (dix_MakeAtom("WM_ZOOM_HINTS", 13, 1) != XA_WM_ZOOM_HINTS) AtomError();
    if (dix_MakeAtom("MIN_SPACE", 9, 1) != XA_MIN_SPACE) AtomError();
    if (dix_MakeAtom("NORM_SPACE", 10, 1) != XA_NORM_SPACE) AtomError();
    if (dix_MakeAtom("MAX_SPACE", 9, 1) != XA_MAX_SPACE) AtomError();
    if (dix_MakeAtom("END_SPACE", 9, 1) != XA_END_SPACE) AtomError();
    if (dix_MakeAtom("SUPERSCRIPT_X", 13, 1) != XA_SUPERSCRIPT_X) AtomError();
    if (dix_MakeAtom("SUPERSCRIPT_Y", 13, 1) != XA_SUPERSCRIPT_Y) AtomError();
    if (dix_MakeAtom("SUBSCRIPT_X", 11, 1) != XA_SUBSCRIPT_X) AtomError();
    if (dix_MakeAtom("SUBSCRIPT_Y", 11, 1) != XA_SUBSCRIPT_Y) AtomError();
    if (dix_MakeAtom("UNDERLINE_POSITION", 18, 1) != XA_UNDERLINE_POSITION) AtomError();
    if (dix_MakeAtom("UNDERLINE_THICKNESS", 19, 1) != XA_UNDERLINE_THICKNESS) AtomError();
    if (dix_MakeAtom("STRIKEOUT_ASCENT", 16, 1) != XA_STRIKEOUT_ASCENT) AtomError();
    if (dix_MakeAtom("STRIKEOUT_DESCENT", 17, 1) != XA_STRIKEOUT_DESCENT) AtomError();
    if (dix_MakeAtom("ITALIC_ANGLE", 12, 1) != XA_ITALIC_ANGLE) AtomError();
    if (dix_MakeAtom("X_HEIGHT", 8, 1) != XA_X_HEIGHT) AtomError();
    if (dix_MakeAtom("QUAD_WIDTH", 10, 1) != XA_QUAD_WIDTH) AtomError();
    if (dix_MakeAtom("WEIGHT", 6, 1) != XA_WEIGHT) AtomError();
    if (dix_MakeAtom("POINT_SIZE", 10, 1) != XA_POINT_SIZE) AtomError();
    if (dix_MakeAtom("RESOLUTION", 10, 1) != XA_RESOLUTION) AtomError();
    if (dix_MakeAtom("COPYRIGHT", 9, 1) != XA_COPYRIGHT) AtomError();
    if (dix_MakeAtom("NOTICE", 6, 1) != XA_NOTICE) AtomError();
    if (dix_MakeAtom("FONT_NAME", 9, 1) != XA_FONT_NAME) AtomError();
    if (dix_MakeAtom("FAMILY_NAME", 11, 1) != XA_FAMILY_NAME) AtomError();
    if (dix_MakeAtom("FULL_NAME", 9, 1) != XA_FULL_NAME) AtomError();
    if (dix_MakeAtom("CAP_HEIGHT", 10, 1) != XA_CAP_HEIGHT) AtomError();
    if (dix_MakeAtom("WM_CLASS", 8, 1) != XA_WM_CLASS) AtomError();
    if (dix_MakeAtom("WM_TRANSIENT_FOR", 16, 1) != XA_WM_TRANSIENT_FOR) AtomError();
}
