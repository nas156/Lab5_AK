#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

MODULE_AUTHOR("Nazar Hevelencko <gevelencko8@gmail.com>");
MODULE_DESCRIPTION("Lab-5 advanced task implementation");
MODULE_LICENSE("Dual BSD/GPL");

extern void print_hello(uint number);

