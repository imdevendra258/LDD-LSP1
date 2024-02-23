#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/sched.h>

MODULE_AUTHOR("Kishore Kumar");
MODULE_DESCRIPTION("Hello world template module");
MODULE_LICENSE("GPLV2");

static int hello_init(void)
{
	printk("PID:%d Process Name:%s\n",current->pid,current->comm);
	printk(KERN_DEBUG "%s:%s:%d\n",__FILE__,__func__,__LINE__);
	return 0;
}

static void hello_exit(void)
{
	printk("PID:%d Process Name:%s\n",current->pid,current->comm);
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
}

module_init(hello_init);
module_exit(hello_exit);
