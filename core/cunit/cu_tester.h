/**********************************************************************
 * $Id$
 *
 * PostGIS - Spatial Types for PostgreSQL
 * http://postgis.refractions.net
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU General Public Licence. See the COPYING file.
 *
 **********************************************************************/

#include "pc_c.h"
#include "pc_api.h"

#define PG_TEST(test_func) { #test_func, test_func }
#define MAX_CUNIT_MSG_LENGTH 512

/* Contains the most recent error message generated by rterror. */
char cu_error_msg[MAX_CUNIT_MSG_LENGTH+1];

/* Resets cu_error_msg back to blank. */
//void cu_error_msg_reset(void);

