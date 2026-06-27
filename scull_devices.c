// SPDX-License-Identifier: GPL-2.0
/*
 * scull_devices - Loadable Kernel Module
 *
 * LKM: init/exit hooks, pr_fmt, module metadata.
 * Intended as a starting point for out-of-tree kernel module development.
 *
 * Author:  D'Orus Tsitera
 * Date:    2026-06=27
 * Version: 0.1
 *
 * Tested on: Linux 6.1.175 x86_64
 */

#define pr_fmt(fmt) "%s:%s(): " fmt, KBUILD_MODNAME, __func__

#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("D'Orus Tsitera");
MODULE_DESCRIPTION("staring point for scull_devices lkm");
MODULE_LICENSE("GPL");	// or whatever
MODULE_VERSION("0.1");

static int __init scull_init(void)
{
	pr_info("inserted\n");
	return 0;		/* success */
}

static void __exit scull_exit(void)
{
	pr_info("removed\n");
}

module_init(scull_init);
module_exit(scull_exit);
