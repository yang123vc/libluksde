/*
 * Python bindings for libluksde (pyluksde)
 *
 * Copyright (C) 2013-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYLUKSDE_H )
#define _PYLUKSDE_H

#include <common.h>
#include <types.h>

#include "pyluksde_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

PyObject *pyluksde_get_version(
           PyObject *self,
           PyObject *arguments );

PyObject *pyluksde_check_volume_signature(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_check_volume_signature_file_object(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_pyluksde(
                void );
#else
PyMODINIT_FUNC initpyluksde(
                void );
#endif

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _PYLUKSDE_H ) */

