/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Junyu wu, shibuyanorailgun@foxmail, 2015.
 */

#ifndef __LINUX_ACT_PARSE_H
#define __LINUX_ACT_PARSE_H

#include "act.h"
#include "policy.h"

int act_tokenize(
		const char rule[], const size_t sz, char **pbuf);

int act_parse_int(
		const char s[], const size_t sz, int *pt);

int act_parse_separator(
		const char rule[], const size_t sz);

int act_parse_single_cond(
		act_cond_t *cond, const char rule[], const size_t sz);

int act_parse_multi_conds(
		act_cond_t *cond, const char rule[], const size_t sz);

int act_parse_policy_action(
		act_policy_t *pl, const char rule[], const size_t sz);

int act_parse_policy_sign(
		act_policy_t *pl, const char rule[], const size_t sz);

int act_parse_policy(
		act_policy_t *pl, const char rule[], const size_t sz);

#endif /* end of include guard: __LINUX_ACT_PARSE_H */
