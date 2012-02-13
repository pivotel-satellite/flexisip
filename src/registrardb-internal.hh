/*
	Flexisip, a flexible SIP proxy server with media capabilities.
    Copyright (C) 2012  Belledonne Communications SARL.
    Author: Guillaume Beraudo

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef registrardb_internal_hh
#define registrardb_internal_hh

#include "registrardb.hh"
#include <sofia-sip/sip.h>


class RegistrarDbInternal : public RegistrarDb {
	RegistrarDbInternal();
	friend class RegistrarDb;
	public:
		virtual void bind(const sip_t *sip, const char* route, int default_delta, RegistrarDbListener *listener);
		virtual void clear(const sip_t *sip, RegistrarDbListener *listener);
		virtual void fetch(const url_t *url, RegistrarDbListener *listener);
};


#endif
