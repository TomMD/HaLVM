#include <stdint.h>
#include <stdlib.h>

void set_haskell_handler(uint32_t t, void *p)
{
	return;
}
void set_haskell_handler(uint32_t t, void *p) __attribute__((weak));

void *clear_haskell_handler(uint32_t t)
{
	return NULL;
}
void *clear_haskell_handler(uint32_t t) __attribute__((weak));

int32_t channel_alloc(uint32_t a, uint32_t b)
{
	return 0;
}
int32_t channel_alloc(uint32_t a, uint32_t b) __attribute__((weak));

int32_t bind_virq(uint32_t a, uint32_t b)
{
	return 0;
}
int32_t bind_virq(uint32_t a, uint32_t b) __attribute__((weak));

int32_t channel_bind(uint32_t a, uint32_t b)
{
	return 0;
}
int32_t channel_bind(uint32_t a, uint32_t b) __attribute__((weak));

int32_t channel_close(uint32_t a)
{
	return 0;
}
int32_t channel_close(uint32_t a) __attribute__((weak));

int32_t channel_send(uint32_t a)
{
	return 0;
}
int32_t channel_send(uint32_t a) __attribute__((weak));

void mask_channel(uint32_t a)
{
	return;
}
void mask_channel(uint32_t a) __attribute__((weak));

void unmask_channel(uint32_t a)
{
	return;
}
void unmask_channel(uint32_t a) __attribute__((weak));

int32_t bind_pirq(uint32_t a, int b)
{
	return 0;
}
int32_t bind_pirq(uint32_t a, int b) __attribute__((weak));

// vmm.h
uint64_t get_pt_entry(void *a)
{
	return 0;
}
uint64_t get_pt_entry(void *a) __attribute__((weak));

void set_pt_entry(void *a, uint64_t b)
{
	return;
}
void set_pt_entry(void *a, uint64_t b) __attribute__((weak));

void *machine_to_virtual(uint32_t a)
{
	return NULL;
}
void *machine_to_virtual(uint32_t a) __attribute__((weak));

// memory.h
int pin_frame(int a, unsigned int b, uint32_t c)
{
	return 0;
}
int pin_frame(int a, unsigned int b, uint32_t c) __attribute__((weak));

void *map_frame(unsigned int *a, int b)
{
	return 0;
}
void *map_frame(unsigned int *a, int b) __attribute__((weak));

void system_wmb()
{
	return;
}
void system_wmb() __attribute__((weak));

void system_rmb()
{
	return;
}
void system_rmb() __attribute__((weak));

void system_mb()
{
	return;
}
void system_mb() __attribute__((weak));

// runtime_reqs.h
void *runtime_alloc(void *a, unsigned int b, int c, int d)
{
	return NULL;
}
void *runtime_alloc(void *a, unsigned int b, int c, int d) __attribute__((weak));

void runtime_free(void *a, unsigned int b)
{
	return;
}
void runtime_free(void *a, unsigned int b) __attribute__((weak));

// grants.h
int alloc_grant(uint16_t a, void *b, uint16_t c, int d, uint32_t *e)
{
	return 0;
}
int alloc_grant(uint16_t a, void *b, uint16_t c, int d, uint32_t *e) __attribute__((weak));

int end_grant(uint32_t a)
{
	return 0;
}
int end_grant(uint32_t a) __attribute__((weak));

int map_grants(uint32_t a, int b, uint32_t *c, int d, void **e, uint32_t *f, uint64_t *g)
{
	return 0;
}
int map_grants(uint32_t a, int b, uint32_t *c, int d, void **e, uint32_t *f, uint64_t *g) __attribute__((weak));

int unmap_grants(uint32_t a, int b)
{
	return 0;
}
int unmap_grants(uint32_t a, int b) __attribute__((weak));

int prepare_transfer(uint16_t a)
{
	return 0;
}
int prepare_transfer(uint16_t a) __attribute__((weak));

int transfer_frame(uint16_t a, uint32_t b, void *c)
{
	return 0;
}
int transfer_frame(uint16_t a, uint32_t b, void *c) __attribute__((weak));

int complete_transfer(uint32_t a, int b)
{
	return 0;
}
int complete_transfer(uint32_t a, int b) __attribute__((weak));

int copy_frame(unsigned int a, int b, uint16_t c, uint16_t d, unsigned int e, int f, uint16_t g, uint16_t h, uint16_t i)
{
	return 0;
}
int copy_frame(unsigned int a, int b, uint16_t c, uint16_t d, unsigned int e, int f, uint16_t g, uint16_t h, uint16_t i) __attribute__((weak));
