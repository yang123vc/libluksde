/*
 * Common output functions for the luksdetools
 *
 * Copyright (C) 2013-2014, Joachim Metz <joachim.metz@gmail.com>
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

#include <common.h>
#include <file_stream.h>
#include <memory.h>
#include <types.h>

#include "luksdeoutput.h"
#include "luksdetools_libluksde.h"
#include "luksdetools_libbfio.h"
#include "luksdetools_libcerror.h"
#include "luksdetools_libcnotify.h"
#include "luksdetools_libclocale.h"
#include "luksdetools_libcstring.h"
#include "luksdetools_libcsystem.h"
#include "luksdetools_libuna.h"

/* Prints the copyright information
 */
void luksdeoutput_copyright_fprint(
      FILE *stream )
{
	if( stream == NULL )
	{
		return;
	}
	fprintf(
	 stream,
	 "Copyright (C) 2013-2014, Joachim Metz <joachim.metz@gmail.com>\n"
	 "This is free software; see the source for copying conditions. There is NO\n"
	 "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n" );
}

/* Prints the version information
 */
void luksdeoutput_version_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s\n\n",
         program,
	 LIBLUKSDE_VERSION_STRING );
}

/* Prints the detailed version information
 */
void luksdeoutput_version_detailed_fprint(
      FILE *stream,
      const char *program )
{
	if( stream == NULL )
	{
		return;
	}
	if( program == NULL )
	{
		return;
	}
        fprintf(
	 stream,
	 "%s %s (libluksde %s",
         program,
	 LIBLUKSDE_VERSION_STRING,
	 LIBLUKSDE_VERSION_STRING );

	fprintf(
	 stream,
	 ", libuna %s",
	 LIBUNA_VERSION_STRING );

	fprintf(
	 stream,
	 ", libbfio %s",
	 LIBBFIO_VERSION_STRING );

        fprintf(
	 stream,
	 ")\n\n" );
}

