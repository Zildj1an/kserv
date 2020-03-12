#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

/* MODULE INIT */
static int __init kserv_init(void)
{
	int ret = 0;
	printk(KERN_INFO "Starting kserv...\n");
	return ret;
}

/* MODULE EXIT */
static void __exit kserv_exit(void)
{
	printk(KERN_INFO "kserv unloaded\n");
	return;
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chris Blackburn");
MODULE_DESCRIPTION("A kernel level server");

module_init(kserv_init);
module_exit(kserv_exit);
