#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
  printk(KERN_DEBUG "hello world \n");
  return 0;
}

 void cleanup_module(void) {
  printk(KERN_DEBUG "bye world \n");
}

MODULE_LICENSE("GPL");
