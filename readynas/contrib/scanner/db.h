//=========================================================================
// FILENAME	: db.h
// DESCRIPTION	: Header for Database
//=========================================================================
// Copyright (c) 2008- NETGEAR, Inc. All Rights Reserved.
//=========================================================================

/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


int insertdb(MYSQL*, struct song_metadata*);
int db_set_lastrescantime(MYSQL*);
int db_get_lastrescantime(MYSQL*, time_t*);
int db_set_scanning(MYSQL*, int);
int db_get_scanning(MYSQL*, int*);
int db_wipe(MYSQL*);
int db_merge_artists_albums(MYSQL*);
int db_find_artworks(MYSQL*);
