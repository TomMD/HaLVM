#include <stdint.h>

long HYPERCALL_set_trap_table(const int traps[])
{
	return 0;
}
long HYPERCALL_set_trap_table(const int traps[]) __attribute__((weak));

long HYPERCALL_mmu_update(const int reqs[],
                          unsigned count, unsigned *done_out,
                          unsigned foreigndom)
{
	return 0;
}
long HYPERCALL_mmu_update(const int reqs[],
                          unsigned count, unsigned *done_out,
                          unsigned foreigndom) __attribute__((weak));

long HYPERCALL_set_gdt(const int frames[], unsigned int entries)
{
	return 0;
}
long HYPERCALL_set_gdt(const int frames[], unsigned int entries) __attribute__((weak));

long HYPERCALL_stack_switch(unsigned long ss, unsigned long esp)
{
	return 0;
}
long HYPERCALL_stack_switch(unsigned long ss, unsigned long esp) __attribute__((weak));

long HYPERCALL_set_callbacks(void *event_addr, void *fail_addr)
{
	return 0;
}
long HYPERCALL_set_callbacks(void *event_addr, void *fail_addr) __attribute__((weak));

long HYPERCALL_fpu_taskswitch(int set)
{
	return 0;
}
long HYPERCALL_fpu_taskswitch(int set) __attribute__((weak));

long HYPERCALL_platform_op(const void* p)
{
	return 0;
}
long HYPERCALL_platform_op(const void* p) __attribute__((weak));

long HYPERCALL_set_debugreg(int regno, unsigned long val)
{
	return 0;
}
long HYPERCALL_set_debugreg(int regno, unsigned long val) __attribute__((weak));

unsigned long HYPERCALL_get_debugreg(int regno)
{
	return 0;
}
unsigned long HYPERCALL_get_debugreg(int regno) __attribute__((weak));

long HYPERCALL_update_descriptor(uint64_t ma, uint64_t desc)
{
	return 0;
}
long HYPERCALL_update_descriptor(uint64_t ma, uint64_t desc) __attribute__((weak));

long HYPERCALL_memory_op(unsigned int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_memory_op(unsigned int cmd, void *arg) __attribute__((weak));

long HYPERCALL_multicall(void *entries, int nr_calls)
{
	return 0;
}
long HYPERCALL_multicall(void *entries, int nr_calls) __attribute__((weak));

long HYPERCALL_update_va_mapping(unsigned long va, uint64_t val,
                                 unsigned long fl)
{
	return 0;
}
long HYPERCALL_update_va_mapping(unsigned long va, uint64_t val,
                                 unsigned long fl) __attribute__((weak));

long HYPERCALL_set_timer_op(uint64_t timeout)
{
	return 0;
}
long HYPERCALL_set_timer_op(uint64_t timeout) __attribute__((weak));

long HYPERCALL_xen_version(int cmd, void *buffer)
{
	return 0;
}
long HYPERCALL_xen_version(int cmd, void *buffer) __attribute__((weak));

long HYPERCALL_console_io(int cmd, int count, char *buffer)
{
	return 0;
}
long HYPERCALL_console_io(int cmd, int count, char *buffer) __attribute__((weak));

long HYPERCALL_grant_table_op(int cmd, void *args, unsigned int count)
{
	return 0;
}
long HYPERCALL_grant_table_op(int cmd, void *args, unsigned int count) __attribute__((weak));

long HYPERCALL_vm_assist(unsigned int cmd, unsigned int type)
{
	return 0;
}
long HYPERCALL_vm_assist(unsigned int cmd, unsigned int type) __attribute__((weak));

long HYPERCALL_update_va_mapping_otherdomain(unsigned long va, uint64_t val,
                                             unsigned long fl, int domid)
{
	return 0;
}
long HYPERCALL_update_va_mapping_otherdomain(unsigned long va, uint64_t val,
                                             unsigned long fl, int domid) __attribute__((weak));

long HYPERCALL_iret(void)
{
	return 0;
}
long HYPERCALL_iret(void) __attribute__((weak));

long HYPERCALL_vcpu_op(int cmd, int vcpuid, void *extra)
{
	return 0;
}
long HYPERCALL_vcpu_op(int cmd, int vcpuid, void *extra) __attribute__((weak));

#ifdef __x86_64__
long HYPERCALL_set_segment_base(unsigned int which, unsigned long base)
{
	return 0;
}
long HYPERCALL_set_segment_base(unsigned int which, unsigned long base) __attribute__((weak));

#endif
long HYPERCALL_mmuext_op(void *op, unsigned int count,
                         unsigned int *pdone, unsigned int foreigndom)
{
	return 0;
}
long HYPERCALL_mmuext_op(void *op, unsigned int count,
                         unsigned int *pdone, unsigned int foreigndom) __attribute__((weak));

#ifdef XEN_FLASK_INTERFACE_VERSION
long HYPERCALL_xsm_op(void *op)
{
	return 0;
}
long HYPERCALL_xsm_op(void *op) __attribute__((weak));

#else
long HYPERCALL_xsm_op(void *op)
{
	return 0;
}
long HYPERCALL_xsm_op(void *op) __attribute__((weak));

#endif
long HYPERCALL_nmi_op(int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_nmi_op(int cmd, void *arg) __attribute__((weak));

long HYPERCALL_sched_op(int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_sched_op(int cmd, void *arg) __attribute__((weak));

long HYPERCALL_callback_op(int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_callback_op(int cmd, void *arg) __attribute__((weak));

long HYPERCALL_xenoprof_op(int op, void *arg)
{
	return 0;
}
long HYPERCALL_xenoprof_op(int op, void *arg) __attribute__((weak));

long HYPERCALL_event_channel_op(int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_event_channel_op(int cmd, void *arg) __attribute__((weak));

long HYPERCALL_physdev_op(int cmd, void *arg)
{
	return 0;
}
long HYPERCALL_physdev_op(int cmd, void *arg) __attribute__((weak));

long HYPERCALL_hvm_op(int op, void *arg)
{
	return 0;
}
long HYPERCALL_hvm_op(int op, void *arg) __attribute__((weak));

long HYPERCALL_sysctl(void *op)
{
	return 0;
}
long HYPERCALL_sysctl(void *op) __attribute__((weak));

long HYPERCALL_domctl(void *op)
{
	return 0;
}
long HYPERCALL_domctl(void *op) __attribute__((weak));

long HYPERCALL_kexec_op(unsigned long op, int arg1, void *arg)
{
	return 0;
}
long HYPERCALL_kexec_op(unsigned long op, int arg1, void *arg) __attribute__((weak));

long HYPERCALL_tmem_op(void *ops)
{
	return 0;
}
long HYPERCALL_tmem_op(void *ops) __attribute__((weak));
