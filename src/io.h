#ifndef __GB_DASM_IO__H__
#define __GB_DASM_IO__H__

static const char* io_register_names[0x80] = {
  /* 0x00 */
  "P1/JOYP",
  "SB",
  "SC",
  "UNDEF",
  "DIV",
  "TIMA",
  "TMA",
  "TAC",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "IF",
  /* 0x10 */
  "NR10",
  "NR11",
  "NR12",
  "NR13",
  "NR14",
  "UNDEF",
  "NR21",
  "NR22",
  "NR23",
  "NR24",
  "NR30",
  "NR31",
  "NR32",
  "NR33",
  "NR34",
  "UNDEF",
  /* 0x20 */
  "NR41",
  "NR42",
  "NR43",
  "NR44",
  "NR50",
  "NR51",
  "NR52",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  /* 0x30 */
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  "Wave Pattern",
  /* 0x40 */
  "LCDC",
  "STAT",
  "SCY",
  "SCX",
  "LY",
  "LYC",
  "DMA",
  "BGP",
  "OBP0",
  "OBP1",
  "WY",
  "WX",
  "UNDEF",
  "KEY1",
  "UNDEF",
  "VBK",
  /* 0x50 */
  "UNDEF",
  "HDMA1",
  "HDMA2",
  "HDMA3",
  "HDMA4",
  "HDMA5",
  "RP",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  /* 0x60 */
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "OCPS/OBPI",
  "OCPD/OBPD",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  /* 0x70 */
  "SVBK",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
  "UNDEF",
};

const char* io_name(uint8_t addr) {
    if (addr == 0xff) {
        return "IE";
    }
    if (addr >= 0x80) {
        return "HIMEM";
    }
    return io_register_names[addr];
}

#endif
