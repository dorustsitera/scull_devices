// SPDX-License-Identifier: GPL-2.0
/*
 * lkm_template - Loadable Kernel Module template
 *
 * A minimal LKM skeleton: init/exit hooks, pr_fmt, module metadata.
 * Intended as a starting point for out-of-tree kernel module development.
 *
 * Author:  D'Orus Tsitera
 * Date:    2026-06
 * Version: 0.1
 *
 * Tested on: Linux 6.1.175 x86_64
 */

#define pr_fmt(fmt) "%s:%s(): " fmt, KBUILD_MODNAME, __func__

#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Kaiwan N Billimoria");
MODULE_DESCRIPTION("a simple LKM template; do refer to the (better) Makefile as well");
MODULE_LICENSE("Dual MIT/GPL");	// or whatever
MODULE_VERSION("0.2");

static int __init lkm_template_init(void)
{
	pr_info("inserted\n");
	return 0;		/* success */
}

static void __exit lkm_template_exit(void)
{
	pr_info("removed\n");
}

module_init(lkm_template_init);
module_exit(lkm_template_exit);
