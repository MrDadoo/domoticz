#include "stdafx.h"

extern "C" {
#ifdef ENABLE_PYTHON
#include <Python.h>
#endif
}

#ifdef ENABLE_PYTHON
#include <boost/python.hpp>
using namespace boost::python;
#endif
