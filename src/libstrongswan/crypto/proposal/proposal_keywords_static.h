/*
 * Copyright (C) 2009 Andreas Steffen
 *
 * Copyright (C) secunet Security Networks AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef PROPOSAL_KEYWORDS_STATIC_H_
#define PROPOSAL_KEYWORDS_STATIC_H_

#include "proposal_keywords.h"

const proposal_token_t* proposal_get_token_static(register const char *str,
												  register size_t len);

#endif /* PROPOSAL_KEYWORDS_STATIC_H_ */

