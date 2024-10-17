#pragma once

#include <boost/format.hpp>

#if HAVE_GETTEXT
#include <libintl.h>
#define _(str) gettext(str)
#else
#define _(str) str
#endif
#define _f(str) boost::format(_(str))
