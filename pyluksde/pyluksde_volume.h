/*
 * Python object definition of the libluksde volume
 *
 * Copyright (C) 2013-2015, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _PYLUKSDE_VOLUME_H )
#define _PYLUKSDE_VOLUME_H

#include <common.h>
#include <types.h>

#include "pyluksde_libbfio.h"
#include "pyluksde_libluksde.h"
#include "pyluksde_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyluksde_volume pyluksde_volume_t;

struct pyluksde_volume
{
	/* Python object initialization
	 */
	PyObject_HEAD

	/* The libluksde volume
	 */
	libluksde_volume_t *volume;

	/* The libbfio file IO handle
	 */
	libbfio_handle_t *file_io_handle;
};

extern PyMethodDef pyluksde_volume_object_methods[];
extern PyTypeObject pyluksde_volume_type_object;

PyObject *pyluksde_volume_new(
           void );

PyObject *pyluksde_volume_new_open(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_new_open_file_object(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

int pyluksde_volume_init(
     pyluksde_volume_t *pyluksde_volume );

void pyluksde_volume_free(
      pyluksde_volume_t *pyluksde_volume );

PyObject *pyluksde_volume_signal_abort(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments );

PyObject *pyluksde_volume_open(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_open_file_object(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_close(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments );

PyObject *pyluksde_volume_read_buffer(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_read_buffer_at_offset(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_seek_offset(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_get_offset(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments );

PyObject *pyluksde_volume_get_size(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments );

PyObject *pyluksde_volume_set_password(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyluksde_volume_set_recovery_password(
           pyluksde_volume_t *pyluksde_volume,
           PyObject *arguments,
           PyObject *keywords );

#if defined( __cplusplus )
}
#endif

#endif

