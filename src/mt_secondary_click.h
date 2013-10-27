/*
 * Copyright 2013, Gerd Kohlberger <gerdko gmail com>
 *
 * This file is part of Mousetweaks.
 *
 * Mousetweaks is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mousetweaks is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MT_SECONDARY_CLICK_H__
#define __MT_SECONDARY_CLICK_H__

#include "mt_click.h"

G_BEGIN_DECLS

#define MT_TYPE_SECONDARY_CLICK  (mt_secondary_click_get_type ())
#define MT_SECONDARY_CLICK(o)    (G_TYPE_CHECK_INSTANCE_CAST ((o), MT_TYPE_SECONDARY_CLICK, MtSecondaryClick))
#define MT_IS_SECONDARY_CLICK(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MT_TYPE_SECONDARY_CLICK))

typedef MtClickClass             MtSecondaryClickClass;
typedef struct _MtSecondaryClick MtSecondaryClick;

GType               mt_secondary_click_get_type     (void) G_GNUC_CONST;
MtSecondaryClick *  mt_secondary_click_new          (void);

G_END_DECLS

#endif /* __MT_SECONDARY_CLICK_H__ */
