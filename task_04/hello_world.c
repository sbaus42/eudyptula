#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
	pr_debug("<1>hello world\n");
	return 0;
}

void cleanup_module(void)
{
	pr_debug("bye world\n");
}

