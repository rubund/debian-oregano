/*
 * load-common.h
 *
 *
 * Author:
 *  Richard Hult <rhult@hem.passagen.se>
 *  Ricardo Markiewicz <rmarkie@fi.uba.ar>
 *  Andres de Barbara <adebarbara@fi.uba.ar>
 *  Marc Lorber <lorber.marc@wanadoo.fr>
 *
 * Web page: https://ahoi.io/project/oregano
 *
 * Copyright (C) 1999-2001  Richard Hult
 * Copyright (C) 2003,2004  Ricardo Markiewicz
 * Copyright (C) 2009-2012  Marc Lorber
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __LOAD_COMMON_H
#define __LOAD_COMMON_H

#include <glib.h>

#include "coords.h"

// Note: this must be synced with Pin in part.h for now.
typedef struct
{
	Coords pos;
} Connection;

typedef struct
{
	gchar *name;
	gchar *value;
} Property;

typedef struct
{
	gchar *name;
	gchar *author;
	gchar *version;

	GHashTable *part_hash;
	GHashTable *symbol_hash;
} Library;

typedef struct
{
	gchar *name;

	gchar *description;

	Library *library;

	gchar *symbol_name;
	int symbol_rotation;

	gchar *refdes;
	gchar *template;
	gchar *model;
	GSList *labels;
	GSList *properties;
} LibraryPart;

#endif
