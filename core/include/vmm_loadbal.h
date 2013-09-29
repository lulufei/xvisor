/**
 * Copyright (c) 2013 Jean-Christophe Dubois
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * @file vmm_loadbal.h
 * @author Jean-Christophe Dubois (jcd@tribudubois.net)
 * @brief header file for hypervisor load balancer
 */

#ifndef __VMM_LOADBAL_H__
#define __VMM_LOADBAL_H__

#include <vmm_types.h>

/** Initialize load balancer on each host CPU */
int vmm_loadbal_init(void);

#endif /* __VMM_LOADBAL_H__ */