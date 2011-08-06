/* hello.c
 *
 * Hello world module
 */

#include <linux/init.h>
#include <linux/module.h> 

MODULE_AUTHOR("Tim Martin, based on the book Linux Device Drivers");
MODULE_DESCRIPTION("Just hello world");
MODULE_LICENSE("GPL");

static int hello_init(void)
{
  printk(KERN_ALERT "Hello, world!");
  return 0;
}

static void hello_exit(void)
{
  printk(KERN_ALERT "Goodbye, cruel world!");
}

module_init(hello_init);
module_exit(hello_exit);

