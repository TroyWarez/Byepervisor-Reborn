#ifndef OFFSETS_11_00_H
#define OFFSETS_11_00_H

static const uint64_t g_sym_map_1100[] = {
  0x3B351B4,  // KERNEL_SYM_DMPML4I         (pmap_store + 0x29C, pattern verified across all FW)
  0x3B351B8,  // KERNEL_SYM_DMPDPI          (pmap_store + 0x2A0, always DMPML4I + 4)
  0x3B33D6C,  // KERNEL_SYM_PML4PML4I       (pmap_store - 0x11AC, pattern verified across all FW)
  0x0,        // KERNEL_SYM_SYS_GETUID      (only used in KHOOK_TEST debug path)
  0x5358E0,   // KERNEL_SYM_PRINTF          (from ps5-linux-loader 11.00)
  0x0,        // KERNEL_SYM_ACPI_SLEEP_MACHDEP_HOOK (not used by Byepervisor main flow)
  0xC87E20,   // KERNEL_SYM_HV_MP_STARTUP_CALL     (from ps5-linux-loader 11.00)
  0x311518,   // KERNEL_SYM_MP_STARTUP_INIT_VECTOR  (from ps5-linux-loader 11.00)
  0x3B34F18,  // KERNEL_SYM_PMAP_STORE      (kstuff-lite kernel_pmap_store 0x2E04F18  + T 0xD30000)
  0x2AE3000,  // KERNEL_SYM_DATA_CAVE       (from ps5-linux-loader 11.00)
  0x3BA0300,  // KERNEL_SYM_IDT_ARRAY       (from ps5-linux-loader 11.00, verified kstuff idt + T)
  0x3BA2FE0,  // KERNEL_SYM_COMMON_TSS      (from ps5-linux-loader 11.00, verified kstuff tss + T)
  0x83028,    // HV_SYM_HEAP_BASE           (constant across all FW)
  0x82A60,    // HV_SYM_PCPUS               (constant across all FW)
};

static const uint64_t g_gadget_map_1100[] = {
  0x2A131E,  // KERNEL_GADGET_PIVOT_ADD_RSP28_RET  (from ps5-linux-loader 11.00)
  0x26B627,  // KERNEL_GADGET_IRETQ                (from ps5-linux-loader 11.00)
  0x267A90,  // KERNEL_GADGET_POP_RAX               (from ps5-linux-loader 11.00)
  0x3394AF,  // KERNEL_GADGET_POP_RCX               (from ps5-linux-loader 11.00)
  0x24AE38,  // KERNEL_GADGET_POP_RDI               (from ps5-linux-loader 11.00)
  0x20B970,  // KERNEL_GADGET_POP_RSI               (from ps5-linux-loader 11.00)
  0x31B6C2,  // KERNEL_GADGET_POP_RDX               (from ps5-linux-loader 11.00)
  0,         // KERNEL_GADGET_POP_R8         (unused by the isolated 11.00 resume path)
  0x2AF4D0,  // KERNEL_GADGET_POP_RSP               (from ps5-linux-loader 11.00)
  0,         // KERNEL_GADGET_STORE_RCX_R8   (unused by the isolated 11.00 resume path)
  0x3CC88F,  // KERNEL_GADGET_STORE_RDI8_RCX        (from ps5-linux-loader 11.00)
  0,         // KERNEL_GADGET_OR_RCX_EAX     (unused by the isolated 11.00 resume path)
  0xA7B746,  // KERNEL_GADGET_SET_DR7               (from ps5-linux-loader 11.00)
  0,         // KERNEL_GADGET_ST_RCX_RDX     (unused by the isolated 11.00 resume path)
  0x369F6F,  // KERNEL_GADGET_ST_RCX_RAX            (from ps5-linux-loader 11.00)
  0,         // KERNEL_GADGET_MOV_RAX_RSI    (unused by the isolated 11.00 resume path)
  0x2B9F11,  // KERNEL_GADGET_MOV_RAX_RDI             (from ps5-linux-loader 11.00)
  0x30B847,  // KERNEL_GADGET_REP_MOVSB               (from ps5-linux-loader 11.00)
  0x4A5D46,  // KERNEL_GADGET_CLD                     (from ps5-linux-loader 11.00)
  0x267A91,  // KERNEL_GADGET_RET_TRAMP                 (from ps5-linux-loader 11.00)
  0x2A5BB8,  // KERNEL_GADGET_DBREG_RESUME              (from ps5-linux-loader 11.00)
};

#endif // OFFSETS_11_00_H
