typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef struct SPI2 SPI2, *PSPI2;

struct SPI2 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SR; // status register
    uint DR; // data register
    uint CRCPR; // CRC polynomial register
    uint RXCRCR; // RX CRC register
    uint TXCRCR; // TX CRC register
    uint I2SCFGR; // I2S configuration register
    uint I2SPR; // I2S prescaler register
};

typedef struct SPI3 SPI3, *PSPI3;

struct SPI3 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SR; // status register
    uint DR; // data register
    uint CRCPR; // CRC polynomial register
    uint RXCRCR; // RX CRC register
    uint TXCRCR; // TX CRC register
    uint I2SCFGR; // I2S configuration register
    uint I2SPR; // I2S prescaler register
};

typedef struct FSMC FSMC, *PFSMC;

struct FSMC {
    uint BCR1; // SRAM/NOR-Flash chip-select control register
          1
    uint BTR1; // SRAM/NOR-Flash chip-select timing register
          1
    uint BCR2; // SRAM/NOR-Flash chip-select control register
          2
    uint BTR2; // SRAM/NOR-Flash chip-select timing register
          2
    uint BCR3; // SRAM/NOR-Flash chip-select control register
          3
    uint BTR3; // SRAM/NOR-Flash chip-select timing register
          3
    uint BCR4; // SRAM/NOR-Flash chip-select control register
          4
    uint BTR4; // SRAM/NOR-Flash chip-select timing register
          4
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    undefined field40_0x40;
    undefined field41_0x41;
    undefined field42_0x42;
    undefined field43_0x43;
    undefined field44_0x44;
    undefined field45_0x45;
    undefined field46_0x46;
    undefined field47_0x47;
    undefined field48_0x48;
    undefined field49_0x49;
    undefined field50_0x4a;
    undefined field51_0x4b;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined field56_0x50;
    undefined field57_0x51;
    undefined field58_0x52;
    undefined field59_0x53;
    undefined field60_0x54;
    undefined field61_0x55;
    undefined field62_0x56;
    undefined field63_0x57;
    undefined field64_0x58;
    undefined field65_0x59;
    undefined field66_0x5a;
    undefined field67_0x5b;
    undefined field68_0x5c;
    undefined field69_0x5d;
    undefined field70_0x5e;
    undefined field71_0x5f;
    uint PCR2; // PC Card/NAND Flash control register
          2
    uint SR2; // FIFO status and interrupt register
          2
    uint PMEM2; // Common memory space timing register
          2
    uint PATT2; // Attribute memory space timing register
          2
    undefined field76_0x70;
    undefined field77_0x71;
    undefined field78_0x72;
    undefined field79_0x73;
    uint ECCR2; // ECC result register 2
    undefined field81_0x78;
    undefined field82_0x79;
    undefined field83_0x7a;
    undefined field84_0x7b;
    undefined field85_0x7c;
    undefined field86_0x7d;
    undefined field87_0x7e;
    undefined field88_0x7f;
    uint PCR3; // PC Card/NAND Flash control register
          3
    uint SR3; // FIFO status and interrupt register
          3
    uint PMEM3; // Common memory space timing register
          3
    uint PATT3; // Attribute memory space timing register
          3
    undefined field93_0x90;
    undefined field94_0x91;
    undefined field95_0x92;
    undefined field96_0x93;
    uint ECCR3; // ECC result register 3
    undefined field98_0x98;
    undefined field99_0x99;
    undefined field100_0x9a;
    undefined field101_0x9b;
    undefined field102_0x9c;
    undefined field103_0x9d;
    undefined field104_0x9e;
    undefined field105_0x9f;
    uint PCR4; // PC Card/NAND Flash control register
          4
    uint SR4; // FIFO status and interrupt register
          4
    uint PMEM4; // Common memory space timing register
          4
    uint PATT4; // Attribute memory space timing register
          4
    uint PIO4; // I/O space timing register 4
    undefined field111_0xb4;
    undefined field112_0xb5;
    undefined field113_0xb6;
    undefined field114_0xb7;
    undefined field115_0xb8;
    undefined field116_0xb9;
    undefined field117_0xba;
    undefined field118_0xbb;
    undefined field119_0xbc;
    undefined field120_0xbd;
    undefined field121_0xbe;
    undefined field122_0xbf;
    undefined field123_0xc0;
    undefined field124_0xc1;
    undefined field125_0xc2;
    undefined field126_0xc3;
    undefined field127_0xc4;
    undefined field128_0xc5;
    undefined field129_0xc6;
    undefined field130_0xc7;
    undefined field131_0xc8;
    undefined field132_0xc9;
    undefined field133_0xca;
    undefined field134_0xcb;
    undefined field135_0xcc;
    undefined field136_0xcd;
    undefined field137_0xce;
    undefined field138_0xcf;
    undefined field139_0xd0;
    undefined field140_0xd1;
    undefined field141_0xd2;
    undefined field142_0xd3;
    undefined field143_0xd4;
    undefined field144_0xd5;
    undefined field145_0xd6;
    undefined field146_0xd7;
    undefined field147_0xd8;
    undefined field148_0xd9;
    undefined field149_0xda;
    undefined field150_0xdb;
    undefined field151_0xdc;
    undefined field152_0xdd;
    undefined field153_0xde;
    undefined field154_0xdf;
    undefined field155_0xe0;
    undefined field156_0xe1;
    undefined field157_0xe2;
    undefined field158_0xe3;
    undefined field159_0xe4;
    undefined field160_0xe5;
    undefined field161_0xe6;
    undefined field162_0xe7;
    undefined field163_0xe8;
    undefined field164_0xe9;
    undefined field165_0xea;
    undefined field166_0xeb;
    undefined field167_0xec;
    undefined field168_0xed;
    undefined field169_0xee;
    undefined field170_0xef;
    undefined field171_0xf0;
    undefined field172_0xf1;
    undefined field173_0xf2;
    undefined field174_0xf3;
    undefined field175_0xf4;
    undefined field176_0xf5;
    undefined field177_0xf6;
    undefined field178_0xf7;
    undefined field179_0xf8;
    undefined field180_0xf9;
    undefined field181_0xfa;
    undefined field182_0xfb;
    undefined field183_0xfc;
    undefined field184_0xfd;
    undefined field185_0xfe;
    undefined field186_0xff;
    undefined field187_0x100;
    undefined field188_0x101;
    undefined field189_0x102;
    undefined field190_0x103;
    uint BWTR1; // SRAM/NOR-Flash write timing registers
          1
    undefined field192_0x108;
    undefined field193_0x109;
    undefined field194_0x10a;
    undefined field195_0x10b;
    uint BWTR2; // SRAM/NOR-Flash write timing registers
          2
    undefined field197_0x110;
    undefined field198_0x111;
    undefined field199_0x112;
    undefined field200_0x113;
    uint BWTR3; // SRAM/NOR-Flash write timing registers
          3
    undefined field202_0x118;
    undefined field203_0x119;
    undefined field204_0x11a;
    undefined field205_0x11b;
    uint BWTR4; // SRAM/NOR-Flash write timing registers
          4
};

typedef struct SPI1 SPI1, *PSPI1;

struct SPI1 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SR; // status register
    uint DR; // data register
    uint CRCPR; // CRC polynomial register
    uint RXCRCR; // RX CRC register
    uint TXCRCR; // TX CRC register
    uint I2SCFGR; // I2S configuration register
    uint I2SPR; // I2S prescaler register
};

typedef struct STK STK, *PSTK;

struct STK {
    uint CTRL; // SysTick control and status
          register
    uint LOAD_; // SysTick reload value register
    uint VAL; // SysTick current value register
    uint CALIB; // SysTick calibration value
          register
};

typedef struct SDIO SDIO, *PSDIO;

struct SDIO {
    uint POWER; // Bits 1:0 = PWRCTRL: Power supply control
          bits
    uint CLKCR; // SDI clock control register
          (SDIO_CLKCR)
    uint ARG; // Bits 31:0 = : Command argument
    uint CMD; // SDIO command register
          (SDIO_CMD)
    uint RESPCMD; // SDIO command register
    uint RESPI1; // Bits 31:0 = CARDSTATUS1
    uint RESP2; // Bits 31:0 = CARDSTATUS2
    uint RESP3; // Bits 31:0 = CARDSTATUS3
    uint RESP4; // Bits 31:0 = CARDSTATUS4
    uint DTIMER; // Bits 31:0 = DATATIME: Data timeout
          period
    uint DLEN; // Bits 24:0 = DATALENGTH: Data length
          value
    uint DCTRL; // SDIO data control register
          (SDIO_DCTRL)
    uint DCOUNT; // Bits 24:0 = DATACOUNT: Data count
          value
    uint STA; // SDIO status register
          (SDIO_STA)
    uint ICR; // SDIO interrupt clear register
          (SDIO_ICR)
    uint MASK; // SDIO mask register (SDIO_MASK)
    undefined field16_0x40;
    undefined field17_0x41;
    undefined field18_0x42;
    undefined field19_0x43;
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    uint FIFOCNT; // Bits 23:0 = FIFOCOUNT: Remaining number of
          words to be written to or read from the
          FIFO
    undefined field25_0x4c;
    undefined field26_0x4d;
    undefined field27_0x4e;
    undefined field28_0x4f;
    undefined field29_0x50;
    undefined field30_0x51;
    undefined field31_0x52;
    undefined field32_0x53;
    undefined field33_0x54;
    undefined field34_0x55;
    undefined field35_0x56;
    undefined field36_0x57;
    undefined field37_0x58;
    undefined field38_0x59;
    undefined field39_0x5a;
    undefined field40_0x5b;
    undefined field41_0x5c;
    undefined field42_0x5d;
    undefined field43_0x5e;
    undefined field44_0x5f;
    undefined field45_0x60;
    undefined field46_0x61;
    undefined field47_0x62;
    undefined field48_0x63;
    undefined field49_0x64;
    undefined field50_0x65;
    undefined field51_0x66;
    undefined field52_0x67;
    undefined field53_0x68;
    undefined field54_0x69;
    undefined field55_0x6a;
    undefined field56_0x6b;
    undefined field57_0x6c;
    undefined field58_0x6d;
    undefined field59_0x6e;
    undefined field60_0x6f;
    undefined field61_0x70;
    undefined field62_0x71;
    undefined field63_0x72;
    undefined field64_0x73;
    undefined field65_0x74;
    undefined field66_0x75;
    undefined field67_0x76;
    undefined field68_0x77;
    undefined field69_0x78;
    undefined field70_0x79;
    undefined field71_0x7a;
    undefined field72_0x7b;
    undefined field73_0x7c;
    undefined field74_0x7d;
    undefined field75_0x7e;
    undefined field76_0x7f;
    uint FIFO; // bits 31:0 = FIFOData: Receive and transmit
          FIFO data
};

typedef struct ETHERNET_MAC ETHERNET_MAC, *PETHERNET_MAC;

struct ETHERNET_MAC {
    uint MACCR; // Ethernet MAC configuration register
          (ETH_MACCR)
    uint MACFFR; // Ethernet MAC frame filter register
          (ETH_MACCFFR)
    uint MACHTHR; // Ethernet MAC hash table high
          register
    uint MACHTLR; // Ethernet MAC hash table low
          register
    uint MACMIIAR; // Ethernet MAC MII address register
          (ETH_MACMIIAR)
    uint MACMIIDR; // Ethernet MAC MII data register
          (ETH_MACMIIDR)
    uint MACFCR; // Ethernet MAC flow control register
          (ETH_MACFCR)
    uint MACVLANTR; // Ethernet MAC VLAN tag register
          (ETH_MACVLANTR)
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    uint MACRWUFFR; // Ethernet MAC remote wakeup frame filter
          register (ETH_MACRWUFFR)
    uint MACPMTCSR; // Ethernet MAC PMT control and status register
          (ETH_MACPMTCSR)
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    undefined field22_0x34;
    undefined field23_0x35;
    undefined field24_0x36;
    undefined field25_0x37;
    uint MACSR; // Ethernet MAC interrupt status register
          (ETH_MACSR)
    uint MACIMR; // Ethernet MAC interrupt mask register
          (ETH_MACIMR)
    uint MACA0HR; // Ethernet MAC address 0 high register
          (ETH_MACA0HR)
    uint MACA0LR; // Ethernet MAC address 0 low
          register
    uint MACA1HR; // Ethernet MAC address 1 high register
          (ETH_MACA1HR)
    uint MACA1LR; // Ethernet MAC address1 low
          register
    uint MACA2HR; // Ethernet MAC address 2 high register
          (ETH_MACA2HR)
    uint MACA2LR; // Ethernet MAC address 2 low
          register
    uint MACA3HR; // Ethernet MAC address 3 high register
          (ETH_MACA3HR)
    uint MACA3LR; // Ethernet MAC address 3 low
          register
};

typedef struct IWDG IWDG, *PIWDG;

struct IWDG {
    uint KR; // Key register (IWDG_KR)
    uint PR; // Prescaler register (IWDG_PR)
    uint RLR; // Reload register (IWDG_RLR)
    uint SR; // Status register (IWDG_SR)
};

typedef struct MPU MPU, *PMPU;

struct MPU {
    uint MPU_TYPER; // MPU type register
    uint MPU_CTRL; // MPU control register
    uint MPU_RNR; // MPU region number register
    uint MPU_RBAR; // MPU region base address
          register
    uint MPU_RASR; // MPU region attribute and size
          register
};

typedef struct AFIO AFIO, *PAFIO;

struct AFIO {
    uint EVCR; // Event Control Register
          (AFIO_EVCR)
    uint MAPR; // AF remap and debug I/O configuration
          register (AFIO_MAPR)
    uint EXTICR1; // External interrupt configuration register 1
          (AFIO_EXTICR1)
    uint EXTICR2; // External interrupt configuration register 2
          (AFIO_EXTICR2)
    uint EXTICR3; // External interrupt configuration register 3
          (AFIO_EXTICR3)
    uint EXTICR4; // External interrupt configuration register 4
          (AFIO_EXTICR4)
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    uint MAPR2; // AF remap and debug I/O configuration
          register
};

typedef struct BKP BKP, *PBKP;

struct BKP {
    uint DR1; // Backup data register (BKP_DR)
    uint DR2; // Backup data register (BKP_DR)
    uint DR3; // Backup data register (BKP_DR)
    uint DR4; // Backup data register (BKP_DR)
    uint DR5; // Backup data register (BKP_DR)
    uint DR6; // Backup data register (BKP_DR)
    uint DR7; // Backup data register (BKP_DR)
    uint DR8; // Backup data register (BKP_DR)
    uint DR9; // Backup data register (BKP_DR)
    uint DR10; // Backup data register (BKP_DR)
    uint RTCCR; // RTC clock calibration register
          (BKP_RTCCR)
    uint CR; // Backup control register
          (BKP_CR)
    uint CSR; // BKP_CSR control/status register
          (BKP_CSR)
    undefined field13_0x34;
    undefined field14_0x35;
    undefined field15_0x36;
    undefined field16_0x37;
    undefined field17_0x38;
    undefined field18_0x39;
    undefined field19_0x3a;
    undefined field20_0x3b;
    uint DR11; // Backup data register (BKP_DR)
    uint DR12; // Backup data register (BKP_DR)
    uint DR13; // Backup data register (BKP_DR)
    uint DR14; // Backup data register (BKP_DR)
    uint DR15; // Backup data register (BKP_DR)
    uint DR16; // Backup data register (BKP_DR)
    uint DR17; // Backup data register (BKP_DR)
    uint DR18; // Backup data register (BKP_DR)
    uint DR19; // Backup data register (BKP_DR)
    uint DR20; // Backup data register (BKP_DR)
    uint DR21; // Backup data register (BKP_DR)
    uint DR22; // Backup data register (BKP_DR)
    uint DR23; // Backup data register (BKP_DR)
    uint DR24; // Backup data register (BKP_DR)
    uint DR25; // Backup data register (BKP_DR)
    uint DR26; // Backup data register (BKP_DR)
    uint DR27; // Backup data register (BKP_DR)
    uint DR28; // Backup data register (BKP_DR)
    uint DR29; // Backup data register (BKP_DR)
    uint DR30; // Backup data register (BKP_DR)
    uint DR31; // Backup data register (BKP_DR)
    uint DR32; // Backup data register (BKP_DR)
    uint DR33; // Backup data register (BKP_DR)
    uint DR34; // Backup data register (BKP_DR)
    uint DR35; // Backup data register (BKP_DR)
    uint DR36; // Backup data register (BKP_DR)
    uint DR37; // Backup data register (BKP_DR)
    uint DR38; // Backup data register (BKP_DR)
    uint DR39; // Backup data register (BKP_DR)
    uint DR40; // Backup data register (BKP_DR)
    uint DR41; // Backup data register (BKP_DR)
    uint DR42; // Backup data register (BKP_DR)
};

typedef struct PWR PWR, *PPWR;

struct PWR {
    uint CR; // Power control register
          (PWR_CR)
    uint CSR; // Power control register
          (PWR_CR)
};

typedef struct FLASH FLASH, *PFLASH;

struct FLASH {
    uint ACR; // Flash access control register
    uint KEYR; // Flash key register
    uint OPTKEYR; // Flash option key register
    uint SR; // Status register
    uint CR; // Control register
    uint AR; // Flash address register
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    uint OBR; // Option byte register
    uint WRPR; // Write protection register
};

typedef struct RCC RCC, *PRCC;

struct RCC {
    uint CR; // Clock control register
    uint CFGR; // Clock configuration register
          (RCC_CFGR)
    uint CIR; // Clock interrupt register
          (RCC_CIR)
    uint APB2RSTR; // APB2 peripheral reset register
          (RCC_APB2RSTR)
    uint APB1RSTR; // APB1 peripheral reset register
          (RCC_APB1RSTR)
    uint AHBENR; // AHB Peripheral Clock enable register
          (RCC_AHBENR)
    uint APB2ENR; // APB2 peripheral clock enable register
          (RCC_APB2ENR)
    uint APB1ENR; // APB1 peripheral clock enable register
          (RCC_APB1ENR)
    uint BDCR; // Backup domain control register
          (RCC_BDCR)
    uint CSR; // Control/status register
          (RCC_CSR)
};

typedef struct I2C1 I2C1, *PI2C1;

struct I2C1 {
    uint CR1; // Control register 1
    uint CR2; // Control register 2
    uint OAR1; // Own address register 1
    uint OAR2; // Own address register 2
    uint DR; // Data register
    uint SR1; // Status register 1
    uint SR2; // Status register 2
    uint CCR; // Clock control register
    uint TRISE; // TRISE register
};

typedef struct I2C2 I2C2, *PI2C2;

struct I2C2 {
    uint CR1; // Control register 1
    uint CR2; // Control register 2
    uint OAR1; // Own address register 1
    uint OAR2; // Own address register 2
    uint DR; // Data register
    uint SR1; // Status register 1
    uint SR2; // Status register 2
    uint CCR; // Clock control register
    uint TRISE; // TRISE register
};

typedef struct RTC RTC, *PRTC;

struct RTC {
    uint CRH; // RTC Control Register High
    uint CRL; // RTC Control Register Low
    uint PRLH; // RTC Prescaler Load Register
          High
    uint PRLL; // RTC Prescaler Load Register
          Low
    uint DIVH; // RTC Prescaler Divider Register
          High
    uint DIVL; // RTC Prescaler Divider Register
          Low
    uint CNTH; // RTC Counter Register High
    uint CNTL; // RTC Counter Register Low
    uint ALRH; // RTC Alarm Register High
    uint ALRL; // RTC Alarm Register Low
};

typedef struct EXTI EXTI, *PEXTI;

struct EXTI {
    uint IMR; // Interrupt mask register
          (EXTI_IMR)
    uint EMR; // Event mask register (EXTI_EMR)
    uint RTSR; // Rising Trigger selection register
          (EXTI_RTSR)
    uint FTSR; // Falling Trigger selection register
          (EXTI_FTSR)
    uint SWIER; // Software interrupt event register
          (EXTI_SWIER)
    uint PR; // Pending register (EXTI_PR)
};

typedef struct WWDG WWDG, *PWWDG;

struct WWDG {
    uint CR; // Control register (WWDG_CR)
    uint CFR; // Configuration register
          (WWDG_CFR)
    uint SR; // Status register (WWDG_SR)
};

typedef struct USART1 USART1, *PUSART1;

struct USART1 {
    uint SR; // Status register
    uint DR; // Data register
    uint BRR; // Baud rate register
    uint CR1; // Control register 1
    uint CR2; // Control register 2
    uint CR3; // Control register 3
    uint GTPR; // Guard time and prescaler
          register
};

typedef struct USART2 USART2, *PUSART2;

struct USART2 {
    uint SR; // Status register
    uint DR; // Data register
    uint BRR; // Baud rate register
    uint CR1; // Control register 1
    uint CR2; // Control register 2
    uint CR3; // Control register 3
    uint GTPR; // Guard time and prescaler
          register
};

typedef struct USART3 USART3, *PUSART3;

struct USART3 {
    uint SR; // Status register
    uint DR; // Data register
    uint BRR; // Baud rate register
    uint CR1; // Control register 1
    uint CR2; // Control register 2
    uint CR3; // Control register 3
    uint GTPR; // Guard time and prescaler
          register
};

typedef struct OTG_FS_GLOBAL OTG_FS_GLOBAL, *POTG_FS_GLOBAL;

struct OTG_FS_GLOBAL {
    uint FS_GOTGCTL; // OTG_FS control and status register
          (OTG_FS_GOTGCTL)
    uint FS_GOTGINT; // OTG_FS interrupt register
          (OTG_FS_GOTGINT)
    uint FS_GAHBCFG; // OTG_FS AHB configuration register
          (OTG_FS_GAHBCFG)
    uint FS_GUSBCFG; // OTG_FS USB configuration register
          (OTG_FS_GUSBCFG)
    uint FS_GRSTCTL; // OTG_FS reset register
          (OTG_FS_GRSTCTL)
    uint FS_GINTSTS; // OTG_FS core interrupt register
          (OTG_FS_GINTSTS)
    uint FS_GINTMSK; // OTG_FS interrupt mask register
          (OTG_FS_GINTMSK)
    uint FS_GRXSTSR_Host; // OTG_FS Receive status debug read(Host
          mode)
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    uint FS_GRXFSIZ; // OTG_FS Receive FIFO size register
          (OTG_FS_GRXFSIZ)
    uint FS_GNPTXFSIZ_Host; // OTG_FS non-periodic transmit FIFO size
          register (Host mode)
    uint FS_GNPTXSTS; // OTG_FS non-periodic transmit FIFO/queue
          status register (OTG_FS_GNPTXSTS)
    undefined field15_0x30;
    undefined field16_0x31;
    undefined field17_0x32;
    undefined field18_0x33;
    undefined field19_0x34;
    undefined field20_0x35;
    undefined field21_0x36;
    undefined field22_0x37;
    uint FS_GCCFG; // OTG_FS general core configuration register
          (OTG_FS_GCCFG)
    uint FS_CID; // core ID register
    undefined field25_0x40;
    undefined field26_0x41;
    undefined field27_0x42;
    undefined field28_0x43;
    undefined field29_0x44;
    undefined field30_0x45;
    undefined field31_0x46;
    undefined field32_0x47;
    undefined field33_0x48;
    undefined field34_0x49;
    undefined field35_0x4a;
    undefined field36_0x4b;
    undefined field37_0x4c;
    undefined field38_0x4d;
    undefined field39_0x4e;
    undefined field40_0x4f;
    undefined field41_0x50;
    undefined field42_0x51;
    undefined field43_0x52;
    undefined field44_0x53;
    undefined field45_0x54;
    undefined field46_0x55;
    undefined field47_0x56;
    undefined field48_0x57;
    undefined field49_0x58;
    undefined field50_0x59;
    undefined field51_0x5a;
    undefined field52_0x5b;
    undefined field53_0x5c;
    undefined field54_0x5d;
    undefined field55_0x5e;
    undefined field56_0x5f;
    undefined field57_0x60;
    undefined field58_0x61;
    undefined field59_0x62;
    undefined field60_0x63;
    undefined field61_0x64;
    undefined field62_0x65;
    undefined field63_0x66;
    undefined field64_0x67;
    undefined field65_0x68;
    undefined field66_0x69;
    undefined field67_0x6a;
    undefined field68_0x6b;
    undefined field69_0x6c;
    undefined field70_0x6d;
    undefined field71_0x6e;
    undefined field72_0x6f;
    undefined field73_0x70;
    undefined field74_0x71;
    undefined field75_0x72;
    undefined field76_0x73;
    undefined field77_0x74;
    undefined field78_0x75;
    undefined field79_0x76;
    undefined field80_0x77;
    undefined field81_0x78;
    undefined field82_0x79;
    undefined field83_0x7a;
    undefined field84_0x7b;
    undefined field85_0x7c;
    undefined field86_0x7d;
    undefined field87_0x7e;
    undefined field88_0x7f;
    undefined field89_0x80;
    undefined field90_0x81;
    undefined field91_0x82;
    undefined field92_0x83;
    undefined field93_0x84;
    undefined field94_0x85;
    undefined field95_0x86;
    undefined field96_0x87;
    undefined field97_0x88;
    undefined field98_0x89;
    undefined field99_0x8a;
    undefined field100_0x8b;
    undefined field101_0x8c;
    undefined field102_0x8d;
    undefined field103_0x8e;
    undefined field104_0x8f;
    undefined field105_0x90;
    undefined field106_0x91;
    undefined field107_0x92;
    undefined field108_0x93;
    undefined field109_0x94;
    undefined field110_0x95;
    undefined field111_0x96;
    undefined field112_0x97;
    undefined field113_0x98;
    undefined field114_0x99;
    undefined field115_0x9a;
    undefined field116_0x9b;
    undefined field117_0x9c;
    undefined field118_0x9d;
    undefined field119_0x9e;
    undefined field120_0x9f;
    undefined field121_0xa0;
    undefined field122_0xa1;
    undefined field123_0xa2;
    undefined field124_0xa3;
    undefined field125_0xa4;
    undefined field126_0xa5;
    undefined field127_0xa6;
    undefined field128_0xa7;
    undefined field129_0xa8;
    undefined field130_0xa9;
    undefined field131_0xaa;
    undefined field132_0xab;
    undefined field133_0xac;
    undefined field134_0xad;
    undefined field135_0xae;
    undefined field136_0xaf;
    undefined field137_0xb0;
    undefined field138_0xb1;
    undefined field139_0xb2;
    undefined field140_0xb3;
    undefined field141_0xb4;
    undefined field142_0xb5;
    undefined field143_0xb6;
    undefined field144_0xb7;
    undefined field145_0xb8;
    undefined field146_0xb9;
    undefined field147_0xba;
    undefined field148_0xbb;
    undefined field149_0xbc;
    undefined field150_0xbd;
    undefined field151_0xbe;
    undefined field152_0xbf;
    undefined field153_0xc0;
    undefined field154_0xc1;
    undefined field155_0xc2;
    undefined field156_0xc3;
    undefined field157_0xc4;
    undefined field158_0xc5;
    undefined field159_0xc6;
    undefined field160_0xc7;
    undefined field161_0xc8;
    undefined field162_0xc9;
    undefined field163_0xca;
    undefined field164_0xcb;
    undefined field165_0xcc;
    undefined field166_0xcd;
    undefined field167_0xce;
    undefined field168_0xcf;
    undefined field169_0xd0;
    undefined field170_0xd1;
    undefined field171_0xd2;
    undefined field172_0xd3;
    undefined field173_0xd4;
    undefined field174_0xd5;
    undefined field175_0xd6;
    undefined field176_0xd7;
    undefined field177_0xd8;
    undefined field178_0xd9;
    undefined field179_0xda;
    undefined field180_0xdb;
    undefined field181_0xdc;
    undefined field182_0xdd;
    undefined field183_0xde;
    undefined field184_0xdf;
    undefined field185_0xe0;
    undefined field186_0xe1;
    undefined field187_0xe2;
    undefined field188_0xe3;
    undefined field189_0xe4;
    undefined field190_0xe5;
    undefined field191_0xe6;
    undefined field192_0xe7;
    undefined field193_0xe8;
    undefined field194_0xe9;
    undefined field195_0xea;
    undefined field196_0xeb;
    undefined field197_0xec;
    undefined field198_0xed;
    undefined field199_0xee;
    undefined field200_0xef;
    undefined field201_0xf0;
    undefined field202_0xf1;
    undefined field203_0xf2;
    undefined field204_0xf3;
    undefined field205_0xf4;
    undefined field206_0xf5;
    undefined field207_0xf6;
    undefined field208_0xf7;
    undefined field209_0xf8;
    undefined field210_0xf9;
    undefined field211_0xfa;
    undefined field212_0xfb;
    undefined field213_0xfc;
    undefined field214_0xfd;
    undefined field215_0xfe;
    undefined field216_0xff;
    uint FS_HPTXFSIZ; // OTG_FS Host periodic transmit FIFO size
          register (OTG_FS_HPTXFSIZ)
    uint FS_DIEPTXF1; // OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF2)
    uint FS_DIEPTXF2; // OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF3)
    uint FS_DIEPTXF3; // OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF4)
};

typedef struct GPIOG GPIOG, *PGPIOG;

struct GPIOG {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct TIM10 TIM10, *PTIM10;

struct TIM10 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register (input
          mode)
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    uint CCR1; // capture/compare register 1
};

typedef struct GPIOD GPIOD, *PGPIOD;

struct GPIOD {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct TIM13 TIM13, *PTIM13;

struct TIM13 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register (input
          mode)
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    uint CCR1; // capture/compare register 1
};

typedef struct GPIOC GPIOC, *PGPIOC;

struct GPIOC {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct TIM14 TIM14, *PTIM14;

struct TIM14 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register (input
          mode)
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    uint CCR1; // capture/compare register 1
};

typedef struct GPIOF GPIOF, *PGPIOF;

struct GPIOF {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct TIM11 TIM11, *PTIM11;

struct TIM11 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register (input
          mode)
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field18_0x30;
    undefined field19_0x31;
    undefined field20_0x32;
    undefined field21_0x33;
    uint CCR1; // capture/compare register 1
};

typedef struct GPIOE GPIOE, *PGPIOE;

struct GPIOE {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct TIM12 TIM12, *PTIM12;

struct TIM12 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field15_0x30;
    undefined field16_0x31;
    undefined field17_0x32;
    undefined field18_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
};

typedef struct NVIC_STIR NVIC_STIR, *PNVIC_STIR;

struct NVIC_STIR {
    uint STIR; // Software trigger interrupt
          register
};

typedef struct GPIOB GPIOB, *PGPIOB;

struct GPIOB {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct GPIOA GPIOA, *PGPIOA;

struct GPIOA {
    uint CRL; // Port configuration register low
          (GPIOn_CRL)
    uint CRH; // Port configuration register high
          (GPIOn_CRL)
    uint IDR; // Port input data register
          (GPIOn_IDR)
    uint ODR; // Port output data register
          (GPIOn_ODR)
    uint BSRR; // Port bit set/reset register
          (GPIOn_BSRR)
    uint BRR; // Port bit reset register
          (GPIOn_BRR)
    uint LCKR; // Port configuration lock
          register
};

typedef struct USB USB, *PUSB;

struct USB {
    uint EP0R; // endpoint 0 register
    uint EP1R; // endpoint 1 register
    uint EP2R; // endpoint 2 register
    uint EP3R; // endpoint 3 register
    uint EP4R; // endpoint 4 register
    uint EP5R; // endpoint 5 register
    uint EP6R; // endpoint 6 register
    uint EP7R; // endpoint 7 register
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    uint CNTR; // control register
    uint ISTR; // interrupt status register
    uint FNR; // frame number register
    uint DADDR; // device address
    uint BTABLE; // Buffer table address
};

typedef struct DAC DAC, *PDAC;

struct DAC {
    uint CR; // Control register (DAC_CR)
    uint SWTRIGR; // DAC software trigger register
          (DAC_SWTRIGR)
    uint DHR12R1; // DAC channel1 12-bit right-aligned data
          holding register(DAC_DHR12R1)
    uint DHR12L1; // DAC channel1 12-bit left aligned data
          holding register (DAC_DHR12L1)
    uint DHR8R1; // DAC channel1 8-bit right aligned data
          holding register (DAC_DHR8R1)
    uint DHR12R2; // DAC channel2 12-bit right aligned data
          holding register (DAC_DHR12R2)
    uint DHR12L2; // DAC channel2 12-bit left aligned data
          holding register (DAC_DHR12L2)
    uint DHR8R2; // DAC channel2 8-bit right-aligned data
          holding register (DAC_DHR8R2)
    uint DHR12RD; // Dual DAC 12-bit right-aligned data holding
          register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12
          Reserved
    uint DHR12LD; // DUAL DAC 12-bit left aligned data holding
          register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0
          Reserved
    uint DHR8RD; // DUAL DAC 8-bit right aligned data holding
          register (DAC_DHR8RD), Bits 31:16 Reserved
    uint DOR1; // DAC channel1 data output register
          (DAC_DOR1)
    uint DOR2; // DAC channel2 data output register
          (DAC_DOR2)
};

typedef struct DMA1 DMA1, *PDMA1;

struct DMA1 {
    uint ISR; // DMA interrupt status register
          (DMA_ISR)
    uint IFCR; // DMA interrupt flag clear register
          (DMA_IFCR)
    uint CCR1; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR1; // DMA channel 1 number of data
          register
    uint CPAR1; // DMA channel 1 peripheral address
          register
    uint CMAR1; // DMA channel 1 memory address
          register
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    uint CCR2; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR2; // DMA channel 2 number of data
          register
    uint CPAR2; // DMA channel 2 peripheral address
          register
    uint CMAR2; // DMA channel 2 memory address
          register
    undefined field14_0x2c;
    undefined field15_0x2d;
    undefined field16_0x2e;
    undefined field17_0x2f;
    uint CCR3; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR3; // DMA channel 3 number of data
          register
    uint CPAR3; // DMA channel 3 peripheral address
          register
    uint CMAR3; // DMA channel 3 memory address
          register
    undefined field22_0x40;
    undefined field23_0x41;
    undefined field24_0x42;
    undefined field25_0x43;
    uint CCR4; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR4; // DMA channel 4 number of data
          register
    uint CPAR4; // DMA channel 4 peripheral address
          register
    uint CMAR4; // DMA channel 4 memory address
          register
    undefined field30_0x54;
    undefined field31_0x55;
    undefined field32_0x56;
    undefined field33_0x57;
    uint CCR5; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR5; // DMA channel 5 number of data
          register
    uint CPAR5; // DMA channel 5 peripheral address
          register
    uint CMAR5; // DMA channel 5 memory address
          register
    undefined field38_0x68;
    undefined field39_0x69;
    undefined field40_0x6a;
    undefined field41_0x6b;
    uint CCR6; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR6; // DMA channel 6 number of data
          register
    uint CPAR6; // DMA channel 6 peripheral address
          register
    uint CMAR6; // DMA channel 6 memory address
          register
    undefined field46_0x7c;
    undefined field47_0x7d;
    undefined field48_0x7e;
    undefined field49_0x7f;
    uint CCR7; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR7; // DMA channel 7 number of data
          register
    uint CPAR7; // DMA channel 7 peripheral address
          register
    uint CMAR7; // DMA channel 7 memory address
          register
};

typedef struct DMA2 DMA2, *PDMA2;

struct DMA2 {
    uint ISR; // DMA interrupt status register
          (DMA_ISR)
    uint IFCR; // DMA interrupt flag clear register
          (DMA_IFCR)
    uint CCR1; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR1; // DMA channel 1 number of data
          register
    uint CPAR1; // DMA channel 1 peripheral address
          register
    uint CMAR1; // DMA channel 1 memory address
          register
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    uint CCR2; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR2; // DMA channel 2 number of data
          register
    uint CPAR2; // DMA channel 2 peripheral address
          register
    uint CMAR2; // DMA channel 2 memory address
          register
    undefined field14_0x2c;
    undefined field15_0x2d;
    undefined field16_0x2e;
    undefined field17_0x2f;
    uint CCR3; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR3; // DMA channel 3 number of data
          register
    uint CPAR3; // DMA channel 3 peripheral address
          register
    uint CMAR3; // DMA channel 3 memory address
          register
    undefined field22_0x40;
    undefined field23_0x41;
    undefined field24_0x42;
    undefined field25_0x43;
    uint CCR4; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR4; // DMA channel 4 number of data
          register
    uint CPAR4; // DMA channel 4 peripheral address
          register
    uint CMAR4; // DMA channel 4 memory address
          register
    undefined field30_0x54;
    undefined field31_0x55;
    undefined field32_0x56;
    undefined field33_0x57;
    uint CCR5; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR5; // DMA channel 5 number of data
          register
    uint CPAR5; // DMA channel 5 peripheral address
          register
    uint CMAR5; // DMA channel 5 memory address
          register
    undefined field38_0x68;
    undefined field39_0x69;
    undefined field40_0x6a;
    undefined field41_0x6b;
    uint CCR6; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR6; // DMA channel 6 number of data
          register
    uint CPAR6; // DMA channel 6 peripheral address
          register
    uint CMAR6; // DMA channel 6 memory address
          register
    undefined field46_0x7c;
    undefined field47_0x7d;
    undefined field48_0x7e;
    undefined field49_0x7f;
    uint CCR7; // DMA channel configuration register
          (DMA_CCR)
    uint CNDTR7; // DMA channel 7 number of data
          register
    uint CPAR7; // DMA channel 7 peripheral address
          register
    uint CMAR7; // DMA channel 7 memory address
          register
};

typedef struct OTG_FS_DEVICE OTG_FS_DEVICE, *POTG_FS_DEVICE;

struct OTG_FS_DEVICE {
    uint FS_DCFG; // OTG_FS device configuration register
          (OTG_FS_DCFG)
    uint FS_DCTL; // OTG_FS device control register
          (OTG_FS_DCTL)
    uint FS_DSTS; // OTG_FS device status register
          (OTG_FS_DSTS)
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    uint FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt
          mask register (OTG_FS_DIEPMSK)
    uint FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt
          mask register (OTG_FS_DOEPMSK)
    uint FS_DAINT; // OTG_FS device all endpoints interrupt
          register (OTG_FS_DAINT)
    uint FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register
          (OTG_FS_DAINTMSK)
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    uint DVBUSDIS; // OTG_FS device VBUS discharge time
          register
    uint DVBUSPULSE; // OTG_FS device VBUS pulsing time
          register
    undefined field21_0x30;
    undefined field22_0x31;
    undefined field23_0x32;
    undefined field24_0x33;
    uint DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty
          interrupt mask register
    undefined field26_0x38;
    undefined field27_0x39;
    undefined field28_0x3a;
    undefined field29_0x3b;
    undefined field30_0x3c;
    undefined field31_0x3d;
    undefined field32_0x3e;
    undefined field33_0x3f;
    undefined field34_0x40;
    undefined field35_0x41;
    undefined field36_0x42;
    undefined field37_0x43;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    undefined field42_0x48;
    undefined field43_0x49;
    undefined field44_0x4a;
    undefined field45_0x4b;
    undefined field46_0x4c;
    undefined field47_0x4d;
    undefined field48_0x4e;
    undefined field49_0x4f;
    undefined field50_0x50;
    undefined field51_0x51;
    undefined field52_0x52;
    undefined field53_0x53;
    undefined field54_0x54;
    undefined field55_0x55;
    undefined field56_0x56;
    undefined field57_0x57;
    undefined field58_0x58;
    undefined field59_0x59;
    undefined field60_0x5a;
    undefined field61_0x5b;
    undefined field62_0x5c;
    undefined field63_0x5d;
    undefined field64_0x5e;
    undefined field65_0x5f;
    undefined field66_0x60;
    undefined field67_0x61;
    undefined field68_0x62;
    undefined field69_0x63;
    undefined field70_0x64;
    undefined field71_0x65;
    undefined field72_0x66;
    undefined field73_0x67;
    undefined field74_0x68;
    undefined field75_0x69;
    undefined field76_0x6a;
    undefined field77_0x6b;
    undefined field78_0x6c;
    undefined field79_0x6d;
    undefined field80_0x6e;
    undefined field81_0x6f;
    undefined field82_0x70;
    undefined field83_0x71;
    undefined field84_0x72;
    undefined field85_0x73;
    undefined field86_0x74;
    undefined field87_0x75;
    undefined field88_0x76;
    undefined field89_0x77;
    undefined field90_0x78;
    undefined field91_0x79;
    undefined field92_0x7a;
    undefined field93_0x7b;
    undefined field94_0x7c;
    undefined field95_0x7d;
    undefined field96_0x7e;
    undefined field97_0x7f;
    undefined field98_0x80;
    undefined field99_0x81;
    undefined field100_0x82;
    undefined field101_0x83;
    undefined field102_0x84;
    undefined field103_0x85;
    undefined field104_0x86;
    undefined field105_0x87;
    undefined field106_0x88;
    undefined field107_0x89;
    undefined field108_0x8a;
    undefined field109_0x8b;
    undefined field110_0x8c;
    undefined field111_0x8d;
    undefined field112_0x8e;
    undefined field113_0x8f;
    undefined field114_0x90;
    undefined field115_0x91;
    undefined field116_0x92;
    undefined field117_0x93;
    undefined field118_0x94;
    undefined field119_0x95;
    undefined field120_0x96;
    undefined field121_0x97;
    undefined field122_0x98;
    undefined field123_0x99;
    undefined field124_0x9a;
    undefined field125_0x9b;
    undefined field126_0x9c;
    undefined field127_0x9d;
    undefined field128_0x9e;
    undefined field129_0x9f;
    undefined field130_0xa0;
    undefined field131_0xa1;
    undefined field132_0xa2;
    undefined field133_0xa3;
    undefined field134_0xa4;
    undefined field135_0xa5;
    undefined field136_0xa6;
    undefined field137_0xa7;
    undefined field138_0xa8;
    undefined field139_0xa9;
    undefined field140_0xaa;
    undefined field141_0xab;
    undefined field142_0xac;
    undefined field143_0xad;
    undefined field144_0xae;
    undefined field145_0xaf;
    undefined field146_0xb0;
    undefined field147_0xb1;
    undefined field148_0xb2;
    undefined field149_0xb3;
    undefined field150_0xb4;
    undefined field151_0xb5;
    undefined field152_0xb6;
    undefined field153_0xb7;
    undefined field154_0xb8;
    undefined field155_0xb9;
    undefined field156_0xba;
    undefined field157_0xbb;
    undefined field158_0xbc;
    undefined field159_0xbd;
    undefined field160_0xbe;
    undefined field161_0xbf;
    undefined field162_0xc0;
    undefined field163_0xc1;
    undefined field164_0xc2;
    undefined field165_0xc3;
    undefined field166_0xc4;
    undefined field167_0xc5;
    undefined field168_0xc6;
    undefined field169_0xc7;
    undefined field170_0xc8;
    undefined field171_0xc9;
    undefined field172_0xca;
    undefined field173_0xcb;
    undefined field174_0xcc;
    undefined field175_0xcd;
    undefined field176_0xce;
    undefined field177_0xcf;
    undefined field178_0xd0;
    undefined field179_0xd1;
    undefined field180_0xd2;
    undefined field181_0xd3;
    undefined field182_0xd4;
    undefined field183_0xd5;
    undefined field184_0xd6;
    undefined field185_0xd7;
    undefined field186_0xd8;
    undefined field187_0xd9;
    undefined field188_0xda;
    undefined field189_0xdb;
    undefined field190_0xdc;
    undefined field191_0xdd;
    undefined field192_0xde;
    undefined field193_0xdf;
    undefined field194_0xe0;
    undefined field195_0xe1;
    undefined field196_0xe2;
    undefined field197_0xe3;
    undefined field198_0xe4;
    undefined field199_0xe5;
    undefined field200_0xe6;
    undefined field201_0xe7;
    undefined field202_0xe8;
    undefined field203_0xe9;
    undefined field204_0xea;
    undefined field205_0xeb;
    undefined field206_0xec;
    undefined field207_0xed;
    undefined field208_0xee;
    undefined field209_0xef;
    undefined field210_0xf0;
    undefined field211_0xf1;
    undefined field212_0xf2;
    undefined field213_0xf3;
    undefined field214_0xf4;
    undefined field215_0xf5;
    undefined field216_0xf6;
    undefined field217_0xf7;
    undefined field218_0xf8;
    undefined field219_0xf9;
    undefined field220_0xfa;
    undefined field221_0xfb;
    undefined field222_0xfc;
    undefined field223_0xfd;
    undefined field224_0xfe;
    undefined field225_0xff;
    uint FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control
          register (OTG_FS_DIEPCTL0)
    undefined field227_0x104;
    undefined field228_0x105;
    undefined field229_0x106;
    undefined field230_0x107;
    uint DIEPINT0; // device endpoint-x interrupt
          register
    undefined field232_0x10c;
    undefined field233_0x10d;
    undefined field234_0x10e;
    undefined field235_0x10f;
    uint DIEPTSIZ0; // device endpoint-0 transfer size
          register
    undefined field237_0x114;
    undefined field238_0x115;
    undefined field239_0x116;
    undefined field240_0x117;
    uint DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO
          status register
    undefined field242_0x11c;
    undefined field243_0x11d;
    undefined field244_0x11e;
    undefined field245_0x11f;
    uint DIEPCTL1; // OTG device endpoint-1 control
          register
    undefined field247_0x124;
    undefined field248_0x125;
    undefined field249_0x126;
    undefined field250_0x127;
    uint DIEPINT1; // device endpoint-1 interrupt
          register
    undefined field252_0x12c;
    undefined field253_0x12d;
    undefined field254_0x12e;
    undefined field255_0x12f;
    uint DIEPTSIZ1; // device endpoint-1 transfer size
          register
    undefined field257_0x134;
    undefined field258_0x135;
    undefined field259_0x136;
    undefined field260_0x137;
    uint DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO
          status register
    undefined field262_0x13c;
    undefined field263_0x13d;
    undefined field264_0x13e;
    undefined field265_0x13f;
    uint DIEPCTL2; // OTG device endpoint-2 control
          register
    undefined field267_0x144;
    undefined field268_0x145;
    undefined field269_0x146;
    undefined field270_0x147;
    uint DIEPINT2; // device endpoint-2 interrupt
          register
    undefined field272_0x14c;
    undefined field273_0x14d;
    undefined field274_0x14e;
    undefined field275_0x14f;
    uint DIEPTSIZ2; // device endpoint-2 transfer size
          register
    undefined field277_0x154;
    undefined field278_0x155;
    undefined field279_0x156;
    undefined field280_0x157;
    uint DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO
          status register
    undefined field282_0x15c;
    undefined field283_0x15d;
    undefined field284_0x15e;
    undefined field285_0x15f;
    uint DIEPCTL3; // OTG device endpoint-3 control
          register
    undefined field287_0x164;
    undefined field288_0x165;
    undefined field289_0x166;
    undefined field290_0x167;
    uint DIEPINT3; // device endpoint-3 interrupt
          register
    undefined field292_0x16c;
    undefined field293_0x16d;
    undefined field294_0x16e;
    undefined field295_0x16f;
    uint DIEPTSIZ3; // device endpoint-3 transfer size
          register
    undefined field297_0x174;
    undefined field298_0x175;
    undefined field299_0x176;
    undefined field300_0x177;
    uint DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO
          status register
    undefined field302_0x17c;
    undefined field303_0x17d;
    undefined field304_0x17e;
    undefined field305_0x17f;
    undefined field306_0x180;
    undefined field307_0x181;
    undefined field308_0x182;
    undefined field309_0x183;
    undefined field310_0x184;
    undefined field311_0x185;
    undefined field312_0x186;
    undefined field313_0x187;
    undefined field314_0x188;
    undefined field315_0x189;
    undefined field316_0x18a;
    undefined field317_0x18b;
    undefined field318_0x18c;
    undefined field319_0x18d;
    undefined field320_0x18e;
    undefined field321_0x18f;
    undefined field322_0x190;
    undefined field323_0x191;
    undefined field324_0x192;
    undefined field325_0x193;
    undefined field326_0x194;
    undefined field327_0x195;
    undefined field328_0x196;
    undefined field329_0x197;
    undefined field330_0x198;
    undefined field331_0x199;
    undefined field332_0x19a;
    undefined field333_0x19b;
    undefined field334_0x19c;
    undefined field335_0x19d;
    undefined field336_0x19e;
    undefined field337_0x19f;
    undefined field338_0x1a0;
    undefined field339_0x1a1;
    undefined field340_0x1a2;
    undefined field341_0x1a3;
    undefined field342_0x1a4;
    undefined field343_0x1a5;
    undefined field344_0x1a6;
    undefined field345_0x1a7;
    undefined field346_0x1a8;
    undefined field347_0x1a9;
    undefined field348_0x1aa;
    undefined field349_0x1ab;
    undefined field350_0x1ac;
    undefined field351_0x1ad;
    undefined field352_0x1ae;
    undefined field353_0x1af;
    undefined field354_0x1b0;
    undefined field355_0x1b1;
    undefined field356_0x1b2;
    undefined field357_0x1b3;
    undefined field358_0x1b4;
    undefined field359_0x1b5;
    undefined field360_0x1b6;
    undefined field361_0x1b7;
    undefined field362_0x1b8;
    undefined field363_0x1b9;
    undefined field364_0x1ba;
    undefined field365_0x1bb;
    undefined field366_0x1bc;
    undefined field367_0x1bd;
    undefined field368_0x1be;
    undefined field369_0x1bf;
    undefined field370_0x1c0;
    undefined field371_0x1c1;
    undefined field372_0x1c2;
    undefined field373_0x1c3;
    undefined field374_0x1c4;
    undefined field375_0x1c5;
    undefined field376_0x1c6;
    undefined field377_0x1c7;
    undefined field378_0x1c8;
    undefined field379_0x1c9;
    undefined field380_0x1ca;
    undefined field381_0x1cb;
    undefined field382_0x1cc;
    undefined field383_0x1cd;
    undefined field384_0x1ce;
    undefined field385_0x1cf;
    undefined field386_0x1d0;
    undefined field387_0x1d1;
    undefined field388_0x1d2;
    undefined field389_0x1d3;
    undefined field390_0x1d4;
    undefined field391_0x1d5;
    undefined field392_0x1d6;
    undefined field393_0x1d7;
    undefined field394_0x1d8;
    undefined field395_0x1d9;
    undefined field396_0x1da;
    undefined field397_0x1db;
    undefined field398_0x1dc;
    undefined field399_0x1dd;
    undefined field400_0x1de;
    undefined field401_0x1df;
    undefined field402_0x1e0;
    undefined field403_0x1e1;
    undefined field404_0x1e2;
    undefined field405_0x1e3;
    undefined field406_0x1e4;
    undefined field407_0x1e5;
    undefined field408_0x1e6;
    undefined field409_0x1e7;
    undefined field410_0x1e8;
    undefined field411_0x1e9;
    undefined field412_0x1ea;
    undefined field413_0x1eb;
    undefined field414_0x1ec;
    undefined field415_0x1ed;
    undefined field416_0x1ee;
    undefined field417_0x1ef;
    undefined field418_0x1f0;
    undefined field419_0x1f1;
    undefined field420_0x1f2;
    undefined field421_0x1f3;
    undefined field422_0x1f4;
    undefined field423_0x1f5;
    undefined field424_0x1f6;
    undefined field425_0x1f7;
    undefined field426_0x1f8;
    undefined field427_0x1f9;
    undefined field428_0x1fa;
    undefined field429_0x1fb;
    undefined field430_0x1fc;
    undefined field431_0x1fd;
    undefined field432_0x1fe;
    undefined field433_0x1ff;
    undefined field434_0x200;
    undefined field435_0x201;
    undefined field436_0x202;
    undefined field437_0x203;
    undefined field438_0x204;
    undefined field439_0x205;
    undefined field440_0x206;
    undefined field441_0x207;
    undefined field442_0x208;
    undefined field443_0x209;
    undefined field444_0x20a;
    undefined field445_0x20b;
    undefined field446_0x20c;
    undefined field447_0x20d;
    undefined field448_0x20e;
    undefined field449_0x20f;
    undefined field450_0x210;
    undefined field451_0x211;
    undefined field452_0x212;
    undefined field453_0x213;
    undefined field454_0x214;
    undefined field455_0x215;
    undefined field456_0x216;
    undefined field457_0x217;
    undefined field458_0x218;
    undefined field459_0x219;
    undefined field460_0x21a;
    undefined field461_0x21b;
    undefined field462_0x21c;
    undefined field463_0x21d;
    undefined field464_0x21e;
    undefined field465_0x21f;
    undefined field466_0x220;
    undefined field467_0x221;
    undefined field468_0x222;
    undefined field469_0x223;
    undefined field470_0x224;
    undefined field471_0x225;
    undefined field472_0x226;
    undefined field473_0x227;
    undefined field474_0x228;
    undefined field475_0x229;
    undefined field476_0x22a;
    undefined field477_0x22b;
    undefined field478_0x22c;
    undefined field479_0x22d;
    undefined field480_0x22e;
    undefined field481_0x22f;
    undefined field482_0x230;
    undefined field483_0x231;
    undefined field484_0x232;
    undefined field485_0x233;
    undefined field486_0x234;
    undefined field487_0x235;
    undefined field488_0x236;
    undefined field489_0x237;
    undefined field490_0x238;
    undefined field491_0x239;
    undefined field492_0x23a;
    undefined field493_0x23b;
    undefined field494_0x23c;
    undefined field495_0x23d;
    undefined field496_0x23e;
    undefined field497_0x23f;
    undefined field498_0x240;
    undefined field499_0x241;
    undefined field500_0x242;
    undefined field501_0x243;
    undefined field502_0x244;
    undefined field503_0x245;
    undefined field504_0x246;
    undefined field505_0x247;
    undefined field506_0x248;
    undefined field507_0x249;
    undefined field508_0x24a;
    undefined field509_0x24b;
    undefined field510_0x24c;
    undefined field511_0x24d;
    undefined field512_0x24e;
    undefined field513_0x24f;
    undefined field514_0x250;
    undefined field515_0x251;
    undefined field516_0x252;
    undefined field517_0x253;
    undefined field518_0x254;
    undefined field519_0x255;
    undefined field520_0x256;
    undefined field521_0x257;
    undefined field522_0x258;
    undefined field523_0x259;
    undefined field524_0x25a;
    undefined field525_0x25b;
    undefined field526_0x25c;
    undefined field527_0x25d;
    undefined field528_0x25e;
    undefined field529_0x25f;
    undefined field530_0x260;
    undefined field531_0x261;
    undefined field532_0x262;
    undefined field533_0x263;
    undefined field534_0x264;
    undefined field535_0x265;
    undefined field536_0x266;
    undefined field537_0x267;
    undefined field538_0x268;
    undefined field539_0x269;
    undefined field540_0x26a;
    undefined field541_0x26b;
    undefined field542_0x26c;
    undefined field543_0x26d;
    undefined field544_0x26e;
    undefined field545_0x26f;
    undefined field546_0x270;
    undefined field547_0x271;
    undefined field548_0x272;
    undefined field549_0x273;
    undefined field550_0x274;
    undefined field551_0x275;
    undefined field552_0x276;
    undefined field553_0x277;
    undefined field554_0x278;
    undefined field555_0x279;
    undefined field556_0x27a;
    undefined field557_0x27b;
    undefined field558_0x27c;
    undefined field559_0x27d;
    undefined field560_0x27e;
    undefined field561_0x27f;
    undefined field562_0x280;
    undefined field563_0x281;
    undefined field564_0x282;
    undefined field565_0x283;
    undefined field566_0x284;
    undefined field567_0x285;
    undefined field568_0x286;
    undefined field569_0x287;
    undefined field570_0x288;
    undefined field571_0x289;
    undefined field572_0x28a;
    undefined field573_0x28b;
    undefined field574_0x28c;
    undefined field575_0x28d;
    undefined field576_0x28e;
    undefined field577_0x28f;
    undefined field578_0x290;
    undefined field579_0x291;
    undefined field580_0x292;
    undefined field581_0x293;
    undefined field582_0x294;
    undefined field583_0x295;
    undefined field584_0x296;
    undefined field585_0x297;
    undefined field586_0x298;
    undefined field587_0x299;
    undefined field588_0x29a;
    undefined field589_0x29b;
    undefined field590_0x29c;
    undefined field591_0x29d;
    undefined field592_0x29e;
    undefined field593_0x29f;
    undefined field594_0x2a0;
    undefined field595_0x2a1;
    undefined field596_0x2a2;
    undefined field597_0x2a3;
    undefined field598_0x2a4;
    undefined field599_0x2a5;
    undefined field600_0x2a6;
    undefined field601_0x2a7;
    undefined field602_0x2a8;
    undefined field603_0x2a9;
    undefined field604_0x2aa;
    undefined field605_0x2ab;
    undefined field606_0x2ac;
    undefined field607_0x2ad;
    undefined field608_0x2ae;
    undefined field609_0x2af;
    undefined field610_0x2b0;
    undefined field611_0x2b1;
    undefined field612_0x2b2;
    undefined field613_0x2b3;
    undefined field614_0x2b4;
    undefined field615_0x2b5;
    undefined field616_0x2b6;
    undefined field617_0x2b7;
    undefined field618_0x2b8;
    undefined field619_0x2b9;
    undefined field620_0x2ba;
    undefined field621_0x2bb;
    undefined field622_0x2bc;
    undefined field623_0x2bd;
    undefined field624_0x2be;
    undefined field625_0x2bf;
    undefined field626_0x2c0;
    undefined field627_0x2c1;
    undefined field628_0x2c2;
    undefined field629_0x2c3;
    undefined field630_0x2c4;
    undefined field631_0x2c5;
    undefined field632_0x2c6;
    undefined field633_0x2c7;
    undefined field634_0x2c8;
    undefined field635_0x2c9;
    undefined field636_0x2ca;
    undefined field637_0x2cb;
    undefined field638_0x2cc;
    undefined field639_0x2cd;
    undefined field640_0x2ce;
    undefined field641_0x2cf;
    undefined field642_0x2d0;
    undefined field643_0x2d1;
    undefined field644_0x2d2;
    undefined field645_0x2d3;
    undefined field646_0x2d4;
    undefined field647_0x2d5;
    undefined field648_0x2d6;
    undefined field649_0x2d7;
    undefined field650_0x2d8;
    undefined field651_0x2d9;
    undefined field652_0x2da;
    undefined field653_0x2db;
    undefined field654_0x2dc;
    undefined field655_0x2dd;
    undefined field656_0x2de;
    undefined field657_0x2df;
    undefined field658_0x2e0;
    undefined field659_0x2e1;
    undefined field660_0x2e2;
    undefined field661_0x2e3;
    undefined field662_0x2e4;
    undefined field663_0x2e5;
    undefined field664_0x2e6;
    undefined field665_0x2e7;
    undefined field666_0x2e8;
    undefined field667_0x2e9;
    undefined field668_0x2ea;
    undefined field669_0x2eb;
    undefined field670_0x2ec;
    undefined field671_0x2ed;
    undefined field672_0x2ee;
    undefined field673_0x2ef;
    undefined field674_0x2f0;
    undefined field675_0x2f1;
    undefined field676_0x2f2;
    undefined field677_0x2f3;
    undefined field678_0x2f4;
    undefined field679_0x2f5;
    undefined field680_0x2f6;
    undefined field681_0x2f7;
    undefined field682_0x2f8;
    undefined field683_0x2f9;
    undefined field684_0x2fa;
    undefined field685_0x2fb;
    undefined field686_0x2fc;
    undefined field687_0x2fd;
    undefined field688_0x2fe;
    undefined field689_0x2ff;
    uint DOEPCTL0; // device endpoint-0 control
          register
    undefined field691_0x304;
    undefined field692_0x305;
    undefined field693_0x306;
    undefined field694_0x307;
    uint DOEPINT0; // device endpoint-0 interrupt
          register
    undefined field696_0x30c;
    undefined field697_0x30d;
    undefined field698_0x30e;
    undefined field699_0x30f;
    uint DOEPTSIZ0; // device OUT endpoint-0 transfer size
          register
    undefined field701_0x314;
    undefined field702_0x315;
    undefined field703_0x316;
    undefined field704_0x317;
    undefined field705_0x318;
    undefined field706_0x319;
    undefined field707_0x31a;
    undefined field708_0x31b;
    undefined field709_0x31c;
    undefined field710_0x31d;
    undefined field711_0x31e;
    undefined field712_0x31f;
    uint DOEPCTL1; // device endpoint-1 control
          register
    undefined field714_0x324;
    undefined field715_0x325;
    undefined field716_0x326;
    undefined field717_0x327;
    uint DOEPINT1; // device endpoint-1 interrupt
          register
    undefined field719_0x32c;
    undefined field720_0x32d;
    undefined field721_0x32e;
    undefined field722_0x32f;
    uint DOEPTSIZ1; // device OUT endpoint-1 transfer size
          register
    undefined field724_0x334;
    undefined field725_0x335;
    undefined field726_0x336;
    undefined field727_0x337;
    undefined field728_0x338;
    undefined field729_0x339;
    undefined field730_0x33a;
    undefined field731_0x33b;
    undefined field732_0x33c;
    undefined field733_0x33d;
    undefined field734_0x33e;
    undefined field735_0x33f;
    uint DOEPCTL2; // device endpoint-2 control
          register
    undefined field737_0x344;
    undefined field738_0x345;
    undefined field739_0x346;
    undefined field740_0x347;
    uint DOEPINT2; // device endpoint-2 interrupt
          register
    undefined field742_0x34c;
    undefined field743_0x34d;
    undefined field744_0x34e;
    undefined field745_0x34f;
    uint DOEPTSIZ2; // device OUT endpoint-2 transfer size
          register
    undefined field747_0x354;
    undefined field748_0x355;
    undefined field749_0x356;
    undefined field750_0x357;
    undefined field751_0x358;
    undefined field752_0x359;
    undefined field753_0x35a;
    undefined field754_0x35b;
    undefined field755_0x35c;
    undefined field756_0x35d;
    undefined field757_0x35e;
    undefined field758_0x35f;
    uint DOEPCTL3; // device endpoint-3 control
          register
    undefined field760_0x364;
    undefined field761_0x365;
    undefined field762_0x366;
    undefined field763_0x367;
    uint DOEPINT3; // device endpoint-3 interrupt
          register
    undefined field765_0x36c;
    undefined field766_0x36d;
    undefined field767_0x36e;
    undefined field768_0x36f;
    uint DOEPTSIZ3; // device OUT endpoint-3 transfer size
          register
};

typedef struct DBG DBG, *PDBG;

struct DBG {
    uint IDCODE; // DBGMCU_IDCODE
    uint CR; // DBGMCU_CR
};

typedef struct TIM7 TIM7, *PTIM7;

struct TIM7 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    undefined field18_0x21;
    undefined field19_0x22;
    undefined field20_0x23;
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
};

typedef struct TIM6 TIM6, *PTIM6;

struct TIM6 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    undefined field18_0x21;
    undefined field19_0x22;
    undefined field20_0x23;
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
};

typedef struct TIM5 TIM5, *PTIM5;

struct TIM5 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field12_0x30;
    undefined field13_0x31;
    undefined field14_0x32;
    undefined field15_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct TIM4 TIM4, *PTIM4;

struct TIM4 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field12_0x30;
    undefined field13_0x31;
    undefined field14_0x32;
    undefined field15_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct TIM3 TIM3, *PTIM3;

struct TIM3 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field12_0x30;
    undefined field13_0x31;
    undefined field14_0x32;
    undefined field15_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct TIM2 TIM2, *PTIM2;

struct TIM2 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field12_0x30;
    undefined field13_0x31;
    undefined field14_0x32;
    undefined field15_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    undefined field20_0x44;
    undefined field21_0x45;
    undefined field22_0x46;
    undefined field23_0x47;
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct CAN2 CAN2, *PCAN2;

struct CAN2 {
    uint CAN_MCR; // CAN_MCR
    uint CAN_MSR; // CAN_MSR
    uint CAN_TSR; // CAN_TSR
    uint CAN_RF0R; // CAN_RF0R
    uint CAN_RF1R; // CAN_RF1R
    uint CAN_IER; // CAN_IER
    uint CAN_ESR; // CAN_ESR
    uint CAN_BTR; // CAN_BTR
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    undefined field40_0x40;
    undefined field41_0x41;
    undefined field42_0x42;
    undefined field43_0x43;
    undefined field44_0x44;
    undefined field45_0x45;
    undefined field46_0x46;
    undefined field47_0x47;
    undefined field48_0x48;
    undefined field49_0x49;
    undefined field50_0x4a;
    undefined field51_0x4b;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined field56_0x50;
    undefined field57_0x51;
    undefined field58_0x52;
    undefined field59_0x53;
    undefined field60_0x54;
    undefined field61_0x55;
    undefined field62_0x56;
    undefined field63_0x57;
    undefined field64_0x58;
    undefined field65_0x59;
    undefined field66_0x5a;
    undefined field67_0x5b;
    undefined field68_0x5c;
    undefined field69_0x5d;
    undefined field70_0x5e;
    undefined field71_0x5f;
    undefined field72_0x60;
    undefined field73_0x61;
    undefined field74_0x62;
    undefined field75_0x63;
    undefined field76_0x64;
    undefined field77_0x65;
    undefined field78_0x66;
    undefined field79_0x67;
    undefined field80_0x68;
    undefined field81_0x69;
    undefined field82_0x6a;
    undefined field83_0x6b;
    undefined field84_0x6c;
    undefined field85_0x6d;
    undefined field86_0x6e;
    undefined field87_0x6f;
    undefined field88_0x70;
    undefined field89_0x71;
    undefined field90_0x72;
    undefined field91_0x73;
    undefined field92_0x74;
    undefined field93_0x75;
    undefined field94_0x76;
    undefined field95_0x77;
    undefined field96_0x78;
    undefined field97_0x79;
    undefined field98_0x7a;
    undefined field99_0x7b;
    undefined field100_0x7c;
    undefined field101_0x7d;
    undefined field102_0x7e;
    undefined field103_0x7f;
    undefined field104_0x80;
    undefined field105_0x81;
    undefined field106_0x82;
    undefined field107_0x83;
    undefined field108_0x84;
    undefined field109_0x85;
    undefined field110_0x86;
    undefined field111_0x87;
    undefined field112_0x88;
    undefined field113_0x89;
    undefined field114_0x8a;
    undefined field115_0x8b;
    undefined field116_0x8c;
    undefined field117_0x8d;
    undefined field118_0x8e;
    undefined field119_0x8f;
    undefined field120_0x90;
    undefined field121_0x91;
    undefined field122_0x92;
    undefined field123_0x93;
    undefined field124_0x94;
    undefined field125_0x95;
    undefined field126_0x96;
    undefined field127_0x97;
    undefined field128_0x98;
    undefined field129_0x99;
    undefined field130_0x9a;
    undefined field131_0x9b;
    undefined field132_0x9c;
    undefined field133_0x9d;
    undefined field134_0x9e;
    undefined field135_0x9f;
    undefined field136_0xa0;
    undefined field137_0xa1;
    undefined field138_0xa2;
    undefined field139_0xa3;
    undefined field140_0xa4;
    undefined field141_0xa5;
    undefined field142_0xa6;
    undefined field143_0xa7;
    undefined field144_0xa8;
    undefined field145_0xa9;
    undefined field146_0xaa;
    undefined field147_0xab;
    undefined field148_0xac;
    undefined field149_0xad;
    undefined field150_0xae;
    undefined field151_0xaf;
    undefined field152_0xb0;
    undefined field153_0xb1;
    undefined field154_0xb2;
    undefined field155_0xb3;
    undefined field156_0xb4;
    undefined field157_0xb5;
    undefined field158_0xb6;
    undefined field159_0xb7;
    undefined field160_0xb8;
    undefined field161_0xb9;
    undefined field162_0xba;
    undefined field163_0xbb;
    undefined field164_0xbc;
    undefined field165_0xbd;
    undefined field166_0xbe;
    undefined field167_0xbf;
    undefined field168_0xc0;
    undefined field169_0xc1;
    undefined field170_0xc2;
    undefined field171_0xc3;
    undefined field172_0xc4;
    undefined field173_0xc5;
    undefined field174_0xc6;
    undefined field175_0xc7;
    undefined field176_0xc8;
    undefined field177_0xc9;
    undefined field178_0xca;
    undefined field179_0xcb;
    undefined field180_0xcc;
    undefined field181_0xcd;
    undefined field182_0xce;
    undefined field183_0xcf;
    undefined field184_0xd0;
    undefined field185_0xd1;
    undefined field186_0xd2;
    undefined field187_0xd3;
    undefined field188_0xd4;
    undefined field189_0xd5;
    undefined field190_0xd6;
    undefined field191_0xd7;
    undefined field192_0xd8;
    undefined field193_0xd9;
    undefined field194_0xda;
    undefined field195_0xdb;
    undefined field196_0xdc;
    undefined field197_0xdd;
    undefined field198_0xde;
    undefined field199_0xdf;
    undefined field200_0xe0;
    undefined field201_0xe1;
    undefined field202_0xe2;
    undefined field203_0xe3;
    undefined field204_0xe4;
    undefined field205_0xe5;
    undefined field206_0xe6;
    undefined field207_0xe7;
    undefined field208_0xe8;
    undefined field209_0xe9;
    undefined field210_0xea;
    undefined field211_0xeb;
    undefined field212_0xec;
    undefined field213_0xed;
    undefined field214_0xee;
    undefined field215_0xef;
    undefined field216_0xf0;
    undefined field217_0xf1;
    undefined field218_0xf2;
    undefined field219_0xf3;
    undefined field220_0xf4;
    undefined field221_0xf5;
    undefined field222_0xf6;
    undefined field223_0xf7;
    undefined field224_0xf8;
    undefined field225_0xf9;
    undefined field226_0xfa;
    undefined field227_0xfb;
    undefined field228_0xfc;
    undefined field229_0xfd;
    undefined field230_0xfe;
    undefined field231_0xff;
    undefined field232_0x100;
    undefined field233_0x101;
    undefined field234_0x102;
    undefined field235_0x103;
    undefined field236_0x104;
    undefined field237_0x105;
    undefined field238_0x106;
    undefined field239_0x107;
    undefined field240_0x108;
    undefined field241_0x109;
    undefined field242_0x10a;
    undefined field243_0x10b;
    undefined field244_0x10c;
    undefined field245_0x10d;
    undefined field246_0x10e;
    undefined field247_0x10f;
    undefined field248_0x110;
    undefined field249_0x111;
    undefined field250_0x112;
    undefined field251_0x113;
    undefined field252_0x114;
    undefined field253_0x115;
    undefined field254_0x116;
    undefined field255_0x117;
    undefined field256_0x118;
    undefined field257_0x119;
    undefined field258_0x11a;
    undefined field259_0x11b;
    undefined field260_0x11c;
    undefined field261_0x11d;
    undefined field262_0x11e;
    undefined field263_0x11f;
    undefined field264_0x120;
    undefined field265_0x121;
    undefined field266_0x122;
    undefined field267_0x123;
    undefined field268_0x124;
    undefined field269_0x125;
    undefined field270_0x126;
    undefined field271_0x127;
    undefined field272_0x128;
    undefined field273_0x129;
    undefined field274_0x12a;
    undefined field275_0x12b;
    undefined field276_0x12c;
    undefined field277_0x12d;
    undefined field278_0x12e;
    undefined field279_0x12f;
    undefined field280_0x130;
    undefined field281_0x131;
    undefined field282_0x132;
    undefined field283_0x133;
    undefined field284_0x134;
    undefined field285_0x135;
    undefined field286_0x136;
    undefined field287_0x137;
    undefined field288_0x138;
    undefined field289_0x139;
    undefined field290_0x13a;
    undefined field291_0x13b;
    undefined field292_0x13c;
    undefined field293_0x13d;
    undefined field294_0x13e;
    undefined field295_0x13f;
    undefined field296_0x140;
    undefined field297_0x141;
    undefined field298_0x142;
    undefined field299_0x143;
    undefined field300_0x144;
    undefined field301_0x145;
    undefined field302_0x146;
    undefined field303_0x147;
    undefined field304_0x148;
    undefined field305_0x149;
    undefined field306_0x14a;
    undefined field307_0x14b;
    undefined field308_0x14c;
    undefined field309_0x14d;
    undefined field310_0x14e;
    undefined field311_0x14f;
    undefined field312_0x150;
    undefined field313_0x151;
    undefined field314_0x152;
    undefined field315_0x153;
    undefined field316_0x154;
    undefined field317_0x155;
    undefined field318_0x156;
    undefined field319_0x157;
    undefined field320_0x158;
    undefined field321_0x159;
    undefined field322_0x15a;
    undefined field323_0x15b;
    undefined field324_0x15c;
    undefined field325_0x15d;
    undefined field326_0x15e;
    undefined field327_0x15f;
    undefined field328_0x160;
    undefined field329_0x161;
    undefined field330_0x162;
    undefined field331_0x163;
    undefined field332_0x164;
    undefined field333_0x165;
    undefined field334_0x166;
    undefined field335_0x167;
    undefined field336_0x168;
    undefined field337_0x169;
    undefined field338_0x16a;
    undefined field339_0x16b;
    undefined field340_0x16c;
    undefined field341_0x16d;
    undefined field342_0x16e;
    undefined field343_0x16f;
    undefined field344_0x170;
    undefined field345_0x171;
    undefined field346_0x172;
    undefined field347_0x173;
    undefined field348_0x174;
    undefined field349_0x175;
    undefined field350_0x176;
    undefined field351_0x177;
    undefined field352_0x178;
    undefined field353_0x179;
    undefined field354_0x17a;
    undefined field355_0x17b;
    undefined field356_0x17c;
    undefined field357_0x17d;
    undefined field358_0x17e;
    undefined field359_0x17f;
    uint CAN_TI0R; // CAN_TI0R
    uint CAN_TDT0R; // CAN_TDT0R
    uint CAN_TDL0R; // CAN_TDL0R
    uint CAN_TDH0R; // CAN_TDH0R
    uint CAN_TI1R; // CAN_TI1R
    uint CAN_TDT1R; // CAN_TDT1R
    uint CAN_TDL1R; // CAN_TDL1R
    uint CAN_TDH1R; // CAN_TDH1R
    uint CAN_TI2R; // CAN_TI2R
    uint CAN_TDT2R; // CAN_TDT2R
    uint CAN_TDL2R; // CAN_TDL2R
    uint CAN_TDH2R; // CAN_TDH2R
    uint CAN_RI0R; // CAN_RI0R
    uint CAN_RDT0R; // CAN_RDT0R
    uint CAN_RDL0R; // CAN_RDL0R
    uint CAN_RDH0R; // CAN_RDH0R
    uint CAN_RI1R; // CAN_RI1R
    uint CAN_RDT1R; // CAN_RDT1R
    uint CAN_RDL1R; // CAN_RDL1R
    uint CAN_RDH1R; // CAN_RDH1R
    undefined field380_0x1d0;
    undefined field381_0x1d1;
    undefined field382_0x1d2;
    undefined field383_0x1d3;
    undefined field384_0x1d4;
    undefined field385_0x1d5;
    undefined field386_0x1d6;
    undefined field387_0x1d7;
    undefined field388_0x1d8;
    undefined field389_0x1d9;
    undefined field390_0x1da;
    undefined field391_0x1db;
    undefined field392_0x1dc;
    undefined field393_0x1dd;
    undefined field394_0x1de;
    undefined field395_0x1df;
    undefined field396_0x1e0;
    undefined field397_0x1e1;
    undefined field398_0x1e2;
    undefined field399_0x1e3;
    undefined field400_0x1e4;
    undefined field401_0x1e5;
    undefined field402_0x1e6;
    undefined field403_0x1e7;
    undefined field404_0x1e8;
    undefined field405_0x1e9;
    undefined field406_0x1ea;
    undefined field407_0x1eb;
    undefined field408_0x1ec;
    undefined field409_0x1ed;
    undefined field410_0x1ee;
    undefined field411_0x1ef;
    undefined field412_0x1f0;
    undefined field413_0x1f1;
    undefined field414_0x1f2;
    undefined field415_0x1f3;
    undefined field416_0x1f4;
    undefined field417_0x1f5;
    undefined field418_0x1f6;
    undefined field419_0x1f7;
    undefined field420_0x1f8;
    undefined field421_0x1f9;
    undefined field422_0x1fa;
    undefined field423_0x1fb;
    undefined field424_0x1fc;
    undefined field425_0x1fd;
    undefined field426_0x1fe;
    undefined field427_0x1ff;
    uint CAN_FMR; // CAN_FMR
    uint CAN_FM1R; // CAN_FM1R
    undefined field430_0x208;
    undefined field431_0x209;
    undefined field432_0x20a;
    undefined field433_0x20b;
    uint CAN_FS1R; // CAN_FS1R
    undefined field435_0x210;
    undefined field436_0x211;
    undefined field437_0x212;
    undefined field438_0x213;
    uint CAN_FFA1R; // CAN_FFA1R
    undefined field440_0x218;
    undefined field441_0x219;
    undefined field442_0x21a;
    undefined field443_0x21b;
    uint CAN_FA1R; // CAN_FA1R
    undefined field445_0x220;
    undefined field446_0x221;
    undefined field447_0x222;
    undefined field448_0x223;
    undefined field449_0x224;
    undefined field450_0x225;
    undefined field451_0x226;
    undefined field452_0x227;
    undefined field453_0x228;
    undefined field454_0x229;
    undefined field455_0x22a;
    undefined field456_0x22b;
    undefined field457_0x22c;
    undefined field458_0x22d;
    undefined field459_0x22e;
    undefined field460_0x22f;
    undefined field461_0x230;
    undefined field462_0x231;
    undefined field463_0x232;
    undefined field464_0x233;
    undefined field465_0x234;
    undefined field466_0x235;
    undefined field467_0x236;
    undefined field468_0x237;
    undefined field469_0x238;
    undefined field470_0x239;
    undefined field471_0x23a;
    undefined field472_0x23b;
    undefined field473_0x23c;
    undefined field474_0x23d;
    undefined field475_0x23e;
    undefined field476_0x23f;
    uint F0R1; // Filter bank 0 register 1
    uint F0R2; // Filter bank 0 register 2
    uint F1R1; // Filter bank 1 register 1
    uint F1R2; // Filter bank 1 register 2
    uint F2R1; // Filter bank 2 register 1
    uint F2R2; // Filter bank 2 register 2
    uint F3R1; // Filter bank 3 register 1
    uint F3R2; // Filter bank 3 register 2
    uint F4R1; // Filter bank 4 register 1
    uint F4R2; // Filter bank 4 register 2
    uint F5R1; // Filter bank 5 register 1
    uint F5R2; // Filter bank 5 register 2
    uint F6R1; // Filter bank 6 register 1
    uint F6R2; // Filter bank 6 register 2
    uint F7R1; // Filter bank 7 register 1
    uint F7R2; // Filter bank 7 register 2
    uint F8R1; // Filter bank 8 register 1
    uint F8R2; // Filter bank 8 register 2
    uint F9R1; // Filter bank 9 register 1
    uint F9R2; // Filter bank 9 register 2
    uint F10R1; // Filter bank 10 register 1
    uint F10R2; // Filter bank 10 register 2
    uint F11R1; // Filter bank 11 register 1
    uint F11R2; // Filter bank 11 register 2
    uint F12R1; // Filter bank 4 register 1
    uint F12R2; // Filter bank 12 register 2
    uint F13R1; // Filter bank 13 register 1
    uint F13R2; // Filter bank 13 register 2
};

typedef struct TIM1 TIM1, *PTIM1;

struct TIM1 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    uint RCR; // repetition counter register
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    uint BDTR; // break and dead-time register
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct CAN1 CAN1, *PCAN1;

struct CAN1 {
    uint CAN_MCR; // CAN_MCR
    uint CAN_MSR; // CAN_MSR
    uint CAN_TSR; // CAN_TSR
    uint CAN_RF0R; // CAN_RF0R
    uint CAN_RF1R; // CAN_RF1R
    uint CAN_IER; // CAN_IER
    uint CAN_ESR; // CAN_ESR
    uint CAN_BTR; // CAN_BTR
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    undefined field40_0x40;
    undefined field41_0x41;
    undefined field42_0x42;
    undefined field43_0x43;
    undefined field44_0x44;
    undefined field45_0x45;
    undefined field46_0x46;
    undefined field47_0x47;
    undefined field48_0x48;
    undefined field49_0x49;
    undefined field50_0x4a;
    undefined field51_0x4b;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
    undefined field56_0x50;
    undefined field57_0x51;
    undefined field58_0x52;
    undefined field59_0x53;
    undefined field60_0x54;
    undefined field61_0x55;
    undefined field62_0x56;
    undefined field63_0x57;
    undefined field64_0x58;
    undefined field65_0x59;
    undefined field66_0x5a;
    undefined field67_0x5b;
    undefined field68_0x5c;
    undefined field69_0x5d;
    undefined field70_0x5e;
    undefined field71_0x5f;
    undefined field72_0x60;
    undefined field73_0x61;
    undefined field74_0x62;
    undefined field75_0x63;
    undefined field76_0x64;
    undefined field77_0x65;
    undefined field78_0x66;
    undefined field79_0x67;
    undefined field80_0x68;
    undefined field81_0x69;
    undefined field82_0x6a;
    undefined field83_0x6b;
    undefined field84_0x6c;
    undefined field85_0x6d;
    undefined field86_0x6e;
    undefined field87_0x6f;
    undefined field88_0x70;
    undefined field89_0x71;
    undefined field90_0x72;
    undefined field91_0x73;
    undefined field92_0x74;
    undefined field93_0x75;
    undefined field94_0x76;
    undefined field95_0x77;
    undefined field96_0x78;
    undefined field97_0x79;
    undefined field98_0x7a;
    undefined field99_0x7b;
    undefined field100_0x7c;
    undefined field101_0x7d;
    undefined field102_0x7e;
    undefined field103_0x7f;
    undefined field104_0x80;
    undefined field105_0x81;
    undefined field106_0x82;
    undefined field107_0x83;
    undefined field108_0x84;
    undefined field109_0x85;
    undefined field110_0x86;
    undefined field111_0x87;
    undefined field112_0x88;
    undefined field113_0x89;
    undefined field114_0x8a;
    undefined field115_0x8b;
    undefined field116_0x8c;
    undefined field117_0x8d;
    undefined field118_0x8e;
    undefined field119_0x8f;
    undefined field120_0x90;
    undefined field121_0x91;
    undefined field122_0x92;
    undefined field123_0x93;
    undefined field124_0x94;
    undefined field125_0x95;
    undefined field126_0x96;
    undefined field127_0x97;
    undefined field128_0x98;
    undefined field129_0x99;
    undefined field130_0x9a;
    undefined field131_0x9b;
    undefined field132_0x9c;
    undefined field133_0x9d;
    undefined field134_0x9e;
    undefined field135_0x9f;
    undefined field136_0xa0;
    undefined field137_0xa1;
    undefined field138_0xa2;
    undefined field139_0xa3;
    undefined field140_0xa4;
    undefined field141_0xa5;
    undefined field142_0xa6;
    undefined field143_0xa7;
    undefined field144_0xa8;
    undefined field145_0xa9;
    undefined field146_0xaa;
    undefined field147_0xab;
    undefined field148_0xac;
    undefined field149_0xad;
    undefined field150_0xae;
    undefined field151_0xaf;
    undefined field152_0xb0;
    undefined field153_0xb1;
    undefined field154_0xb2;
    undefined field155_0xb3;
    undefined field156_0xb4;
    undefined field157_0xb5;
    undefined field158_0xb6;
    undefined field159_0xb7;
    undefined field160_0xb8;
    undefined field161_0xb9;
    undefined field162_0xba;
    undefined field163_0xbb;
    undefined field164_0xbc;
    undefined field165_0xbd;
    undefined field166_0xbe;
    undefined field167_0xbf;
    undefined field168_0xc0;
    undefined field169_0xc1;
    undefined field170_0xc2;
    undefined field171_0xc3;
    undefined field172_0xc4;
    undefined field173_0xc5;
    undefined field174_0xc6;
    undefined field175_0xc7;
    undefined field176_0xc8;
    undefined field177_0xc9;
    undefined field178_0xca;
    undefined field179_0xcb;
    undefined field180_0xcc;
    undefined field181_0xcd;
    undefined field182_0xce;
    undefined field183_0xcf;
    undefined field184_0xd0;
    undefined field185_0xd1;
    undefined field186_0xd2;
    undefined field187_0xd3;
    undefined field188_0xd4;
    undefined field189_0xd5;
    undefined field190_0xd6;
    undefined field191_0xd7;
    undefined field192_0xd8;
    undefined field193_0xd9;
    undefined field194_0xda;
    undefined field195_0xdb;
    undefined field196_0xdc;
    undefined field197_0xdd;
    undefined field198_0xde;
    undefined field199_0xdf;
    undefined field200_0xe0;
    undefined field201_0xe1;
    undefined field202_0xe2;
    undefined field203_0xe3;
    undefined field204_0xe4;
    undefined field205_0xe5;
    undefined field206_0xe6;
    undefined field207_0xe7;
    undefined field208_0xe8;
    undefined field209_0xe9;
    undefined field210_0xea;
    undefined field211_0xeb;
    undefined field212_0xec;
    undefined field213_0xed;
    undefined field214_0xee;
    undefined field215_0xef;
    undefined field216_0xf0;
    undefined field217_0xf1;
    undefined field218_0xf2;
    undefined field219_0xf3;
    undefined field220_0xf4;
    undefined field221_0xf5;
    undefined field222_0xf6;
    undefined field223_0xf7;
    undefined field224_0xf8;
    undefined field225_0xf9;
    undefined field226_0xfa;
    undefined field227_0xfb;
    undefined field228_0xfc;
    undefined field229_0xfd;
    undefined field230_0xfe;
    undefined field231_0xff;
    undefined field232_0x100;
    undefined field233_0x101;
    undefined field234_0x102;
    undefined field235_0x103;
    undefined field236_0x104;
    undefined field237_0x105;
    undefined field238_0x106;
    undefined field239_0x107;
    undefined field240_0x108;
    undefined field241_0x109;
    undefined field242_0x10a;
    undefined field243_0x10b;
    undefined field244_0x10c;
    undefined field245_0x10d;
    undefined field246_0x10e;
    undefined field247_0x10f;
    undefined field248_0x110;
    undefined field249_0x111;
    undefined field250_0x112;
    undefined field251_0x113;
    undefined field252_0x114;
    undefined field253_0x115;
    undefined field254_0x116;
    undefined field255_0x117;
    undefined field256_0x118;
    undefined field257_0x119;
    undefined field258_0x11a;
    undefined field259_0x11b;
    undefined field260_0x11c;
    undefined field261_0x11d;
    undefined field262_0x11e;
    undefined field263_0x11f;
    undefined field264_0x120;
    undefined field265_0x121;
    undefined field266_0x122;
    undefined field267_0x123;
    undefined field268_0x124;
    undefined field269_0x125;
    undefined field270_0x126;
    undefined field271_0x127;
    undefined field272_0x128;
    undefined field273_0x129;
    undefined field274_0x12a;
    undefined field275_0x12b;
    undefined field276_0x12c;
    undefined field277_0x12d;
    undefined field278_0x12e;
    undefined field279_0x12f;
    undefined field280_0x130;
    undefined field281_0x131;
    undefined field282_0x132;
    undefined field283_0x133;
    undefined field284_0x134;
    undefined field285_0x135;
    undefined field286_0x136;
    undefined field287_0x137;
    undefined field288_0x138;
    undefined field289_0x139;
    undefined field290_0x13a;
    undefined field291_0x13b;
    undefined field292_0x13c;
    undefined field293_0x13d;
    undefined field294_0x13e;
    undefined field295_0x13f;
    undefined field296_0x140;
    undefined field297_0x141;
    undefined field298_0x142;
    undefined field299_0x143;
    undefined field300_0x144;
    undefined field301_0x145;
    undefined field302_0x146;
    undefined field303_0x147;
    undefined field304_0x148;
    undefined field305_0x149;
    undefined field306_0x14a;
    undefined field307_0x14b;
    undefined field308_0x14c;
    undefined field309_0x14d;
    undefined field310_0x14e;
    undefined field311_0x14f;
    undefined field312_0x150;
    undefined field313_0x151;
    undefined field314_0x152;
    undefined field315_0x153;
    undefined field316_0x154;
    undefined field317_0x155;
    undefined field318_0x156;
    undefined field319_0x157;
    undefined field320_0x158;
    undefined field321_0x159;
    undefined field322_0x15a;
    undefined field323_0x15b;
    undefined field324_0x15c;
    undefined field325_0x15d;
    undefined field326_0x15e;
    undefined field327_0x15f;
    undefined field328_0x160;
    undefined field329_0x161;
    undefined field330_0x162;
    undefined field331_0x163;
    undefined field332_0x164;
    undefined field333_0x165;
    undefined field334_0x166;
    undefined field335_0x167;
    undefined field336_0x168;
    undefined field337_0x169;
    undefined field338_0x16a;
    undefined field339_0x16b;
    undefined field340_0x16c;
    undefined field341_0x16d;
    undefined field342_0x16e;
    undefined field343_0x16f;
    undefined field344_0x170;
    undefined field345_0x171;
    undefined field346_0x172;
    undefined field347_0x173;
    undefined field348_0x174;
    undefined field349_0x175;
    undefined field350_0x176;
    undefined field351_0x177;
    undefined field352_0x178;
    undefined field353_0x179;
    undefined field354_0x17a;
    undefined field355_0x17b;
    undefined field356_0x17c;
    undefined field357_0x17d;
    undefined field358_0x17e;
    undefined field359_0x17f;
    uint CAN_TI0R; // CAN_TI0R
    uint CAN_TDT0R; // CAN_TDT0R
    uint CAN_TDL0R; // CAN_TDL0R
    uint CAN_TDH0R; // CAN_TDH0R
    uint CAN_TI1R; // CAN_TI1R
    uint CAN_TDT1R; // CAN_TDT1R
    uint CAN_TDL1R; // CAN_TDL1R
    uint CAN_TDH1R; // CAN_TDH1R
    uint CAN_TI2R; // CAN_TI2R
    uint CAN_TDT2R; // CAN_TDT2R
    uint CAN_TDL2R; // CAN_TDL2R
    uint CAN_TDH2R; // CAN_TDH2R
    uint CAN_RI0R; // CAN_RI0R
    uint CAN_RDT0R; // CAN_RDT0R
    uint CAN_RDL0R; // CAN_RDL0R
    uint CAN_RDH0R; // CAN_RDH0R
    uint CAN_RI1R; // CAN_RI1R
    uint CAN_RDT1R; // CAN_RDT1R
    uint CAN_RDL1R; // CAN_RDL1R
    uint CAN_RDH1R; // CAN_RDH1R
    undefined field380_0x1d0;
    undefined field381_0x1d1;
    undefined field382_0x1d2;
    undefined field383_0x1d3;
    undefined field384_0x1d4;
    undefined field385_0x1d5;
    undefined field386_0x1d6;
    undefined field387_0x1d7;
    undefined field388_0x1d8;
    undefined field389_0x1d9;
    undefined field390_0x1da;
    undefined field391_0x1db;
    undefined field392_0x1dc;
    undefined field393_0x1dd;
    undefined field394_0x1de;
    undefined field395_0x1df;
    undefined field396_0x1e0;
    undefined field397_0x1e1;
    undefined field398_0x1e2;
    undefined field399_0x1e3;
    undefined field400_0x1e4;
    undefined field401_0x1e5;
    undefined field402_0x1e6;
    undefined field403_0x1e7;
    undefined field404_0x1e8;
    undefined field405_0x1e9;
    undefined field406_0x1ea;
    undefined field407_0x1eb;
    undefined field408_0x1ec;
    undefined field409_0x1ed;
    undefined field410_0x1ee;
    undefined field411_0x1ef;
    undefined field412_0x1f0;
    undefined field413_0x1f1;
    undefined field414_0x1f2;
    undefined field415_0x1f3;
    undefined field416_0x1f4;
    undefined field417_0x1f5;
    undefined field418_0x1f6;
    undefined field419_0x1f7;
    undefined field420_0x1f8;
    undefined field421_0x1f9;
    undefined field422_0x1fa;
    undefined field423_0x1fb;
    undefined field424_0x1fc;
    undefined field425_0x1fd;
    undefined field426_0x1fe;
    undefined field427_0x1ff;
    uint CAN_FMR; // CAN_FMR
    uint CAN_FM1R; // CAN_FM1R
    undefined field430_0x208;
    undefined field431_0x209;
    undefined field432_0x20a;
    undefined field433_0x20b;
    uint CAN_FS1R; // CAN_FS1R
    undefined field435_0x210;
    undefined field436_0x211;
    undefined field437_0x212;
    undefined field438_0x213;
    uint CAN_FFA1R; // CAN_FFA1R
    undefined field440_0x218;
    undefined field441_0x219;
    undefined field442_0x21a;
    undefined field443_0x21b;
    uint CAN_FA1R; // CAN_FA1R
    undefined field445_0x220;
    undefined field446_0x221;
    undefined field447_0x222;
    undefined field448_0x223;
    undefined field449_0x224;
    undefined field450_0x225;
    undefined field451_0x226;
    undefined field452_0x227;
    undefined field453_0x228;
    undefined field454_0x229;
    undefined field455_0x22a;
    undefined field456_0x22b;
    undefined field457_0x22c;
    undefined field458_0x22d;
    undefined field459_0x22e;
    undefined field460_0x22f;
    undefined field461_0x230;
    undefined field462_0x231;
    undefined field463_0x232;
    undefined field464_0x233;
    undefined field465_0x234;
    undefined field466_0x235;
    undefined field467_0x236;
    undefined field468_0x237;
    undefined field469_0x238;
    undefined field470_0x239;
    undefined field471_0x23a;
    undefined field472_0x23b;
    undefined field473_0x23c;
    undefined field474_0x23d;
    undefined field475_0x23e;
    undefined field476_0x23f;
    uint F0R1; // Filter bank 0 register 1
    uint F0R2; // Filter bank 0 register 2
    uint F1R1; // Filter bank 1 register 1
    uint F1R2; // Filter bank 1 register 2
    uint F2R1; // Filter bank 2 register 1
    uint F2R2; // Filter bank 2 register 2
    uint F3R1; // Filter bank 3 register 1
    uint F3R2; // Filter bank 3 register 2
    uint F4R1; // Filter bank 4 register 1
    uint F4R2; // Filter bank 4 register 2
    uint F5R1; // Filter bank 5 register 1
    uint F5R2; // Filter bank 5 register 2
    uint F6R1; // Filter bank 6 register 1
    uint F6R2; // Filter bank 6 register 2
    uint F7R1; // Filter bank 7 register 1
    uint F7R2; // Filter bank 7 register 2
    uint F8R1; // Filter bank 8 register 1
    uint F8R2; // Filter bank 8 register 2
    uint F9R1; // Filter bank 9 register 1
    uint F9R2; // Filter bank 9 register 2
    uint F10R1; // Filter bank 10 register 1
    uint F10R2; // Filter bank 10 register 2
    uint F11R1; // Filter bank 11 register 1
    uint F11R2; // Filter bank 11 register 2
    uint F12R1; // Filter bank 4 register 1
    uint F12R2; // Filter bank 12 register 2
    uint F13R1; // Filter bank 13 register 1
    uint F13R2; // Filter bank 13 register 2
};

typedef struct ETHERNET_DMA ETHERNET_DMA, *PETHERNET_DMA;

struct ETHERNET_DMA {
    uint DMABMR; // Ethernet DMA bus mode register
    uint DMATPDR; // Ethernet DMA transmit poll demand
          register
    uint DMARPDR; // EHERNET DMA receive poll demand
          register
    uint DMARDLAR; // Ethernet DMA receive descriptor list address
          register
    uint DMATDLAR; // Ethernet DMA transmit descriptor list
          address register
    uint DMASR; // Ethernet DMA status register
    uint DMAOMR; // Ethernet DMA operation mode
          register
    uint DMAIER; // Ethernet DMA interrupt enable
          register
    uint DMAMFBOCR; // Ethernet DMA missed frame and buffer
          overflow counter register
    undefined field9_0x24;
    undefined field10_0x25;
    undefined field11_0x26;
    undefined field12_0x27;
    undefined field13_0x28;
    undefined field14_0x29;
    undefined field15_0x2a;
    undefined field16_0x2b;
    undefined field17_0x2c;
    undefined field18_0x2d;
    undefined field19_0x2e;
    undefined field20_0x2f;
    undefined field21_0x30;
    undefined field22_0x31;
    undefined field23_0x32;
    undefined field24_0x33;
    undefined field25_0x34;
    undefined field26_0x35;
    undefined field27_0x36;
    undefined field28_0x37;
    undefined field29_0x38;
    undefined field30_0x39;
    undefined field31_0x3a;
    undefined field32_0x3b;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    undefined field37_0x40;
    undefined field38_0x41;
    undefined field39_0x42;
    undefined field40_0x43;
    undefined field41_0x44;
    undefined field42_0x45;
    undefined field43_0x46;
    undefined field44_0x47;
    uint DMACHTDR; // Ethernet DMA current host transmit
          descriptor register
    uint DMACHRDR; // Ethernet DMA current host receive descriptor
          register
    uint DMACHTBAR; // Ethernet DMA current host transmit buffer
          address register
    uint DMACHRBAR; // Ethernet DMA current host receive buffer
          address register
};

typedef struct ADC2 ADC2, *PADC2;

struct ADC2 {
    uint SR; // status register
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMPR1; // sample time register 1
    uint SMPR2; // sample time register 2
    uint JOFR1; // injected channel data offset register
          x
    uint JOFR2; // injected channel data offset register
          x
    uint JOFR3; // injected channel data offset register
          x
    uint JOFR4; // injected channel data offset register
          x
    uint HTR; // watchdog higher threshold
          register
    uint LTR; // watchdog lower threshold
          register
    uint SQR1; // regular sequence register 1
    uint SQR2; // regular sequence register 2
    uint SQR3; // regular sequence register 3
    uint JSQR; // injected sequence register
    uint JDR1; // injected data register x
    uint JDR2; // injected data register x
    uint JDR3; // injected data register x
    uint JDR4; // injected data register x
    uint DR; // regular data register
};

typedef struct ADC3 ADC3, *PADC3;

struct ADC3 {
    uint SR; // status register
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMPR1; // sample time register 1
    uint SMPR2; // sample time register 2
    uint JOFR1; // injected channel data offset register
          x
    uint JOFR2; // injected channel data offset register
          x
    uint JOFR3; // injected channel data offset register
          x
    uint JOFR4; // injected channel data offset register
          x
    uint HTR; // watchdog higher threshold
          register
    uint LTR; // watchdog lower threshold
          register
    uint SQR1; // regular sequence register 1
    uint SQR2; // regular sequence register 2
    uint SQR3; // regular sequence register 3
    uint JSQR; // injected sequence register
    uint JDR1; // injected data register x
    uint JDR2; // injected data register x
    uint JDR3; // injected data register x
    uint JDR4; // injected data register x
    uint DR; // regular data register
};

typedef struct ADC1 ADC1, *PADC1;

struct ADC1 {
    uint SR; // status register
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMPR1; // sample time register 1
    uint SMPR2; // sample time register 2
    uint JOFR1; // injected channel data offset register
          x
    uint JOFR2; // injected channel data offset register
          x
    uint JOFR3; // injected channel data offset register
          x
    uint JOFR4; // injected channel data offset register
          x
    uint HTR; // watchdog higher threshold
          register
    uint LTR; // watchdog lower threshold
          register
    uint SQR1; // regular sequence register 1
    uint SQR2; // regular sequence register 2
    uint SQR3; // regular sequence register 3
    uint JSQR; // injected sequence register
    uint JDR1; // injected data register x
    uint JDR2; // injected data register x
    uint JDR3; // injected data register x
    uint JDR4; // injected data register x
    uint DR; // regular data register
};

typedef struct OTG_FS_PWRCLK OTG_FS_PWRCLK, *POTG_FS_PWRCLK;

struct OTG_FS_PWRCLK {
    uint FS_PCGCCTL; // OTG_FS power and clock gating control
          register
};

typedef struct ETHERNET_PTP ETHERNET_PTP, *PETHERNET_PTP;

struct ETHERNET_PTP {
    uint PTPTSCR; // Ethernet PTP time stamp control register
          (ETH_PTPTSCR)
    uint PTPSSIR; // Ethernet PTP subsecond increment
          register
    uint PTPTSHR; // Ethernet PTP time stamp high
          register
    uint PTPTSLR; // Ethernet PTP time stamp low register
          (ETH_PTPTSLR)
    uint PTPTSHUR; // Ethernet PTP time stamp high update
          register
    uint PTPTSLUR; // Ethernet PTP time stamp low update register
          (ETH_PTPTSLUR)
    uint PTPTSAR; // Ethernet PTP time stamp addend
          register
    uint PTPTTHR; // Ethernet PTP target time high
          register
    uint PTPTTLR; // Ethernet PTP target time low
          register
};

typedef struct OTG_FS_HOST OTG_FS_HOST, *POTG_FS_HOST;

struct OTG_FS_HOST {
    uint FS_HCFG; // OTG_FS host configuration register
          (OTG_FS_HCFG)
    uint HFIR; // OTG_FS Host frame interval
          register
    uint FS_HFNUM; // OTG_FS host frame number/frame time
          remaining register (OTG_FS_HFNUM)
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    uint FS_HPTXSTS; // OTG_FS_Host periodic transmit FIFO/queue
          status register (OTG_FS_HPTXSTS)
    uint HAINT; // OTG_FS Host all channels interrupt
          register
    uint HAINTMSK; // OTG_FS host all channels interrupt mask
          register
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    undefined field14_0x20;
    undefined field15_0x21;
    undefined field16_0x22;
    undefined field17_0x23;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    undefined field22_0x28;
    undefined field23_0x29;
    undefined field24_0x2a;
    undefined field25_0x2b;
    undefined field26_0x2c;
    undefined field27_0x2d;
    undefined field28_0x2e;
    undefined field29_0x2f;
    undefined field30_0x30;
    undefined field31_0x31;
    undefined field32_0x32;
    undefined field33_0x33;
    undefined field34_0x34;
    undefined field35_0x35;
    undefined field36_0x36;
    undefined field37_0x37;
    undefined field38_0x38;
    undefined field39_0x39;
    undefined field40_0x3a;
    undefined field41_0x3b;
    undefined field42_0x3c;
    undefined field43_0x3d;
    undefined field44_0x3e;
    undefined field45_0x3f;
    uint FS_HPRT; // OTG_FS host port control and status register
          (OTG_FS_HPRT)
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
    undefined field155_0xb0;
    undefined field156_0xb1;
    undefined field157_0xb2;
    undefined field158_0xb3;
    undefined field159_0xb4;
    undefined field160_0xb5;
    undefined field161_0xb6;
    undefined field162_0xb7;
    undefined field163_0xb8;
    undefined field164_0xb9;
    undefined field165_0xba;
    undefined field166_0xbb;
    undefined field167_0xbc;
    undefined field168_0xbd;
    undefined field169_0xbe;
    undefined field170_0xbf;
    undefined field171_0xc0;
    undefined field172_0xc1;
    undefined field173_0xc2;
    undefined field174_0xc3;
    undefined field175_0xc4;
    undefined field176_0xc5;
    undefined field177_0xc6;
    undefined field178_0xc7;
    undefined field179_0xc8;
    undefined field180_0xc9;
    undefined field181_0xca;
    undefined field182_0xcb;
    undefined field183_0xcc;
    undefined field184_0xcd;
    undefined field185_0xce;
    undefined field186_0xcf;
    undefined field187_0xd0;
    undefined field188_0xd1;
    undefined field189_0xd2;
    undefined field190_0xd3;
    undefined field191_0xd4;
    undefined field192_0xd5;
    undefined field193_0xd6;
    undefined field194_0xd7;
    undefined field195_0xd8;
    undefined field196_0xd9;
    undefined field197_0xda;
    undefined field198_0xdb;
    undefined field199_0xdc;
    undefined field200_0xdd;
    undefined field201_0xde;
    undefined field202_0xdf;
    undefined field203_0xe0;
    undefined field204_0xe1;
    undefined field205_0xe2;
    undefined field206_0xe3;
    undefined field207_0xe4;
    undefined field208_0xe5;
    undefined field209_0xe6;
    undefined field210_0xe7;
    undefined field211_0xe8;
    undefined field212_0xe9;
    undefined field213_0xea;
    undefined field214_0xeb;
    undefined field215_0xec;
    undefined field216_0xed;
    undefined field217_0xee;
    undefined field218_0xef;
    undefined field219_0xf0;
    undefined field220_0xf1;
    undefined field221_0xf2;
    undefined field222_0xf3;
    undefined field223_0xf4;
    undefined field224_0xf5;
    undefined field225_0xf6;
    undefined field226_0xf7;
    undefined field227_0xf8;
    undefined field228_0xf9;
    undefined field229_0xfa;
    undefined field230_0xfb;
    undefined field231_0xfc;
    undefined field232_0xfd;
    undefined field233_0xfe;
    undefined field234_0xff;
    uint FS_HCCHAR0; // OTG_FS host channel-0 characteristics
          register (OTG_FS_HCCHAR0)
    undefined field236_0x104;
    undefined field237_0x105;
    undefined field238_0x106;
    undefined field239_0x107;
    uint FS_HCINT0; // OTG_FS host channel-0 interrupt register
          (OTG_FS_HCINT0)
    uint FS_HCINTMSK0; // OTG_FS host channel-0 mask register
          (OTG_FS_HCINTMSK0)
    uint FS_HCTSIZ0; // OTG_FS host channel-0 transfer size
          register
    undefined field243_0x114;
    undefined field244_0x115;
    undefined field245_0x116;
    undefined field246_0x117;
    undefined field247_0x118;
    undefined field248_0x119;
    undefined field249_0x11a;
    undefined field250_0x11b;
    undefined field251_0x11c;
    undefined field252_0x11d;
    undefined field253_0x11e;
    undefined field254_0x11f;
    uint FS_HCCHAR1; // OTG_FS host channel-1 characteristics
          register (OTG_FS_HCCHAR1)
    undefined field256_0x124;
    undefined field257_0x125;
    undefined field258_0x126;
    undefined field259_0x127;
    uint FS_HCINT1; // OTG_FS host channel-1 interrupt register
          (OTG_FS_HCINT1)
    uint FS_HCINTMSK1; // OTG_FS host channel-1 mask register
          (OTG_FS_HCINTMSK1)
    uint FS_HCTSIZ1; // OTG_FS host channel-1 transfer size
          register
    undefined field263_0x134;
    undefined field264_0x135;
    undefined field265_0x136;
    undefined field266_0x137;
    undefined field267_0x138;
    undefined field268_0x139;
    undefined field269_0x13a;
    undefined field270_0x13b;
    undefined field271_0x13c;
    undefined field272_0x13d;
    undefined field273_0x13e;
    undefined field274_0x13f;
    uint FS_HCCHAR2; // OTG_FS host channel-2 characteristics
          register (OTG_FS_HCCHAR2)
    undefined field276_0x144;
    undefined field277_0x145;
    undefined field278_0x146;
    undefined field279_0x147;
    uint FS_HCINT2; // OTG_FS host channel-2 interrupt register
          (OTG_FS_HCINT2)
    uint FS_HCINTMSK2; // OTG_FS host channel-2 mask register
          (OTG_FS_HCINTMSK2)
    uint FS_HCTSIZ2; // OTG_FS host channel-2 transfer size
          register
    undefined field283_0x154;
    undefined field284_0x155;
    undefined field285_0x156;
    undefined field286_0x157;
    undefined field287_0x158;
    undefined field288_0x159;
    undefined field289_0x15a;
    undefined field290_0x15b;
    undefined field291_0x15c;
    undefined field292_0x15d;
    undefined field293_0x15e;
    undefined field294_0x15f;
    uint FS_HCCHAR3; // OTG_FS host channel-3 characteristics
          register (OTG_FS_HCCHAR3)
    undefined field296_0x164;
    undefined field297_0x165;
    undefined field298_0x166;
    undefined field299_0x167;
    uint FS_HCINT3; // OTG_FS host channel-3 interrupt register
          (OTG_FS_HCINT3)
    uint FS_HCINTMSK3; // OTG_FS host channel-3 mask register
          (OTG_FS_HCINTMSK3)
    uint FS_HCTSIZ3; // OTG_FS host channel-3 transfer size
          register
    undefined field303_0x174;
    undefined field304_0x175;
    undefined field305_0x176;
    undefined field306_0x177;
    undefined field307_0x178;
    undefined field308_0x179;
    undefined field309_0x17a;
    undefined field310_0x17b;
    undefined field311_0x17c;
    undefined field312_0x17d;
    undefined field313_0x17e;
    undefined field314_0x17f;
    uint FS_HCCHAR4; // OTG_FS host channel-4 characteristics
          register (OTG_FS_HCCHAR4)
    undefined field316_0x184;
    undefined field317_0x185;
    undefined field318_0x186;
    undefined field319_0x187;
    uint FS_HCINT4; // OTG_FS host channel-4 interrupt register
          (OTG_FS_HCINT4)
    uint FS_HCINTMSK4; // OTG_FS host channel-4 mask register
          (OTG_FS_HCINTMSK4)
    uint FS_HCTSIZ4; // OTG_FS host channel-x transfer size
          register
    undefined field323_0x194;
    undefined field324_0x195;
    undefined field325_0x196;
    undefined field326_0x197;
    undefined field327_0x198;
    undefined field328_0x199;
    undefined field329_0x19a;
    undefined field330_0x19b;
    undefined field331_0x19c;
    undefined field332_0x19d;
    undefined field333_0x19e;
    undefined field334_0x19f;
    uint FS_HCCHAR5; // OTG_FS host channel-5 characteristics
          register (OTG_FS_HCCHAR5)
    undefined field336_0x1a4;
    undefined field337_0x1a5;
    undefined field338_0x1a6;
    undefined field339_0x1a7;
    uint FS_HCINT5; // OTG_FS host channel-5 interrupt register
          (OTG_FS_HCINT5)
    uint FS_HCINTMSK5; // OTG_FS host channel-5 mask register
          (OTG_FS_HCINTMSK5)
    uint FS_HCTSIZ5; // OTG_FS host channel-5 transfer size
          register
    undefined field343_0x1b4;
    undefined field344_0x1b5;
    undefined field345_0x1b6;
    undefined field346_0x1b7;
    undefined field347_0x1b8;
    undefined field348_0x1b9;
    undefined field349_0x1ba;
    undefined field350_0x1bb;
    undefined field351_0x1bc;
    undefined field352_0x1bd;
    undefined field353_0x1be;
    undefined field354_0x1bf;
    uint FS_HCCHAR6; // OTG_FS host channel-6 characteristics
          register (OTG_FS_HCCHAR6)
    undefined field356_0x1c4;
    undefined field357_0x1c5;
    undefined field358_0x1c6;
    undefined field359_0x1c7;
    uint FS_HCINT6; // OTG_FS host channel-6 interrupt register
          (OTG_FS_HCINT6)
    uint FS_HCINTMSK6; // OTG_FS host channel-6 mask register
          (OTG_FS_HCINTMSK6)
    uint FS_HCTSIZ6; // OTG_FS host channel-6 transfer size
          register
    undefined field363_0x1d4;
    undefined field364_0x1d5;
    undefined field365_0x1d6;
    undefined field366_0x1d7;
    undefined field367_0x1d8;
    undefined field368_0x1d9;
    undefined field369_0x1da;
    undefined field370_0x1db;
    undefined field371_0x1dc;
    undefined field372_0x1dd;
    undefined field373_0x1de;
    undefined field374_0x1df;
    uint FS_HCCHAR7; // OTG_FS host channel-7 characteristics
          register (OTG_FS_HCCHAR7)
    undefined field376_0x1e4;
    undefined field377_0x1e5;
    undefined field378_0x1e6;
    undefined field379_0x1e7;
    uint FS_HCINT7; // OTG_FS host channel-7 interrupt register
          (OTG_FS_HCINT7)
    uint FS_HCINTMSK7; // OTG_FS host channel-7 mask register
          (OTG_FS_HCINTMSK7)
    uint FS_HCTSIZ7; // OTG_FS host channel-7 transfer size
          register
};

typedef struct CRC CRC, *PCRC;

struct CRC {
    uint DR; // Data register
    uint IDR; // Independent Data register
    uint CR; // Control register
};

typedef struct NVIC NVIC, *PNVIC;

struct NVIC {
    uint ISER0; // Interrupt Set-Enable Register
    uint ISER1; // Interrupt Set-Enable Register
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined field34_0x28;
    undefined field35_0x29;
    undefined field36_0x2a;
    undefined field37_0x2b;
    undefined field38_0x2c;
    undefined field39_0x2d;
    undefined field40_0x2e;
    undefined field41_0x2f;
    undefined field42_0x30;
    undefined field43_0x31;
    undefined field44_0x32;
    undefined field45_0x33;
    undefined field46_0x34;
    undefined field47_0x35;
    undefined field48_0x36;
    undefined field49_0x37;
    undefined field50_0x38;
    undefined field51_0x39;
    undefined field52_0x3a;
    undefined field53_0x3b;
    undefined field54_0x3c;
    undefined field55_0x3d;
    undefined field56_0x3e;
    undefined field57_0x3f;
    undefined field58_0x40;
    undefined field59_0x41;
    undefined field60_0x42;
    undefined field61_0x43;
    undefined field62_0x44;
    undefined field63_0x45;
    undefined field64_0x46;
    undefined field65_0x47;
    undefined field66_0x48;
    undefined field67_0x49;
    undefined field68_0x4a;
    undefined field69_0x4b;
    undefined field70_0x4c;
    undefined field71_0x4d;
    undefined field72_0x4e;
    undefined field73_0x4f;
    undefined field74_0x50;
    undefined field75_0x51;
    undefined field76_0x52;
    undefined field77_0x53;
    undefined field78_0x54;
    undefined field79_0x55;
    undefined field80_0x56;
    undefined field81_0x57;
    undefined field82_0x58;
    undefined field83_0x59;
    undefined field84_0x5a;
    undefined field85_0x5b;
    undefined field86_0x5c;
    undefined field87_0x5d;
    undefined field88_0x5e;
    undefined field89_0x5f;
    undefined field90_0x60;
    undefined field91_0x61;
    undefined field92_0x62;
    undefined field93_0x63;
    undefined field94_0x64;
    undefined field95_0x65;
    undefined field96_0x66;
    undefined field97_0x67;
    undefined field98_0x68;
    undefined field99_0x69;
    undefined field100_0x6a;
    undefined field101_0x6b;
    undefined field102_0x6c;
    undefined field103_0x6d;
    undefined field104_0x6e;
    undefined field105_0x6f;
    undefined field106_0x70;
    undefined field107_0x71;
    undefined field108_0x72;
    undefined field109_0x73;
    undefined field110_0x74;
    undefined field111_0x75;
    undefined field112_0x76;
    undefined field113_0x77;
    undefined field114_0x78;
    undefined field115_0x79;
    undefined field116_0x7a;
    undefined field117_0x7b;
    undefined field118_0x7c;
    undefined field119_0x7d;
    undefined field120_0x7e;
    undefined field121_0x7f;
    uint ICER0; // Interrupt Clear-Enable
          Register
    uint ICER1; // Interrupt Clear-Enable
          Register
    undefined field124_0x88;
    undefined field125_0x89;
    undefined field126_0x8a;
    undefined field127_0x8b;
    undefined field128_0x8c;
    undefined field129_0x8d;
    undefined field130_0x8e;
    undefined field131_0x8f;
    undefined field132_0x90;
    undefined field133_0x91;
    undefined field134_0x92;
    undefined field135_0x93;
    undefined field136_0x94;
    undefined field137_0x95;
    undefined field138_0x96;
    undefined field139_0x97;
    undefined field140_0x98;
    undefined field141_0x99;
    undefined field142_0x9a;
    undefined field143_0x9b;
    undefined field144_0x9c;
    undefined field145_0x9d;
    undefined field146_0x9e;
    undefined field147_0x9f;
    undefined field148_0xa0;
    undefined field149_0xa1;
    undefined field150_0xa2;
    undefined field151_0xa3;
    undefined field152_0xa4;
    undefined field153_0xa5;
    undefined field154_0xa6;
    undefined field155_0xa7;
    undefined field156_0xa8;
    undefined field157_0xa9;
    undefined field158_0xaa;
    undefined field159_0xab;
    undefined field160_0xac;
    undefined field161_0xad;
    undefined field162_0xae;
    undefined field163_0xaf;
    undefined field164_0xb0;
    undefined field165_0xb1;
    undefined field166_0xb2;
    undefined field167_0xb3;
    undefined field168_0xb4;
    undefined field169_0xb5;
    undefined field170_0xb6;
    undefined field171_0xb7;
    undefined field172_0xb8;
    undefined field173_0xb9;
    undefined field174_0xba;
    undefined field175_0xbb;
    undefined field176_0xbc;
    undefined field177_0xbd;
    undefined field178_0xbe;
    undefined field179_0xbf;
    undefined field180_0xc0;
    undefined field181_0xc1;
    undefined field182_0xc2;
    undefined field183_0xc3;
    undefined field184_0xc4;
    undefined field185_0xc5;
    undefined field186_0xc6;
    undefined field187_0xc7;
    undefined field188_0xc8;
    undefined field189_0xc9;
    undefined field190_0xca;
    undefined field191_0xcb;
    undefined field192_0xcc;
    undefined field193_0xcd;
    undefined field194_0xce;
    undefined field195_0xcf;
    undefined field196_0xd0;
    undefined field197_0xd1;
    undefined field198_0xd2;
    undefined field199_0xd3;
    undefined field200_0xd4;
    undefined field201_0xd5;
    undefined field202_0xd6;
    undefined field203_0xd7;
    undefined field204_0xd8;
    undefined field205_0xd9;
    undefined field206_0xda;
    undefined field207_0xdb;
    undefined field208_0xdc;
    undefined field209_0xdd;
    undefined field210_0xde;
    undefined field211_0xdf;
    undefined field212_0xe0;
    undefined field213_0xe1;
    undefined field214_0xe2;
    undefined field215_0xe3;
    undefined field216_0xe4;
    undefined field217_0xe5;
    undefined field218_0xe6;
    undefined field219_0xe7;
    undefined field220_0xe8;
    undefined field221_0xe9;
    undefined field222_0xea;
    undefined field223_0xeb;
    undefined field224_0xec;
    undefined field225_0xed;
    undefined field226_0xee;
    undefined field227_0xef;
    undefined field228_0xf0;
    undefined field229_0xf1;
    undefined field230_0xf2;
    undefined field231_0xf3;
    undefined field232_0xf4;
    undefined field233_0xf5;
    undefined field234_0xf6;
    undefined field235_0xf7;
    undefined field236_0xf8;
    undefined field237_0xf9;
    undefined field238_0xfa;
    undefined field239_0xfb;
    undefined field240_0xfc;
    undefined field241_0xfd;
    undefined field242_0xfe;
    undefined field243_0xff;
    uint ISPR0; // Interrupt Set-Pending Register
    uint ISPR1; // Interrupt Set-Pending Register
    undefined field246_0x108;
    undefined field247_0x109;
    undefined field248_0x10a;
    undefined field249_0x10b;
    undefined field250_0x10c;
    undefined field251_0x10d;
    undefined field252_0x10e;
    undefined field253_0x10f;
    undefined field254_0x110;
    undefined field255_0x111;
    undefined field256_0x112;
    undefined field257_0x113;
    undefined field258_0x114;
    undefined field259_0x115;
    undefined field260_0x116;
    undefined field261_0x117;
    undefined field262_0x118;
    undefined field263_0x119;
    undefined field264_0x11a;
    undefined field265_0x11b;
    undefined field266_0x11c;
    undefined field267_0x11d;
    undefined field268_0x11e;
    undefined field269_0x11f;
    undefined field270_0x120;
    undefined field271_0x121;
    undefined field272_0x122;
    undefined field273_0x123;
    undefined field274_0x124;
    undefined field275_0x125;
    undefined field276_0x126;
    undefined field277_0x127;
    undefined field278_0x128;
    undefined field279_0x129;
    undefined field280_0x12a;
    undefined field281_0x12b;
    undefined field282_0x12c;
    undefined field283_0x12d;
    undefined field284_0x12e;
    undefined field285_0x12f;
    undefined field286_0x130;
    undefined field287_0x131;
    undefined field288_0x132;
    undefined field289_0x133;
    undefined field290_0x134;
    undefined field291_0x135;
    undefined field292_0x136;
    undefined field293_0x137;
    undefined field294_0x138;
    undefined field295_0x139;
    undefined field296_0x13a;
    undefined field297_0x13b;
    undefined field298_0x13c;
    undefined field299_0x13d;
    undefined field300_0x13e;
    undefined field301_0x13f;
    undefined field302_0x140;
    undefined field303_0x141;
    undefined field304_0x142;
    undefined field305_0x143;
    undefined field306_0x144;
    undefined field307_0x145;
    undefined field308_0x146;
    undefined field309_0x147;
    undefined field310_0x148;
    undefined field311_0x149;
    undefined field312_0x14a;
    undefined field313_0x14b;
    undefined field314_0x14c;
    undefined field315_0x14d;
    undefined field316_0x14e;
    undefined field317_0x14f;
    undefined field318_0x150;
    undefined field319_0x151;
    undefined field320_0x152;
    undefined field321_0x153;
    undefined field322_0x154;
    undefined field323_0x155;
    undefined field324_0x156;
    undefined field325_0x157;
    undefined field326_0x158;
    undefined field327_0x159;
    undefined field328_0x15a;
    undefined field329_0x15b;
    undefined field330_0x15c;
    undefined field331_0x15d;
    undefined field332_0x15e;
    undefined field333_0x15f;
    undefined field334_0x160;
    undefined field335_0x161;
    undefined field336_0x162;
    undefined field337_0x163;
    undefined field338_0x164;
    undefined field339_0x165;
    undefined field340_0x166;
    undefined field341_0x167;
    undefined field342_0x168;
    undefined field343_0x169;
    undefined field344_0x16a;
    undefined field345_0x16b;
    undefined field346_0x16c;
    undefined field347_0x16d;
    undefined field348_0x16e;
    undefined field349_0x16f;
    undefined field350_0x170;
    undefined field351_0x171;
    undefined field352_0x172;
    undefined field353_0x173;
    undefined field354_0x174;
    undefined field355_0x175;
    undefined field356_0x176;
    undefined field357_0x177;
    undefined field358_0x178;
    undefined field359_0x179;
    undefined field360_0x17a;
    undefined field361_0x17b;
    undefined field362_0x17c;
    undefined field363_0x17d;
    undefined field364_0x17e;
    undefined field365_0x17f;
    uint ICPR0; // Interrupt Clear-Pending
          Register
    uint ICPR1; // Interrupt Clear-Pending
          Register
    undefined field368_0x188;
    undefined field369_0x189;
    undefined field370_0x18a;
    undefined field371_0x18b;
    undefined field372_0x18c;
    undefined field373_0x18d;
    undefined field374_0x18e;
    undefined field375_0x18f;
    undefined field376_0x190;
    undefined field377_0x191;
    undefined field378_0x192;
    undefined field379_0x193;
    undefined field380_0x194;
    undefined field381_0x195;
    undefined field382_0x196;
    undefined field383_0x197;
    undefined field384_0x198;
    undefined field385_0x199;
    undefined field386_0x19a;
    undefined field387_0x19b;
    undefined field388_0x19c;
    undefined field389_0x19d;
    undefined field390_0x19e;
    undefined field391_0x19f;
    undefined field392_0x1a0;
    undefined field393_0x1a1;
    undefined field394_0x1a2;
    undefined field395_0x1a3;
    undefined field396_0x1a4;
    undefined field397_0x1a5;
    undefined field398_0x1a6;
    undefined field399_0x1a7;
    undefined field400_0x1a8;
    undefined field401_0x1a9;
    undefined field402_0x1aa;
    undefined field403_0x1ab;
    undefined field404_0x1ac;
    undefined field405_0x1ad;
    undefined field406_0x1ae;
    undefined field407_0x1af;
    undefined field408_0x1b0;
    undefined field409_0x1b1;
    undefined field410_0x1b2;
    undefined field411_0x1b3;
    undefined field412_0x1b4;
    undefined field413_0x1b5;
    undefined field414_0x1b6;
    undefined field415_0x1b7;
    undefined field416_0x1b8;
    undefined field417_0x1b9;
    undefined field418_0x1ba;
    undefined field419_0x1bb;
    undefined field420_0x1bc;
    undefined field421_0x1bd;
    undefined field422_0x1be;
    undefined field423_0x1bf;
    undefined field424_0x1c0;
    undefined field425_0x1c1;
    undefined field426_0x1c2;
    undefined field427_0x1c3;
    undefined field428_0x1c4;
    undefined field429_0x1c5;
    undefined field430_0x1c6;
    undefined field431_0x1c7;
    undefined field432_0x1c8;
    undefined field433_0x1c9;
    undefined field434_0x1ca;
    undefined field435_0x1cb;
    undefined field436_0x1cc;
    undefined field437_0x1cd;
    undefined field438_0x1ce;
    undefined field439_0x1cf;
    undefined field440_0x1d0;
    undefined field441_0x1d1;
    undefined field442_0x1d2;
    undefined field443_0x1d3;
    undefined field444_0x1d4;
    undefined field445_0x1d5;
    undefined field446_0x1d6;
    undefined field447_0x1d7;
    undefined field448_0x1d8;
    undefined field449_0x1d9;
    undefined field450_0x1da;
    undefined field451_0x1db;
    undefined field452_0x1dc;
    undefined field453_0x1dd;
    undefined field454_0x1de;
    undefined field455_0x1df;
    undefined field456_0x1e0;
    undefined field457_0x1e1;
    undefined field458_0x1e2;
    undefined field459_0x1e3;
    undefined field460_0x1e4;
    undefined field461_0x1e5;
    undefined field462_0x1e6;
    undefined field463_0x1e7;
    undefined field464_0x1e8;
    undefined field465_0x1e9;
    undefined field466_0x1ea;
    undefined field467_0x1eb;
    undefined field468_0x1ec;
    undefined field469_0x1ed;
    undefined field470_0x1ee;
    undefined field471_0x1ef;
    undefined field472_0x1f0;
    undefined field473_0x1f1;
    undefined field474_0x1f2;
    undefined field475_0x1f3;
    undefined field476_0x1f4;
    undefined field477_0x1f5;
    undefined field478_0x1f6;
    undefined field479_0x1f7;
    undefined field480_0x1f8;
    undefined field481_0x1f9;
    undefined field482_0x1fa;
    undefined field483_0x1fb;
    undefined field484_0x1fc;
    undefined field485_0x1fd;
    undefined field486_0x1fe;
    undefined field487_0x1ff;
    uint IABR0; // Interrupt Active Bit Register
    uint IABR1; // Interrupt Active Bit Register
    undefined field490_0x208;
    undefined field491_0x209;
    undefined field492_0x20a;
    undefined field493_0x20b;
    undefined field494_0x20c;
    undefined field495_0x20d;
    undefined field496_0x20e;
    undefined field497_0x20f;
    undefined field498_0x210;
    undefined field499_0x211;
    undefined field500_0x212;
    undefined field501_0x213;
    undefined field502_0x214;
    undefined field503_0x215;
    undefined field504_0x216;
    undefined field505_0x217;
    undefined field506_0x218;
    undefined field507_0x219;
    undefined field508_0x21a;
    undefined field509_0x21b;
    undefined field510_0x21c;
    undefined field511_0x21d;
    undefined field512_0x21e;
    undefined field513_0x21f;
    undefined field514_0x220;
    undefined field515_0x221;
    undefined field516_0x222;
    undefined field517_0x223;
    undefined field518_0x224;
    undefined field519_0x225;
    undefined field520_0x226;
    undefined field521_0x227;
    undefined field522_0x228;
    undefined field523_0x229;
    undefined field524_0x22a;
    undefined field525_0x22b;
    undefined field526_0x22c;
    undefined field527_0x22d;
    undefined field528_0x22e;
    undefined field529_0x22f;
    undefined field530_0x230;
    undefined field531_0x231;
    undefined field532_0x232;
    undefined field533_0x233;
    undefined field534_0x234;
    undefined field535_0x235;
    undefined field536_0x236;
    undefined field537_0x237;
    undefined field538_0x238;
    undefined field539_0x239;
    undefined field540_0x23a;
    undefined field541_0x23b;
    undefined field542_0x23c;
    undefined field543_0x23d;
    undefined field544_0x23e;
    undefined field545_0x23f;
    undefined field546_0x240;
    undefined field547_0x241;
    undefined field548_0x242;
    undefined field549_0x243;
    undefined field550_0x244;
    undefined field551_0x245;
    undefined field552_0x246;
    undefined field553_0x247;
    undefined field554_0x248;
    undefined field555_0x249;
    undefined field556_0x24a;
    undefined field557_0x24b;
    undefined field558_0x24c;
    undefined field559_0x24d;
    undefined field560_0x24e;
    undefined field561_0x24f;
    undefined field562_0x250;
    undefined field563_0x251;
    undefined field564_0x252;
    undefined field565_0x253;
    undefined field566_0x254;
    undefined field567_0x255;
    undefined field568_0x256;
    undefined field569_0x257;
    undefined field570_0x258;
    undefined field571_0x259;
    undefined field572_0x25a;
    undefined field573_0x25b;
    undefined field574_0x25c;
    undefined field575_0x25d;
    undefined field576_0x25e;
    undefined field577_0x25f;
    undefined field578_0x260;
    undefined field579_0x261;
    undefined field580_0x262;
    undefined field581_0x263;
    undefined field582_0x264;
    undefined field583_0x265;
    undefined field584_0x266;
    undefined field585_0x267;
    undefined field586_0x268;
    undefined field587_0x269;
    undefined field588_0x26a;
    undefined field589_0x26b;
    undefined field590_0x26c;
    undefined field591_0x26d;
    undefined field592_0x26e;
    undefined field593_0x26f;
    undefined field594_0x270;
    undefined field595_0x271;
    undefined field596_0x272;
    undefined field597_0x273;
    undefined field598_0x274;
    undefined field599_0x275;
    undefined field600_0x276;
    undefined field601_0x277;
    undefined field602_0x278;
    undefined field603_0x279;
    undefined field604_0x27a;
    undefined field605_0x27b;
    undefined field606_0x27c;
    undefined field607_0x27d;
    undefined field608_0x27e;
    undefined field609_0x27f;
    undefined field610_0x280;
    undefined field611_0x281;
    undefined field612_0x282;
    undefined field613_0x283;
    undefined field614_0x284;
    undefined field615_0x285;
    undefined field616_0x286;
    undefined field617_0x287;
    undefined field618_0x288;
    undefined field619_0x289;
    undefined field620_0x28a;
    undefined field621_0x28b;
    undefined field622_0x28c;
    undefined field623_0x28d;
    undefined field624_0x28e;
    undefined field625_0x28f;
    undefined field626_0x290;
    undefined field627_0x291;
    undefined field628_0x292;
    undefined field629_0x293;
    undefined field630_0x294;
    undefined field631_0x295;
    undefined field632_0x296;
    undefined field633_0x297;
    undefined field634_0x298;
    undefined field635_0x299;
    undefined field636_0x29a;
    undefined field637_0x29b;
    undefined field638_0x29c;
    undefined field639_0x29d;
    undefined field640_0x29e;
    undefined field641_0x29f;
    undefined field642_0x2a0;
    undefined field643_0x2a1;
    undefined field644_0x2a2;
    undefined field645_0x2a3;
    undefined field646_0x2a4;
    undefined field647_0x2a5;
    undefined field648_0x2a6;
    undefined field649_0x2a7;
    undefined field650_0x2a8;
    undefined field651_0x2a9;
    undefined field652_0x2aa;
    undefined field653_0x2ab;
    undefined field654_0x2ac;
    undefined field655_0x2ad;
    undefined field656_0x2ae;
    undefined field657_0x2af;
    undefined field658_0x2b0;
    undefined field659_0x2b1;
    undefined field660_0x2b2;
    undefined field661_0x2b3;
    undefined field662_0x2b4;
    undefined field663_0x2b5;
    undefined field664_0x2b6;
    undefined field665_0x2b7;
    undefined field666_0x2b8;
    undefined field667_0x2b9;
    undefined field668_0x2ba;
    undefined field669_0x2bb;
    undefined field670_0x2bc;
    undefined field671_0x2bd;
    undefined field672_0x2be;
    undefined field673_0x2bf;
    undefined field674_0x2c0;
    undefined field675_0x2c1;
    undefined field676_0x2c2;
    undefined field677_0x2c3;
    undefined field678_0x2c4;
    undefined field679_0x2c5;
    undefined field680_0x2c6;
    undefined field681_0x2c7;
    undefined field682_0x2c8;
    undefined field683_0x2c9;
    undefined field684_0x2ca;
    undefined field685_0x2cb;
    undefined field686_0x2cc;
    undefined field687_0x2cd;
    undefined field688_0x2ce;
    undefined field689_0x2cf;
    undefined field690_0x2d0;
    undefined field691_0x2d1;
    undefined field692_0x2d2;
    undefined field693_0x2d3;
    undefined field694_0x2d4;
    undefined field695_0x2d5;
    undefined field696_0x2d6;
    undefined field697_0x2d7;
    undefined field698_0x2d8;
    undefined field699_0x2d9;
    undefined field700_0x2da;
    undefined field701_0x2db;
    undefined field702_0x2dc;
    undefined field703_0x2dd;
    undefined field704_0x2de;
    undefined field705_0x2df;
    undefined field706_0x2e0;
    undefined field707_0x2e1;
    undefined field708_0x2e2;
    undefined field709_0x2e3;
    undefined field710_0x2e4;
    undefined field711_0x2e5;
    undefined field712_0x2e6;
    undefined field713_0x2e7;
    undefined field714_0x2e8;
    undefined field715_0x2e9;
    undefined field716_0x2ea;
    undefined field717_0x2eb;
    undefined field718_0x2ec;
    undefined field719_0x2ed;
    undefined field720_0x2ee;
    undefined field721_0x2ef;
    undefined field722_0x2f0;
    undefined field723_0x2f1;
    undefined field724_0x2f2;
    undefined field725_0x2f3;
    undefined field726_0x2f4;
    undefined field727_0x2f5;
    undefined field728_0x2f6;
    undefined field729_0x2f7;
    undefined field730_0x2f8;
    undefined field731_0x2f9;
    undefined field732_0x2fa;
    undefined field733_0x2fb;
    undefined field734_0x2fc;
    undefined field735_0x2fd;
    undefined field736_0x2fe;
    undefined field737_0x2ff;
    uint IPR0; // Interrupt Priority Register
    uint IPR1; // Interrupt Priority Register
    uint IPR2; // Interrupt Priority Register
    uint IPR3; // Interrupt Priority Register
    uint IPR4; // Interrupt Priority Register
    uint IPR5; // Interrupt Priority Register
    uint IPR6; // Interrupt Priority Register
    uint IPR7; // Interrupt Priority Register
    uint IPR8; // Interrupt Priority Register
    uint IPR9; // Interrupt Priority Register
    uint IPR10; // Interrupt Priority Register
    uint IPR11; // Interrupt Priority Register
    uint IPR12; // Interrupt Priority Register
    uint IPR13; // Interrupt Priority Register
    uint IPR14; // Interrupt Priority Register
};

typedef struct SCB_ACTRL SCB_ACTRL, *PSCB_ACTRL;

struct SCB_ACTRL {
    uint ACTRL; // Auxiliary control register
};

typedef struct TIM9 TIM9, *PTIM9;

struct TIM9 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    undefined field15_0x30;
    undefined field16_0x31;
    undefined field17_0x32;
    undefined field18_0x33;
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
};

typedef struct TIM8 TIM8, *PTIM8;

struct TIM8 {
    uint CR1; // control register 1
    uint CR2; // control register 2
    uint SMCR; // slave mode control register
    uint DIER; // DMA/Interrupt enable register
    uint SR; // status register
    uint EGR; // event generation register
    uint CCMR1_Input; // capture/compare mode register 1 (input
          mode)
    uint CCMR2_Input; // capture/compare mode register 2 (input
          mode)
    uint CCER; // capture/compare enable
          register
    uint CNT; // counter
    uint PSC; // prescaler
    uint ARR; // auto-reload register
    uint RCR; // repetition counter register
    uint CCR1; // capture/compare register 1
    uint CCR2; // capture/compare register 2
    uint CCR3; // capture/compare register 3
    uint CCR4; // capture/compare register 4
    uint BDTR; // break and dead-time register
    uint DCR; // DMA control register
    uint DMAR; // DMA address for full transfer
};

typedef struct UART4 UART4, *PUART4;

struct UART4 {
    uint SR; // UART4_SR
    uint DR; // UART4_DR
    uint BRR; // UART4_BRR
    uint CR1; // UART4_CR1
    uint CR2; // UART4_CR2
    uint CR3; // UART4_CR3
};

typedef struct UART5 UART5, *PUART5;

struct UART5 {
    uint SR; // UART4_SR
    uint DR; // UART4_DR
    uint BRR; // UART4_BRR
    uint CR1; // UART4_CR1
    uint CR2; // UART4_CR2
    uint CR3; // UART4_CR3
};

typedef struct ETHERNET_MMC ETHERNET_MMC, *PETHERNET_MMC;

struct ETHERNET_MMC {
    uint MMCCR; // Ethernet MMC control register
          (ETH_MMCCR)
    uint MMCRIR; // Ethernet MMC receive interrupt register
          (ETH_MMCRIR)
    uint MMCTIR; // Ethernet MMC transmit interrupt register
          (ETH_MMCTIR)
    uint MMCRIMR; // Ethernet MMC receive interrupt mask register
          (ETH_MMCRIMR)
    uint MMCTIMR; // Ethernet MMC transmit interrupt mask
          register (ETH_MMCTIMR)
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    undefined field17_0x20;
    undefined field18_0x21;
    undefined field19_0x22;
    undefined field20_0x23;
    undefined field21_0x24;
    undefined field22_0x25;
    undefined field23_0x26;
    undefined field24_0x27;
    undefined field25_0x28;
    undefined field26_0x29;
    undefined field27_0x2a;
    undefined field28_0x2b;
    undefined field29_0x2c;
    undefined field30_0x2d;
    undefined field31_0x2e;
    undefined field32_0x2f;
    undefined field33_0x30;
    undefined field34_0x31;
    undefined field35_0x32;
    undefined field36_0x33;
    undefined field37_0x34;
    undefined field38_0x35;
    undefined field39_0x36;
    undefined field40_0x37;
    undefined field41_0x38;
    undefined field42_0x39;
    undefined field43_0x3a;
    undefined field44_0x3b;
    undefined field45_0x3c;
    undefined field46_0x3d;
    undefined field47_0x3e;
    undefined field48_0x3f;
    undefined field49_0x40;
    undefined field50_0x41;
    undefined field51_0x42;
    undefined field52_0x43;
    undefined field53_0x44;
    undefined field54_0x45;
    undefined field55_0x46;
    undefined field56_0x47;
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    uint MMCTGFSCCR; // Ethernet MMC transmitted good frames after a
          single collision counter
    uint MMCTGFMSCCR; // Ethernet MMC transmitted good frames after
          more than a single collision
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    uint MMCTGFCR; // Ethernet MMC transmitted good frames counter
          register
    undefined field84_0x6c;
    undefined field85_0x6d;
    undefined field86_0x6e;
    undefined field87_0x6f;
    undefined field88_0x70;
    undefined field89_0x71;
    undefined field90_0x72;
    undefined field91_0x73;
    undefined field92_0x74;
    undefined field93_0x75;
    undefined field94_0x76;
    undefined field95_0x77;
    undefined field96_0x78;
    undefined field97_0x79;
    undefined field98_0x7a;
    undefined field99_0x7b;
    undefined field100_0x7c;
    undefined field101_0x7d;
    undefined field102_0x7e;
    undefined field103_0x7f;
    undefined field104_0x80;
    undefined field105_0x81;
    undefined field106_0x82;
    undefined field107_0x83;
    undefined field108_0x84;
    undefined field109_0x85;
    undefined field110_0x86;
    undefined field111_0x87;
    undefined field112_0x88;
    undefined field113_0x89;
    undefined field114_0x8a;
    undefined field115_0x8b;
    undefined field116_0x8c;
    undefined field117_0x8d;
    undefined field118_0x8e;
    undefined field119_0x8f;
    undefined field120_0x90;
    undefined field121_0x91;
    undefined field122_0x92;
    undefined field123_0x93;
    uint MMCRFCECR; // Ethernet MMC received frames with CRC error
          counter register
    uint MMCRFAECR; // Ethernet MMC received frames with alignment
          error counter register
    undefined field126_0x9c;
    undefined field127_0x9d;
    undefined field128_0x9e;
    undefined field129_0x9f;
    undefined field130_0xa0;
    undefined field131_0xa1;
    undefined field132_0xa2;
    undefined field133_0xa3;
    undefined field134_0xa4;
    undefined field135_0xa5;
    undefined field136_0xa6;
    undefined field137_0xa7;
    undefined field138_0xa8;
    undefined field139_0xa9;
    undefined field140_0xaa;
    undefined field141_0xab;
    undefined field142_0xac;
    undefined field143_0xad;
    undefined field144_0xae;
    undefined field145_0xaf;
    undefined field146_0xb0;
    undefined field147_0xb1;
    undefined field148_0xb2;
    undefined field149_0xb3;
    undefined field150_0xb4;
    undefined field151_0xb5;
    undefined field152_0xb6;
    undefined field153_0xb7;
    undefined field154_0xb8;
    undefined field155_0xb9;
    undefined field156_0xba;
    undefined field157_0xbb;
    undefined field158_0xbc;
    undefined field159_0xbd;
    undefined field160_0xbe;
    undefined field161_0xbf;
    undefined field162_0xc0;
    undefined field163_0xc1;
    undefined field164_0xc2;
    undefined field165_0xc3;
    uint MMCRGUFCR; // MMC received good unicast frames counter
          register
};

typedef struct SCB SCB, *PSCB;

struct SCB {
    uint CPUID; // CPUID base register
    uint ICSR; // Interrupt control and state
          register
    uint VTOR; // Vector table offset register
    uint AIRCR; // Application interrupt and reset control
          register
    uint SCR; // System control register
    uint CCR; // Configuration and control
          register
    uint SHPR1; // System handler priority
          registers
    uint SHPR2; // System handler priority
          registers
    uint SHPR3; // System handler priority
          registers
    uint SHCRS; // System handler control and state
          register
    uint CFSR_UFSR_BFSR_MMFSR; // Configurable fault status
          register
    uint HFSR; // Hard fault status register
    undefined field12_0x30;
    undefined field13_0x31;
    undefined field14_0x32;
    undefined field15_0x33;
    uint MMFAR; // Memory management fault address
          register
    uint BFAR; // Bus fault address register
};

#define WINVER 2304

#define NTDDI_VERSION 150994944

#define _MSC_VER 1200

#define _INTEGRAL_MAX_BITS 64



undefined DAT_20000b0c;
uint FLASH.CR;
uint FLASH.AR;
uint FLASH.SR;
uint FLASH.OBR;
undefined DAT_20000010;
undefined DAT_20000018;
undefined DAT_2000001c;
undefined DAT_20000030;
uint DMA1.IFCR;
uint DMA2.IFCR;
DMA2 DMA2;
char DAT_20000b08;
uint FLASH.KEYR;
uint EXTI.EMR;
GPIOA GPIOA;
GPIOB GPIOB;
uint EXTI.RTSR;
GPIOC GPIOC;
uint RCC.APB2ENR;
GPIOD GPIOD;
GPIOE GPIOE;
GPIOF GPIOF;
uint EXTI.FTSR;
AFIO AFIO;
EXTI EXTI;
undefined DAT_20001150;
FLASH FLASH;
undefined DAT_20000004;
byte DAT_20000008;
undefined DAT_2000000c;
RCC RCC;
uint RCC.CFGR;
uint RCC.CSR;
uint RCC.CIR;
undefined DAT_00001004;
uint RCC.BDCR;
undefined DAT_42420480;
undefined DAT_42420060;
undefined DAT_00000042;
PWR PWR;
undefined4 UNK_42420000;
uint RCC.APB1ENR;
uint AFIO.MAPR;
undefined DAT_20000aa4;
undefined DAT_20000aa8;
undefined DAT_20000aac;
undefined DAT_20000ab0;
undefined DAT_20000ab4;
undefined DAT_20000ab8;
undefined DAT_20000abc;
undefined DAT_20000ac0;
UART5 UART5;
undefined DAT_20000020;
undefined DAT_20000024;
undefined DAT_2000002c;
undefined DAT_20000834;
undefined DAT_20000838;
undefined DAT_2000083c;
undefined DAT_20000840;
undefined DAT_20000844;
undefined DAT_20000848;
undefined DAT_2000084c;
undefined DAT_20000850;
undefined DAT_20000a08;
undefined DAT_20000858;
undefined DAT_20000878;
undefined DAT_2000087c;
undefined DAT_20000880;
undefined DAT_20000884;
undefined DAT_20000888;
undefined DAT_2000088c;
undefined DAT_20000890;
undefined DAT_20000894;
undefined DAT_20000a04;
uint RCC.AHBENR;
undefined DAT_2000089c;
undefined DAT_200009cc;
undefined DAT_200009d0;
undefined DAT_200009d4;
undefined DAT_200009d8;
undefined DAT_200009dc;
undefined DAT_200009e0;
undefined DAT_200009e4;
undefined DAT_200009e8;
undefined DAT_20000028;
USART1 USART1;
undefined DAT_200008bc;
undefined DAT_200008c0;
undefined DAT_200008c4;
undefined DAT_200008c8;
undefined DAT_200008cc;
undefined DAT_200008d0;
undefined DAT_200008d4;
undefined DAT_200008d8;
undefined DAT_20000a50;
undefined DAT_200008e0;
undefined DAT_20000900;
undefined DAT_20000904;
undefined DAT_20000908;
undefined DAT_2000090c;
undefined DAT_20000910;
undefined DAT_20000914;
undefined DAT_20000918;
undefined DAT_2000091c;
undefined DAT_20000a4c;
undefined DAT_20000924;
undefined DAT_20000a14;
undefined DAT_20000a18;
undefined DAT_20000a1c;
undefined DAT_20000a20;
undefined DAT_20000a24;
undefined DAT_20000a28;
undefined DAT_20000a2c;
undefined DAT_20000a30;
USART2 USART2;
undefined DAT_20000944;
undefined DAT_20000948;
undefined DAT_2000094c;
undefined DAT_20000950;
undefined DAT_20000954;
undefined DAT_20000958;
undefined DAT_2000095c;
undefined DAT_20000960;
undefined DAT_20000a98;
undefined DAT_20000968;
undefined DAT_20000988;
undefined DAT_2000098c;
undefined DAT_20000990;
undefined DAT_20000994;
undefined DAT_20000998;
undefined DAT_2000099c;
undefined DAT_200009a0;
undefined DAT_200009a4;
undefined DAT_20000a94;
undefined DAT_200009ac;
undefined DAT_20000a5c;
undefined DAT_20000a60;
undefined DAT_20000a64;
undefined DAT_20000a68;
undefined DAT_20000a6c;
undefined DAT_20000a70;
undefined DAT_20000a74;
undefined DAT_20000a78;
USART3 USART3;
undefined DAT_20000b10;
uint STK.LOAD_;
STK STK;
uint STK.VAL;
undefined DAT_20000d94;
undefined DAT_20001020;
undefined1 DAT_200010ea;
NVIC NVIC;
uint SCB.AIRCR;
SCB SCB;
undefined DAT_20000b14;
undefined DAT_20000b12;
undefined DAT_20000034;
undefined *DAT_80004c54;
undefined4 DAT_80004c58;
uint DAT_80004dec;
uint DAT_80004df0;
uint DAT_80004dfc;
undefined DAT_80004df4;
uint DAT_800051fc;
undefined DAT_00000006;
undefined EXT_00000008;
undefined DAT_00000011;
undefined DAT_80000000;
string s_0123456789abcdef_80005200;
undefined DAT_80005214;
undefined1 DAT_800054d0;
undefined DAT_800054d4;
undefined DAT_800054d8;
undefined DAT_20001424;
undefined EXT_00000004;
DMA1 DMA1;
char DAT_20001420;
undefined4 UNK_2000a534;
undefined1 DAT_20000012;
undefined DAT_20000014;
undefined DAT_00001020;
undefined DAT_1ffff7e8;
undefined DAT_1ffff7ec;
undefined DAT_1ffff7f0;
undefined DAT_20000050;
undefined DAT_20000054;
undefined DAT_20000058;
undefined DAT_2000005c;
undefined DAT_20000060;
undefined DAT_20000064;
undefined DAT_20000068;
undefined DAT_2000006c;
undefined DAT_20000070;
undefined DAT_20000074;
undefined DAT_20000078;
undefined DAT_2000007c;
undefined DAT_0000100c;
undefined DAT_20000d8c;
undefined DAT_20000d90;
undefined DAT_20000d98;
undefined DAT_20000d9c;
undefined DAT_20000da0;
undefined DAT_20000da4;
undefined DAT_20000da8;
undefined DAT_200012d4;
undefined DAT_20000db0;
undefined DAT_20000dd0;
undefined DAT_20000dd4;
undefined DAT_20000dd8;
undefined DAT_20000ddc;
undefined DAT_20000de0;
undefined DAT_20000de4;
undefined DAT_20000de8;
undefined DAT_20000dec;
undefined DAT_200012d0;
undefined DAT_20000df4;
undefined DAT_20001298;
undefined DAT_2000129c;
undefined DAT_200012a0;
undefined DAT_200012a4;
undefined DAT_200012a8;
undefined DAT_200012ac;
undefined DAT_200012b0;
undefined DAT_200012b4;
UART4 UART4;
undefined DAT_200012e0;
undefined DAT_200012e4;
undefined DAT_200012e8;
undefined DAT_200012ec;
undefined DAT_200012f0;
undefined DAT_200012f4;
undefined DAT_200012f8;
undefined DAT_200012fc;
undefined DAT_2000003c;
undefined DAT_20000e14;
undefined DAT_20000e18;
undefined DAT_20000e1c;
undefined DAT_20000e20;
undefined DAT_20000e24;
undefined DAT_20000e28;
undefined DAT_20000e2c;
undefined DAT_20000e30;
undefined DAT_200011fc;
undefined DAT_20000e38;
undefined DAT_20000e58;
undefined DAT_20000e5c;
undefined DAT_20000e60;
undefined DAT_20000e64;
undefined DAT_20000e68;
undefined DAT_20000e6c;
undefined DAT_20000e70;
undefined DAT_20000e74;
undefined DAT_200011f8;
undefined DAT_20000e7c;
undefined DAT_200011c0;
undefined DAT_200011c4;
undefined DAT_200011c8;
undefined DAT_200011cc;
undefined DAT_200011d0;
undefined DAT_200011d4;
undefined DAT_200011d8;
undefined DAT_200011dc;
undefined DAT_20000038;
undefined DAT_20000e9c;
undefined DAT_20000ea0;
undefined DAT_20000ea4;
undefined DAT_20000ea8;
undefined DAT_20000eac;
undefined DAT_20000eb0;
undefined DAT_20000eb4;
undefined DAT_20000eb8;
undefined DAT_20001244;
undefined DAT_20000ec0;
undefined DAT_20000ee0;
undefined DAT_20000ee4;
undefined DAT_20000ee8;
undefined DAT_20000eec;
undefined DAT_20000ef0;
undefined DAT_20000ef4;
undefined DAT_20000ef8;
undefined DAT_20000efc;
undefined DAT_20001240;
undefined DAT_20000f04;
undefined DAT_20001208;
undefined DAT_2000120c;
undefined DAT_20001210;
undefined DAT_20001214;
undefined DAT_20001218;
undefined DAT_2000121c;
undefined DAT_20001220;
undefined DAT_20001224;
undefined DAT_20000f24;
undefined DAT_20000f28;
undefined DAT_20000f2c;
undefined DAT_20000f30;
undefined DAT_20000f34;
undefined DAT_20000f38;
undefined DAT_20000f3c;
undefined DAT_20000f40;
undefined DAT_2000128c;
undefined DAT_20000f48;
undefined DAT_20000f68;
undefined DAT_20000f6c;
undefined DAT_20000f70;
undefined DAT_20000f74;
undefined DAT_20000f78;
undefined DAT_20000f7c;
undefined DAT_20000f80;
undefined DAT_20000f84;
undefined DAT_20001288;
undefined DAT_20000f8c;
undefined DAT_20001250;
undefined DAT_20001254;
undefined DAT_20001258;
undefined DAT_2000125c;
undefined DAT_20001260;
undefined DAT_20001264;
undefined DAT_20001268;
undefined DAT_2000126c;
uint SCB.VTOR;
undefined DAT_20002044;
undefined DAT_20001dae;
uint SCB.ICSR;
undefined DAT_200013fc;
undefined1 DAT_20000086;
undefined1 DAT_20000087;
undefined DAT_20001400;
undefined DAT_200002b0;
undefined DAT_20001d9c;
undefined DAT_20001d9e;
undefined DAT_20000310;
byte DAT_20001391;
char DAT_2000229e;
byte DAT_2000135e;
undefined DAT_2000132c;
byte DAT_20001d35;
byte DAT_20001d02;
undefined DAT_20001cd0;
byte DAT_2000a5b5;
byte DAT_200024f9;
byte DAT_2000a582;
byte DAT_2000239a;
undefined DAT_2000229e;
undefined1 DAT_2000239a;
undefined1 DAT_200024f9;
undefined DAT_20000d44;
undefined DAT_200014d2;
undefined DAT_200014d8;
undefined DAT_2000a710;
undefined DAT_2000142c;
undefined DAT_2000a54c;
undefined DAT_2000143c;
undefined DAT_20001434;
undefined DAT_2000a680;
undefined DAT_2000a6e8;
undefined DAT_2000a538;
undefined DAT_2000a6dc;
undefined DAT_2000a548;
undefined DAT_20001444;
undefined DAT_2000a714;
undefined DAT_20001430;
undefined DAT_20001440;
undefined DAT_2000a53c;
undefined DAT_2000a708;
undefined DAT_2000a6e0;
undefined DAT_2000a6e4;
undefined DAT_20001438;
undefined DAT_2000a67c;
undefined DAT_2000a674;
undefined DAT_2000a644;
undefined DAT_20002534;
undefined DAT_20002530;
undefined DAT_2000a688;
undefined DAT_20001428;
undefined DAT_20000040;
undefined DAT_20000044;
undefined DAT_2000004c;
char DAT_20001d9a;
byte DAT_2000a52c;
undefined DAT_2000a530;
undefined DAT_2000a544;
int UNK_20000000;
undefined DAT_2000a684;
undefined DAT_2000a71c;
uint NVIC.IPR0;
uint SCB.SHPR3;
undefined DAT_2000a540;
undefined DAT_2000a694;
undefined *DAT_80013b6c;
undefined4 DAT_80013b70;
string s_0123456789abcdef_80014144;
undefined DAT_80014158;
uint UNK_00000003;
byte *UNK_00000007;

// WARNING: Removing unreachable block (ram,0x80000170)

void FUN_80000164(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r6;
  bool bVar4;
  
  puVar2 = (undefined4 *)(unaff_r6 << 4);
  puVar1 = (undefined4 *)0x0;
  for (; 3 < param_3; param_3 = param_3 - 4) {
    uVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
  }
  while (bVar4 = param_3 != 0, param_3 = param_3 - 1, bVar4) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}



void FUN_80000168(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}



void FUN_8000018c(undefined1 *param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_80000196(undefined1 *param_1,int param_2,undefined1 param_3)

{
  char in_CY;
  
  while (in_CY != '\0') {
    *param_1 = param_3;
    in_CY = param_2 != 0;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return;
}



void FUN_8000019a(undefined1 *param_1,int param_2)

{
  FUN_8000018c(param_1,param_2,0);
  return;
}



undefined1 * FUN_8000019e(undefined1 *param_1,undefined1 param_2,int param_3)

{
  FUN_8000018c(param_1,param_3,param_2);
  return param_1;
}



uint FUN_800001b0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 & 0x7fffffff) != 0) && ((param_2 & 0x7fffffff) != 0)) {
    iVar5 = ((param_1 & 0x7fffffff) >> 0x17) - ((param_2 & 0x7fffffff) >> 0x17);
    uVar2 = param_1 & 0x7fffff | 0x800000;
    uVar3 = param_2 & 0x7fffff | 0x800000;
    iVar6 = iVar5 + 0x7d;
    if (uVar2 < uVar3) {
      uVar2 = uVar2 << 1;
    }
    else {
      iVar6 = iVar5 + 0x7e;
    }
    if (-1 < iVar6) {
      uVar1 = 0x800000;
      uVar4 = 0;
      do {
        if (uVar3 <= uVar2) {
          uVar2 = uVar2 - uVar3;
          uVar4 = uVar4 | uVar1;
        }
        uVar1 = uVar1 >> 1;
        uVar2 = uVar2 * 2;
      } while (uVar1 != 0);
      uVar1 = 0;
      if (uVar2 != 0) {
        if (uVar2 == uVar3) {
          uVar1 = 0x80000000;
        }
        else if (uVar2 < uVar3) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0xfffffffe;
        }
      }
      uVar2 = uVar4 + iVar6 * 0x800000 + ((param_1 ^ param_2) & 0x80000000);
      if (-1 < (int)uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      if ((uVar1 & 0x7fffffff) == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
  }
  return 0;
}



ulonglong FUN_8000022c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((param_1 == 0 && (param_2 & 0x7fffffff) == 0) || (param_3 == 0 && (param_4 & 0x7fffffff) == 0)
     ) {
    uVar9 = 0;
  }
  else {
    uVar6 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar3 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_1 >> 10 | (param_2 & 0xfffff) << 0x16;
    uVar8 = param_3 >> 10 | (param_4 & 0xfffff) << 0x16;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
    uVar7 = (uint)lVar1;
    iVar5 = uVar4 * (uVar3 >> 10) + (uVar2 >> 10) * uVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = ((param_1 * uVar3 +
             uVar2 * param_3 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20)) -
            (iVar5 * 0x100000 | uVar7 >> 0xc)) - (uint)(uVar6 < uVar7 * 0x100000);
    uVar4 = param_1 >> 0x1a | uVar2 << 6;
    uVar2 = param_3 >> 0x1a | uVar3 << 6;
    uVar3 = uVar6 + uVar7 * -0x100000 >> 0x14 | uVar8 * 0x1000;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar2 +
            (ulonglong)((iVar5 - uVar4 * uVar2) + (uVar8 >> 0x14) + (uint)CARRY4(uVar3,uVar7));
    uVar9 = FUN_800004b8((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar6 * 0x1000,uVar3 + uVar7,0,
                         (param_2 ^ param_4) & 0x80000000,
                         (((param_4 & 0x7fffffff) << 1) >> 0x15) +
                         (((param_2 & 0x7fffffff) << 1) >> 0x15) + -0x3ff);
  }
  return uVar9;
}



// WARNING: Removing unreachable block (ram,0x80000454)
// WARNING: Removing unreachable block (ram,0x80000462)
// WARNING: Removing unreachable block (ram,0x80000464)

uint FUN_80000310(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 << LZCOUNT(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  iVar3 = 0x9d - LZCOUNT(param_1);
  if (-1 < iVar3) {
    uVar2 = (uVar1 >> 8) + iVar3 * 0x800000;
    if ((int)(uVar1 * 0x1000000) < 0) {
      uVar2 = uVar2 + 1;
      if ((uVar1 & 0x7f) == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
    return uVar2;
  }
  return 0;
}



ulonglong FUN_8000031a(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = param_2 & 0xfffff | 0x100000;
  if (uVar2 < 0x3ff) {
    uVar3 = (ulonglong)uVar1 << 0x20;
  }
  else {
    if (uVar2 < 0x434) {
      uVar3 = FUN_8000040c(param_1,uVar1,-(uVar2 - 0x433));
    }
    else {
      uVar3 = CONCAT44(param_2,param_1 << (uVar2 - 0x433 & 0xff)) & 0xfffffffffffff |
              0x10000000000000;
    }
    if ((param_2 & 0x80000000) != 0) {
      return CONCAT44((int)(uVar3 >> 0x20),-(int)uVar3);
    }
  }
  return uVar3;
}



undefined8 FUN_80000358(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (uVar1 != 0) {
    return CONCAT44(param_1 & 0x80000000 | ((uVar1 >> 0x17) + 0x380) * 0x100000 |
                    (uVar1 << 9) >> 0xc,param_1 << 0x1d);
  }
  return 0;
}



int FUN_8000037e(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x20;
  while (uVar3 = uVar2 - 1, 0 < (int)uVar2) {
    uVar2 = uVar3;
    if (param_2 <= param_1 >> (uVar3 & 0xff)) {
      param_1 = param_1 - (param_2 << (uVar3 & 0xff));
      iVar1 = iVar1 + (1 << (uVar3 & 0xff));
    }
  }
  return iVar1;
}



longlong FUN_800003aa(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  uVar3 = 0x40;
  while (uVar4 = uVar3 - 1, 0 < (int)uVar3) {
    uVar6 = FUN_8000040c(param_1,param_2,uVar4);
    uVar2 = (uint)(uVar6 >> 0x20);
    uVar3 = uVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      lVar7 = FUN_80000804(param_3,param_4,uVar4);
      bVar5 = param_1 < (uint)lVar7;
      param_1 = param_1 - (uint)lVar7;
      param_2 = (param_2 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_80000804(1,0,uVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}



ulonglong FUN_8000040c(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}



ulonglong FUN_800004b8(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                      int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    uVar2 = LZCOUNT(param_1) + 0x20;
  }
  else {
    uVar2 = LZCOUNT(param_2);
  }
  uVar5 = FUN_80000804(param_1,param_2,uVar2);
  uVar3 = (uint)(uVar5 >> 0x20);
  if (((uint)uVar5 != 0 || param_3 != 0) || (uVar3 != 0 || param_4 != 0)) {
    if (param_3 != 0 || param_4 != 0) {
      uVar6 = FUN_8000040c(param_3,param_4,0x40 - uVar2);
      lVar7 = FUN_80000804(param_3,param_4,uVar2);
      uVar5 = CONCAT44(uVar3 | (uint)(uVar6 >> 0x20),(uint)uVar5 | (uint)uVar6 | (uint)(lVar7 != 0))
      ;
    }
    uVar3 = (uint)(uVar5 >> 0xb);
    iVar1 = (param_7 - uVar2) + 10;
    if (-1 < iVar1) {
      uVar2 = uVar3 + param_5;
      iVar1 = iVar1 * 0x100000 + (int)((uVar5 >> 0xb) >> 0x20) + param_6 +
              (uint)CARRY4(uVar3,param_5);
      if ((int)uVar5 * 0x200000 < 0) {
        bVar4 = 0xfffffffe < uVar2;
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + (uint)bVar4;
        if ((uVar5 & 0x3ff) == 0) {
          uVar2 = uVar2 & 0xfffffffe;
        }
      }
      return CONCAT44(iVar1,uVar2);
    }
    uVar5 = 0;
  }
  return uVar5;
}



ulonglong FUN_80000554(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar3 = (int)(param_2 ^ param_4) >> 0x1f;
  uVar4 = -iVar3;
  uVar8 = param_3;
  uVar11 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar8 = param_1;
    uVar11 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar11 & 0x7fffffff) != 0 || uVar8 != 0) {
    uVar10 = param_2 >> 0x14;
    uVar5 = uVar10 & 0x7ff;
    uVar6 = uVar5 - ((uVar11 << 1) >> 0x15);
    if ((int)uVar6 < 0x40) {
      uVar11 = uVar11 & 0xfffff | 0x100000;
      if (uVar4 != 0) {
        bVar12 = uVar8 != 0;
        uVar8 = -uVar8;
        uVar11 = -(uint)bVar12 - uVar11;
      }
      uVar13 = FUN_80000804(uVar8,uVar11,0x40 - uVar6);
      uVar9 = (uint)(uVar13 >> 0x20);
      uVar7 = (uint)uVar13;
      lVar14 = FUN_80000822(uVar8,uVar11,uVar6);
      uVar1 = lVar14 + CONCAT44(param_2,param_1);
      uVar8 = (uint)uVar1;
      uVar11 = (uint)(uVar1 >> 0x20);
      if ((param_2 ^ uVar11) >> 0x14 != 0) {
        if (uVar4 == 0) {
          uVar13 = CONCAT44(uVar9 >> 1 | uVar8 * -0x80000000,
                            (uint)((uVar13 & 0x100000000) != 0) << 0x1f | uVar7 >> 1);
          uVar11 = uVar11 + uVar10 * -0x100000 + 0x100000;
          uVar1 = CONCAT44((uVar11 >> 1) + uVar10 * 0x100000,
                           (uint)((uVar11 & 1) != 0) << 0x1f | uVar8 >> 1);
        }
        else {
          if ((int)uVar6 < 2) {
            uVar13 = FUN_800004b8(uVar8,uVar11 + uVar10 * -0x100000 + 0x100000,uVar7,uVar9,0,
                                  (uVar10 & 0x800) << 0x14,uVar5);
            return uVar13;
          }
          uVar1 = CONCAT44(uVar10 * -0x100000 + uVar11 * 2 + (uint)CARRY4(uVar8,uVar8),
                           uVar8 * 2 | uVar9 >> 0x1f);
          uVar13 = CONCAT44(uVar9 * 2 + (uint)CARRY4(uVar7,uVar7),uVar7 * 2);
        }
      }
    }
    else {
      uVar13 = CONCAT44(-(uint)(1 < (uint)(iVar3 * -2)),iVar3 * 2 + 1);
      uVar1 = CONCAT44(param_2 - (param_1 < uVar4),param_1 + iVar3);
    }
    if ((longlong)uVar13 < 0) {
      uVar2 = uVar1 + 1;
      uVar1 = uVar1 + 1;
      if ((uVar13 & 0x7fffffff) == 0 &&
          (int)(uVar13 >> 0x20) * 2 + (uint)CARRY4((uint)uVar13,(uint)uVar13) == 0) {
        uVar1 = uVar2 & 0xfffffffffffffffe;
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,param_1);
}



undefined8 FUN_800006a2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    uVar5 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_2 & 0xfffff | 0x100000;
    iVar7 = (((param_2 & 0x7fffffff) << 1) >> 0x15) - (((param_4 & 0x7fffffff) << 1) >> 0x15);
    iVar8 = iVar7 + 0x3fd;
    if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
      iVar8 = iVar7 + 0x3fe;
    }
    else {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar10;
    }
    if (-1 < iVar8) {
      uVar3 = 0x100000;
      uVar6 = 0;
      uVar9 = 0;
      for (uVar2 = 0; uVar2 != 0 || uVar3 != 0; uVar2 = (uint)(uVar1 != 0) << 0x1f | uVar2 >> 1) {
        if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          bVar10 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar5) - (uint)bVar10;
          uVar6 = uVar6 | uVar2;
          uVar9 = uVar9 | uVar3;
        }
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        bVar10 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar10;
      }
      if (param_1 != 0 || uVar4 != 0) {
        if (param_1 == param_3 && uVar4 == uVar5) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      iVar7 = uVar9 + iVar8 * 0x100000 + ((param_2 ^ param_4) & 0x80000000);
      if ((int)uVar4 < 0) {
        bVar10 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + (uint)bVar10;
        if ((param_1 & 0x7fffffff) == 0 && uVar4 * 2 + (uint)CARRY4(param_1,param_1) == 0) {
          uVar6 = uVar6 & 0xfffffffe;
        }
      }
      return CONCAT44(iVar7,uVar6);
    }
  }
  return 0;
}



ulonglong FUN_80000780(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = param_2 & 0xfffff | 0x100000;
  if (uVar2 < 0x3ff) {
    return 0;
  }
  if (uVar2 < 0x434) {
    uVar3 = FUN_8000040c(param_1,uVar1,-(uVar2 - 0x433));
    return uVar3;
  }
  uVar3 = FUN_80000804(param_1,uVar1,uVar2 - 0x433);
  return uVar3;
}



int FUN_800007b0(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}



longlong FUN_80000804(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}



undefined8 FUN_80000822(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x20) {
    iVar2 = (int)param_2 >> (param_3 & 0xff);
    uVar1 = param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  }
  else {
    uVar1 = (int)param_2 >> (param_3 - 0x20 & 0xff);
    iVar2 = (int)(param_2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar2,uVar1);
}



void FUN_800008ac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xffU);
  *(undefined4 *)(*param_1 + 4) = param_4;
  if (param_1[1] == 0x10) {
    *(undefined4 *)(*param_1 + 8) = param_3;
    *(undefined4 *)(*param_1 + 0xc) = param_2;
  }
  else {
    *(undefined4 *)(*param_1 + 8) = param_2;
    *(undefined4 *)(*param_1 + 0xc) = param_3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80000900(void)

{
  uint uVar1;
  
  _DAT_20000b0c = 0;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 4;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000092c(uint param_1)

{
  uint uVar1;
  
  _DAT_20000b0c = 0;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 2;
  Peripherals::FLASH.AR = param_1;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80000964(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  
  _DAT_20000b0c = 0;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 1;
  *param_1 = param_2;
  return;
}



// WARNING: Removing unreachable block (ram,0x800009e0)
// WARNING: Removing unreachable block (ram,0x800009f0)
// WARNING: Removing unreachable block (ram,0x8000099e)
// WARNING: Removing unreachable block (ram,0x800009ae)
// WARNING: Removing unreachable block (ram,0x80000a34)
// WARNING: Removing unreachable block (ram,0x80000a46)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80000994(void)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x8000000) < 0) {
    _DAT_20000b0c = _DAT_20000b0c | 2;
    local_4 = 0x10;
  }
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x20000000) < 0) {
    _DAT_20000b0c = _DAT_20000b0c | 1;
    local_4 = local_4 | 4;
  }
  uVar1 = Peripherals::FLASH.OBR;
  if ((uVar1 & 1) != 0) {
    _DAT_20000b0c = _DAT_20000b0c | 4;
    uVar1 = Peripherals::FLASH.OBR;
    Peripherals::FLASH.OBR = uVar1 & 0xfffffffe;
  }
  if (local_4 == 0x101) {
    uVar1 = Peripherals::FLASH.OBR;
    Peripherals::FLASH.OBR = uVar1 & 0xfffffffe;
  }
  else {
    Peripherals::FLASH.SR = local_4;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80000b64)
// WARNING: Removing unreachable block (ram,0x80000b76)
// WARNING: Removing unreachable block (ram,0x80000af0)
// WARNING: Removing unreachable block (ram,0x80000b00)
// WARNING: Removing unreachable block (ram,0x80000b2a)
// WARNING: Removing unreachable block (ram,0x80000b3a)
// WARNING: Removing unreachable block (ram,0x80000b7c)
// WARNING: Removing unreachable block (ram,0x80000b8c)

undefined1 FUN_80000aa4(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80001fe8();
  while (uVar1 = Peripherals::FLASH.SR, (uVar1 & 1) != 0) {
    if ((param_1 != 0xffffffff) &&
       ((param_1 == 0 || (iVar3 = FUN_80001fe8(), param_1 < (uint)(iVar3 - iVar2))))) {
      return 3;
    }
  }
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x4000000) < 0) {
    Peripherals::FLASH.SR = 0x20;
  }
  uVar1 = Peripherals::FLASH.SR;
  if (((-1 < (int)(uVar1 * 0x8000000)) && (uVar1 = Peripherals::FLASH.OBR, (uVar1 & 1) == 0)) &&
     (uVar1 = Peripherals::FLASH.SR, -1 < (int)(uVar1 * 0x20000000))) {
    return 0;
  }
  FUN_80000994();
  return 1;
}



void FUN_80000bb8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80000bbc(undefined4 param_1)

{
  char cVar1;
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  FUN_80001c04();
  _DAT_20000010 = 0;
  _DAT_2000001c = 1;
  _DAT_20000018 = param_1;
  cVar1 = FUN_800019b8((int *)&DAT_20000010,(uint *)&DAT_20000030);
  if (cVar1 != '\0') {
    FUN_80001ac4();
    FUN_80004c3c((byte *)0x800567d,extraout_r1,extraout_r2,extraout_r3);
  }
  FUN_80001ac4();
  return;
}



undefined1 FUN_80000c04(ushort *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint local_18;
  ushort *local_10;
  undefined1 local_9;
  
  uVar1 = param_2;
  if (((((uint)param_1 & 1) == 0) && ((ushort *)0x7ffffff < param_1)) &&
     (uVar1 = 0x8040001, param_1 + param_2 < (ushort *)0x8040001)) {
    local_10 = param_1;
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      FUN_80004c3c((byte *)0x80056a5,(uint)*local_10,param_3,param_4);
      local_10 = local_10 + 1;
      param_3 = extraout_r2;
      param_4 = extraout_r3;
      if ((local_18 & 0xf) == 0xf) {
        FUN_80004c3c((byte *)0x80055fb,extraout_r1,extraout_r2,extraout_r3);
        param_3 = extraout_r2_00;
        param_4 = extraout_r3_00;
      }
    }
    FUN_80004c3c((byte *)0x80055fb,param_2,param_3,param_4);
    local_9 = 0;
  }
  else {
    FUN_80004c3c((byte *)0x8005669,uVar1,param_3,param_4);
    local_9 = 1;
  }
  return local_9;
}



void FUN_80000cac(void)

{
  return;
}



undefined1 FUN_80000cb0(undefined2 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_1c;
  undefined2 *local_10;
  undefined1 local_9;
  
  uVar1 = param_2;
  if (((((uint)param_1 & 1) == 0) && ((undefined2 *)0x7ffffff < param_1)) &&
     (uVar1 = 0x8040001, param_1 + param_3 < (undefined2 *)0x8040001)) {
    local_10 = param_1;
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      *(undefined2 *)(param_2 + local_1c * 2) = *local_10;
      local_10 = local_10 + 1;
    }
    local_9 = 0;
  }
  else {
    FUN_80004c3c((byte *)0x8005669,uVar1,param_3,param_4);
    local_9 = 1;
  }
  return local_9;
}



void FUN_80000d30(void)

{
  return;
}



undefined1 FUN_80000d34(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint local_1c;
  uint local_10;
  undefined1 local_9;
  
  uVar2 = param_2;
  if ((((param_1 & 1) == 0) && (0x7ffffff < param_1)) &&
     (uVar2 = 0x8040001, param_1 + param_3 * 2 < 0x8040001)) {
    FUN_80001c04();
    local_10 = param_1;
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      cVar1 = FUN_80001ad8(1,local_10,(uint)*(ushort *)(param_2 + local_1c * 2),0);
      if (cVar1 != '\0') {
        FUN_80004c3c((byte *)0x8005691,extraout_r1,extraout_r2,extraout_r3);
        FUN_80001ac4();
        return 1;
      }
      local_10 = local_10 + 2;
    }
    FUN_80001ac4();
    local_9 = 0;
  }
  else {
    FUN_80004c3c((byte *)0x8005669,uVar2,param_3,param_4);
    local_9 = 1;
  }
  return local_9;
}



bool FUN_80000de0(undefined4 *param_1)

{
  bool local_1;
  
  local_1 = *(char *)((int)param_1 + 0x21) == '\x02';
  if (local_1) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xff);
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    param_1[0xe] = 4;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  local_1 = !local_1;
  return local_1;
}



undefined1 FUN_80000e5c(uint *param_1)

{
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_d;
  
  local_d = 0;
  if (*(char *)((int)param_1 + 0x21) == '\x02') {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_3c = 1;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_40 = 0x10;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_44 = 0x100;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_48 = 0x1000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_4c = 0x10000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_50 = 0x100000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_54 = 0x1000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_58 = 1;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_5c = 0x10;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_60 = 0x100;
                        }
                        else {
                          local_60 = 0x10000;
                          if (*param_1 == 0x40020444) {
                            local_60 = 0x1000;
                          }
                        }
                        local_5c = local_60;
                      }
                      local_58 = local_5c;
                    }
                    local_54 = local_58;
                  }
                  local_50 = local_54;
                }
                local_4c = local_50;
              }
              local_48 = local_4c;
            }
            local_44 = local_48;
          }
          local_40 = local_44;
        }
        local_3c = local_40;
      }
      Peripherals::DMA1.IFCR = local_3c;
    }
    else {
      if (*param_1 == 0x40020008) {
        local_14 = 1;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_18 = 0x10;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_1c = 0x100;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_20 = 0x1000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_24 = 0x10000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_28 = 0x100000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_2c = 0x1000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_30 = 1;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_34 = 0x10;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_38 = 0x100;
                        }
                        else {
                          local_38 = 0x10000;
                          if (*param_1 == 0x40020444) {
                            local_38 = 0x1000;
                          }
                        }
                        local_34 = local_38;
                      }
                      local_30 = local_34;
                    }
                    local_2c = local_30;
                  }
                  local_28 = local_2c;
                }
                local_24 = local_28;
              }
              local_20 = local_24;
            }
            local_1c = local_20;
          }
          local_18 = local_1c;
        }
        local_14 = local_18;
      }
      Peripherals::DMA2.IFCR = local_14;
    }
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
    if (param_1[0xd] != 0) {
      (*(code *)param_1[0xd])();
    }
  }
  else {
    param_1[0xe] = 4;
    local_d = 1;
  }
  return local_d;
}



// WARNING: Instruction at (ram,0x8000180a) overlaps instruction at (ram,0x80001808)
// 
// WARNING: Removing unreachable block (ram,0x8000180e)
// WARNING: Removing unreachable block (ram,0x80001850)
// WARNING: Removing unreachable block (ram,0x8000181e)
// WARNING: Removing unreachable block (ram,0x80001882)

uint FUN_80001174(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  iVar1 = *(int *)*param_1;
  if (((int)((*(uint *)param_1[0xf] >> (param_1[0x10] & 0xff)) * 0x20000000) < 0) &&
     (iVar1 * 0x20000000 < 0)) {
    if (-1 < *(int *)*param_1 * 0x4000000) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
    }
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_40 = 4;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_44 = 0x40;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_48 = 0x400;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_4c = 0x4000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_50 = 0x40000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_54 = 0x400000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_58 = 0x4000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_5c = 4;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_60 = 0x40;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_64 = 0x400;
                        }
                        else {
                          local_64 = 0x40000;
                          if (*param_1 == 0x40020444) {
                            local_64 = 0x4000;
                          }
                        }
                        local_60 = local_64;
                      }
                      local_5c = local_60;
                    }
                    local_58 = local_5c;
                  }
                  local_54 = local_58;
                }
                local_50 = local_54;
              }
              local_4c = local_50;
            }
            local_48 = local_4c;
          }
          local_44 = local_48;
        }
        local_40 = local_44;
      }
      Peripherals::DMA1.IFCR = local_40;
    }
    else {
      if (*param_1 == 0x40020008) {
        local_18 = 4;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_1c = 0x40;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_20 = 0x400;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_24 = 0x4000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_28 = 0x40000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_2c = 0x400000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_30 = 0x4000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_34 = 4;
                    }
                    else {
                      local_34 = 0x40;
                    }
                    local_30 = local_34;
                  }
                  local_2c = local_30;
                }
                local_28 = local_2c;
              }
              local_24 = local_28;
            }
            local_20 = local_24;
          }
          local_1c = local_20;
        }
        local_18 = local_1c;
      }
      Peripherals::DMA2.IFCR = local_18;
    }
    if (param_1[0xb] != 0) {
      (*(code *)param_1[0xb])();
    }
    return 1;
  }
  uVar2 = (*(uint *)param_1[0xf] >> (param_1[0x10] & 0xff)) * 0x40000000;
  if (((int)uVar2 < 0) && (uVar2 = iVar1 * 0x40000000, (int)uVar2 < 0)) {
    if (-1 < *(int *)*param_1 * 0x4000000) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff5;
      *(undefined1 *)((int)param_1 + 0x21) = 1;
    }
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_90 = 2;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_94 = 0x20;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_98 = 0x200;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_9c = 0x2000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_a0 = 0x20000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_a4 = 0x200000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_a8 = 0x2000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_ac = 2;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_b0 = 0x20;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_b4 = 0x200;
                        }
                        else {
                          local_b4 = 0x20000;
                          if (*param_1 == 0x40020444) {
                            local_b4 = 0x2000;
                          }
                        }
                        local_b0 = local_b4;
                      }
                      local_ac = local_b0;
                    }
                    local_a8 = local_ac;
                  }
                  local_a4 = local_a8;
                }
                local_a0 = local_a4;
              }
              local_9c = local_a0;
            }
            local_98 = local_9c;
          }
          local_94 = local_98;
        }
        local_90 = local_94;
      }
      Peripherals::DMA1.IFCR = local_90;
    }
    else {
      uVar2 = 0x40020008;
      if (*param_1 == 0x40020008) {
        local_68 = 2;
      }
      else {
        if (*param_1 != 0x4002001c) {
          if (*param_1 != 0x40020030) {
            if (*param_1 != 0x40020044) {
              if (*param_1 != 0x40020058) {
                if (*param_1 != 0x4002006c) {
                  if (*param_1 != 0x40020080) {
                    if (*param_1 != 0x40020408) {
                      if (param_1 == &Peripherals::DMA2.CCR1) {
                        local_88 = 0x20;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_8c = 0x200;
                        }
                        else {
                          local_8c = 0x20000;
                          if (*param_1 == 0x40020444) {
                            local_8c = 0x2000;
                          }
                        }
                        local_88 = local_8c;
                      }
                      local_80 = local_88;
                    }
                    local_7c = local_80;
                  }
                  local_78 = local_7c;
                }
                local_74 = local_78;
              }
              local_70 = local_74;
            }
            local_6c = local_70;
          }
          local_68 = local_6c;
        }
        uVar2 = 0x404;
      }
      *(undefined4 *)(uVar2 & 0xffff | 0x40020000) = local_68;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    uVar2 = 0;
    if (param_1[10] != 0) {
      uVar2 = (*(code *)param_1[10])();
    }
  }
  else {
    uVar2 = (uVar2 >> (*(uint *)(param_1[0x10] + 0x40) & 0xff)) * 0x10000000;
    if (((int)uVar2 < 0) && (uVar2 = iVar1 * 0x10000000, (int)uVar2 < 0)) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
      *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xff);
      param_1[0xe] = 1;
      *(undefined1 *)((int)param_1 + 0x21) = 1;
      *(undefined1 *)(param_1 + 8) = 0;
      uVar2 = 0;
      if (param_1[0xc] != 0) {
        uVar2 = (*(code *)param_1[0xc])();
      }
    }
  }
  return uVar2;
}



// WARNING: Instruction at (ram,0x8000180a) overlaps instruction at (ram,0x80001808)
// 
// WARNING: Removing unreachable block (ram,0x8000180e)
// WARNING: Removing unreachable block (ram,0x80001850)
// WARNING: Removing unreachable block (ram,0x8000181e)
// WARNING: Removing unreachable block (ram,0x80001882)

undefined1 FUN_800017f8(void)

{
  return 1;
}



undefined1 FUN_800018ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_1d;
  undefined1 local_9;
  
  local_1d = 0;
  if ((char)param_1[8] == '\x01') {
    local_9 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    if (*(char *)((int)param_1 + 0x21) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x21) = 2;
      param_1[0xe] = 0;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      FUN_800008ac(param_1,param_2,param_3,param_4);
      if (param_1[0xb] == 0) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
        *(uint *)*param_1 = *(uint *)*param_1 | 10;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 | 0xe;
      }
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      local_1d = 2;
    }
    local_9 = local_1d;
  }
  return local_9;
}



char FUN_800019b8(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  uint local_1c;
  char local_15;
  char local_9;
  
  local_15 = '\x01';
  if (DAT_20000b08 == '\x01') {
    local_9 = '\x02';
  }
  else {
    DAT_20000b08 = 1;
    if (*param_1 == 2) {
      cVar2 = FUN_80000aa4(50000);
      if (cVar2 == '\0') {
        FUN_80000900();
        local_15 = FUN_80000aa4(50000);
        uVar1 = Peripherals::FLASH.CR;
        Peripherals::FLASH.CR = uVar1 & 0xfffffffb;
      }
    }
    else {
      cVar2 = FUN_80000aa4(50000);
      if (cVar2 == '\0') {
        *param_2 = 0xffffffff;
        for (local_1c = param_1[2]; local_1c < (uint)(param_1[2] + param_1[3] * 0x800);
            local_1c = local_1c + 0x800) {
          FUN_8000092c(local_1c);
          local_15 = FUN_80000aa4(50000);
          uVar1 = Peripherals::FLASH.CR;
          Peripherals::FLASH.CR = uVar1 & 0xfffffffd;
          if (local_15 != '\0') {
            *param_2 = local_1c;
            break;
          }
        }
      }
    }
    DAT_20000b08 = '\0';
    local_9 = local_15;
  }
  return local_9;
}



undefined4 FUN_80001ac4(void)

{
  uint uVar1;
  
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x80;
  return 0;
}



char FUN_80001ad8(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_9;
  
  if (DAT_20000b08 == '\x01') {
    local_9 = '\x02';
  }
  else {
    DAT_20000b08 = 1;
    local_21 = FUN_80000aa4(50000);
    if (local_21 == '\0') {
      if (param_1 == 1) {
        local_23 = 1;
      }
      else if (param_1 == 2) {
        local_23 = 2;
      }
      else {
        local_23 = 4;
      }
      for (local_22 = 0; local_22 < local_23; local_22 = local_22 + 1) {
        uVar3 = (uint)local_22;
        uVar1 = (ushort)(param_3 >> ((uVar3 & 0xf) << 4)) |
                (ushort)(param_4 << (uVar3 * -0x10 + 0x20 & 0xff));
        uVar2 = uVar3 * 0x10 - 0x20;
        if (-1 < (int)uVar2) {
          uVar1 = (ushort)(param_4 >> (uVar2 & 0xff));
        }
        FUN_80000964((undefined2 *)(param_2 + uVar3 * 2),uVar1);
        local_21 = FUN_80000aa4(50000);
        uVar2 = Peripherals::FLASH.CR;
        Peripherals::FLASH.CR = uVar2 & 0xfffffffe;
        if (local_21 != '\0') break;
      }
    }
    DAT_20000b08 = '\0';
    local_9 = local_21;
  }
  return local_9;
}



bool FUN_80001c04(void)

{
  uint uVar1;
  bool local_1;
  
  local_1 = false;
  uVar1 = Peripherals::FLASH.CR;
  if ((int)(uVar1 * 0x1000000) < 0) {
    Peripherals::FLASH.KEYR = 0x45670123;
    Peripherals::FLASH.KEYR = 0xcdef89ab;
    uVar1 = Peripherals::FLASH.CR;
    local_1 = (int)(uVar1 * 0x1000000) < 0;
  }
  return local_1;
}



void FUN_80001c60(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_1c;
  uint local_c;
  
  local_c = 0;
  local_1c = 0;
  do {
    if (*param_2 >> (local_c & 0xff) == 0) {
      return;
    }
    uVar1 = 1 << (local_c & 0xff);
    uVar2 = *param_2 & uVar1;
    if (uVar2 == uVar1) {
      uVar3 = param_2[1];
      if (uVar3 == 0) {
LAB_80001d4a:
        if (param_2[2] == 0) {
          local_1c = 4;
        }
        else {
          if (param_2[2] == 1) {
            param_1[4] = uVar1;
          }
          else {
            param_1[5] = uVar1;
          }
          local_1c = 8;
        }
      }
      else if (uVar3 == 1) {
        local_1c = param_2[3];
      }
      else if (uVar3 == 2) {
        local_1c = param_2[3] + 8;
      }
      else if (uVar3 == 3) {
        local_1c = 0;
      }
      else if (uVar3 == 0x11) {
        local_1c = param_2[3] + 4;
      }
      else if (uVar3 == 0x12) {
        local_1c = param_2[3] + 0xc;
      }
      else if (((((uVar3 == 0x10110000) || (uVar3 == 0x10120000)) || (uVar3 == 0x10210000)) ||
               ((uVar3 == 0x10220000 || (uVar3 == 0x10310000)))) || (uVar3 == 0x10320000))
      goto LAB_80001d4a;
      if (uVar2 < 0x100) {
        local_34 = local_c << 2;
        puVar4 = param_1;
      }
      else {
        puVar4 = param_1 + 1;
        local_34 = local_c * 4 - 0x20;
      }
      *puVar4 = *puVar4 & ~(0xf << (local_34 & 0xff)) | local_1c << (local_34 & 0xff);
      if ((int)((uint)*(byte *)((int)param_2 + 7) * 0x8000000) < 0) {
        uVar1 = Peripherals::RCC.APB2ENR;
        Peripherals::RCC.APB2ENR = uVar1 | 1;
        uVar1 = Peripherals::RCC.APB2ENR;
        if ((GPIOA *)param_1 == &Peripherals::GPIOA) {
          local_38 = 0;
        }
        else {
          if ((GPIOB *)param_1 == &Peripherals::GPIOB) {
            local_3c = 1;
          }
          else {
            if ((GPIOC *)param_1 == &Peripherals::GPIOC) {
              local_40 = 2;
            }
            else {
              if ((GPIOD *)param_1 == &Peripherals::GPIOD) {
                local_44 = 3;
              }
              else {
                if (((GPIOE *)param_1 != &Peripherals::GPIOE) &&
                   (local_48 = 6, (GPIOF *)param_1 == &Peripherals::GPIOF)) {
                  local_48 = 5;
                }
                local_44 = local_48;
              }
              local_40 = local_44;
            }
            local_3c = local_40;
          }
          local_38 = local_3c;
        }
        *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (local_c & 0xfffffffc)) =
             *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (local_c & 0xfffffffc)) &
             ~(0xf << ((local_c & 3) << 2)) | local_38 << ((local_c & 3) << 2);
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x8000000) < 0) {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 & ~uVar2;
        }
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x4000000) < 0) {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 & ~uVar2;
        }
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x40000000) < 0) {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 & ~uVar2;
        }
        if ((*(byte *)((int)param_2 + 6) & 1) == 0) {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 & ~uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 | uVar2;
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}



void FUN_80001fb8(int param_1,ushort param_2,char param_3)

{
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x10) = (uint)param_2 << 0x10;
  }
  else {
    *(uint *)(param_1 + 0x10) = (uint)param_2;
  }
  return;
}



void FUN_80001fe4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80001fe8(void)

{
  return _DAT_20001150;
}



undefined4 FUN_80001ff0(undefined4 *param_1)

{
  return *param_1;
}



undefined4 FUN_80002010(void)

{
  uint uVar1;
  
  uVar1 = Peripherals::FLASH.ACR;
  Peripherals::FLASH.ACR = uVar1 | 0x10;
  FUN_800020f4(3);
  FUN_80002038(0xf);
  FUN_800020a8();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_80002038(uint param_1)

{
  int iVar1;
  undefined1 local_9;
  
  iVar1 = FUN_80002c7c((int)((ulonglong)_DAT_20000004 / (1000 / (ulonglong)DAT_20000008)));
  if (iVar1 == 0) {
    if (param_1 < 0x10) {
      FUN_800020c0(0xff,param_1,0);
      local_9 = 0;
      _DAT_2000000c = param_1;
    }
    else {
      local_9 = 1;
    }
  }
  else {
    local_9 = 1;
  }
  return local_9;
}



void FUN_800020a8(void)

{
  return;
}



void FUN_800020ac(char param_1)

{
  FUN_80004838(param_1);
  return;
}



void FUN_800020c0(byte param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_80004868();
  uVar1 = FUN_80003c50(uVar1,param_2,param_3);
  FUN_80004878(param_1,uVar1);
  return;
}



void FUN_800020f4(uint param_1)

{
  FUN_800048bc(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_80002104(void)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 local_9;
  
  uVar6 = FUN_800048f8();
  uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
  pbVar2 = (byte *)uVar6;
  if (pbVar2 == (byte *)0x0) {
    local_9 = 1;
  }
  else {
    uVar1 = Peripherals::FLASH.ACR;
    if ((uVar1 & 7) < uVar5) {
      uVar1 = Peripherals::FLASH.ACR;
      Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | uVar5;
      uVar5 = Peripherals::FLASH.ACR;
      local_9 = 1;
    }
    else {
      if ((int)((uint)*pbVar2 * 0x40000000) < 0) {
        if ((int)((uint)*pbVar2 * 0x20000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 | 0x700;
        }
        if ((int)((uint)*pbVar2 * 0x10000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 | 0x3800;
        }
        uVar1 = Peripherals::RCC.CFGR;
        Peripherals::RCC.CFGR = uVar1 & 0xffffff0f | *(uint *)(pbVar2 + 8);
      }
      if ((*pbVar2 & 1) == 0) {
LAB_8000228c:
        uVar1 = Peripherals::FLASH.ACR;
        if (uVar5 < (uVar1 & 7)) {
          uVar1 = Peripherals::FLASH.ACR;
          Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | uVar5;
          uVar1 = Peripherals::FLASH.ACR;
          if ((uVar1 & 7) != uVar5) {
            return 1;
          }
        }
        if ((int)((uint)*pbVar2 * 0x20000000) < 0) {
          uVar5 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar5 & 0xfffff8ff | *(uint *)(pbVar2 + 0xc);
        }
        if ((int)((uint)*pbVar2 * 0x10000000) < 0) {
          uVar5 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar5 & 0xffffc7ff | *(int *)(pbVar2 + 0x10) << 3;
        }
        _DAT_20000004 = FUN_80002544();
        uVar5 = Peripherals::RCC.CFGR;
        _DAT_20000004 = _DAT_20000004 >> *(sbyte *)(((uVar5 & 0xff) >> 4) + 0x800552e);
        FUN_80002038(_DAT_2000000c);
        local_9 = 0;
      }
      else {
        if (*(int *)(pbVar2 + 4) == 1) {
          uVar1 = Peripherals::RCC.CR;
          if (-1 < (int)(uVar1 * 0x4000)) {
            return 1;
          }
        }
        else if (*(int *)(pbVar2 + 4) == 2) {
          uVar1 = Peripherals::RCC.CR;
          if (-1 < (int)(uVar1 * 0x40)) {
            return 1;
          }
        }
        else {
          uVar1 = Peripherals::RCC.CR;
          if (-1 < (int)(uVar1 * 0x40000000)) {
            return 1;
          }
        }
        uVar1 = Peripherals::RCC.CFGR;
        Peripherals::RCC.CFGR = uVar1 & 0xfffffffc | *(uint *)(pbVar2 + 4);
        iVar3 = FUN_80001fe8();
        do {
          uVar1 = Peripherals::RCC.CFGR;
          if ((uVar1 & 0xc) == *(int *)(pbVar2 + 4) * 4) goto LAB_8000228c;
          iVar4 = FUN_80001fe8();
        } while ((uint)(iVar4 - iVar3) < 0x1389);
        local_9 = 3;
      }
    }
  }
  return local_9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_80002360(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_80001fe8();
  uVar1 = Peripherals::RCC.CR;
  Peripherals::RCC.CR = uVar1 | 1;
  do {
    uVar1 = Peripherals::RCC.CR;
    if ((int)(uVar1 * 0x40000000) < 0) {
      uVar1 = Peripherals::RCC.CR;
      Peripherals::RCC.CR = uVar1 & 0xffffff07 | 0x80;
      iVar3 = FUN_80001fe8();
      Peripherals::RCC.CFGR = 0;
      do {
        uVar1 = Peripherals::RCC.CFGR;
        if ((uVar1 & 0xc) == 0) {
          _DAT_20000004 = 8000000;
          cVar2 = FUN_80002038(_DAT_2000000c);
          if (cVar2 != '\0') {
            return 1;
          }
          iVar3 = FUN_80001fe8();
          uVar1 = Peripherals::RCC.CR;
          Peripherals::RCC.CR = uVar1 & 0xfeffffff;
          do {
            uVar1 = Peripherals::RCC.CR;
            if (-1 < (int)(uVar1 * 0x40)) {
              Peripherals::RCC.CFGR = 0;
              iVar3 = FUN_80001fe8();
              uVar1 = Peripherals::RCC.CR;
              Peripherals::RCC.CR = uVar1 & 0xfff6ffff;
              do {
                uVar1 = Peripherals::RCC.CR;
                if (-1 < (int)(uVar1 * 0x4000)) {
                  uVar1 = Peripherals::RCC.CR;
                  Peripherals::RCC.CR = uVar1 & 0xfffbffff;
                  uVar1 = Peripherals::RCC.CSR;
                  Peripherals::RCC.CSR = uVar1 | 0x1000000;
                  Peripherals::RCC.CIR = 0;
                  return 0;
                }
                iVar4 = FUN_80001fe8();
              } while ((uint)(iVar4 - iVar3) < 0x65);
              return 3;
            }
            iVar4 = FUN_80001fe8();
          } while ((uint)(iVar4 - iVar3) < 3);
          return 3;
        }
        iVar4 = FUN_80001fe8();
      } while ((uint)(iVar4 - iVar3) < 0x1389);
      return 3;
    }
    iVar4 = FUN_80001fe8();
  } while ((uint)(iVar4 - iVar3) < 3);
  return 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_800024f0(void)

{
  return _DAT_20000004;
}



uint FUN_800024fc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_800024f0();
  uVar1 = Peripherals::RCC.CFGR;
  return uVar2 >> *(sbyte *)(((uVar1 << 0x15) >> 0x1d) + 0x800553e);
}



uint FUN_80002520(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_800024f0();
  uVar1 = Peripherals::RCC.CFGR;
  return uVar2 >> *(sbyte *)(((uVar1 << 0x12) >> 0x1d) + 0x800553e);
}



uint FUN_80002544(void)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  uVar1 = Peripherals::RCC.CFGR;
  uVar2 = uVar1 & 0xc;
  if (uVar2 != 0) {
    if (uVar2 == 4) {
      return 8000000;
    }
    if (uVar2 == 8) {
      local_c = (uint)*(byte *)(((uVar1 << 10) >> 0x1c) + 0x8005546);
      if ((uVar1 & 0x10000) == 0) {
        local_c = local_c * 4000000;
      }
      else {
        uVar1 = Peripherals::RCC.CFGR;
        local_c = (local_c * 8000000) / (uint)*(byte *)(0x8005556 - ((int)(uVar1 << 0xe) >> 0x1f));
      }
      return local_c;
    }
  }
  return 8000000;
}



void FUN_800025fc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_80002600(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint *puVar5;
  bool bVar6;
  int local_14;
  undefined1 local_9;
  
  if (param_1 == (byte *)0x0) {
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if (((uVar1 & 0xc) == 4) ||
       ((uVar1 = Peripherals::RCC.CFGR, (uVar1 & 0xc) == 8 &&
        (uVar1 = Peripherals::RCC.CFGR, (int)(uVar1 * 0x8000) < 0)))) {
      uVar1 = Peripherals::RCC.CR;
      if (((int)(uVar1 * 0x4000) < 0) && (*(int *)(param_1 + 4) == 0)) {
        return 1;
      }
    }
    else {
      if (*(int *)(param_1 + 4) == 0x10000) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x10000;
      }
      else if (*(int *)(param_1 + 4) == 0) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffeffff;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffbffff;
      }
      else if (*(int *)(param_1 + 4) == 0x50000) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x40000;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x10000;
      }
      else {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffeffff;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffbffff;
      }
      if (*(int *)(param_1 + 4) == 0) {
        iVar2 = FUN_80001fe8();
        while (uVar1 = Peripherals::RCC.CR, (int)(uVar1 * 0x4000) < 0) {
          iVar3 = FUN_80001fe8();
          if (100 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
      else {
        iVar2 = FUN_80001fe8();
        while (uVar1 = Peripherals::RCC.CR, -1 < (int)(uVar1 * 0x4000)) {
          iVar3 = FUN_80001fe8();
          if (100 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
    }
  }
  if (-1 < (int)((uint)*param_1 * 0x40000000)) goto LAB_800028a2;
  uVar1 = Peripherals::RCC.CFGR;
  if ((uVar1 & 0xc) != 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if ((uVar1 & 0xc) != 8) {
      if (*(int *)(param_1 + 0x10) == 0) {
        uRam42420000 = 0;
        iVar2 = FUN_80001fe8();
        while (uVar1 = Peripherals::RCC.CR, (int)(uVar1 * 0x40000000) < 0) {
          iVar3 = FUN_80001fe8();
          if (2 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
      else {
        uRam42420000 = 1;
        iVar2 = FUN_80001fe8();
        while (uVar1 = Peripherals::RCC.CR, -1 < (int)(uVar1 * 0x40000000)) {
          iVar3 = FUN_80001fe8();
          if (2 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xffffff07 | *(int *)(param_1 + 0x14) << 3;
      }
      goto LAB_800028a2;
    }
    if (_DAT_00001004 * 0x8000 < 0) goto LAB_800028a2;
    uVar1 = 0x1000;
  }
  if ((*(int *)(uVar1 & 0xffff | 0x40020000) * 0x40000000 < 0) && (*(int *)(param_1 + 0x10) != 1)) {
    return 1;
  }
  uVar1 = Peripherals::RCC.CR;
  Peripherals::RCC.CR = uVar1 & 0xffffff07 | *(int *)(param_1 + 0x14) << 3;
LAB_800028a2:
  if ((int)((uint)*param_1 * 0x10000000) < 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      _DAT_42420480 = 0;
      iVar2 = FUN_80001fe8();
      while (uVar1 = Peripherals::RCC.CSR, (int)(uVar1 * 0x40000000) < 0) {
        iVar3 = FUN_80001fe8();
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      iVar2 = FUN_80001fe8();
      while (uVar1 = Peripherals::RCC.CSR, -1 < (int)(uVar1 * 0x40000000)) {
        iVar3 = FUN_80001fe8();
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
      FUN_80003cc0(1);
    }
  }
  if ((int)((uint)*param_1 * 0x20000000) < 0) {
    uVar1 = Peripherals::RCC.APB1ENR;
    bVar6 = -1 < (int)(uVar1 * 8);
    if (bVar6) {
      uVar1 = Peripherals::RCC.APB1ENR;
      Peripherals::RCC.APB1ENR = uVar1 | 0x10000000;
      uVar1 = Peripherals::RCC.APB1ENR;
    }
    uVar1 = Peripherals::PWR.CR;
    if (-1 < (int)(uVar1 * 0x800000)) {
      uVar1 = Peripherals::PWR.CR;
      Peripherals::PWR.CR = uVar1 | 0x100;
      iVar2 = FUN_80001fe8();
      while (uVar1 = Peripherals::PWR.CR, -1 < (int)(uVar1 * 0x800000)) {
        iVar3 = FUN_80001fe8();
        if (100 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    if (*(int *)(param_1 + 0xc) == 1) {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 | 1;
    }
    else if (*(int *)(param_1 + 0xc) == 0) {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
    }
    else if (*(int *)(param_1 + 0xc) == 5) {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 | 4;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 | 1;
    }
    else {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = FUN_80001fe8();
      while (uVar1 = Peripherals::RCC.BDCR, (int)(uVar1 * 0x40000000) < 0) {
        iVar3 = FUN_80001fe8();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      iVar2 = FUN_80001fe8();
      while (uVar1 = Peripherals::RCC.BDCR, -1 < (int)(uVar1 * 0x40000000)) {
        iVar3 = FUN_80001fe8();
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    if (bVar6) {
      uVar1 = Peripherals::RCC.APB1ENR;
      Peripherals::RCC.APB1ENR = uVar1 & 0xefffffff;
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if ((uVar1 & 0xc) != 8) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        _DAT_42420060 = 0;
        puVar4 = (uint *)FUN_80001fe8();
        puVar5 = extraout_r1;
        while (uVar1 = Peripherals::RCC.CR, (int)(uVar1 * 0x40) < 0) {
          iVar2 = FUN_80001fe8();
          puVar5 = puVar4;
          if (2 < (uint)(iVar2 - (int)puVar4)) {
            return 3;
          }
        }
        if (*(int *)(param_1 + 0x20) == 0x10000) {
          puVar5 = &Peripherals::RCC.CFGR;
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 & 0xfffdffff | *(uint *)(param_1 + 8);
        }
        *puVar5 = *puVar5 & 0xffc2ffff | *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
        _DAT_42420060 = 1;
        local_14 = FUN_80001fe4();
        while( true ) {
          uVar1 = Peripherals::RCC.CR;
          uVar1 = uVar1 * 0x40;
          if ((int)uVar1 < 0) break;
          iVar2 = FUN_80001fe4();
          if (2 < (uint)(iVar2 - local_14)) {
            return 3;
          }
        }
      }
      else {
        _DAT_00000042 = 0;
        local_14 = FUN_80001fe4();
        uVar1 = 0x1000;
      }
      do {
        if (-1 < *(int *)(uVar1 & 0xffff | 0x40020000) * 0x40) {
          return local_9;
        }
        func_0x7fc02bfc();
        iVar2 = FUN_80001fe8();
        uVar1 = iVar2 - local_14;
      } while (uVar1 < 3);
      return 3;
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      return 1;
    }
    uVar1 = Peripherals::RCC.CFGR;
    if (((uVar1 & 0x10000) != *(uint *)(param_1 + 0x20)) ||
       ((uVar1 & 0x3c0000) != *(uint *)(param_1 + 0x24))) {
      return 1;
    }
  }
  return 0;
}



bool FUN_80002c7c(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_80003d60(param_1);
  return bVar1;
}



bool FUN_80002c84(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_80003d60(param_1);
  return bVar1;
}



void FUN_80002c8c(void)

{
  return;
}



undefined4 FUN_80002c98(int *param_1)

{
  bool bVar1;
  
  if ((*(char *)((int)param_1 + 0x41) == '!') && ((*(uint *)(*param_1 + 0x14) & 0xff) >> 7 != 0)) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
    } while (!bVar1);
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffff7f;
    if (param_1[0xe] != 0) {
      FUN_80000de0((undefined4 *)param_1[0xe]);
    }
    FUN_800040a0(param_1);
  }
  if ((*(char *)((int)param_1 + 0x42) == '\"') && (*(int *)(*param_1 + 0x14) << 0x19 < 0)) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
    } while (!bVar1);
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
    if (param_1[0xf] != 0) {
      FUN_80000de0((undefined4 *)param_1[0xf]);
    }
    FUN_80003fe4();
  }
  return 0;
}



bool FUN_80002d64(int *param_1)

{
  bool local_9;
  
  if (param_1 != (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0x41) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_8000329c();
    param_1[0x11] = 0;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    *(undefined1 *)((int)param_1 + 0x42) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  local_9 = param_1 == (int *)0x0;
  return local_9;
}



void FUN_80002dc4(void)

{
  return;
}



void FUN_80002dc8(void)

{
  return;
}



uint FUN_80002dd0(int *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)*param_1;
  uVar5 = *(uint *)(*param_1 + 0xc);
  uVar6 = *(uint *)(*param_1 + 0x14);
  if ((((uVar4 & 0xf) == 0) && ((int)(uVar4 * 0x4000000) < 0)) && ((int)(uVar5 * 0x4000000) < 0)) {
    bVar2 = FUN_800040d8(param_1);
    uVar6 = (uint)bVar2;
  }
  else if (((uVar4 & 0xf) == 0) || (((uVar6 & 1) == 0 && ((uVar5 & 0x120) == 0)))) {
    if ((param_1[0xc] == 1) && (((int)(uVar4 * 0x8000000) < 0 && ((int)(uVar5 * 0x8000000) < 0)))) {
      if (*(int *)(*param_1 + 0x14) * 0x2000000 < 0) {
        uVar4 = *(uint *)(*(int *)param_1[0xf] + 4);
        uVar6 = 0;
        if (((uVar4 & 0xffff) != 0) && (uVar6 = uVar4 & 0xffff, uVar6 < *(ushort *)(param_1 + 0xb)))
        {
          *(short *)((int)param_1 + 0x2e) = (short)uVar4;
          if (*(int *)(param_1[0xf] + 0x18) != 0x20) {
            do {
              ExclusiveAccess((uint *)(*param_1 + 0xc));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
            } while (!bVar1);
            *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0x14));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
            } while (!bVar1);
            *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0x14));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
            } while (!bVar1);
            *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
            *(undefined1 *)((int)param_1 + 0x42) = 0x20;
            param_1[0xc] = 0;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0xc));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
            } while (!bVar1);
            *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
            FUN_80000de0((undefined4 *)param_1[0xf]);
          }
          param_1[0xd] = 2;
          uVar6 = FUN_80002c8c();
        }
      }
      else {
        uVar6 = 0;
        if ((*(short *)((int)param_1 + 0x2e) != 0) &&
           (uVar6 = 0, (short)param_1[0xb] != *(short *)((int)param_1 + 0x2e))) {
          do {
            ExclusiveAccess((uint *)(*param_1 + 0xc));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
          } while (!bVar1);
          *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
          do {
            ExclusiveAccess((uint *)(*param_1 + 0x14));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
          } while (!bVar1);
          *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
          *(undefined1 *)((int)param_1 + 0x42) = 0x20;
          param_1[0xc] = 0;
          do {
            ExclusiveAccess((uint *)(*param_1 + 0xc));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
          } while (!bVar1);
          *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
          param_1[0xd] = 2;
          uVar6 = FUN_80002c8c();
        }
      }
    }
    else if (((int)(uVar4 * 0x1000000) < 0) && ((int)(uVar5 * 0x1000000) < 0)) {
      bVar2 = FUN_8000440c(param_1);
      uVar6 = (uint)bVar2;
    }
    else {
      uVar6 = uVar4 * 0x2000000;
      if (((int)uVar6 < 0) && (uVar6 = uVar5 * 0x2000000, (int)uVar6 < 0)) {
        uVar6 = FUN_80004078(param_1);
      }
    }
  }
  else {
    if (((uVar4 & 1) != 0) && ((uVar5 & 0x100) != 0)) {
      param_1[0x11] = param_1[0x11] | 1;
    }
    if (((int)(uVar4 * 0x20000000) < 0) && ((uVar6 & 1) != 0)) {
      param_1[0x11] = param_1[0x11] | 2;
    }
    if (((int)(uVar4 * 0x40000000) < 0) && ((uVar6 & 1) != 0)) {
      param_1[0x11] = param_1[0x11] | 4;
    }
    if (((int)(uVar4 * 0x10000000) < 0) && (((int)(uVar5 * 0x4000000) < 0 || ((uVar6 & 1) != 0)))) {
      param_1[0x11] = param_1[0x11] | 8;
    }
    uVar6 = 0;
    if (param_1[0x11] != 0) {
      if (((int)(uVar4 * 0x4000000) < 0) && ((int)(uVar5 * 0x4000000) < 0)) {
        FUN_800040d8(param_1);
      }
      if ((param_1[0x11] * 0x10000000 < 0) || (*(int *)(*param_1 + 0x14) << 0x19 < 0)) {
        FUN_80003fe4();
        if (*(int *)(*param_1 + 0x14) * 0x2000000 < 0) {
          do {
            ExclusiveAccess((uint *)(*param_1 + 0x14));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
          } while (!bVar1);
          *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
          if (param_1[0xf] == 0) {
            uVar6 = FUN_80002dc8();
          }
          else {
            *(undefined4 *)(param_1[0xf] + 0x34) = 0x8003e21;
            cVar3 = FUN_80000e5c((uint *)param_1[0xf]);
            uVar6 = 0;
            if (cVar3 != '\0') {
              uVar6 = (**(code **)(param_1[0xf] + 0x34))();
            }
          }
        }
        else {
          uVar6 = FUN_80002dc8();
        }
      }
      else {
        FUN_80002dc8();
        uVar6 = 0;
        param_1[0x11] = 0;
      }
    }
  }
  return uVar6;
}



undefined1 FUN_800031fc(int *param_1)

{
  undefined1 local_9;
  
  if (param_1 == (int *)0x0) {
    local_9 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_800032a4();
    }
    *(undefined1 *)((int)param_1 + 0x41) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_80004244(param_1);
    *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
    param_1[0x11] = 0;
    *(undefined1 *)((int)param_1 + 0x41) = 0x20;
    *(undefined1 *)((int)param_1 + 0x42) = 0x20;
    param_1[0xd] = 0;
    local_9 = 0;
  }
  return local_9;
}



void FUN_8000329c(void)

{
  return;
}



void FUN_800032a4(void)

{
  return;
}



undefined1 FUN_800032ac(int *param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x42) == ' ') {
    if ((param_2 == 0) || (param_3 == 0)) {
      local_9 = 1;
    }
    else {
      param_1[0xc] = 0;
      uVar1 = FUN_80004300(param_1,param_2,param_3);
      local_9 = (undefined1)uVar1;
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_80003304(void)

{
  return;
}



undefined1 FUN_80003314(int *param_1,ushort *param_2,short param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  ushort *local_24;
  ushort *local_20;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x41) == ' ') {
    if ((param_2 == (ushort *)0x0) || (param_3 == 0)) {
      local_9 = 1;
    }
    else {
      param_1[0x11] = 0;
      *(undefined1 *)((int)param_1 + 0x41) = 0x21;
      iVar2 = FUN_80001fe8();
      *(short *)(param_1 + 9) = param_3;
      *(short *)((int)param_1 + 0x26) = param_3;
      if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
        local_20 = (ushort *)0x0;
        local_24 = param_2;
      }
      else {
        local_24 = (ushort *)0x0;
        local_20 = param_2;
      }
      while (*(short *)((int)param_1 + 0x26) != 0) {
        cVar1 = FUN_800044a0(param_1,0x80,'\0',iVar2,param_4);
        if (cVar1 != '\0') {
          return 3;
        }
        if (local_20 == (ushort *)0x0) {
          *(uint *)(*param_1 + 4) = *local_24 & 0x1ff;
          local_24 = local_24 + 1;
        }
        else {
          *(uint *)(*param_1 + 4) = (uint)(byte)*local_20;
          local_20 = (ushort *)((int)local_20 + 1);
        }
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
      }
      cVar1 = FUN_800044a0(param_1,0x40,'\0',iVar2,param_4);
      if (cVar1 == '\0') {
        *(undefined1 *)((int)param_1 + 0x41) = 0x20;
        local_9 = 0;
      }
      else {
        local_9 = 3;
      }
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_80003434(void)

{
  return;
}



undefined4 FUN_80003440(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined4 extraout_r3;
  
  FUN_80000cb0((undefined2 *)0x803f800,0x20000b10,0x2f,in_r3);
  FUN_80000c04((ushort *)0x803f800,0x2f,extraout_r2,extraout_r3);
  return 0;
}



void FUN_8000346c(void)

{
  uint uVar1;
  uint local_18 [4];
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 8;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::AFIO.MAPR;
  Peripherals::AFIO.MAPR = uVar1 & 0xf8ffffff | 0x2000000;
  uVar1 = Peripherals::RCC.BDCR;
  Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
  uVar1 = Peripherals::RCC.BDCR;
  Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
  local_18[0] = 0x81c3;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = 2;
  FUN_80001c60(&Peripherals::GPIOA.CRL,local_18);
  FUN_80001fb8(0x40010800,0x81c3,'\0');
  local_18[0] = 0xf000;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = 2;
  FUN_80001c60(&Peripherals::GPIOB.CRL,local_18);
  FUN_80001fb8(0x40010c00,0xe000,'\0');
  local_18[0] = 0x3c0;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = 2;
  FUN_80001c60(&Peripherals::GPIOC.CRL,local_18);
  FUN_80001fb8(0x40011000,0x3c0,'\0');
  local_18[0] = 0xc0;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_80001c60(&Peripherals::GPIOB.CRL,local_18);
  local_18[0] = 0x300;
  local_18[1] = 0;
  local_18[2] = 1;
  FUN_80001c60(&Peripherals::GPIOB.CRL,local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80003614(void)

{
  uint uVar1;
  uint local_18 [4];
  
  local_18[2] = 0;
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x100000;
  uVar1 = Peripherals::RCC.APB1ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uVar1 = Peripherals::RCC.APB2ENR;
  local_18[0] = 0x1000;
  local_18[1] = 2;
  local_18[3] = 3;
  FUN_80001c60(&Peripherals::GPIOC.CRL,local_18);
  local_18[0] = 4;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_80001c60(&Peripherals::GPIOD.CRL,local_18);
  _DAT_20000aa4 = &Peripherals::UART5;
  _DAT_20000aa8 = 0x1c200;
  _DAT_20000aac = 0;
  _DAT_20000ab0 = 0;
  _DAT_20000ab4 = 0;
  _DAT_20000ab8 = 0xc;
  _DAT_20000abc = 0;
  _DAT_20000ac0 = 0;
  FUN_800031fc((int *)&DAT_20000aa4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_800036ec(void)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x4000;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.AHBENR;
  _DAT_20000020 = 0x200;
  _DAT_20000024 = 2;
  _DAT_2000002c = 3;
  FUN_80001c60(&Peripherals::GPIOA.CRL,(uint *)&DAT_20000020);
  _DAT_20000020 = 0x400;
  _DAT_20000024 = 0;
  _DAT_20000028 = 0;
  FUN_80001c60(&Peripherals::GPIOA.CRL,(uint *)&DAT_20000020);
  _DAT_20000834 = 0x40020058;
  _DAT_20000838 = 0;
  _DAT_2000083c = 0;
  _DAT_20000840 = 0x80;
  _DAT_20000844 = 0;
  _DAT_20000848 = 0;
  _DAT_2000084c = 0;
  _DAT_20000850 = 0;
  FUN_800020c0(0xf,0,0);
  FUN_800020ac('\x0f');
  FUN_800017f8();
  _DAT_20000a08 = &DAT_20000834;
  _DAT_20000858 = &DAT_200009cc;
  _DAT_20000878 = 0x40020044;
  _DAT_2000087c = 0x10;
  _DAT_20000880 = 0;
  _DAT_20000884 = 0x80;
  _DAT_20000888 = 0;
  _DAT_2000088c = 0;
  _DAT_20000890 = 0;
  _DAT_20000894 = 0;
  FUN_800020c0(0xe,0,0);
  FUN_800020ac('\x0e');
  FUN_800017f8();
  _DAT_20000a04 = &DAT_20000878;
  _DAT_2000089c = &DAT_200009cc;
  FUN_800020c0(0x25,0,0);
  FUN_800020ac('%');
  _DAT_200009cc = &Peripherals::USART1;
  _DAT_200009d0 = 0x1c200;
  _DAT_200009d4 = 0;
  _DAT_200009d8 = 0;
  _DAT_200009dc = 0;
  _DAT_200009e0 = 0xc;
  _DAT_200009e4 = 0;
  _DAT_200009e8 = 0;
  FUN_800031fc((int *)&DAT_200009cc);
  _DAT_200009cc->CR1 = _DAT_200009cc->CR1 | 0x10;
  uVar2 = FUN_800032ac((int *)&DAT_200009cc,0x20000d96,0x226);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_800038b4(void)

{
  uint uVar1;
  undefined1 uVar2;
  uint local_24 [5];
  uint local_10;
  uint local_c;
  
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x20000;
  local_c = Peripherals::RCC.APB1ENR;
  local_c = local_c & 0x20000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  local_10 = Peripherals::RCC.APB2ENR;
  local_10 = local_10 & 4;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  local_24[4] = Peripherals::RCC.AHBENR;
  local_24[4] = local_24[4] & 1;
  local_24[2] = 0;
  local_24[0] = 4;
  local_24[1] = 2;
  local_24[3] = 3;
  FUN_80001c60(&Peripherals::GPIOA.CRL,local_24);
  local_24[0] = 8;
  local_24[1] = 0;
  local_24[2] = 0;
  FUN_80001c60(&Peripherals::GPIOA.CRL,local_24);
  _DAT_200008bc = 0x4002006c;
  _DAT_200008c0 = 0;
  _DAT_200008c4 = 0;
  _DAT_200008c8 = 0x80;
  _DAT_200008cc = 0;
  _DAT_200008d0 = 0;
  _DAT_200008d4 = 0;
  _DAT_200008d8 = 0;
  FUN_800017f8();
  _DAT_20000a50 = &DAT_200008bc;
  _DAT_200008e0 = &DAT_20000a14;
  _DAT_20000900 = 0x40020080;
  _DAT_20000904 = 0x10;
  _DAT_20000908 = 0;
  _DAT_2000090c = 0x80;
  _DAT_20000910 = 0;
  _DAT_20000914 = 0;
  _DAT_20000918 = 0;
  _DAT_2000091c = 0;
  FUN_800017f8();
  _DAT_20000a4c = &DAT_20000900;
  _DAT_20000924 = &DAT_20000a14;
  FUN_800020c0(0x26,0,0);
  FUN_800020ac('&');
  _DAT_20000a14 = &Peripherals::USART2;
  _DAT_20000a18 = 0x4b00;
  _DAT_20000a1c = 0;
  _DAT_20000a20 = 0;
  _DAT_20000a24 = 0;
  _DAT_20000a28 = 0xc;
  _DAT_20000a2c = 0;
  _DAT_20000a30 = 0;
  FUN_800031fc((int *)&DAT_20000a14);
  _DAT_20000a14->CR1 = _DAT_20000a14->CR1 | 0x10;
  uVar2 = FUN_800032ac((int *)&DAT_20000a14,0x20001022,100);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_80003a60(void)

{
  uint uVar1;
  undefined1 uVar2;
  uint local_18 [4];
  
  local_18[2] = 0;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 8;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x40000;
  uVar1 = Peripherals::RCC.APB1ENR;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.AHBENR;
  local_18[0] = 0x400;
  local_18[1] = 2;
  local_18[3] = 3;
  FUN_80001c60(&Peripherals::GPIOB.CRL,local_18);
  local_18[0] = 0x800;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_80001c60(&Peripherals::GPIOB.CRL,local_18);
  _DAT_20000944 = 0x40020030;
  _DAT_20000948 = 0;
  _DAT_2000094c = 0;
  _DAT_20000950 = 0x80;
  _DAT_20000954 = 0;
  _DAT_20000958 = 0;
  _DAT_2000095c = 0;
  _DAT_20000960 = 0;
  FUN_800020c0(0xd,0,0);
  FUN_800020ac('\r');
  FUN_800017f8();
  _DAT_20000a98 = &DAT_20000944;
  _DAT_20000968 = &DAT_20000a5c;
  _DAT_20000988 = 0x4002001c;
  _DAT_2000098c = 0x10;
  _DAT_20000990 = 0;
  _DAT_20000994 = 0x80;
  _DAT_20000998 = 0;
  _DAT_2000099c = 0;
  _DAT_200009a0 = 0;
  _DAT_200009a4 = 0;
  FUN_800020c0(0xc,0,0);
  FUN_800020ac('\f');
  FUN_800017f8();
  _DAT_20000a94 = &DAT_20000988;
  _DAT_200009ac = &DAT_20000a5c;
  FUN_800020c0(0x27,0,0);
  FUN_800020ac('\'');
  _DAT_20000a5c = &Peripherals::USART3;
  _DAT_20000a60 = 0x1c200;
  _DAT_20000a64 = 0;
  _DAT_20000a68 = 0;
  _DAT_20000a6c = 0;
  _DAT_20000a70 = 0xc;
  _DAT_20000a74 = 0;
  _DAT_20000a78 = 0;
  FUN_800031fc((int *)&DAT_20000a5c);
  _DAT_20000a5c->CR1 = _DAT_20000a5c->CR1 | 0x10;
  uVar2 = FUN_800032ac((int *)&DAT_20000a5c,0x200010eb,100);
  return uVar2;
}



void FUN_80003c2c(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined1 extraout_r2;
  
  uVar1 = FUN_80002010();
  FUN_80003dbc(uVar1,extraout_r1,extraout_r2);
  FUN_8000346c();
  FUN_800036ec();
  FUN_800038b4();
  FUN_80003a60();
  FUN_80003614();
  return;
}



uint FUN_80003c50(uint param_1,uint param_2,uint param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_1 & 7;
  if (7 - local_20 < 5) {
    local_1c = 7 - local_20;
  }
  else {
    local_1c = 4;
  }
  if (local_20 + 4 < 7) {
    local_20 = 0;
  }
  else {
    local_20 = local_20 - 3;
  }
  return (param_2 & (1 << (local_1c & 0xff)) - 1U) << (local_20 & 0xff) |
         param_3 & (1 << (local_20 & 0xff)) - 1U;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80003cc0(int param_1)

{
  bool bVar1;
  undefined4 local_8;
  
  local_8 = (_DAT_20000004 / 8000) * param_1;
  do {
    bVar1 = local_8 != 0;
    local_8 = local_8 + -1;
  } while (bVar1);
  return;
}



undefined4 FUN_80003d00(void)

{
  undefined1 auStack_808 [2048];
  
  FUN_8000019a(auStack_808,0x800);
  FUN_80004c38();
  FUN_80000cac();
  FUN_80000bb8();
  FUN_80000164(auStack_808,&DAT_20000b10,0x5e);
  FUN_80000d30();
  return 0;
}



bool FUN_80003d5c(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    Peripherals::STK.LOAD_ = param_1 - 1;
    func_0x80004874(0xffffffff,0xf);
    Peripherals::STK.VAL = 0;
    Peripherals::STK.CTRL = 7;
  }
  return !bVar1;
}



bool FUN_80003d60(int param_1)

{
  bool bVar1;
  int iStack00000000;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    Peripherals::STK.LOAD_ = param_1 - 1;
    iStack00000000 = param_1;
    func_0x80004874(0xffffffff,0xf);
    Peripherals::STK.VAL = 0;
    Peripherals::STK.CTRL = 7;
  }
  return !bVar1;
}



void FUN_80003db8(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_80000196((undefined1 *)auStack_30,0x28,param_3);
  auStack_30[0] = 2;
  uStack_20 = 1;
  uStack_1c = 0x10;
  uStack_14 = 2;
  uStack_10 = 0;
  uStack_c = 0x180000;
  FUN_800025fc();
  FUN_80002104();
  return;
}



void FUN_80003dbc(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 *puStack00000000;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  
  puStack00000000 = (undefined1 *)&stack0x00000018;
  FUN_80000196(puStack00000000,0x28,param_3);
  uStack00000014 = 0;
  uStack00000010 = 0;
  uStack0000000c = 0;
  uStack00000008 = 0;
  uStack00000004 = 0;
  uStack00000018 = 2;
  uStack00000028 = 1;
  uStack0000002c = 0x10;
  uStack00000034 = 2;
  uStack00000038 = 0;
  uStack0000003c = 0x180000;
  FUN_800025fc();
  uStack00000004 = 0xf;
  uStack00000008 = 2;
  uStack0000000c = 0;
  uStack00000010 = 0x400;
  uStack00000014 = 0;
  FUN_80002104();
  return;
}



void FUN_80003e1c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined2 *)(iVar1 + 0x2e) = 0;
  *(undefined2 *)(iVar1 + 0x26) = 0;
  FUN_80002dc4();
  return;
}



void FUN_80003e3c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if ((*(char *)((int)piVar1 + 0x41) == '!') && ((*(uint *)(*piVar1 + 0x14) & 0xff) >> 7 != 0)) {
    *(undefined2 *)((int)piVar1 + 0x26) = 0;
    FUN_8000409c();
  }
  if ((*(char *)((int)piVar1 + 0x42) == '\"') && (*(int *)(*piVar1 + 0x14) << 0x19 < 0)) {
    *(undefined2 *)((int)piVar1 + 0x2e) = 0;
    thunk_FUN_80003fe4();
  }
  piVar1[0x11] = piVar1[0x11] | 0x10;
  FUN_80002dc4();
  return;
}



uint FUN_80003eb8(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)param_1[9];
  iVar3 = *(int *)*param_1 * 0x4000000;
  if (-1 < iVar3) {
    *(undefined2 *)((int)piVar2 + 0x2e) = 0;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0xc));
      uVar4 = *(uint *)(*piVar2 + 0xc) & 0xfffffeff;
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0xc));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0xc) = uVar4;
    do {
      ExclusiveAccess(*piVar2 + 0x14);
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0x14));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0x14) = uVar4;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0x14));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0x14) = *(uint *)(*piVar2 + 0x14) & 0xffffffbf;
    *(undefined1 *)((int)piVar2 + 0x42) = 0x20;
    if (piVar2[0xc] == 1) {
      do {
        ExclusiveAccess((uint *)(*piVar2 + 0xc));
        bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0xc));
      } while (!bVar1);
      *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) & 0xffffffef;
    }
    iVar3 = 0;
    param_2 = piVar2;
  }
  param_2[0xd] = iVar3;
  if (piVar2[0xc] == 1) {
    bVar1 = FUN_80002c84((int)piVar2);
    uVar4 = (uint)bVar1;
  }
  else {
    uVar4 = func_0x800032fc(piVar2);
  }
  return uVar4;
}



uint FUN_80003fa8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x34) = 1;
  if (*(int *)(iVar2 + 0x30) == 1) {
    bVar1 = FUN_80002c84(iVar2);
    uVar3 = (uint)bVar1;
  }
  else {
    uVar3 = FUN_80003304();
  }
  return uVar3;
}



void thunk_FUN_80003fe4(void)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int *in_stack_0000000c;
  int in_stack_00000044;
  
  ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
  uVar3 = *(uint *)(*in_stack_0000000c + 0xc);
  do {
    puVar1 = (uint *)(*(int *)**(undefined4 **)(in_stack_00000044 + 0x3c) + 0xc);
    bVar2 = (bool)hasExclusiveAccess(puVar1);
    if (bVar2) {
      *puVar1 = uVar3 & 0xfffffedf;
    }
    uVar3 = (uint)!bVar2;
  } while (uVar3 != 0);
  do {
    ExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
    bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
  } while (!bVar2);
  *(uint *)(*in_stack_0000000c + 0x14) = *(uint *)(*in_stack_0000000c + 0x14) & 0xfffffffe;
  if (in_stack_0000000c[0xc] == 1) {
    do {
      ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
      bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
    } while (!bVar2);
    *(uint *)(*in_stack_0000000c + 0xc) = *(uint *)(*in_stack_0000000c + 0xc) & 0xffffffef;
  }
  *(undefined1 *)((int)in_stack_0000000c + 0x42) = 0x20;
  in_stack_0000000c[0xc] = 0;
  return;
}



void thunk_FUN_80003fe4(void)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int *in_stack_0000000c;
  int in_stack_00000044;
  
  ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
  uVar3 = *(uint *)(*in_stack_0000000c + 0xc);
  do {
    puVar1 = (uint *)(*(int *)**(undefined4 **)(in_stack_00000044 + 0x3c) + 0xc);
    bVar2 = (bool)hasExclusiveAccess(puVar1);
    if (bVar2) {
      *puVar1 = uVar3 & 0xfffffedf;
    }
    uVar3 = (uint)!bVar2;
  } while (uVar3 != 0);
  do {
    ExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
    bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
  } while (!bVar2);
  *(uint *)(*in_stack_0000000c + 0x14) = *(uint *)(*in_stack_0000000c + 0x14) & 0xfffffffe;
  if (in_stack_0000000c[0xc] == 1) {
    do {
      ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
      bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
    } while (!bVar2);
    *(uint *)(*in_stack_0000000c + 0xc) = *(uint *)(*in_stack_0000000c + 0xc) & 0xffffffef;
  }
  *(undefined1 *)((int)in_stack_0000000c + 0x42) = 0x20;
  in_stack_0000000c[0xc] = 0;
  return;
}



void FUN_80003fe4(void)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int *in_stack_0000000c;
  int in_stack_00000044;
  
  ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
  uVar3 = *(uint *)(*in_stack_0000000c + 0xc);
  do {
    puVar1 = (uint *)(*(int *)**(undefined4 **)(in_stack_00000044 + 0x3c) + 0xc);
    bVar2 = (bool)hasExclusiveAccess(puVar1);
    if (bVar2) {
      *puVar1 = uVar3 & 0xfffffedf;
    }
    uVar3 = (uint)!bVar2;
  } while (uVar3 != 0);
  do {
    ExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
    bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0x14));
  } while (!bVar2);
  *(uint *)(*in_stack_0000000c + 0x14) = *(uint *)(*in_stack_0000000c + 0x14) & 0xfffffffe;
  if (in_stack_0000000c[0xc] == 1) {
    do {
      ExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
      bVar2 = (bool)hasExclusiveAccess((uint *)(*in_stack_0000000c + 0xc));
    } while (!bVar2);
    *(uint *)(*in_stack_0000000c + 0xc) = *(uint *)(*in_stack_0000000c + 0xc) & 0xffffffef;
  }
  *(undefined1 *)((int)in_stack_0000000c + 0x42) = 0x20;
  in_stack_0000000c[0xc] = 0;
  return;
}



undefined4 FUN_80004078(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  FUN_80003434();
  return 0;
}



void FUN_8000409c(void)

{
  return;
}



void FUN_800040a0(int *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess((uint *)(*param_1 + 0xc));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
  } while (!bVar1);
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff3f;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  return;
}



undefined1 FUN_800040d8(int *param_1)

{
  bool bVar1;
  short sVar2;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x42) == '\"') {
    if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
      *(ushort *)param_1[10] = (ushort)*(undefined4 *)(*param_1 + 4) & 0x1ff;
      param_1[10] = param_1[10] + 2;
    }
    else {
      if ((param_1[2] == 0x1000) || ((param_1[2] == 0 && (param_1[4] == 0)))) {
        *(byte *)param_1[10] = (byte)*(undefined4 *)(*param_1 + 4);
      }
      else {
        *(byte *)param_1[10] = (byte)*(undefined4 *)(*param_1 + 4) & 0x7f;
      }
      param_1[10] = param_1[10] + 1;
    }
    sVar2 = *(short *)((int)param_1 + 0x2e) + -1;
    *(short *)((int)param_1 + 0x2e) = sVar2;
    if (sVar2 == 0) {
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffdf;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
      *(undefined1 *)((int)param_1 + 0x42) = 0x20;
      param_1[0xd] = 0;
      if (param_1[0xc] == 1) {
        param_1[0xc] = 0;
        do {
          ExclusiveAccess((uint *)(*param_1 + 0xc));
          bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
        } while (!bVar1);
        *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
        FUN_80002c8c();
      }
      else {
        FUN_80003304();
      }
      local_9 = 0;
    }
    else {
      local_9 = 0;
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_80004244(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_14;
  
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(*param_1 + 0xc) =
       *(uint *)(*param_1 + 0xc) & 0xffffe9f3 | param_1[2] | param_1[4] | param_1[5];
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  if ((USART1 *)*param_1 == &Peripherals::USART1) {
    local_14 = FUN_80002520();
  }
  else {
    local_14 = FUN_800024fc();
  }
  uVar2 = (local_14 * 0x19) / (uint)(param_1[1] << 2);
  uVar1 = (uVar2 % 100) * 0x10 + 0x32;
  *(uint *)(*param_1 + 8) =
       (uVar1 / 100 & 0xf0) + (uVar2 / 100) * 0x10 +
       ((uint)((int)((ulonglong)uVar1 * 0x51eb851f >> 0x20) << 0x17) >> 0x1c);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 FUN_80004300(int *param_1,int param_2,ushort param_3)

{
  bool bVar1;
  
  param_1[10] = param_2;
  *(ushort *)(param_1 + 0xb) = param_3;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0x22;
  *(undefined4 *)(param_1[0xf] + 0x28) = 0x8003ebd;
  *(undefined4 *)(param_1[0xf] + 0x2c) = 0x8003fb1;
  *(undefined4 *)(param_1[0xf] + 0x30) = 0x8003e41;
  *(undefined4 *)(param_1[0xf] + 0x34) = 0;
  FUN_800018ec((int *)param_1[0xf],*param_1 + 4,param_2,(uint)param_3);
  if (param_1[4] != 0) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0xc));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
    } while (!bVar1);
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x100;
  }
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x40;
  return 0;
}



undefined1 FUN_8000440c(int *param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined1 local_1;
  
  if (*(char *)((int)param_1 + 0x41) == '!') {
    if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
      *(uint *)(*param_1 + 4) = *(ushort *)param_1[8] & 0x1ff;
      param_1[8] = param_1[8] + 2;
    }
    else {
      pbVar2 = (byte *)param_1[8];
      param_1[8] = (int)(pbVar2 + 1);
      *(uint *)(*param_1 + 4) = (uint)*pbVar2;
    }
    sVar1 = *(short *)((int)param_1 + 0x26) + -1;
    *(short *)((int)param_1 + 0x26) = sVar1;
    if (sVar1 == 0) {
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff7f;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x40;
    }
    local_1 = 0;
  }
  else {
    local_1 = 2;
  }
  return local_1;
}



undefined1 FUN_800044a0(int *param_1,uint param_2,char param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  
  do {
    if (((*(uint *)*param_1 & param_2) == param_2) != (bool)param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar2 = FUN_80001fe8(), (uint)(iVar2 - param_4) <= param_5))));
  do {
    ExclusiveAccess((uint *)(*param_1 + 0xc));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
  } while (!bVar1);
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffe5f;
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  *(undefined1 *)((int)param_1 + 0x42) = 0x20;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return 3;
}



void FUN_80004574(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  FUN_80002dd0((int *)&DAT_200009cc);
  FUN_800045c8((undefined4 *)&DAT_200009cc,extraout_r1,extraout_r2,extraout_r3);
  return;
}



void FUN_80004590(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  FUN_80002dd0((int *)&DAT_20000a14);
  FUN_800045c8((undefined4 *)&DAT_20000a14,extraout_r1,extraout_r2,extraout_r3);
  return;
}



void FUN_800045ac(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  FUN_80002dd0((int *)&DAT_20000a5c);
  FUN_800045c8((undefined4 *)&DAT_20000a5c,extraout_r1,extraout_r2,extraout_r3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 *
FUN_800045c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  USART3 *pUVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined1 local_22;
  
  if (((USART1 *)*param_1 == &Peripherals::USART1) &&
     (FUN_80004c3c((byte *)0x8005607,0x40013800,param_3,param_4), param_3 = extraout_r2,
     param_4 = extraout_r3, (*_DAT_200009cc & 0x10) != 0)) {
    FUN_80002c98((int *)&DAT_200009cc);
    uVar1 = 0x226 - (short)*(undefined4 *)(_DAT_20000834 + 4);
    FUN_80000168((undefined4 *)0x20000b6e,(undefined4 *)0x20000d96,(uint)uVar1);
    _DAT_20000d94 = uVar1;
    FUN_8000019a((undefined1 *)0x20000d96,(uint)uVar1);
    FUN_800032ac((int *)&DAT_200009cc,0x20000d96,0x226);
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if (((USART2 *)*param_1 == &Peripherals::USART2) &&
     (FUN_80004c3c((byte *)0x8005624,0x40004400,param_3,param_4), (*_DAT_20000a14 & 0x10) != 0)) {
    FUN_80002c98((int *)&DAT_20000a14);
    uVar1 = 100 - (short)*(undefined4 *)(_DAT_200008bc + 4);
    FUN_80000168((undefined4 *)0x20000fbc,(undefined4 *)0x20001022,(uint)uVar1);
    _DAT_20001020 = uVar1;
    FUN_8000019a((undefined1 *)0x20001022,(uint)uVar1);
    FUN_800032ac((int *)&DAT_20000a14,0x20001022,100);
  }
  pUVar3 = (USART3 *)*param_1;
  if ((pUVar3 == &Peripherals::USART3) && (pUVar3 = (USART3 *)0x0, (*_DAT_20000a5c & 0x10) != 0)) {
    FUN_80002c98((int *)&DAT_20000a5c);
    uVar1 = 100 - (short)*(undefined4 *)(_DAT_20000944 + 4);
    FUN_80000168((undefined4 *)0x20001086,(undefined4 *)0x200010eb,(uint)uVar1);
    local_22 = (undefined1)uVar1;
    DAT_200010ea = local_22;
    FUN_8000019a((undefined1 *)0x200010eb,(uint)uVar1);
    bVar2 = FUN_800032ac((int *)&DAT_20000a5c,0x200010eb,100);
    pUVar3 = (USART3 *)(uint)bVar2;
  }
  return (undefined1 *)pUVar3;
}



undefined4 FUN_80004804(void)

{
  int iVar1;
  
  iVar1 = FUN_80004a90();
  if (iVar1 != 0) {
    FUN_80003d00();
    FUN_80004a88();
  }
  FUN_8000019a(&DAT_20000b10,0x34);
  FUN_80003d00();
  FUN_80004a88();
  return 0;
}



void FUN_80004838(char param_1)

{
  if (-1 < param_1) {
    (&Peripherals::NVIC.ISER0)[(uint)(int)param_1 >> 5] = 1 << ((int)param_1 & 0x1fU);
  }
  return;
}



uint FUN_80004868(void)

{
  uint uVar1;
  
  uVar1 = Peripherals::SCB.AIRCR;
  return (uVar1 << 0x15) >> 0x1d;
}



void FUN_80004878(byte param_1,int param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((int)&Peripherals::SCB.CCR + (param_1 & 0xf)) = (char)(param_2 << 4);
  }
  else {
    *(char *)((int)&Peripherals::NVIC.IPR0 + (int)(char)param_1) = (char)(param_2 << 4);
  }
  return;
}



void FUN_800048bc(uint param_1)

{
  uint uVar1;
  
  uVar1 = Peripherals::SCB.AIRCR;
  Peripherals::SCB.AIRCR = uVar1 & 0xf8ff | (param_1 & 7) << 8 | 0x5fa0000;
  return;
}



void FUN_800048f8(void)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  uVar1 = Peripherals::SCB.AIRCR;
  Peripherals::SCB.AIRCR = uVar1 & 0x700 | 0x5fa0004;
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



ushort FUN_80004920(int param_1,ushort param_2)

{
  undefined1 local_b;
  undefined2 local_a;
  undefined2 local_8;
  
  local_8 = 0xffff;
  for (local_a = 0; local_a < param_2; local_a = local_a + 1) {
    local_8 = local_8 ^ *(byte *)(param_1 + (uint)local_a);
    for (local_b = 0; local_b < 8; local_b = local_b + 1) {
      if ((local_8 & 1) == 0) {
        local_8 = local_8 >> 1;
      }
      else {
        local_8 = local_8 >> 1 ^ 0xa001;
      }
    }
  }
  return local_8;
}



undefined4 FUN_800049b8(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_80003314((int *)&DAT_20000aa4,(ushort *)&local_c,1,0xffffffff);
  return local_c;
}



void FUN_800049dc(uint *param_1)

{
  bool bVar1;
  
  if ((*param_1 & 0x2ffe0000) == 0x20000000) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    Peripherals::STK.CTRL = 0;
    FUN_80002360();
    FUN_80002d64((int *)&DAT_200009cc);
    (*(code *)param_1[1])();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80004a28(void)

{
  FUN_80003c2c();
  FUN_80003440();
  FUN_80004c3c((byte *)0x8005572,(uint)_DAT_20000b14,(uint)_DAT_20000b12,(uint)_DAT_20000b10);
  if ((_DAT_20000b12 == 0) || (_DAT_20000b14 == 0xffff)) {
    FUN_800049dc((uint *)0x8008000);
  }
  FUN_80004804();
  return 0;
}



undefined1 FUN_80004a88(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_80002104();
  return uVar1;
}



undefined4 FUN_80004a90(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar4;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 uVar5;
  undefined4 extraout_r3_06;
  undefined4 extraout_r3_07;
  undefined8 uVar6;
  ulonglong uVar7;
  int local_20;
  uint local_18;
  uint local_14;
  
  uVar6 = func_0x8000537c(0x800555c);
  uVar4 = extraout_r2;
  uVar5 = extraout_r3;
  do {
    local_18 = (uint)uVar6;
    if (2 < local_18 >> 0xf) {
      FUN_80004c3c((byte *)0x80055b6,(uint)((ulonglong)uVar6 >> 0x20),uVar4,uVar5);
      return 0;
    }
    local_14 = 10;
    while (local_14 = local_14 - 1, local_14 != 0) {
      FUN_80004c3c((byte *)0x80055aa,local_14,uVar4,uVar5);
      FUN_8000019a(&DAT_20000034,0x800);
      FUN_80000bbc(local_18 + 0x8008000);
      FUN_80000cb0((undefined2 *)(local_18 + 0x8020000),0x20000034,0x400,extraout_r3_00);
      uVar1 = FUN_80004920(0x20000034,0x800);
      FUN_80000d34(local_18 + 0x8008000,0x20000034,0x400,0x8008000);
      FUN_8000019a(&DAT_20000034,0x800);
      FUN_80000cb0((undefined2 *)(local_18 + 0x8020000),0x20000034,0x400,0x8020000);
      uVar2 = FUN_80004920(0x20000034,0x800);
      if (uVar1 == uVar2) break;
      FUN_80004c3c((byte *)0x80055cd,(uint)uVar1,(uint)uVar2,extraout_r3_01);
      uVar4 = extraout_r2_00;
      uVar5 = extraout_r3_02;
    }
    if (local_14 == 0) {
      return 1;
    }
    uVar3 = FUN_80000310(local_18 >> 0xb);
    uVar3 = FUN_800001b0(uVar3,0x423c0000);
    uVar6 = FUN_80000358(uVar3);
    uVar7 = FUN_8000022c((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),0,0x40590000);
    uVar7 = FUN_8000031a((uint)uVar7,(uint)(uVar7 >> 0x20));
    uVar3 = (uint)uVar7;
    FUN_80004c3c((byte *)0x8005600,uVar3,extraout_r2_01,extraout_r3_03);
    uVar4 = extraout_r2_02;
    uVar5 = extraout_r3_04;
    for (local_20 = 0; local_20 < (int)uVar3; local_20 = local_20 + 1) {
      FUN_80004c3c((byte *)0x80055fe,uVar3,uVar4,uVar5);
      uVar4 = extraout_r2_03;
      uVar5 = extraout_r3_05;
    }
    for (; local_20 < 100; local_20 = local_20 + 1) {
      FUN_80004c3c((byte *)0x80056ab,uVar3,uVar4,uVar5);
      uVar3 = extraout_r1;
      uVar4 = extraout_r2_04;
      uVar5 = extraout_r3_06;
    }
    FUN_80004c3c((byte *)0x8005558,uVar3,uVar4,uVar5);
    uVar6 = CONCAT44(extraout_r1_00,local_18 + 0x800);
    uVar4 = extraout_r2_05;
    uVar5 = extraout_r3_07;
  } while( true );
}



void FUN_80004c38(void)

{
  return;
}



void FUN_80004c3c(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_80004e00(param_1,&uStack_c,DAT_80004c58,DAT_80004c54);
  return;
}



void FUN_80004c7c(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  char extraout_r2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  
  uVar2 = 0;
  if (param_3 == 0 && param_4 == 0) {
    if (param_6 == 1) {
      uVar2 = ~param_5;
    }
    *param_1 = (int)&DAT_80004df4;
    param_1[1] = uVar2;
    param_1[2] = 1;
    param_1[3] = param_6;
  }
  else {
    iVar6 = (int)(((param_4 >> 0x14) - 0x3ff) * 0x4d10) >> 0x10;
    do {
      while( true ) {
        if (param_6 == 1) {
          uVar2 = -param_5;
        }
        else {
          uVar2 = (iVar6 - param_5) + 1;
        }
        uVar13 = (ulonglong)DAT_80004dec << 0x20;
        uVar14 = (ulonglong)DAT_80004df0 << 0x20;
        uVar4 = uVar2;
        if ((int)uVar2 < 0) {
          uVar4 = -uVar2;
        }
        uVar1 = DAT_80004df0 + uVar4 * 0x100000;
        while( true ) {
          uVar8 = (uint)(uVar13 >> 0x20);
          uVar7 = (uint)uVar13;
          uVar10 = (uint)(uVar14 >> 0x20);
          uVar9 = (uint)uVar14;
          if (uVar4 == 0) break;
          if ((uVar4 & 1) != 0) {
            uVar14 = FUN_8000022c(uVar9,uVar10,uVar7,uVar8);
          }
          uVar13 = FUN_8000022c(uVar7,uVar8,uVar7,uVar8);
          uVar4 = (int)uVar4 >> 1;
        }
        uVar12 = 1;
        if ((int)uVar2 < 0) {
          uVar14 = FUN_8000022c(param_3,param_4,0,uVar1);
          uVar14 = FUN_8000022c((uint)uVar14,(uint)(uVar14 >> 0x20),uVar9,uVar10);
        }
        else {
          uVar15 = FUN_800006a2(param_3,param_4,0,uVar1);
          uVar14 = FUN_800006a2((uint)uVar15,(uint)((ulonglong)uVar15 >> 0x20),uVar9,uVar10);
        }
        uVar2 = (uint)(uVar14 >> 0x20);
        bVar11 = true;
        FUN_800007b0((uint)uVar14,uVar2);
        if ((bool)uVar12 && !bVar11) {
          uVar14 = FUN_80000554((uint)uVar14,uVar2,0,DAT_80004dfc);
          uVar14 = FUN_80000780((uint)uVar14,(uint)(uVar14 >> 0x20));
        }
        else {
          uVar14 = 0xffffffffffffffff;
        }
        iVar5 = 0x10;
        while( true ) {
          if ((uVar14 == 0) || (iVar5 < 0)) break;
          uVar14 = FUN_800003aa((uint)uVar14,(uint)(uVar14 >> 0x20),10,0);
          *(char *)(param_2 + iVar5) = extraout_r2 + '0';
          iVar5 = iVar5 + -1;
        }
        iVar3 = 0x11 - (iVar5 + 1);
        if (param_6 != 1) break;
        if (uVar14 == 0) {
          iVar6 = (iVar3 - param_5) + -1;
          goto LAB_80004ddc;
        }
        param_5 = 0x11;
        param_6 = 0;
      }
      bVar11 = true;
      if ((uVar14 == 0) && (iVar3 <= (int)param_5)) {
        if (iVar3 < (int)param_5) {
          bVar11 = false;
          iVar6 = iVar6 + -1;
        }
      }
      else {
        bVar11 = false;
        iVar6 = iVar6 + 1;
      }
    } while (!bVar11);
LAB_80004ddc:
    param_1[2] = iVar3;
    param_1[3] = param_6;
    *param_1 = iVar5 + 1 + param_2;
    param_1[1] = iVar6;
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x80005000) overlaps instruction at (ram,0x80004ffe)
// 
// WARNING: Removing unreachable block (ram,0x80004f9c)
// WARNING: Removing unreachable block (ram,0x80004fa2)
// WARNING: Removing unreachable block (ram,0x80004fa6)
// WARNING: Removing unreachable block (ram,0x80004fae)
// WARNING: Removing unreachable block (ram,0x80004f98)
// WARNING: Type propagation algorithm not settling

int FUN_80004e00(byte *param_1,uint *param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char extraout_r1;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *unaff_r8;
  byte *pbVar15;
  uint *puVar16;
  char *unaff_r10;
  uint uVar17;
  uint *puVar18;
  undefined4 unaff_lr;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  longlong lVar22;
  int in_stack_ffffff78;
  char *in_stack_ffffff7c;
  undefined3 uVar23;
  int *local_80;
  char *local_7c;
  int *local_78;
  uint local_74;
  undefined1 auStack_70 [32];
  int local_50;
  int *local_4c;
  char *pcStack_48;
  int local_44;
  byte local_3b [3];
  char *local_38;
  byte *pbStack_34;
  uint *puStack_30;
  undefined4 local_2c;
  undefined *puStack_28;
  
  puStack_28 = param_4;
  local_2c = param_3;
  puStack_30 = param_2;
  pbStack_34 = param_1;
  iVar12 = 0;
LAB_80005230:
  uVar3 = (uint)*param_1;
  if (uVar3 == 0) {
    return iVar12;
  }
  if (uVar3 == 0x25) {
    uVar11 = 0;
    pcVar14 = (char *)0x0;
    local_74 = 0;
    while( true ) {
      pbVar13 = param_1 + 1;
      uVar3 = 1 << (*pbVar13 - 0x20 & 0xff);
      if ((uVar3 & DAT_800051fc) == 0) break;
      uVar11 = uVar11 | uVar3;
      param_1 = pbVar13;
    }
    if (*pbVar13 == 0x2a) {
      puVar18 = param_2 + 1;
      uVar9 = *param_2;
      local_74 = uVar9;
      if ((int)uVar9 < 0) {
        local_74 = -uVar9;
        uVar11 = uVar11 | 0x2000;
      }
      uVar11 = uVar11 | 2;
      pbVar13 = param_1 + 2;
    }
    else {
      while( true ) {
        uVar9 = *pbVar13 - 0x30;
        puVar18 = param_2;
        if (9 < uVar9) break;
        uVar11 = uVar11 | 2;
        local_74 = (uint)*pbVar13 + local_74 * 10 + -0x30;
        pbVar13 = pbVar13 + 1;
      }
    }
    param_1 = pbVar13;
    puVar16 = puVar18;
    if (*pbVar13 == 0x2e) {
      param_1 = pbVar13 + 1;
      uVar11 = uVar11 | 4;
      if (*param_1 == 0x2a) {
        puVar16 = puVar18 + 1;
        pcVar14 = (char *)*puVar18;
        param_1 = pbVar13 + 2;
      }
      else {
        uVar9 = 0xffffffd0;
        for (; *param_1 - 0x30 < 10; param_1 = param_1 + 1) {
          pcVar14 = (char *)((uint)*param_1 + (int)pcVar14 * 10 + -0x30);
        }
      }
    }
    uVar3 = (uint)*param_1;
    if (uVar3 == 0x6c) {
      uVar11 = uVar11 | 0x100000;
LAB_80004ed6:
      uVar9 = (uint)param_1[1];
      if (uVar9 == uVar3) {
        uVar11 = uVar11 + 0x100000;
        param_1 = param_1 + 1;
      }
    }
    else if (uVar3 < 0x6d) {
      if (uVar3 != 0x4c) {
        if (uVar3 == 0x68) {
          uVar11 = uVar11 | 0x300000;
          goto LAB_80004ed6;
        }
        if (uVar3 != 0x6a) goto LAB_80004ee4;
        uVar11 = uVar11 | 0x200000;
      }
    }
    else if ((uVar3 != 0x74) && (uVar3 != 0x7a)) goto LAB_80004ee4;
    param_1 = param_1 + 1;
LAB_80004ee4:
    uVar3 = (uint)*param_1;
    bVar21 = SBORROW4(uVar3,0x66);
    bVar19 = (int)(uVar3 - 0x66) < 0;
    bVar20 = uVar3 == 0x66;
LAB_80004ee8:
    while (!bVar20) {
      uVar23 = (undefined3)((uint)in_stack_ffffff7c >> 8);
      param_2 = puVar16;
      if (bVar19 == bVar21) {
        if (uVar3 == 0x70) {
          uVar11 = uVar11 | 4;
          pcVar14 = &NMI;
          uVar9 = 0x10;
        }
        else if (uVar3 < 0x71) {
          if (uVar3 == 0x67) break;
          if (uVar3 == 0x69) goto LAB_80005002;
          if (uVar3 == 0x6e) {
            uVar3 = (uVar11 << 9) >> 0x1d;
            if (uVar3 == 2) {
              piVar5 = (int *)*puVar16;
              *piVar5 = iVar12;
              piVar5[1] = iVar12 >> 0x1f;
            }
            else if (uVar3 == 3) {
              *(short *)*puVar16 = (short)iVar12;
            }
            else if (uVar3 == 4) {
              *(char *)*puVar16 = (char)iVar12;
            }
            else {
              *(int *)*puVar16 = iVar12;
            }
            param_2 = puVar16 + 1;
            goto LAB_8000522e;
          }
          if (uVar3 != 0x6f) goto LAB_80004f38;
          uVar9 = 8;
        }
        else {
          if (uVar3 == 0x73) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          if (uVar3 == 0x75) {
            uVar9 = 10;
          }
          else {
            if (uVar3 != 0x78) goto LAB_80004f38;
            uVar9 = 0x10;
          }
        }
        uVar10 = (uVar11 << 9) >> 0x1d;
        if (uVar10 == 2) {
          puVar18 = (uint *)((uint)((int)puVar16 + 7) & 0xfffffff8);
          param_2 = puVar18 + 2;
          uVar17 = *puVar18;
          uVar6 = puVar18[1];
        }
        else {
          param_2 = puVar16 + 1;
          uVar17 = *puVar16;
          uVar6 = 0;
          if (uVar10 == 3) {
            uVar17 = uVar17 & 0xffff;
          }
          if (uVar10 == 4) {
            uVar17 = uVar17 & 0xff;
          }
        }
        unaff_r8 = (byte *)0x0;
        if ((int)(uVar11 << 0x1c) < 0) {
          if (uVar3 == 0x70) {
            in_stack_ffffff7c = (char *)CONCAT31(uVar23,0x40);
            unaff_r8 = (byte *)0x1;
          }
          else if ((uVar9 == 0x10) && (uVar17 != 0 || uVar6 != 0)) {
            in_stack_ffffff7c =
                 (char *)CONCAT22((short)((uint)in_stack_ffffff7c >> 0x10),CONCAT11(*param_1,0x30));
            unaff_r8 = (byte *)0x2;
          }
          if ((uVar9 == 8) && ((uVar17 != 0 || uVar6 != 0 || ((int)(uVar11 << 0x1d) < 0)))) {
            in_stack_ffffff7c = (char *)CONCAT31((int3)((uint)in_stack_ffffff7c >> 8),0x30);
            unaff_r8 = (byte *)0x1;
            pcVar14 = pcVar14 + -1;
          }
        }
LAB_8000512a:
        lVar22 = CONCAT44(uVar6,uVar17);
        if (uVar3 == 0x58) {
          local_7c = &DAT_80005214;
        }
        else {
          local_7c = s_0123456789abcdef_80005200;
        }
        local_80 = &local_50;
        while( true ) {
          if (lVar22 == 0) break;
          lVar22 = FUN_800003aa((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),uVar9,0);
          local_80 = (int *)((int)local_80 + -1);
          *(char *)local_80 = local_7c[extraout_r2];
        }
        pcVar7 = (char *)((int)&local_50 - (int)local_80);
        if ((int)(uVar11 << 0x1d) < 0) {
          uVar11 = uVar11 & 0xfffeffff;
        }
        else {
          pcVar14 = (char *)0x1;
        }
        if ((int)pcVar7 < (int)pcVar14) {
          iVar4 = (int)pcVar14 - (int)pcVar7;
        }
        else {
          iVar4 = 0;
        }
        pcVar14 = (char *)(local_74 - (int)(pcVar7 + (int)(unaff_r8 + iVar4)));
        if (-1 < (int)(uVar11 << 0xf)) {
          iVar2 = FUN_80005500((int)pcVar14,uVar11,local_2c,param_4);
          iVar12 = iVar12 + iVar2;
        }
        for (iVar2 = 0; iVar2 < (int)unaff_r8; iVar2 = iVar2 + 1) {
          (*(code *)param_4)(auStack_70[iVar2 + -0x14],local_2c);
          iVar12 = iVar12 + 1;
        }
        if ((int)(uVar11 << 0xf) < 0) {
          iVar2 = FUN_80005500((int)pcVar14,uVar11,local_2c,param_4);
          iVar12 = iVar12 + iVar2;
        }
        while (in_stack_ffffff78 = iVar4 + -1, 0 < iVar4) {
          (*(code *)param_4)(0x30,local_2c);
          iVar12 = iVar12 + 1;
          iVar4 = in_stack_ffffff78;
        }
        while (unaff_r10 = pcVar7 + -1, 0 < (int)pcVar7) {
          iVar4 = *local_80;
          local_80 = (int *)((int)local_80 + 1);
          (*(code *)param_4)((char)iVar4,local_2c);
          iVar12 = iVar12 + 1;
          pcVar7 = unaff_r10;
        }
        goto LAB_80005228;
      }
      if (uVar3 == 0x58) {
        bVar20 = (bool)hasExclusiveAccess((undefined4 *)(uVar9 + 0x108));
        uVar3 = 1;
        if (bVar20) {
          uVar3 = 0;
          *(undefined4 *)(uVar9 + 0x108) = unaff_lr;
        }
LAB_80005002:
        uVar9 = 10;
        uVar10 = (uVar11 << 9) >> 0x1d;
        if (uVar10 == 2) {
          puVar18 = (uint *)((uint)((int)puVar16 + 7) & 0xfffffff8);
          param_2 = puVar18 + 2;
          uVar17 = *puVar18;
          uVar6 = puVar18[1];
        }
        else {
          param_2 = puVar16 + 1;
          uVar17 = *puVar16;
          if (uVar10 == 3) {
            uVar17 = (uint)(short)uVar17;
          }
          uVar6 = (int)uVar17 >> 0x1f;
          if (uVar10 == 4) {
            uVar17 = (uint)(char)uVar17;
            uVar6 = (int)uVar17 >> 0x1f;
          }
        }
        if ((int)uVar6 < 0) {
          bVar20 = uVar17 != 0;
          uVar17 = -uVar17;
          uVar6 = -(uint)bVar20 - uVar6;
          uVar8 = 0x2d;
        }
        else if ((int)(uVar11 << 0x14) < 0) {
          uVar8 = 0x2b;
        }
        else {
          unaff_r8 = (byte *)0x0;
          if ((uVar11 & 1) == 0) goto LAB_8000512a;
          uVar8 = 0x20;
        }
        in_stack_ffffff7c = (char *)CONCAT31(uVar23,uVar8);
        unaff_r8 = (byte *)0x1;
        goto LAB_8000512a;
      }
      if (0x58 < uVar3) {
        if (uVar3 == 99) {
          param_2 = puVar16 + 1;
          in_stack_ffffff78 =
               CONCAT22((short)((uint)in_stack_ffffff78 >> 0x10),(ushort)(byte)*puVar16);
          for (unaff_r8 = (byte *)(uint)(byte)*puVar16;
              ((int)unaff_r8 < 0x10 || (auStack_70[(int)(unaff_r8 + -0x18)] != '\0'));
              unaff_r8 = unaff_r8 + 1) {
          }
          pcVar14 = (char *)(local_74 - (int)unaff_r8);
          iVar4 = FUN_800054fc();
          iVar12 = iVar12 + iVar4 + (int)unaff_r8;
          unaff_r10 = &stack0xffffff78;
          goto LAB_80004fec;
        }
        if (uVar3 == 100) goto LAB_80005002;
        if (uVar3 != 0x65) goto LAB_80004f38;
        break;
      }
      if (uVar3 == 0) goto LAB_80004fe2;
      bVar21 = SBORROW4(uVar3,0x45);
      bVar19 = (int)(uVar3 - 0x45) < 0;
      bVar20 = uVar3 == 0x45;
      if (!bVar20) goto code_r0x80004efa;
    }
    goto LAB_80005240;
  }
  goto LAB_80004f38;
LAB_80004fe2:
  do {
    (*(code *)param_4)(*unaff_r10,local_2c);
    unaff_r10 = unaff_r10 + 1;
LAB_80004fec:
    bVar20 = unaff_r8 != (byte *)0x0;
    unaff_r8 = unaff_r8 + -1;
  } while (bVar20);
LAB_80005228:
  unaff_lr = 0x8000522d;
  iVar4 = FUN_800054dc((int)pcVar14,uVar11,local_2c,param_4);
  iVar12 = iVar12 + iVar4;
LAB_8000522e:
  param_1 = param_1 + 1;
  goto LAB_80005230;
code_r0x80004efa:
  bVar21 = SBORROW4(uVar3,0x46);
  bVar19 = (int)(uVar3 - 0x46) < 0;
  bVar20 = uVar3 == 0x46;
  if (!bVar20) goto code_r0x80004efe;
  goto LAB_80004ee8;
code_r0x80004efe:
  if (uVar3 != 0x47) {
LAB_80004f38:
    unaff_lr = 0x80004f3f;
    (*(code *)param_4)(uVar3,local_2c);
    iVar12 = iVar12 + 1;
    goto LAB_8000522e;
  }
LAB_80005240:
  if (-1 < (int)(uVar11 << 0x1d)) {
    pcVar14 = &DAT_00000006;
  }
  puVar18 = (uint *)((uint)((int)puVar16 + 7) & 0xfffffff8);
  param_2 = puVar18 + 2;
  uVar9 = *puVar18;
  if ((puVar18[1] & 0x80000000) == 0) {
    if ((int)(uVar11 << 0x14) < 0) {
      local_38 = &DAT_800054d4;
    }
    else if ((uVar11 & 1) == 0) {
      local_38 = s_0123456789abcdef_80005200 + 0x10;
    }
    else {
      local_38 = &DAT_800054d8;
    }
  }
  else {
    local_38 = &DAT_800054d0;
  }
  uVar10 = puVar18[1] & 0x7fffffff;
  if (uVar3 == 0x65) {
LAB_800052aa:
    if ((int)pcVar14 < 0x11) {
      pcVar7 = pcVar14 + 1;
    }
    else {
      pcVar7 = &DAT_00000011;
    }
    FUN_80004c7c(&local_50,(int)auStack_70,uVar9,uVar10,(uint)pcVar7,0);
    unaff_r10 = pcVar14 + 1;
LAB_80005372:
    local_78 = (int *)0x0;
    in_stack_ffffff7c = (char *)0x1;
    in_stack_ffffff78 = local_50;
    local_80 = local_4c;
    local_7c = pcStack_48;
  }
  else if (uVar3 < 0x66) {
    if (uVar3 == 0x45) goto LAB_800052aa;
    if (uVar3 == 0x46) goto LAB_800052d6;
    if (uVar3 == 0x47) goto LAB_8000531c;
  }
  else if (uVar3 == 0x66) {
LAB_800052d6:
    local_80 = (int *)&DAT_80000000;
    FUN_80004c7c(&local_50,(int)auStack_70,uVar9,uVar10,(uint)pcVar14,1);
    local_7c = pcStack_48;
    local_78 = (int *)0x0;
    unaff_r10 = pcStack_48;
    if (local_44 == 0) {
      unaff_r10 = (char *)((int)local_4c + (int)(pcVar14 + 1));
    }
    if (-1 < (int)pcVar14 - (int)unaff_r10) {
      local_78 = (int *)(-1 - ((int)pcVar14 - (int)unaff_r10));
      unaff_r10 = pcVar14 + 1;
    }
    in_stack_ffffff7c = unaff_r10 + -(int)pcVar14;
    in_stack_ffffff78 = local_50;
  }
  else {
    if (uVar3 != 0x67) goto LAB_800053a6;
LAB_8000531c:
    if ((int)pcVar14 < 1) {
      pcVar14 = (char *)0x1;
    }
    pcVar7 = pcVar14;
    if (0x11 < (int)pcVar14) {
      pcVar7 = &DAT_00000011;
    }
    FUN_80004c7c(&local_50,(int)auStack_70,uVar9,uVar10,(uint)pcVar7,0);
    local_7c = pcStack_48;
    local_78 = (int *)0x0;
    unaff_r10 = pcVar14;
    if (-1 < (int)(uVar11 << 0x1c)) {
      pcVar7 = pcStack_48;
      if ((int)pcVar14 <= (int)pcStack_48) goto LAB_80005356;
      while( true ) {
        unaff_r10 = pcVar7;
LAB_80005356:
        if (((int)unaff_r10 < 2) || (unaff_r10[local_50 + -1] != '0')) break;
        pcVar7 = unaff_r10 + -1;
      }
    }
    if (((int)pcVar14 <= (int)local_4c) || ((int)local_4c < -4)) goto LAB_80005372;
    if ((int)local_4c < 1) {
      local_78 = local_4c;
      pcVar14 = unaff_r10 + -(int)local_4c;
LAB_80005396:
      unaff_r10 = pcVar14;
    }
    else {
      pcVar14 = (char *)((int)local_4c + 1);
      if ((int)unaff_r10 < (int)pcVar14) goto LAB_80005396;
    }
    in_stack_ffffff7c = (char *)((int)local_4c + (1 - (int)local_78));
    local_80 = (int *)&DAT_80000000;
    in_stack_ffffff78 = local_50;
  }
LAB_800053a6:
  if ((-1 < (int)(uVar11 << 0x1c)) && ((int)unaff_r10 <= (int)in_stack_ffffff7c)) {
    in_stack_ffffff7c = (char *)0xffffffff;
  }
  local_3b[2] = 0;
  pbVar13 = local_3b + 2;
  if (local_80 != (int *)&DAT_80000000) {
    local_50 = 0x2b;
    iVar4 = 2;
    if ((int)local_80 < 0) {
      local_80 = (int *)-(int)local_80;
      local_50 = 0x2d;
    }
    while ((0 < iVar4 || (local_80 != (int *)0x0))) {
      local_80 = (int *)FUN_8000037e((uint)local_80,10);
      pbVar13 = pbVar13 + -1;
      *pbVar13 = extraout_r1 + 0x30;
      iVar4 = iVar4 + -1;
    }
    pbVar13[-1] = (byte)local_50;
    pbVar13 = pbVar13 + -2;
    *pbVar13 = *param_1 & 0x20 | 0x45;
  }
  pbVar15 = local_3b + (2 - (int)pbVar13);
  pcVar14 = (char *)((local_74 -
                     (int)(unaff_r10 +
                          (int)(pbVar15 +
                               ((int)in_stack_ffffff7c >> 0x1f) + (uint)(*local_38 != '\0')))) + -1)
  ;
  if (-1 < (int)(uVar11 << 0xf)) {
    iVar4 = FUN_80005500((int)pcVar14,uVar11,local_2c,param_4);
    iVar12 = iVar12 + iVar4;
  }
  if (*local_38 != '\0') {
    (*(code *)param_4)(*local_38,local_2c);
    iVar12 = iVar12 + 1;
  }
  iVar4 = iVar12;
  pcVar7 = unaff_r10;
  if ((int)(uVar11 << 0xf) < 0) {
    iVar4 = FUN_80005500((int)pcVar14,uVar11,local_2c,param_4);
    iVar4 = iVar12 + iVar4;
  }
  while (iVar12 = iVar4, unaff_r10 = pcVar7 + -1, 0 < (int)pcVar7) {
    if (((int)local_78 < 0) || ((int)local_7c <= (int)local_78)) {
      cVar1 = '0';
    }
    else {
      cVar1 = *(char *)(in_stack_ffffff78 + (int)local_78);
    }
    (*(code *)param_4)(cVar1,local_2c);
    local_78 = (int *)((int)local_78 + 1);
    in_stack_ffffff7c = in_stack_ffffff7c + -1;
    iVar4 = iVar12 + 1;
    pcVar7 = unaff_r10;
    if (in_stack_ffffff7c == (char *)0x0) {
      (*(code *)param_4)(0x2e,local_2c);
      iVar4 = iVar12 + 2;
    }
  }
  while (unaff_r8 = pbVar15 + -1, 0 < (int)pbVar15) {
    (*(code *)param_4)(*pbVar13,local_2c);
    iVar12 = iVar12 + 1;
    pbVar13 = pbVar13 + 1;
    pbVar15 = unaff_r8;
  }
  goto LAB_80005228;
}



int FUN_800054dc(int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 << 0x12 < 0) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*(code *)param_4)(0x20,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



void FUN_800054fc(void)

{
  return;
}



int FUN_80005500(int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_2 << 0xf < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if (-1 < param_2 << 0x12) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*(code *)param_4)(uVar2,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



void FUN_80008164(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_r6;
  bool bVar3;
  
  *(short *)(unaff_r6 + 8) = (short)param_2;
  puVar1 = (undefined4 *)0x0;
  if (((uint)param_2 & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    }
  }
  while (bVar3 = param_3 != 0, param_3 = param_3 - 1, bVar3) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}



void FUN_80008168(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}



void FUN_80008188(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  char in_CY;
  
  while (in_CY != '\0') {
    *param_1 = *param_2;
    in_CY = param_3 != 0;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return;
}



void FUN_8000818c(undefined1 *param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_80008196(undefined1 *param_1,int param_2,undefined1 param_3)

{
  char in_CY;
  
  while (in_CY != '\0') {
    *param_1 = param_3;
    in_CY = param_2 != 0;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return;
}



void FUN_8000819a(undefined1 *param_1,int param_2)

{
  FUN_8000818c(param_1,param_2,0);
  return;
}



undefined1 * FUN_8000819e(undefined1 *param_1,undefined1 param_2,int param_3)

{
  FUN_8000818c(param_1,param_3,param_2);
  return param_1;
}



void FUN_800081b0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0;
      ((uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1))) &&
      (*(char *)(param_1 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
  }
  return;
}



undefined4 FUN_800081ce(uint param_1,uint param_2)

{
  if (-1 < (int)param_1) {
    param_1 = 0x80000000 - param_1;
  }
  if (-1 < (int)param_2) {
    param_2 = 0x80000000 - param_2;
  }
  if (param_2 < param_1) {
    return 1;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x800088bc)
// WARNING: Removing unreachable block (ram,0x800088ca)
// WARNING: Removing unreachable block (ram,0x800088cc)

uint FUN_800081ea(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (int)param_1 >> 0x1f;
  iVar1 = (param_1 ^ uVar3) - uVar3;
  iVar4 = LZCOUNT(iVar1);
  uVar2 = iVar1 << iVar4;
  if (uVar2 == 0) {
    return 0;
  }
  iVar4 = 0x9d - iVar4;
  if (-1 < iVar4) {
    uVar3 = (uVar2 >> 8) + iVar4 * 0x800000 + uVar3 * -0x80000000;
    if ((int)(uVar2 * 0x1000000) < 0) {
      uVar3 = uVar3 + 1;
      if ((uVar2 & 0x7f) == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      return uVar3;
    }
    return uVar3;
  }
  return 0;
}



uint FUN_800082b4(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = param_2 ^ 0x80000000;
  uVar4 = param_1 ^ uVar3;
  uVar1 = param_1;
  if (param_1 << 1 < param_2 << 1) {
    uVar1 = uVar3;
    uVar3 = param_1;
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    return uVar1;
  }
  uVar6 = uVar1 >> 0x17;
  uVar7 = (uVar6 & 0xff) - ((uVar3 << 1) >> 0x18);
  if ((int)uVar7 < 0x20) {
    uVar5 = uVar3 & 0x7fffff | 0x800000;
    if ((int)uVar4 < 0) {
      uVar5 = -uVar5;
    }
    uVar3 = uVar5 << (0x20 - uVar7 & 0xff);
    uVar1 = uVar1 + ((int)uVar5 >> (uVar7 & 0xff));
    if (uVar6 != uVar1 >> 0x17) {
      if ((int)uVar4 < 0) {
        iVar2 = uVar1 + uVar6 * -0x800000;
        if ((int)uVar7 < 2) {
          iVar2 = iVar2 + 0x800000;
          iVar8 = LZCOUNT(iVar2);
          uVar1 = iVar2 << iVar8;
          if (uVar1 == 0 && uVar3 == 0) {
            return uVar1;
          }
          if (uVar3 != 0) {
            uVar1 = uVar1 | (uint)(uVar3 << iVar8 != 0) | uVar3 >> (0x20U - iVar8 & 0xff);
          }
          iVar2 = ((uVar6 & 0xff) - iVar8) + 7;
          if (-1 < iVar2) {
            uVar3 = (uVar1 >> 8) + iVar2 * 0x800000 + (uVar6 & 0x100) * 0x800000;
            if ((int)(uVar1 * 0x1000000) < 0) {
              uVar3 = uVar3 + 1;
              if ((uVar1 & 0x7f) == 0) {
                uVar3 = uVar3 & 0xfffffffe;
              }
              return uVar3;
            }
            return uVar3;
          }
          return 0;
        }
        uVar1 = iVar2 * 2 + uVar6 * 0x800000 | uVar3 >> 0x1f;
        uVar3 = uVar3 << 1;
      }
      else {
        uVar3 = uVar3 >> 1 | uVar1 * -0x80000000;
        uVar1 = (uVar1 + uVar6 * -0x800000 + 0x800000 >> 1) + uVar6 * 0x800000;
      }
    }
  }
  else {
    uVar3 = ((int)uVar4 >> 0x1f) * 2 + 1;
    uVar1 = uVar1 + ((int)uVar4 >> 0x1f);
  }
  if ((int)uVar3 < 0) {
    uVar1 = uVar1 + 1;
    if ((uVar3 & 0x7fffffff) == 0) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return uVar1;
}



uint FUN_800082c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 << 1 != 0) && (param_2 << 1 != 0)) {
    iVar3 = ((param_1 << 1) >> 0x18) + ((param_2 << 1) >> 0x18);
    iVar4 = iVar3 + -0x7f;
    uVar1 = *(int *)((int)((ulonglong)(param_1 & 0x7fffff | 0x800000) *
                           (ulonglong)(param_2 & 0x7fffff | 0x800000) >> 0x20) * 0x10000) + 1U |
            (uint)(iVar4 * 0x100) >> 0x10;
    if (-1 < (int)uVar1) {
      uVar1 = uVar1 << 1;
      iVar4 = iVar3 + -0x80;
    }
    uVar2 = iVar4 * 0x1000000 + (uVar1 >> 7) + 1 >> 1;
    if ((uVar1 & 0xff) == 0x80) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    if (iVar4 < 0) {
      uVar2 = 0;
    }
    return uVar2 | (param_1 ^ param_2) & 0x80000000;
  }
  return 0;
}



uint FUN_80008324(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 & 0x7fffffff) != 0) && ((param_2 & 0x7fffffff) != 0)) {
    iVar5 = ((param_1 & 0x7fffffff) >> 0x17) - ((param_2 & 0x7fffffff) >> 0x17);
    uVar2 = param_1 & 0x7fffff | 0x800000;
    uVar3 = param_2 & 0x7fffff | 0x800000;
    iVar6 = iVar5 + 0x7d;
    if (uVar2 < uVar3) {
      uVar2 = uVar2 << 1;
    }
    else {
      iVar6 = iVar5 + 0x7e;
    }
    if (-1 < iVar6) {
      uVar1 = 0x800000;
      uVar4 = 0;
      do {
        if (uVar3 <= uVar2) {
          uVar2 = uVar2 - uVar3;
          uVar4 = uVar4 | uVar1;
        }
        uVar1 = uVar1 >> 1;
        uVar2 = uVar2 * 2;
      } while (uVar1 != 0);
      uVar1 = 0;
      if (uVar2 != 0) {
        if (uVar2 == uVar3) {
          uVar1 = 0x80000000;
        }
        else if (uVar2 < uVar3) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0xfffffffe;
        }
      }
      uVar2 = uVar4 + iVar6 * 0x800000 + ((param_1 ^ param_2) & 0x80000000);
      if (-1 < (int)uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      if ((uVar1 & 0x7fffffff) == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
  }
  return 0;
}



ulonglong FUN_800083a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar3 = (int)(param_2 ^ param_4) >> 0x1f;
  uVar4 = -iVar3;
  uVar8 = param_3;
  uVar11 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar8 = param_1;
    uVar11 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar11 & 0x7fffffff) != 0 || uVar8 != 0) {
    uVar10 = param_2 >> 0x14;
    uVar5 = uVar10 & 0x7ff;
    uVar6 = uVar5 - ((uVar11 << 1) >> 0x15);
    if ((int)uVar6 < 0x40) {
      uVar11 = uVar11 & 0xfffff | 0x100000;
      if (uVar4 != 0) {
        bVar12 = uVar8 != 0;
        uVar8 = -uVar8;
        uVar11 = -(uint)bVar12 - uVar11;
      }
      uVar13 = FUN_80008832(uVar8,uVar11,0x40 - uVar6);
      uVar9 = (uint)(uVar13 >> 0x20);
      uVar7 = (uint)uVar13;
      lVar14 = FUN_80008870(uVar8,uVar11,uVar6);
      uVar1 = lVar14 + CONCAT44(param_2,param_1);
      uVar8 = (uint)uVar1;
      uVar11 = (uint)(uVar1 >> 0x20);
      if ((param_2 ^ uVar11) >> 0x14 != 0) {
        if (uVar4 == 0) {
          uVar13 = CONCAT44(uVar9 >> 1 | uVar8 * -0x80000000,
                            (uint)((uVar13 & 0x100000000) != 0) << 0x1f | uVar7 >> 1);
          uVar11 = uVar11 + uVar10 * -0x100000 + 0x100000;
          uVar1 = CONCAT44((uVar11 >> 1) + uVar10 * 0x100000,
                           (uint)((uVar11 & 1) != 0) << 0x1f | uVar8 >> 1);
        }
        else {
          if ((int)uVar6 < 2) {
            uVar13 = FUN_80008920(uVar8,uVar11 + uVar10 * -0x100000 + 0x100000,uVar7,uVar9,0,
                                  (uVar10 & 0x800) << 0x14,uVar5);
            return uVar13;
          }
          uVar1 = CONCAT44(uVar10 * -0x100000 + uVar11 * 2 + (uint)CARRY4(uVar8,uVar8),
                           uVar8 * 2 | uVar9 >> 0x1f);
          uVar13 = CONCAT44(uVar9 * 2 + (uint)CARRY4(uVar7,uVar7),uVar7 * 2);
        }
      }
    }
    else {
      uVar13 = CONCAT44(-(uint)(1 < (uint)(iVar3 * -2)),iVar3 * 2 + 1);
      uVar1 = CONCAT44(param_2 - (param_1 < uVar4),param_1 + iVar3);
    }
    if ((longlong)uVar13 < 0) {
      uVar2 = uVar1 + 1;
      uVar1 = uVar1 + 1;
      if ((uVar13 & 0x7fffffff) == 0 &&
          (int)(uVar13 >> 0x20) * 2 + (uint)CARRY4((uint)uVar13,(uint)uVar13) == 0) {
        uVar1 = uVar2 & 0xfffffffffffffffe;
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,param_1);
}



ulonglong FUN_800084ee(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((param_1 == 0 && (param_2 & 0x7fffffff) == 0) || (param_3 == 0 && (param_4 & 0x7fffffff) == 0)
     ) {
    uVar9 = 0;
  }
  else {
    uVar6 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar3 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_1 >> 10 | (param_2 & 0xfffff) << 0x16;
    uVar8 = param_3 >> 10 | (param_4 & 0xfffff) << 0x16;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
    uVar7 = (uint)lVar1;
    iVar5 = uVar4 * (uVar3 >> 10) + (uVar2 >> 10) * uVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = ((param_1 * uVar3 +
             uVar2 * param_3 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20)) -
            (iVar5 * 0x100000 | uVar7 >> 0xc)) - (uint)(uVar6 < uVar7 * 0x100000);
    uVar4 = param_1 >> 0x1a | uVar2 << 6;
    uVar2 = param_3 >> 0x1a | uVar3 << 6;
    uVar3 = uVar6 + uVar7 * -0x100000 >> 0x14 | uVar8 * 0x1000;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar2 +
            (ulonglong)((iVar5 - uVar4 * uVar2) + (uVar8 >> 0x14) + (uint)CARRY4(uVar3,uVar7));
    uVar9 = FUN_80008920((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar6 * 0x1000,uVar3 + uVar7,0,
                         (param_2 ^ param_4) & 0x80000000,
                         (((param_4 & 0x7fffffff) << 1) >> 0x15) +
                         (((param_2 & 0x7fffffff) << 1) >> 0x15) + -0x3ff);
  }
  return uVar9;
}



undefined8 FUN_800085d2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    uVar5 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_2 & 0xfffff | 0x100000;
    iVar7 = (((param_2 & 0x7fffffff) << 1) >> 0x15) - (((param_4 & 0x7fffffff) << 1) >> 0x15);
    iVar8 = iVar7 + 0x3fd;
    if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
      iVar8 = iVar7 + 0x3fe;
    }
    else {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar10;
    }
    if (-1 < iVar8) {
      uVar3 = 0x100000;
      uVar6 = 0;
      uVar9 = 0;
      for (uVar2 = 0; uVar2 != 0 || uVar3 != 0; uVar2 = (uint)(uVar1 != 0) << 0x1f | uVar2 >> 1) {
        if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          bVar10 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar5) - (uint)bVar10;
          uVar6 = uVar6 | uVar2;
          uVar9 = uVar9 | uVar3;
        }
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        bVar10 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar10;
      }
      if (param_1 != 0 || uVar4 != 0) {
        if (param_1 == param_3 && uVar4 == uVar5) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      iVar7 = uVar9 + iVar8 * 0x100000 + ((param_2 ^ param_4) & 0x80000000);
      if ((int)uVar4 < 0) {
        bVar10 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + (uint)bVar10;
        if ((param_1 & 0x7fffffff) == 0 && uVar4 * 2 + (uint)CARRY4(param_1,param_1) == 0) {
          uVar6 = uVar6 & 0xfffffffe;
        }
      }
      return CONCAT44(iVar7,uVar6);
    }
  }
  return 0;
}



undefined4 FUN_800086b0(uint param_1,uint param_2)

{
  if (-1 < (int)param_1) {
    param_1 = 0x80000000 - param_1;
  }
  if (-1 < (int)param_2) {
    param_2 = 0x80000000 - param_2;
  }
  if (param_1 < param_2) {
    return 1;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x800088bc)
// WARNING: Removing unreachable block (ram,0x800088ca)
// WARNING: Removing unreachable block (ram,0x800088cc)

uint FUN_800086cc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 << LZCOUNT(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  iVar3 = 0x9d - LZCOUNT(param_1);
  if (-1 < iVar3) {
    uVar2 = (uVar1 >> 8) + iVar3 * 0x800000;
    if ((int)(uVar1 * 0x1000000) < 0) {
      uVar2 = uVar2 + 1;
      if ((uVar1 & 0x7f) == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
    return uVar2;
  }
  return 0;
}



uint FUN_800086d6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x7fffffff) >> 0x17;
  uVar1 = param_1 & 0x7fffff | 0x800000;
  if (uVar2 < 0x7f) {
    uVar1 = 0;
  }
  else {
    if (uVar2 < 0x97) {
      uVar1 = uVar1 >> (0x96 - uVar2 & 0xff);
    }
    else {
      uVar1 = uVar1 << (uVar2 - 0x96 & 0xff);
    }
    if ((param_1 & 0x80000000) != 0) {
      return -uVar1;
    }
  }
  return uVar1;
}



ulonglong FUN_80008708(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = param_2 & 0xfffff | 0x100000;
  if (uVar2 < 0x3ff) {
    uVar3 = (ulonglong)uVar1 << 0x20;
  }
  else {
    if (uVar2 < 0x434) {
      uVar3 = FUN_80008850(param_1,uVar1,-(uVar2 - 0x433));
    }
    else {
      uVar3 = CONCAT44(param_2,param_1 << (uVar2 - 0x433 & 0xff)) & 0xfffffffffffff |
              0x10000000000000;
    }
    if ((param_2 & 0x80000000) != 0) {
      return CONCAT44((int)(uVar3 >> 0x20),-(int)uVar3);
    }
  }
  return uVar3;
}



undefined8 FUN_80008746(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (uVar1 != 0) {
    return CONCAT44(param_1 & 0x80000000 | ((uVar1 >> 0x17) + 0x380) * 0x100000 |
                    (uVar1 << 9) >> 0xc,param_1 << 0x1d);
  }
  return 0;
}



uint FUN_8000876c(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
    iVar2 = ((param_2 & 0x7fffffff) >> 0x14) - 0x380;
    if (0 < iVar2) {
      uVar1 = (param_1 >> 0x1d | (param_2 & 0xfffff) << 3) + (param_2 & 0x80000000) +
              iVar2 * 0x800000;
      if (-1 < (int)(param_1 * 8)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      if ((param_1 & 0xfffffff) == 0) {
        uVar1 = uVar1 & 0xfffffffe;
      }
      return uVar1;
    }
  }
  return 0;
}



int FUN_800087a4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x20;
  while (uVar3 = uVar2 - 1, 0 < (int)uVar2) {
    uVar2 = uVar3;
    if (param_2 <= param_1 >> (uVar3 & 0xff)) {
      param_1 = param_1 - (param_2 << (uVar3 & 0xff));
      iVar1 = iVar1 + (1 << (uVar3 & 0xff));
    }
  }
  return iVar1;
}



longlong FUN_800087d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  uVar3 = 0x40;
  while (uVar4 = uVar3 - 1, 0 < (int)uVar3) {
    uVar6 = FUN_80008850(param_1,param_2,uVar4);
    uVar2 = (uint)(uVar6 >> 0x20);
    uVar3 = uVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      lVar7 = FUN_80008832(param_3,param_4,uVar4);
      bVar5 = param_1 < (uint)lVar7;
      param_1 = param_1 - (uint)lVar7;
      param_2 = (param_2 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_80008832(1,0,uVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}



longlong FUN_80008832(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}



ulonglong FUN_80008850(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}



undefined8 FUN_80008870(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x20) {
    iVar2 = (int)param_2 >> (param_3 & 0xff);
    uVar1 = param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  }
  else {
    uVar1 = (int)param_2 >> (param_3 - 0x20 & 0xff);
    iVar2 = (int)(param_2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar2,uVar1);
}



ulonglong FUN_80008920(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                      int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    uVar2 = LZCOUNT(param_1) + 0x20;
  }
  else {
    uVar2 = LZCOUNT(param_2);
  }
  uVar5 = FUN_80008832(param_1,param_2,uVar2);
  uVar3 = (uint)(uVar5 >> 0x20);
  if (((uint)uVar5 != 0 || param_3 != 0) || (uVar3 != 0 || param_4 != 0)) {
    if (param_3 != 0 || param_4 != 0) {
      uVar6 = FUN_80008850(param_3,param_4,0x40 - uVar2);
      lVar7 = FUN_80008832(param_3,param_4,uVar2);
      uVar5 = CONCAT44(uVar3 | (uint)(uVar6 >> 0x20),(uint)uVar5 | (uint)uVar6 | (uint)(lVar7 != 0))
      ;
    }
    uVar3 = (uint)(uVar5 >> 0xb);
    iVar1 = (param_7 - uVar2) + 10;
    if (-1 < iVar1) {
      uVar2 = uVar3 + param_5;
      iVar1 = iVar1 * 0x100000 + (int)((uVar5 >> 0xb) >> 0x20) + param_6 +
              (uint)CARRY4(uVar3,param_5);
      if ((int)uVar5 * 0x200000 < 0) {
        bVar4 = 0xfffffffe < uVar2;
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + (uint)bVar4;
        if ((uVar5 & 0x3ff) == 0) {
          uVar2 = uVar2 & 0xfffffffe;
        }
      }
      return CONCAT44(iVar1,uVar2);
    }
    uVar5 = 0;
  }
  return uVar5;
}



void FUN_80008ca4(void)

{
  FUN_8001344c(0x8008a41,0x8014b65,0x100,0);
  FUN_80012878();
  return;
}



bool FUN_80008cd4(int param_1,byte param_2,byte param_3)

{
  byte local_d;
  byte local_c;
  char local_b;
  
  local_c = 0xff;
  for (local_d = 0; local_d < param_2; local_d = local_d + 1) {
    local_c = local_c ^ *(byte *)(param_1 + (uint)local_d);
    for (local_b = '\b'; local_b != '\0'; local_b = local_b + -1) {
      if ((int)((uint)local_c * 0x1000000) < 0) {
        local_c = local_c << 1 ^ 0x31;
      }
      else {
        local_c = local_c << 1;
      }
    }
  }
  return local_c == param_3;
}



void FUN_80008e1c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xffU);
  *(undefined4 *)(*param_1 + 4) = param_4;
  if (param_1[1] == 0x10) {
    *(undefined4 *)(*param_1 + 8) = param_3;
    *(undefined4 *)(*param_1 + 0xc) = param_2;
  }
  else {
    *(undefined4 *)(*param_1 + 8) = param_2;
    *(undefined4 *)(*param_1 + 0xc) = param_3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80008e70(void)

{
  uint uVar1;
  
  _DAT_20001424 = 0;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 4;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80008e9c(uint param_1)

{
  uint uVar1;
  
  _DAT_20001424 = 0;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 2;
  Peripherals::FLASH.AR = param_1;
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x40;
  return;
}



void FUN_80008ed0(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80008f50)
// WARNING: Removing unreachable block (ram,0x80008f60)
// WARNING: Removing unreachable block (ram,0x80008f0e)
// WARNING: Removing unreachable block (ram,0x80008f1e)
// WARNING: Removing unreachable block (ram,0x80008fa4)
// WARNING: Removing unreachable block (ram,0x80008fb6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80008f04(void)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x8000000) < 0) {
    _DAT_20001424 = _DAT_20001424 | 2;
    local_4 = 0x10;
  }
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x20000000) < 0) {
    _DAT_20001424 = _DAT_20001424 | 1;
    local_4 = local_4 | 4;
  }
  uVar1 = Peripherals::FLASH.OBR;
  if ((uVar1 & 1) != 0) {
    _DAT_20001424 = _DAT_20001424 | 4;
    uVar1 = Peripherals::FLASH.OBR;
    Peripherals::FLASH.OBR = uVar1 & 0xfffffffe;
  }
  if (local_4 == 0x101) {
    uVar1 = Peripherals::FLASH.OBR;
    Peripherals::FLASH.OBR = uVar1 & 0xfffffffe;
  }
  else {
    Peripherals::FLASH.SR = local_4;
  }
  return;
}



void FUN_80009010(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x800090d4)
// WARNING: Removing unreachable block (ram,0x800090e6)
// WARNING: Removing unreachable block (ram,0x80009060)
// WARNING: Removing unreachable block (ram,0x80009070)
// WARNING: Removing unreachable block (ram,0x8000909a)
// WARNING: Removing unreachable block (ram,0x800090aa)
// WARNING: Removing unreachable block (ram,0x800090ec)
// WARNING: Removing unreachable block (ram,0x800090fc)

undefined1 FUN_80009014(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_8000a53c(param_1);
  while (uVar1 = Peripherals::FLASH.SR, (uVar1 & 1) != 0) {
    if ((param_1 != 0xffffffff) &&
       ((param_1 == 0 || (iVar3 = FUN_8000a53c(param_1), param_1 < (uint)(iVar3 - iVar2))))) {
      return 3;
    }
  }
  uVar1 = Peripherals::FLASH.SR;
  if ((int)(uVar1 * 0x4000000) < 0) {
    Peripherals::FLASH.SR = 0x20;
  }
  uVar1 = Peripherals::FLASH.SR;
  if (((-1 < (int)(uVar1 * 0x8000000)) && (uVar1 = Peripherals::FLASH.OBR, (uVar1 & 1) == 0)) &&
     (uVar1 = Peripherals::FLASH.SR, -1 < (int)(uVar1 * 0x20000000))) {
    return 0;
  }
  FUN_80008f04();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000912c(undefined4 param_1)

{
  char cVar1;
  
  FUN_8000a128((char)param_1);
  _DAT_20000020 = 0;
  _DAT_2000002c = 1;
  _DAT_20000028 = param_1;
  cVar1 = FUN_80009edc((int *)&DAT_20000020,(uint *)0x20000080);
  if (cVar1 != '\0') {
    FUN_80009fe8();
  }
  FUN_80009fe8();
  return;
}



undefined1 FUN_80009168(uint param_1,uint param_2)

{
  uint local_18;
  undefined1 local_9;
  
  if ((((param_1 & 1) == 0) && (0x7ffffff < param_1)) && (param_1 + param_2 * 2 < 0x8040001)) {
    FUN_80013b58();
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      FUN_80013b58();
      if ((local_18 & 0xf) == 0xf) {
        FUN_80013b58();
      }
    }
    FUN_80013b58();
    local_9 = 0;
  }
  else {
    FUN_80013b58();
    local_9 = 1;
  }
  return local_9;
}



undefined1 FUN_80009220(uint param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint local_1c;
  undefined1 local_9;
  
  if ((((param_1 & 1) == 0) && (0x7ffffff < param_1)) &&
     (uVar2 = param_1 + param_3 * 2, uVar2 < 0x8040001)) {
    FUN_8000a128((char)uVar2);
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      cVar1 = FUN_80009ffc(1);
      if (cVar1 != '\0') {
        FUN_80009fe8();
        return 1;
      }
    }
    FUN_80009fe8();
    local_9 = 0;
  }
  else {
    local_9 = 1;
  }
  return local_9;
}



bool FUN_800092b4(undefined4 param_1,ushort param_2)

{
  bool bVar1;
  
  bVar1 = FUN_8000a4dc(param_1,param_2);
  return bVar1;
}



void FUN_800092cc(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 in_stack_fffffff0;
  
  FUN_8000a50c(param_1,param_2,'\0',param_4,CONCAT22(param_2,in_stack_fffffff0),param_1);
  return;
}



void FUN_800092e8(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 in_stack_fffffff0;
  
  FUN_8000a50c(param_1,param_2,'\x01',param_4,CONCAT22(param_2,in_stack_fffffff0),param_1);
  return;
}



bool FUN_80009304(undefined4 *param_1)

{
  bool local_1;
  
  local_1 = *(char *)((int)param_1 + 0x21) == '\x02';
  if (local_1) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xff);
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    param_1[0xe] = 4;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  local_1 = !local_1;
  return local_1;
}



undefined1 FUN_80009380(uint *param_1)

{
  int unaff_r7;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_d;
  
  local_d = 0;
  if (*(char *)((int)param_1 + 0x21) == '\x02') {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_3c = 1;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_40 = 0x10;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_44 = 0x100;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_48 = 0x1000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_4c = 0x10000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_50 = 0x100000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_54 = 0x1000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_58 = 1;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_5c = 0x10;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_60 = 0x100;
                        }
                        else {
                          local_60 = 0x10000;
                          if (*param_1 == 0x40020444) {
                            local_60 = 0x1000;
                          }
                        }
                        local_5c = local_60;
                      }
                      local_58 = local_5c;
                    }
                    local_54 = local_58;
                  }
                  local_50 = local_54;
                }
                local_4c = local_50;
              }
              local_48 = local_4c;
              *(char *)(unaff_r7 + 0x1f) = (char)unaff_r7;
            }
            local_44 = local_48;
          }
          local_40 = local_44;
        }
        local_3c = local_40;
      }
      Peripherals::DMA1.IFCR = local_3c;
    }
    else {
      if (*param_1 == 0x40020008) {
        local_14 = 1;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_18 = 0x10;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_1c = 0x100;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_20 = 0x1000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_24 = 0x10000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_28 = 0x100000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_2c = 0x1000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_30 = 1;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_34 = 0x10;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_38 = 0x100;
                        }
                        else {
                          local_38 = 0x10000;
                          if (*param_1 == 0x40020444) {
                            local_38 = 0x1000;
                          }
                        }
                        local_34 = local_38;
                      }
                      local_30 = local_34;
                    }
                    local_2c = local_30;
                  }
                  local_28 = local_2c;
                }
                local_24 = local_28;
              }
              local_20 = local_24;
            }
            local_1c = local_20;
          }
          local_18 = local_1c;
        }
        local_14 = local_18;
      }
      Peripherals::DMA2.IFCR = local_14;
    }
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
    if (param_1[0xd] != 0) {
      (*(code *)param_1[0xd])();
    }
  }
  else {
    param_1[0xe] = 4;
    local_d = 1;
  }
  return local_d;
}



// WARNING: Removing unreachable block (ram,0x80009792)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80009698(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  
  uVar1 = *(uint *)param_1[0xf];
  iVar2 = *(int *)*param_1;
  if (((int)((uVar1 >> (param_1[0x10] & 0xff)) * 0x20000000) < 0) && (iVar2 * 0x20000000 < 0)) {
    if (-1 < *(int *)*param_1 * 0x4000000) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
    }
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_40 = 4;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_44 = 0x40;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_48 = 0x400;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_4c = 0x4000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_50 = 0x40000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_54 = 0x400000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_58 = 0x4000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_5c = 4;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_60 = 0x40;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_64 = 0x400;
                        }
                        else {
                          local_64 = 0x40000;
                          if (*param_1 == 0x40020444) {
                            local_64 = 0x4000;
                          }
                        }
                        local_60 = local_64;
                      }
                      local_5c = local_60;
                    }
                    local_58 = local_5c;
                  }
                  local_54 = local_58;
                }
                local_50 = local_54;
              }
              local_4c = local_50;
            }
            local_48 = local_4c;
          }
          local_44 = local_48;
        }
        local_40 = local_44;
      }
      Peripherals::DMA1.IFCR = local_40;
    }
    else {
      uVar1 = *param_1;
      if (*param_1 == 0x40020008) {
        uVar1 = _Reset;
      }
      if (uVar1 == 0x4002001c) {
        uVar1 = 0x40;
      }
      else if (*param_1 == 0x40020030) {
        uVar1 = 0x400;
      }
      else if (*param_1 == 0x40020044) {
        uVar1 = 0x4000;
      }
      else if (*param_1 == 0x40020058) {
        uVar1 = 0x40000;
      }
      else if (*param_1 == 0x4002006c) {
        uVar1 = 0x400000;
      }
      else if (*param_1 == 0x40020408) {
        uVar1 = 4;
      }
      else if (*param_1 == 0x4002041c) {
        uVar1 = 0x40;
      }
      else if (*param_1 == 0x40020430) {
        uVar1 = 0x400;
      }
      else {
        uVar1 = 0x40000;
        if (*param_1 == 0x40020444) {
          uVar1 = 0x4000;
        }
      }
      Peripherals::DMA2.IFCR = uVar1;
    }
    if (param_1[0xb] != 0) {
      (*(code *)param_1[0xb])();
    }
    FUN_80009d18();
    return;
  }
  if (((int)((uVar1 >> (param_1[0x10] & 0xff)) * 0x40000000) < 0) && (iVar2 * 0x40000000 < 0)) {
    if (-1 < *(int *)*param_1 * 0x4000000) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff5;
      *(undefined1 *)((int)param_1 + 0x21) = 1;
    }
    if (*param_1 < 0x40020081) {
      if (*param_1 == 0x40020008) {
        local_90 = 2;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_94 = 0x20;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_98 = 0x200;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_9c = 0x2000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_a0 = 0x20000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_a4 = 0x200000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_a8 = 0x2000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_ac = 2;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_b0 = 0x20;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_b4 = 0x200;
                        }
                        else {
                          local_b4 = 0x20000;
                          if (*param_1 == 0x40020444) {
                            local_b4 = 0x2000;
                          }
                        }
                        local_b0 = local_b4;
                      }
                      local_ac = local_b0;
                    }
                    local_a8 = local_ac;
                  }
                  local_a4 = local_a8;
                }
                local_a0 = local_a4;
              }
              local_9c = local_a0;
            }
            local_98 = local_9c;
          }
          local_94 = local_98;
        }
        local_90 = local_94;
      }
      Peripherals::DMA1.IFCR = local_90;
    }
    else {
      if (*param_1 == 0x40020008) {
        local_68 = 2;
      }
      else {
        if (*param_1 == 0x4002001c) {
          local_6c = 0x20;
        }
        else {
          if (*param_1 == 0x40020030) {
            local_70 = 0x200;
          }
          else {
            if (*param_1 == 0x40020044) {
              local_74 = 0x2000;
            }
            else {
              if (*param_1 == 0x40020058) {
                local_78 = 0x20000;
              }
              else {
                if (*param_1 == 0x4002006c) {
                  local_7c = 0x200000;
                }
                else {
                  if (*param_1 == 0x40020080) {
                    local_80 = 0x2000000;
                  }
                  else {
                    if (*param_1 == 0x40020408) {
                      local_84 = 2;
                    }
                    else {
                      if (*param_1 == 0x4002041c) {
                        local_88 = 0x20;
                      }
                      else {
                        if (*param_1 == 0x40020430) {
                          local_8c = 0x200;
                        }
                        else {
                          local_8c = 0x20000;
                          if (*param_1 == 0x40020444) {
                            local_8c = 0x2000;
                          }
                        }
                        local_88 = local_8c;
                      }
                      local_84 = local_88;
                    }
                    local_80 = local_84;
                  }
                  local_7c = local_80;
                }
                local_78 = local_7c;
              }
              local_74 = local_78;
            }
            local_70 = local_74;
          }
          local_6c = local_70;
        }
        local_68 = local_6c;
      }
      Peripherals::DMA2.IFCR = local_68;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    if (param_1[10] != 0) {
      (*(code *)param_1[10])();
    }
  }
  else if (((int)((uVar1 >> (param_1[0x10] & 0xff)) * 0x10000000) < 0) && (iVar2 * 0x10000000 < 0))
  {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
    *(int *)(param_1[0xf] + 4) = 1 << (param_1[0x10] & 0xff);
    param_1[0xe] = 1;
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
    if (param_1[0xc] != 0) {
      (*(code *)param_1[0xc])();
    }
  }
  FUN_80009d18();
  return;
}



void FUN_80009d18(void)

{
  return;
}



undefined1 FUN_80009d1c(uint *param_1)

{
  undefined1 local_1;
  
  if (param_1 == (uint *)0x0) {
    local_1 = 1;
  }
  else {
    if (*param_1 < 0x40020408) {
      param_1[0x10] = (*param_1 + 0xbffdfff8) / 5 & 0xfffffffc;
      param_1[0xf] = (uint)&Peripherals::DMA1;
    }
    else {
      param_1[0x10] = (*param_1 + 0xbffdfbf8) / 5 & 0xfffffffc;
      param_1[0xf] = (uint)&Peripherals::DMA2;
    }
    *(undefined1 *)((int)param_1 + 0x21) = 2;
    *(uint *)*param_1 =
         *(uint *)*param_1 & 0xffffc00f |
         param_1[7] | param_1[1] | param_1[2] | param_1[3] | param_1[4] | param_1[5] | param_1[6];
    param_1[0xe] = 0;
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    *(undefined1 *)(param_1 + 8) = 0;
    local_1 = 0;
  }
  return local_1;
}



undefined1 FUN_80009e10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_1d;
  undefined1 local_9;
  
  local_1d = 0;
  if ((char)param_1[8] == '\x01') {
    local_9 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    if (*(char *)((int)param_1 + 0x21) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x21) = 2;
      param_1[0xe] = 0;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      FUN_80008e1c(param_1,param_2,param_3,param_4);
      if (param_1[0xb] == 0) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
        *(uint *)*param_1 = *(uint *)*param_1 | 10;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 | 0xe;
      }
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      local_1d = 2;
    }
    local_9 = local_1d;
  }
  return local_9;
}



char FUN_80009edc(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  uint local_1c;
  char local_15;
  char local_9;
  
  local_15 = '\x01';
  if (DAT_20001420 == '\x01') {
    local_9 = '\x02';
  }
  else {
    DAT_20001420 = 1;
    if (*param_1 == 2) {
      cVar2 = FUN_80009014(50000);
      if (cVar2 == '\0') {
        FUN_80008e70();
        local_15 = FUN_80009014(50000);
        uVar1 = Peripherals::FLASH.CR;
        Peripherals::FLASH.CR = uVar1 & 0xfffffffb;
      }
    }
    else {
      cVar2 = FUN_80009014(50000);
      if (cVar2 == '\0') {
        *param_2 = 0xffffffff;
        for (local_1c = param_1[2]; local_1c < (uint)(param_1[2] + param_1[3] * 0x800);
            local_1c = local_1c + 0x800) {
          FUN_80008e9c(local_1c);
          local_15 = FUN_80009014(50000);
          uVar1 = Peripherals::FLASH.CR;
          Peripherals::FLASH.CR = uVar1 & 0xfffffffd;
          if (local_15 != '\0') {
            *param_2 = local_1c;
            break;
          }
        }
      }
    }
    DAT_20001420 = '\0';
    local_9 = local_15;
  }
  return local_9;
}



undefined4 FUN_80009fe8(void)

{
  uint uVar1;
  
  uVar1 = Peripherals::FLASH.CR;
  Peripherals::FLASH.CR = uVar1 | 0x80;
  return 0;
}



// WARNING: Instruction at (ram,0x8000a078) overlaps instruction at (ram,0x8000a076)
// 

char FUN_80009ffc(int param_1)

{
  uint uVar1;
  byte local_23;
  byte local_22;
  char local_21;
  
  if (DAT_20001420 == '\x01') {
    local_21 = '\x02';
  }
  else {
    DAT_20001420 = 1;
    local_21 = FUN_80009014(50000);
    if (local_21 == '\0') {
      if (param_1 == 1) {
        local_23 = 1;
      }
      else {
        local_23 = 2;
      }
      for (local_22 = 0; local_22 < local_23; local_22 = local_22 + 1) {
        FUN_80008ed0();
        local_21 = FUN_80009010();
        uVar1 = Peripherals::FLASH.CR;
        Peripherals::FLASH.CR = uVar1 & 0xfffffffe;
        if (local_21 != '\0') break;
      }
    }
    DAT_20001420 = '\0';
  }
  return local_21;
}



undefined1 FUN_8000a128(undefined1 param_1)

{
  uint uVar1;
  undefined1 uStack00000003;
  
  uVar1 = Peripherals::FLASH.CR;
  uStack00000003 = param_1;
  if ((int)(uVar1 * 0x1000000) < 0) {
    Peripherals::FLASH.KEYR = 0x45670123;
    Peripherals::FLASH.KEYR = 0xcdef89ab;
    uVar1 = Peripherals::FLASH.CR;
    if ((int)(uVar1 * 0x1000000) < 0) {
      uStack00000003 = 1;
    }
  }
  return uStack00000003;
}



void FUN_8000a180(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  GPIOA *pGVar2;
  char in_ZR;
  bool in_CY;
  int iStack00000000;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  uint uStack00000014;
  uint in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint *in_stack_00000040;
  GPIOA *in_stack_00000044;
  
  if (in_CY && !(bool)in_ZR) goto LAB_8000a216;
  in_stack_0000003c = 0;
  in_stack_0000002c = 0;
  in_stack_00000040 = param_2;
  do {
    if (*in_stack_00000040 >> (in_stack_0000003c & 0xff) == 0) {
      return;
    }
    in_stack_00000038 = 1 << (in_stack_0000003c & 0xff);
    in_stack_00000034 = *in_stack_00000040 & in_stack_00000038;
    if (in_stack_00000034 == in_stack_00000038) {
      in_stack_0000001c = in_stack_00000040[1];
      if (in_stack_0000001c == 0) goto LAB_8000a26a;
      if (in_stack_0000001c == 1) {
        in_stack_0000002c = in_stack_00000040[3];
      }
      else if (in_stack_0000001c == 2) {
        in_stack_0000002c = in_stack_00000040[3] + 8;
      }
      else if (in_stack_0000001c == 3) {
        in_stack_0000002c = 0;
      }
      else if (in_stack_0000001c == 0x11) {
        in_stack_0000002c = in_stack_00000040[3] + 4;
      }
      else if (in_stack_0000001c == 0x12) {
        in_stack_0000002c = in_stack_00000040[3] + 0xc;
      }
      else {
        if ((in_stack_0000001c != 0x10110000) && (in_stack_0000001c != 0x10120000)) {
          in_ZR = in_stack_0000001c == 0x10210000;
LAB_8000a216:
          if ((((in_ZR == '\0') && (in_stack_0000001c != 0x10220000)) &&
              (in_stack_0000001c != 0x10310000)) && (in_stack_0000001c != 0x10320000))
          goto LAB_8000a2a6;
        }
LAB_8000a26a:
        if (in_stack_00000040[2] == 0) {
          in_stack_0000002c = 4;
        }
        else {
          if (in_stack_00000040[2] == 1) {
            in_stack_00000044->BSRR = in_stack_00000038;
          }
          else {
            in_stack_00000044->BRR = in_stack_00000038;
          }
          in_stack_0000002c = 8;
        }
      }
LAB_8000a2a6:
      if (in_stack_00000034 < 0x100) {
        uStack00000014 = in_stack_0000003c << 2;
        pGVar2 = in_stack_00000044;
      }
      else {
        pGVar2 = (GPIOA *)&in_stack_00000044->CRH;
        uStack00000014 = in_stack_0000003c * 4 - 0x20;
      }
      pGVar2->CRL = pGVar2->CRL & ~(0xf << (uStack00000014 & 0xff)) |
                    in_stack_0000002c << (uStack00000014 & 0xff);
      if ((int)((uint)*(byte *)((int)in_stack_00000040 + 7) * 0x8000000) < 0) {
        uVar1 = Peripherals::RCC.APB2ENR;
        Peripherals::RCC.APB2ENR = uVar1 | 1;
        uVar1 = Peripherals::RCC.APB2ENR;
        if (in_stack_00000044 == &Peripherals::GPIOA) {
          iStack00000010 = 0;
        }
        else {
          if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOB) {
            iStack0000000c = 1;
          }
          else {
            if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOC) {
              iStack00000008 = 2;
            }
            else {
              if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOD) {
                iStack00000004 = 3;
              }
              else {
                if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOE) {
                  iStack00000000 = 4;
                }
                else {
                  iStack00000000 = 6;
                  if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOF) {
                    iStack00000000 = 5;
                  }
                }
                iStack00000004 = iStack00000000;
              }
              iStack00000008 = iStack00000004;
            }
            iStack0000000c = iStack00000008;
          }
          iStack00000010 = iStack0000000c;
        }
        *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (in_stack_0000003c & 0xfffffffc)) =
             *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (in_stack_0000003c & 0xfffffffc)) &
             ~(0xf << ((in_stack_0000003c & 3) << 2)) |
             iStack00000010 << ((in_stack_0000003c & 3) << 2);
        if ((int)((uint)*(byte *)((int)in_stack_00000040 + 6) * 0x8000000) < 0) {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 | in_stack_00000034;
        }
        else {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 & ~in_stack_00000034;
        }
        if ((int)((uint)*(byte *)((int)in_stack_00000040 + 6) * 0x4000000) < 0) {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 | in_stack_00000034;
        }
        else {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 & ~in_stack_00000034;
        }
        if ((int)((uint)*(byte *)((int)in_stack_00000040 + 6) * 0x40000000) < 0) {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 | in_stack_00000034;
        }
        else {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 & ~in_stack_00000034;
        }
        if ((*(byte *)((int)in_stack_00000040 + 6) & 1) == 0) {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 & ~in_stack_00000034;
        }
        else {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 | in_stack_00000034;
        }
      }
    }
    in_stack_0000003c = in_stack_0000003c + 1;
  } while( true );
}



void FUN_8000a184(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  GPIOA *pGVar4;
  int iStack00000000;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  uint uStack00000014;
  uint uStack0000002c;
  uint uStack0000003c;
  GPIOA *in_stack_00000044;
  
  uStack0000003c = 0;
  uStack0000002c = 0;
  do {
    if (*param_2 >> (uStack0000003c & 0xff) == 0) {
      return;
    }
    uVar1 = 1 << (uStack0000003c & 0xff);
    uVar2 = *param_2 & uVar1;
    if (uVar2 == uVar1) {
      uVar3 = param_2[1];
      if (uVar3 == 0) {
LAB_8000a26a:
        if (param_2[2] == 0) {
          uStack0000002c = 4;
        }
        else {
          if (param_2[2] == 1) {
            in_stack_00000044->BSRR = uVar1;
          }
          else {
            in_stack_00000044->BRR = uVar1;
          }
          uStack0000002c = 8;
        }
      }
      else if (uVar3 == 1) {
        uStack0000002c = param_2[3];
      }
      else if (uVar3 == 2) {
        uStack0000002c = param_2[3] + 8;
      }
      else if (uVar3 == 3) {
        uStack0000002c = 0;
      }
      else if (uVar3 == 0x11) {
        uStack0000002c = param_2[3] + 4;
      }
      else if (uVar3 == 0x12) {
        uStack0000002c = param_2[3] + 0xc;
      }
      else if ((((uVar3 == 0x10110000) || (uVar3 == 0x10120000)) || (uVar3 == 0x10210000)) ||
              (((uVar3 == 0x10220000 || (uVar3 == 0x10310000)) || (uVar3 == 0x10320000))))
      goto LAB_8000a26a;
      if (uVar2 < 0x100) {
        uStack00000014 = uStack0000003c << 2;
        pGVar4 = in_stack_00000044;
      }
      else {
        pGVar4 = (GPIOA *)&in_stack_00000044->CRH;
        uStack00000014 = uStack0000003c * 4 - 0x20;
      }
      pGVar4->CRL = pGVar4->CRL & ~(0xf << (uStack00000014 & 0xff)) |
                    uStack0000002c << (uStack00000014 & 0xff);
      if ((int)((uint)*(byte *)((int)param_2 + 7) * 0x8000000) < 0) {
        uVar1 = Peripherals::RCC.APB2ENR;
        Peripherals::RCC.APB2ENR = uVar1 | 1;
        uVar1 = Peripherals::RCC.APB2ENR;
        if (in_stack_00000044 == &Peripherals::GPIOA) {
          iStack00000010 = 0;
        }
        else {
          if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOB) {
            iStack0000000c = 1;
          }
          else {
            if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOC) {
              iStack00000008 = 2;
            }
            else {
              if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOD) {
                iStack00000004 = 3;
              }
              else {
                if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOE) {
                  iStack00000000 = 4;
                }
                else {
                  iStack00000000 = 6;
                  if (in_stack_00000044 == (GPIOA *)&Peripherals::GPIOF) {
                    iStack00000000 = 5;
                  }
                }
                iStack00000004 = iStack00000000;
              }
              iStack00000008 = iStack00000004;
            }
            iStack0000000c = iStack00000008;
          }
          iStack00000010 = iStack0000000c;
        }
        *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (uStack0000003c & 0xfffffffc)) =
             *(uint *)((int)&Peripherals::AFIO.EXTICR1 + (uStack0000003c & 0xfffffffc)) &
             ~(0xf << ((uStack0000003c & 3) << 2)) | iStack00000010 << ((uStack0000003c & 3) << 2);
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x8000000) < 0) {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.RTSR;
          Peripherals::EXTI.RTSR = uVar1 & ~uVar2;
        }
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x4000000) < 0) {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.FTSR;
          Peripherals::EXTI.FTSR = uVar1 & ~uVar2;
        }
        if ((int)((uint)*(byte *)((int)param_2 + 6) * 0x40000000) < 0) {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 | uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.EMR;
          Peripherals::EXTI.EMR = uVar1 & ~uVar2;
        }
        if ((*(byte *)((int)param_2 + 6) & 1) == 0) {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 & ~uVar2;
        }
        else {
          uVar1 = Peripherals::EXTI.IMR;
          Peripherals::EXTI.IMR = uVar1 | uVar2;
        }
      }
    }
    uStack0000003c = uStack0000003c + 1;
  } while( true );
}



bool FUN_8000a4d8(int param_1,ushort param_2)

{
  return (*(uint *)(param_1 + 8) & (uint)param_2) != 0;
}



bool FUN_8000a4dc(undefined4 param_1,ushort param_2)

{
  int in_stack_00000004;
  
  return (*(uint *)(in_stack_00000004 + 8) & (uint)param_2) != 0;
}



void FUN_8000a508(int param_1,ushort param_2,char param_3)

{
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x10) = (uint)param_2 << 0x10;
  }
  else {
    *(uint *)(param_1 + 0x10) = (uint)param_2;
  }
  return;
}



void FUN_8000a50c(undefined4 param_1,ushort param_2,char param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  if (param_3 == '\0') {
    *(uint *)(param_6 + 0x10) = (uint)param_2 << 0x10;
  }
  else {
    *(uint *)(param_6 + 0x10) = (uint)param_2;
  }
  return;
}



undefined4 FUN_8000a538(void)

{
  return uRam2000a534;
}



undefined4 FUN_8000a53c(uint param_1)

{
  return *(undefined4 *)(param_1 & 0xffff | 0x20000000);
}



undefined1 FUN_8000a544(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;
  
  if (param_1 == (int *)0x0) {
    local_9 = 1;
  }
  else {
    *(undefined4 *)*param_1 = 0xcccc;
    *(undefined4 *)*param_1 = 0x5555;
    *(int *)(*param_1 + 4) = param_1[1];
    *(int *)(*param_1 + 8) = param_1[2];
    iVar1 = FUN_8000a538();
    do {
      if ((*(uint *)(*param_1 + 0xc) & 3) == 0) {
        *(undefined4 *)*param_1 = 0xaaaa;
        return 0;
      }
      iVar2 = FUN_8000a538();
    } while (((uint)(iVar2 - iVar1) < 0x133d) || ((*(uint *)(*param_1 + 0xc) & 3) == 0));
    local_9 = 3;
  }
  return local_9;
}



undefined4 FUN_8000a5d8(void)

{
  undefined4 *in_stack_00000000;
  
  *(undefined4 *)*in_stack_00000000 = 0xaaaa;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000a610(uint param_1)

{
  int iVar1;
  undefined1 uStack_9;
  
  iVar1 = FUN_8000b0c4();
  if (iVar1 == 0) {
    if (param_1 < 0x10) {
      FUN_8000a698();
      uStack_9 = 0;
      _DAT_20000014 = param_1;
    }
    else {
      uStack_9 = 1;
    }
  }
  else {
    uStack_9 = 1;
  }
  return uStack_9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000a614(uint param_1)

{
  int iVar1;
  uint uStack00000000;
  undefined1 uStack00000007;
  
  uStack00000000 = param_1;
  iVar1 = FUN_8000b0c4();
  if (iVar1 == 0) {
    if (uStack00000000 < 0x10) {
      FUN_8000a698();
      _DAT_20000014 = uStack00000000;
      uStack00000007 = 0;
    }
    else {
      uStack00000007 = 1;
    }
  }
  else {
    uStack00000007 = 1;
  }
  return uStack00000007;
}



void FUN_8000a680(void)

{
  return;
}



void FUN_8000a684(void)

{
  FUN_80010634();
  return;
}



void FUN_8000a688(undefined1 param_1)

{
  undefined1 uStack00000007;
  
  uStack00000007 = param_1;
  FUN_80010634();
  return;
}



void FUN_8000a698(void)

{
  FUN_80010664();
  FUN_8000ca9c();
  FUN_80010674();
  return;
}



void FUN_8000a69c(char param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  char cStack00000017;
  
  uStack00000008 = 0;
  uStack0000000c = param_3;
  uStack00000010 = param_2;
  cStack00000017 = param_1;
  uStack00000008 = FUN_80010664();
  iStack00000004 = (int)cStack00000017;
  FUN_8000ca9c();
  FUN_80010674();
  return;
}



void FUN_8000a6cc(void)

{
  FUN_800106b8();
  return;
}



// WARNING: Instruction at (ram,0x8000a80a) overlaps instruction at (ram,0x8000a808)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000a6e0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_18;
  undefined1 uStack_9;
  
  if (param_1 == (byte *)0x0) goto LAB_8000a92e;
  uVar1 = Peripherals::FLASH.ACR;
  if ((uVar1 & 7) < param_2) {
    uVar1 = Peripherals::FLASH.ACR;
    Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | param_2;
    uVar1 = Peripherals::FLASH.ACR;
    if ((uVar1 & 7) != param_2) goto LAB_8000a92e;
  }
  if ((int)((uint)*param_1 * 0x40000000) < 0) {
    if ((int)((uint)*param_1 * 0x20000000) < 0) {
      uVar1 = Peripherals::RCC.CFGR;
      Peripherals::RCC.CFGR = uVar1 | 0x700;
    }
    if ((int)((uint)*param_1 * 0x10000000) < 0) {
      uVar1 = Peripherals::RCC.CFGR;
      Peripherals::RCC.CFGR = uVar1 | 0x3800;
    }
    uVar1 = Peripherals::RCC.CFGR;
    Peripherals::RCC.CFGR = uVar1 & 0xffffff0f | *(uint *)(param_1 + 8);
  }
  if ((*param_1 & 1) == 0) {
LAB_8000a830:
    do {
      uVar1 = Peripherals::RCC.CFGR;
      if ((uVar1 & 0xc) == *(int *)(param_1 + 4) * 4) {
        uVar1 = Peripherals::FLASH.ACR;
        if (param_2 < (uVar1 & 7)) {
          uVar1 = Peripherals::FLASH.ACR;
          Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | param_2;
          uVar1 = Peripherals::FLASH.ACR;
          if ((uVar1 & 7) != param_2) {
            return 1;
          }
        }
        if ((int)((uint)*param_1 * 0x20000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 & 0xfffff8ff | *(uint *)(param_1 + 0xc);
        }
        if ((int)((uint)*param_1 * 0x10000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 & 0xffffc7ff | *(int *)(param_1 + 0x10) << 3;
        }
        _DAT_20000004 = FUN_8000a990();
        uVar1 = Peripherals::RCC.CFGR;
        _DAT_20000004 = _DAT_20000004 >> *(sbyte *)(((uVar1 & 0xff) >> 4) + 0x801447c);
        FUN_8000a614(_DAT_20000014);
        return 0;
      }
      iVar2 = FUN_8000a53c(uVar1 & 0xc);
    } while ((uint)(iVar2 - iStack_18) < 0x1389);
    uStack_9 = 3;
  }
  else {
    if (*(int *)(param_1 + 4) == 1) {
      uVar1 = Peripherals::RCC.CR;
      if ((int)(uVar1 * 0x4000) < 0) {
LAB_8000a812:
        uVar1 = Peripherals::RCC.CFGR;
        uVar1 = uVar1 & 0xfffffffc | *(uint *)(param_1 + 4);
        Peripherals::RCC.CFGR = uVar1;
        iStack_18 = FUN_8000a53c(uVar1);
        goto LAB_8000a830;
      }
    }
    else {
      if (*(int *)(param_1 + 4) != 2) {
        uVar1 = Peripherals::RCC.CR;
        if ((int)(uVar1 * 0x40000000) < 0) {
          return uStack_9;
        }
        if (-1 < (int)(uVar1 * 0x40000000)) {
          return 1;
        }
        goto LAB_8000a812;
      }
      uVar1 = Peripherals::RCC.CR;
      if ((int)(uVar1 * 0x40) < 0) {
        return uStack_9;
      }
    }
LAB_8000a92e:
    uStack_9 = 1;
  }
  return uStack_9;
}



// WARNING: Instruction at (ram,0x8000a80a) overlaps instruction at (ram,0x8000a808)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1
FUN_8000a6e4(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (byte *)0x0) goto LAB_8000a92e;
  uVar1 = Peripherals::FLASH.ACR;
  if ((uVar1 & 7) < param_2) {
    uVar1 = Peripherals::FLASH.ACR;
    Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | param_2;
    uVar1 = Peripherals::FLASH.ACR;
    if ((uVar1 & 7) != param_2) goto LAB_8000a92e;
  }
  if ((int)((uint)*param_1 * 0x40000000) < 0) {
    if ((int)((uint)*param_1 * 0x20000000) < 0) {
      uVar1 = Peripherals::RCC.CFGR;
      Peripherals::RCC.CFGR = uVar1 | 0x700;
    }
    if ((int)((uint)*param_1 * 0x10000000) < 0) {
      uVar1 = Peripherals::RCC.CFGR;
      Peripherals::RCC.CFGR = uVar1 | 0x3800;
    }
    uVar1 = Peripherals::RCC.CFGR;
    Peripherals::RCC.CFGR = uVar1 & 0xffffff0f | *(uint *)(param_1 + 8);
  }
  if ((*param_1 & 1) == 0) {
LAB_8000a830:
    do {
      uVar1 = Peripherals::RCC.CFGR;
      if ((uVar1 & 0xc) == *(int *)(param_1 + 4) * 4) {
        uVar1 = Peripherals::FLASH.ACR;
        if (param_2 < (uVar1 & 7)) {
          uVar1 = Peripherals::FLASH.ACR;
          Peripherals::FLASH.ACR = uVar1 & 0xfffffff8 | param_2;
          uVar1 = Peripherals::FLASH.ACR;
          if ((uVar1 & 7) != param_2) {
            return 1;
          }
        }
        if ((int)((uint)*param_1 * 0x20000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 & 0xfffff8ff | *(uint *)(param_1 + 0xc);
        }
        if ((int)((uint)*param_1 * 0x10000000) < 0) {
          uVar1 = Peripherals::RCC.CFGR;
          Peripherals::RCC.CFGR = uVar1 & 0xffffc7ff | *(int *)(param_1 + 0x10) << 3;
        }
        _DAT_20000004 = FUN_8000a990();
        uVar1 = Peripherals::RCC.CFGR;
        _DAT_20000004 = _DAT_20000004 >> *(sbyte *)(((uVar1 & 0xff) >> 4) + 0x801447c);
        FUN_8000a614(_DAT_20000014);
        return 0;
      }
      iVar2 = FUN_8000a53c(uVar1 & 0xc);
    } while ((uint)(iVar2 - param_5) < 0x1389);
    param_8._3_1_ = 3;
  }
  else {
    if (*(int *)(param_1 + 4) == 1) {
      uVar1 = Peripherals::RCC.CR;
      if ((int)(uVar1 * 0x4000) < 0) {
LAB_8000a812:
        uVar1 = Peripherals::RCC.CFGR;
        uVar1 = uVar1 & 0xfffffffc | *(uint *)(param_1 + 4);
        Peripherals::RCC.CFGR = uVar1;
        param_5 = FUN_8000a53c(uVar1);
        goto LAB_8000a830;
      }
    }
    else {
      if (*(int *)(param_1 + 4) != 2) {
        uVar1 = Peripherals::RCC.CR;
        if ((int)(uVar1 * 0x40000000) < 0) {
          return param_8._3_1_;
        }
        if (-1 < (int)(uVar1 * 0x40000000)) {
          return 1;
        }
        goto LAB_8000a812;
      }
      uVar1 = Peripherals::RCC.CR;
      if ((int)(uVar1 * 0x40) < 0) {
        return param_8._3_1_;
      }
    }
LAB_8000a92e:
    param_8._3_1_ = 1;
  }
  return param_8._3_1_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_8000a93c(void)

{
  return _DAT_20000004;
}



uint FUN_8000a948(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_8000a93c();
  uVar1 = Peripherals::RCC.CFGR;
  return uVar2 >> *(sbyte *)(((uVar1 << 0x15) >> 0x1d) + 0x801448c);
}



uint FUN_8000a96c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_8000a93c();
  uVar1 = Peripherals::RCC.CFGR;
  return uVar2 >> *(sbyte *)(((uVar1 << 0x12) >> 0x1d) + 0x801448c);
}



uint FUN_8000a990(void)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  uVar1 = Peripherals::RCC.CFGR;
  uVar2 = uVar1 & 0xc;
  if (uVar2 != 0) {
    if (uVar2 == 4) {
      return 8000000;
    }
    if (uVar2 == 8) {
      local_c = (uint)*(byte *)(((uVar1 << 10) >> 0x1c) + 0x8014494);
      if ((uVar1 & 0x10000) == 0) {
        local_c = local_c * 4000000;
      }
      else {
        uVar1 = Peripherals::RCC.CFGR;
        local_c = (local_c * 8000000) / (uint)*(byte *)(0x80144a4 - ((int)(uVar1 << 0xe) >> 0x1f));
      }
      return local_c;
    }
  }
  return 8000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000aa4c(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1 == (byte *)0x0) {
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if (((uVar1 & 0xc) == 4) ||
       ((uVar1 = Peripherals::RCC.CFGR, (uVar1 & 0xc) == 8 &&
        (uVar1 = Peripherals::RCC.CFGR, (int)(uVar1 * 0x8000) < 0)))) {
      uVar1 = Peripherals::RCC.CR;
      if (((int)(uVar1 * 0x4000) < 0) && (*(int *)(param_1 + 4) == 0)) {
        return 1;
      }
    }
    else {
      if (*(int *)(param_1 + 4) == 0x10000) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x10000;
      }
      else if (*(int *)(param_1 + 4) == 0) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffeffff;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffbffff;
      }
      else if (*(int *)(param_1 + 4) == 0x50000) {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x40000;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 | 0x10000;
      }
      else {
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffeffff;
        uVar1 = Peripherals::RCC.CR;
        Peripherals::RCC.CR = uVar1 & 0xfffbffff;
      }
      if (*(uint *)(param_1 + 4) == 0) {
        iVar2 = FUN_8000a53c(0);
        while( true ) {
          uVar1 = Peripherals::RCC.CR;
          if (-1 < (int)(uVar1 * 0x4000)) break;
          iVar3 = FUN_8000a53c(uVar1 * 0x4000);
          if (100 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
      else {
        iVar2 = FUN_8000a53c(*(uint *)(param_1 + 4));
        while( true ) {
          uVar1 = Peripherals::RCC.CR;
          if ((int)(uVar1 * 0x4000) < 0) break;
          iVar3 = FUN_8000a53c(uVar1 * 0x4000);
          if (100 < (uint)(iVar3 - iVar2)) {
            return 3;
          }
        }
      }
    }
  }
  if ((int)((uint)*param_1 * 0x40000000) < 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if (((uVar1 & 0xc) == 0) ||
       ((uVar1 = Peripherals::RCC.CFGR, (uVar1 & 0xc) == 8 &&
        (uVar1 = Peripherals::RCC.CFGR, -1 < (int)(uVar1 * 0x8000))))) {
      uVar1 = Peripherals::RCC.CR;
      if (((int)(uVar1 * 0x40000000) < 0) && (*(int *)(param_1 + 0x10) != 1)) {
        return 1;
      }
      uVar1 = Peripherals::RCC.CR;
      Peripherals::RCC.CR = uVar1 & 0xffffff07 | *(int *)(param_1 + 0x14) << 3;
    }
    else if (*(int *)(param_1 + 0x10) == 0) {
      uRam42420000 = 0;
      iVar2 = FUN_8000a53c(0);
      while( true ) {
        uVar1 = Peripherals::RCC.CR;
        if (-1 < (int)(uVar1 * 0x40000000)) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      uRam42420000 = 1;
      iVar2 = FUN_8000a53c(1);
      while( true ) {
        uVar1 = Peripherals::RCC.CR;
        if ((int)(uVar1 * 0x40000000) < 0) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
      uVar1 = Peripherals::RCC.CR;
      Peripherals::RCC.CR = uVar1 & 0xffffff07 | (int)param_1 << 3;
    }
  }
  if ((int)((uint)*param_1 * 0x10000000) < 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      _DAT_42420480 = 0;
      iVar2 = FUN_8000a53c(0);
      while( true ) {
        uVar1 = Peripherals::RCC.CSR;
        if (-1 < (int)(uVar1 * 0x40000000)) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      iVar2 = FUN_8000a53c(1);
      while( true ) {
        uVar1 = Peripherals::RCC.CSR;
        if ((int)(uVar1 * 0x40000000) < 0) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
      FUN_8000cf48(1);
    }
  }
  if ((int)((uint)*param_1 * 0x20000000) < 0) {
    uVar1 = Peripherals::RCC.APB1ENR;
    bVar4 = -1 < (int)(uVar1 * 8);
    if (bVar4) {
      uVar1 = Peripherals::RCC.APB1ENR;
      Peripherals::RCC.APB1ENR = uVar1 | 0x10000000;
      uVar1 = Peripherals::RCC.APB1ENR;
    }
    uVar1 = Peripherals::PWR.CR;
    if (-1 < (int)(uVar1 * 0x800000)) {
      uVar1 = Peripherals::PWR.CR;
      Peripherals::PWR.CR = uVar1 | 0x100;
      iVar2 = FUN_8000a53c(uVar1 | 0x100);
      while( true ) {
        uVar1 = Peripherals::PWR.CR;
        if ((int)(uVar1 * 0x800000) < 0) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x800000);
        if (100 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    if (*(int *)(param_1 + 0xc) == 1) {
      _DAT_00001020 = _DAT_00001020 | 1;
    }
    else if (*(int *)(param_1 + 0xc) == 0) {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
    }
    else if (*(int *)(param_1 + 0xc) == 5) {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 | 4;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 | 1;
    }
    else {
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
      uVar1 = Peripherals::RCC.BDCR;
      Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
    }
    if (*(uint *)(param_1 + 0xc) == 0) {
      iVar2 = FUN_8000a53c(0);
      while( true ) {
        uVar1 = Peripherals::RCC.BDCR;
        if (-1 < (int)(uVar1 * 0x40000000)) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      iVar2 = FUN_8000a53c(*(uint *)(param_1 + 0xc));
      while( true ) {
        uVar1 = Peripherals::RCC.BDCR;
        if ((int)(uVar1 * 0x40000000) < 0) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40000000);
        if (5000 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    if (bVar4) {
      uVar1 = Peripherals::RCC.APB1ENR;
      Peripherals::RCC.APB1ENR = uVar1 & 0xefffffff;
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = Peripherals::RCC.CFGR;
    if ((uVar1 & 0xc) == 8) {
      if (*(int *)(param_1 + 0x1c) == 1) {
        return 1;
      }
      uVar1 = Peripherals::RCC.CFGR;
      if (((uVar1 & 0x10000) != *(uint *)(param_1 + 0x20)) ||
         ((uVar1 & 0x3c0000) != *(uint *)(param_1 + 0x24))) {
        return 1;
      }
    }
    else if (*(int *)(param_1 + 0x1c) == 2) {
      _DAT_42420060 = 0;
      iVar2 = FUN_8000a53c(0);
      while( true ) {
        uVar1 = Peripherals::RCC.CR;
        if (-1 < (int)(uVar1 * 0x40)) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
      if (*(int *)(param_1 + 0x20) == 0x10000) {
        uVar1 = Peripherals::RCC.CFGR;
        Peripherals::RCC.CFGR = uVar1 & 0xfffdffff | *(uint *)(param_1 + 8);
      }
      uVar1 = Peripherals::RCC.CFGR;
      Peripherals::RCC.CFGR =
           uVar1 & 0xffc2ffff | *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x24);
      _DAT_42420060 = 1;
      iVar2 = FUN_8000a53c(1);
      while( true ) {
        uVar1 = Peripherals::RCC.CR;
        if ((int)(uVar1 * 0x40) < 0) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420060 = 0;
      iVar2 = FUN_8000a53c(0);
      while( true ) {
        uVar1 = Peripherals::RCC.CR;
        if (-1 < (int)(uVar1 * 0x40)) break;
        iVar3 = FUN_8000a53c(uVar1 * 0x40);
        if (2 < (uint)(iVar3 - iVar2)) {
          return 3;
        }
      }
    }
  }
  return 0;
}



void FUN_8000b0c4(void)

{
  return;
}



bool FUN_8000b0c8(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_8000d3ec(param_1);
  return bVar1;
}



void FUN_8000b0d8(void)

{
  return;
}



undefined4 FUN_8000b0e4(int *param_1)

{
  bool bVar1;
  
  if ((*(char *)((int)param_1 + 0x41) == '!') && ((*(uint *)(*param_1 + 0x14) & 0xff) >> 7 != 0)) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
    } while (!bVar1);
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffff7f;
    if (param_1[0xe] != 0) {
      FUN_80009304((undefined4 *)param_1[0xe]);
    }
    FUN_8000fd48(param_1);
  }
  if ((*(char *)((int)param_1 + 0x42) == '\"') && (*(int *)(*param_1 + 0x14) << 0x19 < 0)) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
    } while (!bVar1);
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
    if (param_1[0xf] != 0) {
      FUN_80009304((undefined4 *)param_1[0xf]);
    }
    FUN_8000fc8c(param_1);
  }
  return 0;
}



void FUN_8000b1b0(void)

{
  return;
}



uint FUN_8000b1b8(int *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)*param_1;
  uVar5 = *(uint *)(*param_1 + 0xc);
  uVar6 = *(uint *)(*param_1 + 0x14);
  if ((((uVar4 & 0xf) == 0) && ((int)(uVar4 * 0x4000000) < 0)) && ((int)(uVar5 * 0x4000000) < 0)) {
    bVar2 = FUN_8000fd80(param_1);
    uVar6 = (uint)bVar2;
  }
  else if (((uVar4 & 0xf) == 0) || (((uVar6 & 1) == 0 && ((uVar5 & 0x120) == 0)))) {
    if ((param_1[0xc] == 1) && (((int)(uVar4 * 0x8000000) < 0 && ((int)(uVar5 * 0x8000000) < 0)))) {
      if (*(int *)(*param_1 + 0x14) * 0x2000000 < 0) {
        uVar4 = *(uint *)(*(int *)param_1[0xf] + 4);
        uVar6 = 0;
        if (((uVar4 & 0xffff) != 0) && (uVar6 = uVar4 & 0xffff, uVar6 < *(ushort *)(param_1 + 0xb)))
        {
          *(short *)((int)param_1 + 0x2e) = (short)uVar4;
          if (*(int *)(param_1[0xf] + 0x18) != 0x20) {
            do {
              ExclusiveAccess((uint *)(*param_1 + 0xc));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
            } while (!bVar1);
            *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0x14));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
            } while (!bVar1);
            *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0x14));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
            } while (!bVar1);
            *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
            *(undefined1 *)((int)param_1 + 0x42) = 0x20;
            param_1[0xc] = 0;
            do {
              ExclusiveAccess((uint *)(*param_1 + 0xc));
              bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
            } while (!bVar1);
            *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
            FUN_80009304((undefined4 *)param_1[0xf]);
          }
          param_1[0xd] = 2;
          uVar6 = FUN_8000b0d8();
        }
      }
      else {
        uVar6 = 0;
        if ((*(short *)((int)param_1 + 0x2e) != 0) &&
           (uVar6 = 0, (short)param_1[0xb] != *(short *)((int)param_1 + 0x2e))) {
          do {
            ExclusiveAccess((uint *)(*param_1 + 0xc));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
          } while (!bVar1);
          *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
          do {
            ExclusiveAccess((uint *)(*param_1 + 0x14));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
          } while (!bVar1);
          *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
          *(undefined1 *)((int)param_1 + 0x42) = 0x20;
          param_1[0xc] = 0;
          do {
            ExclusiveAccess((uint *)(*param_1 + 0xc));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
          } while (!bVar1);
          *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
          param_1[0xd] = 2;
          uVar6 = FUN_8000b0d8();
        }
      }
    }
    else if (((int)(uVar4 * 0x1000000) < 0) && ((int)(uVar5 * 0x1000000) < 0)) {
      bVar2 = FUN_800100b4(param_1);
      uVar6 = (uint)bVar2;
    }
    else {
      uVar6 = uVar4 * 0x2000000;
      if (((int)uVar6 < 0) && (uVar6 = uVar5 * 0x2000000, (int)uVar6 < 0)) {
        uVar6 = FUN_8000fd20(param_1);
      }
    }
  }
  else {
    if (((uVar4 & 1) != 0) && ((uVar5 & 0x100) != 0)) {
      param_1[0x11] = param_1[0x11] | 1;
    }
    if (((int)(uVar4 * 0x20000000) < 0) && ((uVar6 & 1) != 0)) {
      param_1[0x11] = param_1[0x11] | 2;
    }
    if (((int)(uVar4 * 0x40000000) < 0) && ((uVar6 & 1) != 0)) {
      param_1[0x11] = param_1[0x11] | 4;
    }
    if (((int)(uVar4 * 0x10000000) < 0) && (((int)(uVar5 * 0x4000000) < 0 || ((uVar6 & 1) != 0)))) {
      param_1[0x11] = param_1[0x11] | 8;
    }
    uVar6 = 0;
    if (param_1[0x11] != 0) {
      if (((int)(uVar4 * 0x4000000) < 0) && ((int)(uVar5 * 0x4000000) < 0)) {
        FUN_8000fd80(param_1);
      }
      if ((param_1[0x11] * 0x10000000 < 0) || (*(int *)(*param_1 + 0x14) << 0x19 < 0)) {
        FUN_8000fc8c(param_1);
        if (*(int *)(*param_1 + 0x14) * 0x2000000 < 0) {
          do {
            ExclusiveAccess((uint *)(*param_1 + 0x14));
            bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
          } while (!bVar1);
          *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffbf;
          if (param_1[0xf] == 0) {
            uVar6 = FUN_8000b1b0();
          }
          else {
            *(undefined4 *)(param_1[0xf] + 0x34) = 0x800fa35;
            cVar3 = FUN_80009380((uint *)param_1[0xf]);
            uVar6 = 0;
            if (cVar3 != '\0') {
              uVar6 = (**(code **)(param_1[0xf] + 0x34))();
            }
          }
        }
        else {
          uVar6 = FUN_8000b1b0();
        }
      }
      else {
        FUN_8000b1b0();
        uVar6 = 0;
        param_1[0x11] = 0;
      }
    }
  }
  return uVar6;
}



void FUN_8000b5e0(void)

{
  return;
}



undefined1 FUN_8000b5e4(int *param_1)

{
  undefined1 local_9;
  
  if (param_1 == (int *)0x0) {
    local_9 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_8000b684();
    }
    *(undefined1 *)((int)param_1 + 0x41) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_8000feec(param_1);
    *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
    param_1[0x11] = 0;
    *(undefined1 *)((int)param_1 + 0x41) = 0x20;
    *(undefined1 *)((int)param_1 + 0x42) = 0x20;
    param_1[0xd] = 0;
    local_9 = 0;
  }
  return local_9;
}



void FUN_8000b684(void)

{
  return;
}



void FUN_8000b688(void)

{
  return;
}



undefined1 FUN_8000b68c(int *param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x42) == ' ') {
    if ((param_2 == 0) || (param_3 == 0)) {
      local_9 = 1;
    }
    else {
      param_1[0xc] = 0;
      uVar1 = FUN_8000ffa8(param_1,param_2,param_3);
      local_9 = (undefined1)uVar1;
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_8000b6e4(void)

{
  return;
}



void FUN_8000b6ec(void)

{
  return;
}



undefined1 FUN_8000b6f4(int *param_1,ushort *param_2,short param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  ushort *local_24;
  ushort *local_20;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x41) == ' ') {
    if ((param_2 == (ushort *)0x0) || (param_3 == 0)) {
      local_9 = 1;
    }
    else {
      param_1[0x11] = 0;
      *(undefined1 *)((int)param_1 + 0x41) = 0x21;
      iVar2 = FUN_8000a53c(0x21);
      *(short *)(param_1 + 9) = param_3;
      *(short *)((int)param_1 + 0x26) = param_3;
      if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
        local_20 = (ushort *)0x0;
        local_24 = param_2;
      }
      else {
        local_24 = (ushort *)0x0;
        local_20 = param_2;
      }
      while (*(short *)((int)param_1 + 0x26) != 0) {
        cVar1 = FUN_80010148(param_1,0x80,'\0',iVar2,param_4);
        if (cVar1 != '\0') {
          return 3;
        }
        if (local_20 == (ushort *)0x0) {
          *(uint *)(*param_1 + 4) = *local_24 & 0x1ff;
          local_24 = local_24 + 1;
        }
        else {
          *(uint *)(*param_1 + 4) = (uint)(byte)*local_20;
          local_20 = (ushort *)((int)local_20 + 1);
        }
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
      }
      cVar1 = FUN_80010148(param_1,0x40,'\0',iVar2,param_4);
      if (cVar1 == '\0') {
        *(undefined1 *)((int)param_1 + 0x41) = 0x20;
        local_9 = 0;
      }
      else {
        local_9 = 3;
      }
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined1 FUN_8000b814(int *param_1,int param_2,ushort param_3)

{
  bool bVar1;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x41) == ' ') {
    if ((param_2 == 0) || (param_3 == 0)) {
      local_9 = 1;
    }
    else {
      param_1[8] = param_2;
      *(ushort *)(param_1 + 9) = param_3;
      *(ushort *)((int)param_1 + 0x26) = param_3;
      param_1[0x11] = 0;
      *(undefined1 *)((int)param_1 + 0x41) = 0x21;
      *(undefined4 *)(param_1[0xe] + 0x28) = 0x800fbf9;
      *(undefined4 *)(param_1[0xe] + 0x2c) = 0x800fc75;
      *(undefined4 *)(param_1[0xe] + 0x30) = 0x800fa55;
      *(undefined4 *)(param_1[0xe] + 0x34) = 0;
      FUN_80009e10((int *)param_1[0xe],param_2,*param_1 + 4,(uint)param_3);
      *(undefined4 *)*param_1 = 0xffffffbf;
      do {
        ExclusiveAccess((uint *)(*param_1 + 0x14));
        bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
      } while (!bVar1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x80;
      local_9 = 0;
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_8000b8f8(void)

{
  return;
}



void FUN_8000b900(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000b90c(void)

{
  int local_28;
  
  FUN_80013b78();
  for (local_28 = 0; local_28 < 0xc; local_28 = local_28 + 1) {
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000b9f0(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOB,8);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000050;
  if (bVar1) {
    _DAT_20000050 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000ba5c(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOB,2);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000054;
  if (bVar1) {
    _DAT_20000054 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bac8(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,8);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000058;
  if (bVar1) {
    _DAT_20000058 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bb34(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,4);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_2000005c;
  if (bVar1) {
    _DAT_2000005c = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bba0(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,2);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000060;
  if (bVar1) {
    _DAT_20000060 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bc0c(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,1);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000064;
  if (bVar1) {
    _DAT_20000064 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bc78(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOA,0x800);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000068;
  if (bVar1) {
    _DAT_20000068 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bce8(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOB,0x200);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_2000006c;
  if (bVar1) {
    _DAT_2000006c = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bd58(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOA,0x1000);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000070;
  if (bVar1) {
    _DAT_20000070 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bdc8(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOB,0x100);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000074;
  if (bVar1) {
    _DAT_20000074 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000be38(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOB,1);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_20000078;
  if (bVar1) {
    _DAT_20000078 = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_8000bea4(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOA,0x8000);
  uVar2 = (uint)bVar1;
  bVar1 = uVar2 != _DAT_2000007c;
  if (bVar1) {
    _DAT_2000007c = uVar2;
    FUN_80013b58();
    FUN_80013b58();
  }
  return bVar1;
}



void FUN_8000bf14(void)

{
  uint uVar1;
  char extraout_r2;
  undefined4 extraout_r3;
  undefined4 in_stack_ffffffb0;
  int iVar2;
  uint local_18 [4];
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 8;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::AFIO.MAPR;
  Peripherals::AFIO.MAPR = uVar1 & 0xf8ffffff | 0x2000000;
  uVar1 = Peripherals::RCC.BDCR;
  Peripherals::RCC.BDCR = uVar1 & 0xfffffffe;
  uVar1 = Peripherals::RCC.BDCR;
  Peripherals::RCC.BDCR = uVar1 & 0xfffffffb;
  local_18[0] = 0x1c2;
  local_18[1] = 1;
  local_18[2] = 0;
  iVar2 = 2;
  local_18[3] = 2;
  FUN_8000a184(&Peripherals::GPIOA,local_18);
  FUN_8000a50c(&Peripherals::GPIOA,0x1c0,'\0',extraout_r3,in_stack_ffffffb0,iVar2);
  local_18[0] = 0xf0f0;
  local_18[1] = 1;
  local_18[2] = 0;
  local_18[3] = iVar2;
  iVar2 = FUN_8000a184(&Peripherals::GPIOB,local_18);
  FUN_8000a508(iVar2,0xf0,extraout_r2);
  local_18[0] = 0x4380;
  local_18[1] = 1;
  local_18[2] = 1;
  local_18[3] = 3;
  FUN_8000a180(&Peripherals::GPIOC,local_18);
  FUN_8000a508(0x40011000,0x380,'\0');
  local_18[0] = 0x30b;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_8000a180(&Peripherals::GPIOB,local_18);
  local_18[0] = 0x204f;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_8000a180(&Peripherals::GPIOC,local_18);
  local_18[0] = 0x9821;
  local_18[1] = 0;
  local_18[2] = 1;
  FUN_8000a180(&Peripherals::GPIOA,local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000c0f4(void)

{
  uint uVar1;
  uint auStack_24 [5];
  uint uStack_10;
  uint uStack_c;
  
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x80000;
  uStack_c = Peripherals::RCC.APB1ENR;
  uStack_c = uStack_c & 0x80000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uStack_10 = Peripherals::RCC.APB2ENR;
  uStack_10 = uStack_10 & 0x10;
  _DAT_0000100c = _DAT_0000100c | 2;
  auStack_24[4] = 2;
  auStack_24[2] = 0;
  auStack_24[0] = 0x400;
  auStack_24[1] = 2;
  auStack_24[3] = 3;
  FUN_8000a180(&Peripherals::GPIOC,auStack_24);
  auStack_24[0] = 0x800;
  auStack_24[1] = 0;
  auStack_24[2] = 0;
  FUN_8000a180(&Peripherals::GPIOC,auStack_24);
  _DAT_20000d8c = 0x40020430;
  _DAT_20000d90 = 0;
  _DAT_20000d94 = 0;
  _DAT_20000d98 = 0x80;
  _DAT_20000d9c = 0;
  _DAT_20000da0 = 0;
  _DAT_20000da4 = 0;
  _DAT_20000da8 = 0;
  FUN_80009d18();
  _DAT_200012d4 = &DAT_20000d8c;
  _DAT_20000db0 = &DAT_20001298;
  FUN_8000a698();
  FUN_8000a684();
  _DAT_20000dd0 = 0x40020458;
  _DAT_20000dd4 = 0x10;
  _DAT_20000dd8 = 0;
  _DAT_20000ddc = 0x80;
  _DAT_20000de0 = 0;
  _DAT_20000de4 = 0;
  _DAT_20000de8 = 0;
  _DAT_20000dec = 0;
  FUN_80009d18();
  _DAT_200012d0 = &DAT_20000dd0;
  _DAT_20000df4 = &DAT_20001298;
  FUN_8000a698();
  FUN_8000a684();
  _DAT_20001298 = &Peripherals::UART4;
  _DAT_2000129c = 0x9600;
  _DAT_200012a0 = 0x1000;
  _DAT_200012a4 = 0;
  _DAT_200012a8 = 0x400;
  _DAT_200012ac = 0xc;
  _DAT_200012b0 = 0;
  _DAT_200012b4 = 0;
  FUN_8000b5e0();
  FUN_8000a698();
  FUN_8000a684();
  _DAT_20001298->CR1 = _DAT_20001298->CR1 | 0x10;
  FUN_8000b688();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_8000c0fa(void)

{
  uint uVar1;
  undefined4 uStack00000004;
  undefined1 *puStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined1 *puStack0000001c;
  GPIOC *pGStack00000020;
  uint *puStack00000024;
  undefined4 uStack00000028;
  undefined1 *puStack0000002c;
  uint uStack00000030;
  uint uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  uint uStack00000048;
  uint uStack0000004c;
  
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x80000;
  uStack0000004c = Peripherals::RCC.APB1ENR;
  uStack0000004c = uStack0000004c & 0x80000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uStack00000048 = Peripherals::RCC.APB2ENR;
  uStack00000048 = uStack00000048 & 0x10;
  _DAT_0000100c = _DAT_0000100c | 2;
  uStack00000044 = 2;
  uStack00000028 = 0;
  uStack0000003c = 0;
  uStack00000034 = 0x400;
  uStack00000038 = 2;
  uStack00000040 = 3;
  pGStack00000020 = &Peripherals::GPIOC;
  puStack00000024 = &stack0x00000034;
  FUN_8000a180(&Peripherals::GPIOC,puStack00000024);
  uStack00000034 = 0x800;
  uStack00000038 = uStack00000028;
  uStack0000003c = uStack00000028;
  FUN_8000a180(pGStack00000020,puStack00000024);
  puStack0000002c = &DAT_20000d8c;
  _DAT_20000d8c = 0x40020430;
  _DAT_20000d90 = uStack00000028;
  _DAT_20000d94 = uStack00000028;
  _DAT_20000d98 = 0x80;
  _DAT_20000d9c = uStack00000028;
  _DAT_20000da0 = uStack00000028;
  _DAT_20000da4 = uStack00000028;
  _DAT_20000da8 = uStack00000028;
  FUN_80009d18();
  _DAT_200012d4 = &DAT_20000d8c;
  _DAT_20000db0 = &DAT_20001298;
  uStack00000014 = 0x3a;
  uStack00000018 = 0;
  FUN_8000a698();
  FUN_8000a684();
  puStack0000001c = &DAT_20000dd0;
  _DAT_20000dd0 = 0x40020458;
  _DAT_20000dd4 = 0x10;
  _DAT_20000dd8 = uStack00000018;
  _DAT_20000ddc = 0x80;
  _DAT_20000de0 = uStack00000018;
  _DAT_20000de4 = uStack00000018;
  _DAT_20000de8 = uStack00000018;
  _DAT_20000dec = uStack00000018;
  FUN_80009d18();
  _DAT_200012d0 = &DAT_20000dd0;
  _DAT_20000df4 = &DAT_20001298;
  uStack00000004 = 0x3b;
  uStack0000000c = 0;
  FUN_8000a698();
  FUN_8000a684();
  puStack00000008 = &DAT_20001298;
  _DAT_20001298 = &Peripherals::UART4;
  _DAT_2000129c = 0x9600;
  _DAT_200012a0 = 0x1000;
  _DAT_200012a4 = uStack0000000c;
  _DAT_200012a8 = 0x400;
  _DAT_200012ac = 0xc;
  _DAT_200012b0 = uStack0000000c;
  _DAT_200012b4 = uStack0000000c;
  FUN_8000b5e0();
  uStack00000010 = 0x34;
  FUN_8000a698();
  FUN_8000a684();
  uStack00000030 = _DAT_20001298->DR;
  _DAT_20001298->CR1 = _DAT_20001298->CR1 | 0x10;
  FUN_8000b688();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000c0fa(void)

{
  uint uVar1;
  undefined4 uStack00000004;
  undefined1 *puStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined1 *puStack0000001c;
  GPIOC *pGStack00000020;
  uint *puStack00000024;
  undefined4 uStack00000028;
  undefined1 *puStack0000002c;
  uint uStack00000030;
  uint uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  uint uStack00000048;
  uint uStack0000004c;
  
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x80000;
  uStack0000004c = Peripherals::RCC.APB1ENR;
  uStack0000004c = uStack0000004c & 0x80000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uStack00000048 = Peripherals::RCC.APB2ENR;
  uStack00000048 = uStack00000048 & 0x10;
  _DAT_0000100c = _DAT_0000100c | 2;
  uStack00000044 = 2;
  uStack00000028 = 0;
  uStack0000003c = 0;
  uStack00000034 = 0x400;
  uStack00000038 = 2;
  uStack00000040 = 3;
  pGStack00000020 = &Peripherals::GPIOC;
  puStack00000024 = &stack0x00000034;
  FUN_8000a180(&Peripherals::GPIOC,puStack00000024);
  uStack00000034 = 0x800;
  uStack00000038 = uStack00000028;
  uStack0000003c = uStack00000028;
  FUN_8000a180(pGStack00000020,puStack00000024);
  puStack0000002c = &DAT_20000d8c;
  _DAT_20000d8c = 0x40020430;
  _DAT_20000d90 = uStack00000028;
  _DAT_20000d94 = uStack00000028;
  _DAT_20000d98 = 0x80;
  _DAT_20000d9c = uStack00000028;
  _DAT_20000da0 = uStack00000028;
  _DAT_20000da4 = uStack00000028;
  _DAT_20000da8 = uStack00000028;
  FUN_80009d18();
  _DAT_200012d4 = &DAT_20000d8c;
  _DAT_20000db0 = &DAT_20001298;
  uStack00000014 = 0x3a;
  uStack00000018 = 0;
  FUN_8000a698();
  FUN_8000a684();
  puStack0000001c = &DAT_20000dd0;
  _DAT_20000dd0 = 0x40020458;
  _DAT_20000dd4 = 0x10;
  _DAT_20000dd8 = uStack00000018;
  _DAT_20000ddc = 0x80;
  _DAT_20000de0 = uStack00000018;
  _DAT_20000de4 = uStack00000018;
  _DAT_20000de8 = uStack00000018;
  _DAT_20000dec = uStack00000018;
  FUN_80009d18();
  _DAT_200012d0 = &DAT_20000dd0;
  _DAT_20000df4 = &DAT_20001298;
  uStack00000004 = 0x3b;
  uStack0000000c = 0;
  FUN_8000a698();
  FUN_8000a684();
  puStack00000008 = &DAT_20001298;
  _DAT_20001298 = &Peripherals::UART4;
  _DAT_2000129c = 0x9600;
  _DAT_200012a0 = 0x1000;
  _DAT_200012a4 = uStack0000000c;
  _DAT_200012a8 = 0x400;
  _DAT_200012ac = 0xc;
  _DAT_200012b0 = uStack0000000c;
  _DAT_200012b4 = uStack0000000c;
  FUN_8000b5e0();
  uStack00000010 = 0x34;
  FUN_8000a698();
  FUN_8000a684();
  uStack00000030 = _DAT_20001298->DR;
  _DAT_20001298->CR1 = _DAT_20001298->CR1 | 0x10;
  FUN_8000b688();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000c2cc(void)

{
  uint uVar1;
  uint auStack_18 [4];
  
  auStack_18[2] = 0;
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x100000;
  uVar1 = Peripherals::RCC.APB1ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uVar1 = Peripherals::RCC.APB2ENR;
  auStack_18[0] = 0x1000;
  auStack_18[1] = 2;
  auStack_18[3] = 3;
  FUN_8000a180(&Peripherals::GPIOC,auStack_18);
  auStack_18[0] = 4;
  auStack_18[1] = 0;
  auStack_18[2] = 0;
  FUN_8000a180(&Peripherals::GPIOD,auStack_18);
  _DAT_200012e0 = &Peripherals::UART5;
  _DAT_200012e4 = 0x1c200;
  _DAT_200012e8 = 0;
  _DAT_200012ec = 0;
  _DAT_200012f0 = 0;
  _DAT_200012f4 = 0xc;
  _DAT_200012f8 = 0;
  _DAT_200012fc = 0;
  FUN_8000b5e0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000c2d0(void)

{
  uint uVar1;
  uint *puStack00000000;
  undefined4 uStack00000004;
  undefined1 *puStack00000008;
  uint uStack0000000c;
  uint uStack00000010;
  uint uStack00000014;
  uint uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  
  uStack00000020 = 0;
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x100000;
  uStack00000014 = Peripherals::RCC.APB1ENR;
  uStack00000014 = uStack00000014 & 0x100000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uStack00000010 = Peripherals::RCC.APB2ENR;
  uStack00000010 = uStack00000010 & 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uStack0000000c = Peripherals::RCC.APB2ENR;
  uStack0000000c = uStack0000000c & 0x20;
  uStack00000018 = 0x1000;
  uStack0000001c = 2;
  uStack00000024 = 3;
  puStack00000000 = &stack0x00000018;
  FUN_8000a180(&Peripherals::GPIOC,puStack00000000);
  uStack00000018 = 4;
  uStack00000004 = 0;
  uStack0000001c = 0;
  uStack00000020 = 0;
  FUN_8000a180(&Peripherals::GPIOD,puStack00000000);
  puStack00000008 = &DAT_200012e0;
  _DAT_200012e0 = &Peripherals::UART5;
  _DAT_200012e4 = 0x1c200;
  _DAT_200012e8 = uStack00000004;
  _DAT_200012ec = uStack00000004;
  _DAT_200012f0 = uStack00000004;
  _DAT_200012f4 = 0xc;
  _DAT_200012f8 = uStack00000004;
  _DAT_200012fc = uStack00000004;
  FUN_8000b5e0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000c3a4(void)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x4000;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.AHBENR;
  _DAT_20000030 = 0x200;
  _DAT_20000034 = 2;
  _DAT_2000003c = 3;
  FUN_8000a184(&Peripherals::GPIOA,(uint *)&DAT_20000030);
  _DAT_20000030 = 0x400;
  _DAT_20000034 = 0;
  _DAT_20000038 = 0;
  FUN_8000a184(&Peripherals::GPIOA,(uint *)&DAT_20000030);
  _DAT_20000e14 = 0x40020058;
  _DAT_20000e18 = 0;
  _DAT_20000e1c = 0;
  _DAT_20000e20 = 0x80;
  _DAT_20000e24 = 0;
  _DAT_20000e28 = 0;
  _DAT_20000e2c = 0;
  _DAT_20000e30 = 0;
  FUN_8000a69c(0xf,0,0);
  FUN_8000a688(0xf);
  FUN_80009d1c((uint *)&DAT_20000e14);
  _DAT_200011fc = &DAT_20000e14;
  _DAT_20000e38 = &DAT_200011c0;
  _DAT_20000e58 = 0x40020044;
  _DAT_20000e5c = 0x10;
  _DAT_20000e60 = 0;
  _DAT_20000e64 = 0x80;
  _DAT_20000e68 = 0;
  _DAT_20000e6c = 0;
  _DAT_20000e70 = 0;
  _DAT_20000e74 = 0;
  FUN_8000a69c(0xe,0,0);
  FUN_8000a688(0xe);
  FUN_80009d1c((uint *)&DAT_20000e58);
  _DAT_200011f8 = &DAT_20000e58;
  _DAT_20000e7c = &DAT_200011c0;
  FUN_8000a69c(0x25,0,0);
  FUN_8000a688(0x25);
  _DAT_200011c0 = &Peripherals::USART1;
  _DAT_200011c4 = 0x1c200;
  _DAT_200011c8 = 0;
  _DAT_200011cc = 0;
  _DAT_200011d0 = 0;
  _DAT_200011d4 = 0xc;
  _DAT_200011d8 = 0;
  _DAT_200011dc = 0;
  FUN_8000b5e4((int *)&DAT_200011c0);
  _DAT_200011c0->CR1 = _DAT_200011c0->CR1 | 0x10;
  uVar2 = FUN_8000b68c((int *)&DAT_200011c0,0x20002046,0x226);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 thunk_FUN_8000c3aa(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined1 *puStack00000008;
  undefined4 uStack0000000c;
  uint *puStack00000010;
  GPIOA *pGStack00000014;
  uint *puStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  uint *puStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  uint uStack00000030;
  uint uStack00000034;
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x4000;
  uStack00000034 = Peripherals::RCC.APB2ENR;
  uStack00000034 = uStack00000034 & 0x4000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uStack00000030 = Peripherals::RCC.APB2ENR;
  uStack00000030 = uStack00000030 & 4;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uStack0000002c = Peripherals::RCC.AHBENR;
  uStack0000002c = uStack0000002c & 1;
  puStack00000018 = (uint *)&DAT_20000030;
  _DAT_20000030 = 0x200;
  _DAT_20000034 = 2;
  _DAT_2000003c = 3;
  pGStack00000014 = &Peripherals::GPIOA;
  FUN_8000a184(&Peripherals::GPIOA,(uint *)&DAT_20000030);
  *puStack00000018 = 0x400;
  uStack0000001c = 0;
  puStack00000018[1] = 0;
  puStack00000018[2] = 0;
  FUN_8000a184(pGStack00000014,puStack00000018);
  puStack00000024 = (uint *)&DAT_20000e14;
  _DAT_20000e14 = 0x40020058;
  _DAT_20000e18 = uStack0000001c;
  _DAT_20000e1c = uStack0000001c;
  _DAT_20000e20 = 0x80;
  _DAT_20000e24 = uStack0000001c;
  _DAT_20000e28 = uStack0000001c;
  _DAT_20000e2c = uStack0000001c;
  _DAT_20000e30 = uStack0000001c;
  uStack00000020 = 0xf;
  FUN_8000a69c(0xf,uStack0000001c,uStack0000001c);
  FUN_8000a688((char)uStack00000020);
  FUN_80009d1c(puStack00000024);
  _DAT_200011fc = &DAT_20000e14;
  _DAT_20000e38 = &DAT_200011c0;
  puStack00000010 = (uint *)&DAT_20000e58;
  _DAT_20000e58 = 0x40020044;
  _DAT_20000e5c = 0x10;
  _DAT_20000e60 = 0;
  _DAT_20000e64 = 0x80;
  _DAT_20000e68 = 0;
  _DAT_20000e6c = 0;
  _DAT_20000e70 = 0;
  _DAT_20000e74 = 0;
  uStack0000000c = 0xe;
  FUN_8000a69c(0xe,0,0);
  FUN_8000a688((char)uStack0000000c);
  FUN_80009d1c(puStack00000010);
  _DAT_200011f8 = &DAT_20000e58;
  _DAT_20000e7c = &DAT_200011c0;
  uStack00000000 = 0x25;
  uStack00000004 = 0;
  FUN_8000a69c(0x25,0,0);
  FUN_8000a688((char)uStack00000000);
  puStack00000008 = &DAT_200011c0;
  _DAT_200011c0 = &Peripherals::USART1;
  _DAT_200011c4 = 0x1c200;
  _DAT_200011c8 = uStack00000004;
  _DAT_200011cc = uStack00000004;
  _DAT_200011d0 = uStack00000004;
  _DAT_200011d4 = 0xc;
  _DAT_200011d8 = uStack00000004;
  _DAT_200011dc = uStack00000004;
  FUN_8000b5e4((int *)&DAT_200011c0);
  uStack00000028 = _DAT_200011c0->DR;
  _DAT_200011c0->CR1 = _DAT_200011c0->CR1 | 0x10;
  uVar2 = FUN_8000b68c((int *)&DAT_200011c0,0x20002046,0x226);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000c3aa(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined1 *puStack00000008;
  undefined4 uStack0000000c;
  uint *puStack00000010;
  GPIOA *pGStack00000014;
  uint *puStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  uint *puStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  uint uStack00000030;
  uint uStack00000034;
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x4000;
  uStack00000034 = Peripherals::RCC.APB2ENR;
  uStack00000034 = uStack00000034 & 0x4000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  uStack00000030 = Peripherals::RCC.APB2ENR;
  uStack00000030 = uStack00000030 & 4;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uStack0000002c = Peripherals::RCC.AHBENR;
  uStack0000002c = uStack0000002c & 1;
  puStack00000018 = (uint *)&DAT_20000030;
  _DAT_20000030 = 0x200;
  _DAT_20000034 = 2;
  _DAT_2000003c = 3;
  pGStack00000014 = &Peripherals::GPIOA;
  FUN_8000a184(&Peripherals::GPIOA,(uint *)&DAT_20000030);
  *puStack00000018 = 0x400;
  uStack0000001c = 0;
  puStack00000018[1] = 0;
  puStack00000018[2] = 0;
  FUN_8000a184(pGStack00000014,puStack00000018);
  puStack00000024 = (uint *)&DAT_20000e14;
  _DAT_20000e14 = 0x40020058;
  _DAT_20000e18 = uStack0000001c;
  _DAT_20000e1c = uStack0000001c;
  _DAT_20000e20 = 0x80;
  _DAT_20000e24 = uStack0000001c;
  _DAT_20000e28 = uStack0000001c;
  _DAT_20000e2c = uStack0000001c;
  _DAT_20000e30 = uStack0000001c;
  uStack00000020 = 0xf;
  FUN_8000a69c(0xf,uStack0000001c,uStack0000001c);
  FUN_8000a688((char)uStack00000020);
  FUN_80009d1c(puStack00000024);
  _DAT_200011fc = &DAT_20000e14;
  _DAT_20000e38 = &DAT_200011c0;
  puStack00000010 = (uint *)&DAT_20000e58;
  _DAT_20000e58 = 0x40020044;
  _DAT_20000e5c = 0x10;
  _DAT_20000e60 = 0;
  _DAT_20000e64 = 0x80;
  _DAT_20000e68 = 0;
  _DAT_20000e6c = 0;
  _DAT_20000e70 = 0;
  _DAT_20000e74 = 0;
  uStack0000000c = 0xe;
  FUN_8000a69c(0xe,0,0);
  FUN_8000a688((char)uStack0000000c);
  FUN_80009d1c(puStack00000010);
  _DAT_200011f8 = &DAT_20000e58;
  _DAT_20000e7c = &DAT_200011c0;
  uStack00000000 = 0x25;
  uStack00000004 = 0;
  FUN_8000a69c(0x25,0,0);
  FUN_8000a688((char)uStack00000000);
  puStack00000008 = &DAT_200011c0;
  _DAT_200011c0 = &Peripherals::USART1;
  _DAT_200011c4 = 0x1c200;
  _DAT_200011c8 = uStack00000004;
  _DAT_200011cc = uStack00000004;
  _DAT_200011d0 = uStack00000004;
  _DAT_200011d4 = 0xc;
  _DAT_200011d8 = uStack00000004;
  _DAT_200011dc = uStack00000004;
  FUN_8000b5e4((int *)&DAT_200011c0);
  uStack00000028 = _DAT_200011c0->DR;
  _DAT_200011c0->CR1 = _DAT_200011c0->CR1 | 0x10;
  uVar2 = FUN_8000b68c((int *)&DAT_200011c0,0x20002046,0x226);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000c570(void)

{
  uint uVar1;
  undefined1 uVar2;
  uint local_24 [5];
  uint local_10;
  uint local_c;
  
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x20000;
  local_c = Peripherals::RCC.APB1ENR;
  local_c = local_c & 0x20000;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 4;
  local_10 = Peripherals::RCC.APB2ENR;
  local_10 = local_10 & 4;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  local_24[4] = Peripherals::RCC.AHBENR;
  local_24[4] = local_24[4] & 1;
  local_24[2] = 0;
  local_24[0] = 4;
  local_24[1] = 2;
  local_24[3] = 3;
  FUN_8000a184(&Peripherals::GPIOA,local_24);
  local_24[0] = 8;
  local_24[1] = 0;
  local_24[2] = 0;
  FUN_8000a184(&Peripherals::GPIOA,local_24);
  _DAT_20000e9c = 0x4002006c;
  _DAT_20000ea0 = 0;
  _DAT_20000ea4 = 0;
  _DAT_20000ea8 = 0x80;
  _DAT_20000eac = 0;
  _DAT_20000eb0 = 0;
  _DAT_20000eb4 = 0;
  _DAT_20000eb8 = 0;
  FUN_80009d1c((uint *)&DAT_20000e9c);
  _DAT_20001244 = &DAT_20000e9c;
  _DAT_20000ec0 = &DAT_20001208;
  _DAT_20000ee0 = 0x40020080;
  _DAT_20000ee4 = 0x10;
  _DAT_20000ee8 = 0;
  _DAT_20000eec = 0x80;
  _DAT_20000ef0 = 0;
  _DAT_20000ef4 = 0;
  _DAT_20000ef8 = 0;
  _DAT_20000efc = 0;
  FUN_80009d1c((uint *)&DAT_20000ee0);
  _DAT_20001240 = &DAT_20000ee0;
  _DAT_20000f04 = &DAT_20001208;
  FUN_8000a69c(0x26,0,0);
  FUN_8000a688(0x26);
  _DAT_20001208 = &Peripherals::USART2;
  _DAT_2000120c = 0x4b00;
  _DAT_20001210 = 0;
  _DAT_20001214 = 0;
  _DAT_20001218 = 0;
  _DAT_2000121c = 0xc;
  _DAT_20001220 = 0;
  _DAT_20001224 = 0;
  FUN_8000b5e4((int *)&DAT_20001208);
  _DAT_20001208->CR1 = _DAT_20001208->CR1 | 0x10;
  uVar2 = FUN_8000b68c((int *)&DAT_20001208,0x200022a0,0x32);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_8000c71c(void)

{
  uint uVar1;
  undefined1 uVar2;
  uint local_18 [4];
  
  local_18[2] = 0;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 8;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB1ENR;
  Peripherals::RCC.APB1ENR = uVar1 | 0x40000;
  uVar1 = Peripherals::RCC.APB1ENR;
  uVar1 = Peripherals::RCC.AHBENR;
  Peripherals::RCC.AHBENR = uVar1 | 1;
  uVar1 = Peripherals::RCC.AHBENR;
  local_18[0] = 0x400;
  local_18[1] = 2;
  local_18[3] = 3;
  FUN_8000a184(&Peripherals::GPIOB,local_18);
  local_18[0] = 0x800;
  local_18[1] = 0;
  local_18[2] = 0;
  FUN_8000a184(&Peripherals::GPIOB,local_18);
  _DAT_20000f24 = 0x40020030;
  _DAT_20000f28 = 0;
  _DAT_20000f2c = 0;
  _DAT_20000f30 = 0x80;
  _DAT_20000f34 = 0;
  _DAT_20000f38 = 0;
  _DAT_20000f3c = 0;
  _DAT_20000f40 = 0;
  FUN_8000a69c(0xd,0,0);
  FUN_8000a688(0xd);
  FUN_80009d1c((uint *)&DAT_20000f24);
  _DAT_2000128c = &DAT_20000f24;
  _DAT_20000f48 = &DAT_20001250;
  _DAT_20000f68 = 0x4002001c;
  _DAT_20000f6c = 0x10;
  _DAT_20000f70 = 0;
  _DAT_20000f74 = 0x80;
  _DAT_20000f78 = 0;
  _DAT_20000f7c = 0;
  _DAT_20000f80 = 0;
  _DAT_20000f84 = 0;
  FUN_8000a69c(0xc,0,0);
  FUN_8000a688(0xc);
  FUN_80009d1c((uint *)&DAT_20000f68);
  _DAT_20001288 = &DAT_20000f68;
  _DAT_20000f8c = &DAT_20001250;
  FUN_8000a69c(0x27,0,0);
  FUN_8000a688(0x27);
  _DAT_20001250 = &Peripherals::USART3;
  _DAT_20001254 = 0x2580;
  _DAT_20001258 = 0;
  _DAT_2000125c = 0;
  _DAT_20001260 = 0;
  _DAT_20001264 = 0xc;
  _DAT_20001268 = 0;
  _DAT_2000126c = 0;
  FUN_8000b5e4((int *)&DAT_20001250);
  _DAT_20001250->CR1 = _DAT_20001250->CR1 | 0x10;
  uVar2 = FUN_8000b68c((int *)&DAT_20001250,0x2000239b,200);
  return uVar2;
}



void FUN_8000c910(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 in_stack_fffffff0;
  GPIOB *pGVar1;
  
  pGVar1 = &Peripherals::GPIOB;
  FUN_8000a50c(&Peripherals::GPIOB,0x8000,'\x01',in_r3,in_stack_fffffff0,0x40010c00);
  FUN_8000a50c(pGVar1,0x4000,'\0',extraout_r3,in_stack_fffffff0,(int)pGVar1);
  return;
}



undefined1 FUN_8000c938(void)

{
  bool bVar1;
  undefined1 local_9;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,0x40);
  if ((bVar1) && (bVar1 = FUN_8000a4dc(&Peripherals::GPIOC,0x2000), bVar1)) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
  }
  return local_9;
}



void FUN_8000c97c(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  GPIOB *pGVar1;
  int iVar2;
  
  pGVar1 = &Peripherals::GPIOB;
  iVar2 = 0;
  FUN_8000a50c(&Peripherals::GPIOB,0x8000,'\0',in_r3,&Peripherals::GPIOB,0);
  FUN_8000a50c(pGVar1,0x4000,(char)iVar2,extraout_r3,pGVar1,iVar2);
  return;
}



void FUN_8000c9a8(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 in_stack_fffffff0;
  GPIOB *pGVar1;
  
  pGVar1 = &Peripherals::GPIOB;
  FUN_8000a50c(&Peripherals::GPIOB,0x2000,'\0',in_r3,in_stack_fffffff0,0x40010c00);
  FUN_8000a50c(pGVar1,0x1000,'\x01',extraout_r3,in_stack_fffffff0,(int)pGVar1);
  return;
}



void FUN_8000c9d0(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 in_stack_fffffff0;
  GPIOB *pGVar1;
  
  pGVar1 = &Peripherals::GPIOB;
  FUN_8000a50c(&Peripherals::GPIOB,0x2000,'\x01',in_r3,in_stack_fffffff0,0x40010c00);
  FUN_8000a50c(pGVar1,0x1000,'\0',extraout_r3,in_stack_fffffff0,(int)pGVar1);
  return;
}



undefined1 FUN_8000c9f8(void)

{
  bool bVar1;
  undefined1 local_9;
  
  bVar1 = FUN_8000a4dc(&Peripherals::GPIOA,1);
  if ((bVar1) && (bVar1 = FUN_8000a4dc(&Peripherals::GPIOA,0x20), bVar1)) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
  }
  return local_9;
}



void FUN_8000ca38(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  GPIOB *pGVar1;
  int iVar2;
  
  pGVar1 = &Peripherals::GPIOB;
  iVar2 = 0;
  FUN_8000a50c(&Peripherals::GPIOB,0x2000,'\0',in_r3,&Peripherals::GPIOB,0);
  FUN_8000a50c(pGVar1,0x1000,(char)iVar2,extraout_r3,pGVar1,iVar2);
  return;
}



void FUN_8000ca64(void)

{
  FUN_8000cb0c(0x8000000,0x8000);
  func_0x8000a5ec();
  FUN_8000d47c();
  FUN_8000bf14();
  func_0x8000c0cc();
  FUN_800105bc();
  thunk_FUN_8000c3aa();
  FUN_8000c570();
  FUN_8000c71c();
  thunk_FUN_8000c0fa();
  FUN_8000c2d0();
  return;
}



void FUN_8000ca9c(void)

{
  return;
}



void FUN_8000cb0c(uint param_1,uint param_2)

{
  Peripherals::SCB.VTOR = param_1 | param_2 & 0x1fffff80;
  return;
}



void FUN_8000cb2c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ushort FUN_8000cb30(undefined4 *param_1)

{
  undefined2 local_c;
  
  if (_DAT_20002044 == 0) {
    local_c = 0;
  }
  else {
    FUN_80008168(param_1,(undefined4 *)0x20001e1e,(uint)_DAT_20002044);
    local_c = _DAT_20002044;
    FUN_8000819a((undefined1 *)0x20001e1e,(uint)_DAT_20002044);
    _DAT_20002044 = 0;
  }
  return local_c;
}



void FUN_8000cb84(void)

{
  return;
}



undefined1 FUN_8000cb88(int param_1,ushort param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_8000b814((int *)&DAT_200011c0,param_1,param_2);
  return uVar1;
}



void FUN_8000cba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 in_stack_ffffffe0;
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 0x23; local_c = local_c + 1) {
    iVar1 = 0;
    FUN_8001054c(0,param_2,param_3,param_4);
    FUN_8001054c((char)iVar1,extraout_r1,extraout_r2,extraout_r3);
    FUN_8001054c((char)iVar1,extraout_r1_00,extraout_r2_00,extraout_r3_00);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_01,in_stack_ffffffe0,iVar1);
    FUN_80010d08(8);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_02,in_stack_ffffffe0,iVar1);
    FUN_8000a50c(&Peripherals::GPIOC,0x80,'\x01',extraout_r3_03,in_stack_ffffffe0,iVar1);
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_04;
  }
  return;
}



void FUN_8000cc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 in_stack_ffffffe0;
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 0x23; local_c = local_c + 1) {
    iVar1 = 0;
    FUN_8001054c(0,param_2,param_3,param_4);
    FUN_8001054c((char)iVar1,extraout_r1,extraout_r2,extraout_r3);
    FUN_8001054c(0xff,extraout_r1_00,extraout_r2_00,extraout_r3_00);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_01,in_stack_ffffffe0,iVar1);
    FUN_80010d08(8);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_02,in_stack_ffffffe0,iVar1);
    FUN_8000a50c(&Peripherals::GPIOC,0x80,'\x01',extraout_r3_03,in_stack_ffffffe0,iVar1);
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_04;
  }
  return;
}



void FUN_8000cc78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 in_stack_ffffffe0;
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 0x23; local_c = local_c + 1) {
    iVar1 = 0;
    FUN_8001054c(0,param_2,param_3,param_4);
    FUN_8001054c(0xff,extraout_r1,extraout_r2,extraout_r3);
    FUN_8001054c((char)iVar1,extraout_r1_00,extraout_r2_00,extraout_r3_00);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_01,in_stack_ffffffe0,iVar1);
    FUN_80010d08(8);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_02,in_stack_ffffffe0,iVar1);
    FUN_8000a50c(&Peripherals::GPIOC,0x80,'\x01',extraout_r3_03,in_stack_ffffffe0,iVar1);
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_04;
  }
  return;
}



void FUN_8000cce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 in_stack_ffffffe0;
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 0x23; local_c = local_c + 1) {
    FUN_8001054c(0xff,param_2,param_3,param_4);
    iVar1 = 0;
    FUN_8001054c(0,extraout_r1,extraout_r2,extraout_r3);
    FUN_8001054c((char)iVar1,extraout_r1_00,extraout_r2_00,extraout_r3_00);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_01,in_stack_ffffffe0,iVar1);
    FUN_80010d08(8);
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_02,in_stack_ffffffe0,iVar1);
    FUN_8000a50c(&Peripherals::GPIOC,0x80,'\x01',extraout_r3_03,in_stack_ffffffe0,iVar1);
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_04;
  }
  return;
}



void FUN_8000cd48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 uVar1;
  GPIOC *pGVar2;
  int local_c;
  
  for (local_c = 0; local_c < 0x23; local_c = local_c + 1) {
    FUN_8001054c(0xff,param_2,param_3,param_4);
    FUN_8001054c(0xd0,extraout_r1,extraout_r2,extraout_r3);
    FUN_8001054c(0,extraout_r1_00,extraout_r2_00,extraout_r3_00);
    pGVar2 = &Peripherals::GPIOC;
    uVar1 = 0x100;
    FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',extraout_r3_01,0x100,0x40011000);
    FUN_80010d08(8);
    FUN_8000a50c(pGVar2,(ushort)uVar1,'\x01',extraout_r3_02,uVar1,(int)pGVar2);
    FUN_8000a50c(pGVar2,0x80,'\x01',extraout_r3_03,uVar1,(int)pGVar2);
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_04;
  }
  return;
}



void FUN_8000cdac(void)

{
  FUN_8000b90c();
  FUN_80013b58();
  return;
}



void FUN_8000ce14(undefined2 *param_1,undefined2 *param_2)

{
  FUN_8000cf84(param_1,param_2);
  return;
}



void FUN_8000ce28(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_1c;
  
  uVar1 = FUN_800082b4(param_3,param_1);
  uVar1 = FUN_80008324(uVar1,param_2);
  uVar2 = FUN_80008746(uVar1);
  uVar3 = FUN_800084ee((uint)uVar2,(uint)((ulonglong)uVar2 >> 0x20),0,0x40590000);
  uVar3 = FUN_80008708((uint)uVar3,(uint)(uVar3 >> 0x20));
  FUN_80013b58();
  for (local_1c = 0; local_1c < (int)uVar3; local_1c = local_1c + 1) {
    FUN_80013b58();
  }
  for (; local_1c < 100; local_1c = local_1c + 1) {
    FUN_80013b58();
  }
  FUN_80013b58();
  return;
}



void FUN_8000ceb8(void)

{
  return;
}



char FUN_8000cebc(undefined1 *param_1,undefined1 param_2,ushort param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined1 uStack_15;
  
  *param_1 = 0xaa;
  param_1[1] = 0x55;
  param_1[4] = param_2;
  param_1[5] = 7;
  *(ushort *)(param_1 + 6) = param_3;
  if ((param_3 != 0) && (param_4 != (undefined4 *)0x0)) {
    FUN_80008168((undefined4 *)(param_1 + 8),param_4,(uint)param_3);
  }
  uVar1 = FUN_80010720((int)(param_1 + 4),param_3 + 4);
  param_1[2] = (char)uVar1;
  uStack_15 = (undefined1)(uVar1 >> 8);
  param_1[3] = uStack_15;
  return (char)param_3 + '\b';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000cf48(int param_1)

{
  bool bVar1;
  undefined4 local_8;
  
  local_8 = (_DAT_20000004 / 8000) * param_1;
  do {
    bVar1 = local_8 != 0;
    local_8 = local_8 + -1;
  } while (bVar1);
  return;
}



void FUN_8000cf84(undefined2 *param_1,undefined2 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_16;
  undefined1 local_15;
  byte local_14;
  undefined1 local_13;
  undefined1 local_12;
  byte local_11;
  undefined2 *local_10;
  undefined2 *local_c;
  
  local_10 = param_2;
  local_c = param_1;
  FUN_8000d0fc((int)&local_16,6);
  bVar1 = FUN_80008cd4((int)&local_16,2,local_14);
  bVar2 = FUN_80008cd4((int)&local_13,2,local_11);
  if ((bVar1) && (bVar2)) {
    uVar3 = FUN_800086cc((uint)CONCAT11(local_16,local_15));
    uVar6 = FUN_80008746(uVar3);
    uVar7 = FUN_800084ee((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),0,0x4065e000);
    uVar6 = FUN_800085d2((uint)uVar7,(uint)(uVar7 >> 0x20),0,0x40efffe0);
    uVar7 = FUN_800083a0((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),0,0xc0468000);
    uVar3 = FUN_8000876c((uint)uVar7,(uint)(uVar7 >> 0x20));
    uVar4 = FUN_800086cc((uint)CONCAT11(local_13,local_12));
    uVar6 = FUN_80008746(uVar4);
    uVar7 = FUN_800084ee((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),0,0x40590000);
    uVar6 = FUN_800085d2((uint)uVar7,(uint)(uVar7 >> 0x20),0,0x40efffe0);
    uVar4 = FUN_8000876c((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20));
    iVar5 = FUN_800081ce(uVar3,0xc1a00000);
    if ((iVar5 == 0) &&
       (((iVar5 = FUN_800086b0(uVar3,0x42fa0000), iVar5 == 0 &&
         (iVar5 = FUN_800081ce(uVar4,0), iVar5 == 0)) &&
        (iVar5 = FUN_800086b0(uVar4,0x42c80000), iVar5 == 0)))) {
      FUN_80008746(uVar3);
      FUN_80013b58();
      FUN_80008746(uVar4);
      FUN_80013b58();
      uVar3 = FUN_800082c0(uVar3,0x41200000);
      uVar3 = FUN_800086d6(uVar3);
      *local_c = (short)uVar3;
      uVar3 = FUN_800082c0(uVar4,0x41200000);
      uVar3 = FUN_800086d6(uVar3);
      *local_10 = (short)uVar3;
    }
  }
  return;
}



bool FUN_8000d0fc(int param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = FUN_8000d1c8('\x01',0x44,0x2c06,param_1,param_2);
  return bVar1;
}



undefined4 FUN_8000d144(void)

{
  FUN_80013b58();
  FUN_8000912c(0x803f800);
  FUN_80009220(0x803f800,&DAT_20001dae,0x38);
  FUN_80009168(0x803f800,0x38);
  return 0;
}



void FUN_8000d184(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 in_stack_ffffffe8;
  int iVar1;
  GPIOC *pGVar2;
  
  pGVar2 = &Peripherals::GPIOC;
  FUN_8000a50c(&Peripherals::GPIOC,0x100,'\x01',in_r3,in_stack_ffffffe8,0x40011000);
  iVar1 = 8;
  FUN_80010d08(8);
  FUN_8000a50c(pGVar2,0x100,'\0',extraout_r3,iVar1,(int)pGVar2);
  FUN_80010d08(iVar1);
  FUN_8000a50c(pGVar2,0x100,'\x01',extraout_r3_00,iVar1,(int)pGVar2);
  return;
}



bool FUN_8000d1c8(char param_1,byte param_2,undefined2 param_3,int param_4,byte param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  byte local_17;
  bool local_16;
  undefined1 local_e;
  undefined1 uStack_d;
  bool local_9;
  
  if (param_5 == 0) {
    local_9 = false;
  }
  else {
    FUN_80010b24(param_1);
    FUN_80010c58(param_1,extraout_r1,extraout_r2,extraout_r3);
    FUN_80010bf0(param_1,param_2,0,extraout_r3_00);
    cVar1 = FUN_80010a5c(param_1);
    FUN_8000d4f8(200);
    uStack_d = (undefined1)((ushort)param_3 >> 8);
    FUN_80010b40(param_1,uStack_d);
    cVar2 = FUN_80010a5c(param_1);
    local_16 = cVar2 != '\0' && cVar1 != '\0';
    FUN_8000d4f8(200);
    local_e = (undefined1)param_3;
    FUN_80010b40(param_1,local_e);
    cVar1 = FUN_80010a5c(param_1);
    if (cVar1 == '\0') {
      local_16 = false;
    }
    FUN_8000d4f8(200);
    FUN_80010ce0(0x14);
    FUN_80010c58(param_1,extraout_r1_00,extraout_r2_00,extraout_r3_01);
    FUN_80010bf0(param_1,param_2,1,extraout_r3_02);
    cVar1 = FUN_80010a5c(param_1);
    if (cVar1 == '\0') {
      local_16 = false;
    }
    if (1 < param_5) {
      for (local_17 = 0; (int)(uint)local_17 < (int)(param_5 - 1); local_17 = local_17 + 1) {
        FUN_8000d4f8(200);
        bVar3 = FUN_8000d370(param_1);
        *(byte *)(param_4 + (uint)local_17) = bVar3;
        FUN_80010b94(param_1);
      }
    }
    FUN_8000d4f8(200);
    bVar3 = FUN_8000d370(param_1);
    *(byte *)((uint)param_5 + param_4 + -1) = bVar3;
    FUN_80010ad4(param_1);
    FUN_80010c9c(param_1,extraout_r1_01,extraout_r2_01,extraout_r3_03);
    local_9 = local_16;
  }
  return local_9;
}



void FUN_8000d334(void)

{
  return;
}



bool FUN_8000d338(char param_1)

{
  bool local_9;
  
  if (param_1 == '\x01') {
    local_9 = FUN_800092b4(&Peripherals::GPIOB,0x80);
  }
  else {
    local_9 = false;
  }
  return local_9;
}



byte FUN_8000d370(char param_1)

{
  bool bVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined1 local_11;
  undefined4 local_10;
  
  local_11 = 0;
  FUN_80011dd4(param_1);
  local_10 = 8;
  uVar2 = extraout_r2;
  uVar3 = extraout_r3;
  while( true ) {
    if (local_10 == 0) break;
    FUN_80011d5c(param_1,local_10 + -1,uVar2,uVar3);
    local_11 = local_11 << 1;
    bVar1 = FUN_8000d338(param_1);
    if (bVar1) {
      local_11 = local_11 | 1;
    }
    FUN_8000d4f8(200);
    FUN_80011d84(param_1,extraout_r1,extraout_r2_00,extraout_r3_00);
    FUN_8000d4f8(200);
    uVar2 = extraout_r2_01;
    uVar3 = extraout_r3_01;
    local_10 = local_10 + -1;
  }
  FUN_80011e5c(param_1);
  return local_11;
}



bool FUN_8000d3ec(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    Peripherals::STK.LOAD_ = param_1 - 1;
    FUN_80010678(0xff,0xf);
    Peripherals::STK.VAL = 0;
    Peripherals::STK.CTRL = 7;
  }
  return !bVar1;
}



undefined4 FUN_8000d440(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  iVar2 = FUN_80013530();
  if (iVar2 != 0) {
    Peripherals::SCB.ICSR = 0x10000000;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  return 0;
}



void FUN_8000d47c(void)

{
  undefined4 extraout_r3;
  byte *pbVar1;
  byte local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  pbVar1 = local_30;
  FUN_8000819a(pbVar1,0x28);
  local_30[0] = 10;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_20 = 1;
  local_1c = 0x10;
  local_18 = 1;
  local_14 = 2;
  local_10 = 0;
  local_c = 0x380000;
  FUN_8000aa4c(pbVar1);
  FUN_8000a6e4(&stack0xffffffbc,2,0x400,extraout_r3,(int)pbVar1,0xf,2,0);
  return;
}



undefined1 FUN_8000d4e4(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)0x0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    pbVar3 = (byte *)isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  uVar2 = FUN_8000a6e0(pbVar3,param_2);
  return uVar2;
}



void FUN_8000d4f4(void)

{
  return;
}



void FUN_8000d4f8(int param_1)

{
  undefined4 local_4;
  
  for (local_4 = param_1 << 2; local_4 != 0; local_4 = local_4 + -1) {
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000d518(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 local_11;
  
  while( true ) {
    while( true ) {
      FUN_8000819a((undefined1 *)0x20000084,0x226);
      uVar1 = FUN_8000cb30((undefined4 *)0x20000084);
      if (8 < uVar1) break;
      FUN_80010ce0(10);
    }
    FUN_80013b58();
    FUN_80013b58();
    for (local_11 = 0; local_11 < uVar1; local_11 = local_11 + 1) {
      FUN_80013b58();
    }
    FUN_80013b58();
    uVar2 = FUN_80010720(0x20000088,uVar1 - 4);
    FUN_80013b58();
    uVar1 = CONCAT11(DAT_20000086,DAT_20000087);
    FUN_80013b58();
    if (uVar2 == uVar1) break;
    FUN_80013b58();
  }
  FUN_80013b58();
                    // WARNING: Subroutine does not return
  FUN_80012e30(_DAT_200013fc,(undefined4 *)0x20000084,-1,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000d66c(void)

{
  int iVar1;
  
  do {
    iVar1 = FUN_800131a4(_DAT_20001400,(undefined4 *)0x200002aa,-1);
    if (iVar1 == 1) {
      FUN_8000cb88(0x200002aa,_DAT_200002b0 + 8);
    }
    FUN_80010ce0(0x14);
  } while( true );
}



void FUN_8000d6bc(void)

{
  do {
    FUN_8000ce14((undefined2 *)&DAT_20001d9e,(undefined2 *)&DAT_20001d9c);
    FUN_80012534(1000);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8000d6e4(void)

{
  bool bVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  undefined1 extraout_r2_02;
  
  do {
    FUN_8000a5d8();
    _DAT_20000310 = _DAT_20000310 + 1;
    if (500 < _DAT_20000310) {
      FUN_80011e94();
      _DAT_20000310 = 0;
    }
    bVar1 = FUN_8000bea4();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000b9f0();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000be38();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000ba5c();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bce8();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bdc8();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bac8();
    if (bVar1 != 0) {
      FUN_80011fe4((uint)bVar1,extraout_r1,extraout_r2);
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bb34();
    if (bVar1 != 0) {
      FUN_80011fe4((uint)bVar1,extraout_r1_00,extraout_r2_00);
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bba0();
    if (bVar1 != 0) {
      FUN_80011fe4((uint)bVar1,extraout_r1_01,extraout_r2_01);
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bc0c();
    if (bVar1 != 0) {
      FUN_80011fe4((uint)bVar1,extraout_r1_02,extraout_r2_02);
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bd58();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    bVar1 = FUN_8000bc78();
    if (bVar1) {
      FUN_80011e94();
      FUN_80012534(3);
    }
    FUN_80012534(10);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void FUN_8000f014(void)

{
  char cVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 in_stack_ffffff90;
  int in_stack_ffffff94;
  undefined1 *puVar2;
  byte local_15;
  char local_14;
  byte local_13;
  byte local_12;
  char local_11;
  byte local_10;
  byte local_f;
  char local_e;
  byte local_d;
  
  do {
    if (DAT_20001391 != 0) {
      FUN_8000a50c(&Peripherals::GPIOA,2,'\0',in_r3,in_stack_ffffff90,in_stack_ffffff94);
      FUN_80010ce0(100);
      FUN_80013b58();
      FUN_80013b58();
      for (local_d = 0; local_d < DAT_20001391; local_d = local_d + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000b6f4((int *)&DAT_20001208,(ushort *)0x2000135f,(ushort)DAT_20001391,0xff);
      FUN_8000819a((undefined1 *)0x2000135f,(uint)DAT_20001391);
      DAT_20001391 = 0;
      local_e = '\x1e';
      do {
        cVar1 = local_e + -1;
        if (local_e == '\0') goto LAB_8000f250;
        FUN_80010ce0(100);
        local_e = cVar1;
      } while ((_DAT_2000229e == 0) || (0x31 < _DAT_2000229e));
      DAT_2000132c = 1;
      DAT_2000135e = DAT_2000229e + 1;
      if (_DAT_2000229e < 0x32) {
        FUN_80008168((undefined4 *)0x2000132d,(undefined4 *)0x2000226c,(uint)_DAT_2000229e);
      }
      else {
        FUN_80013b58();
        FUN_80013b58();
        FUN_80008168((undefined4 *)0x2000132d,(undefined4 *)0x2000226c,0x31);
      }
      FUN_80013b58();
      FUN_80013b58();
      for (local_f = 0; local_f < _DAT_2000229e; local_f = local_f + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000819a((undefined1 *)0x2000226c,(uint)_DAT_2000229e);
      _DAT_2000229e = 0;
LAB_8000f250:
      if (cVar1 == -1) {
        FUN_80013b58();
        FUN_80013b58();
        _DAT_2000229e = 0;
      }
      FUN_80012534(10);
      in_r3 = extraout_r3;
    }
    if (DAT_20001d35 != 0) {
      FUN_8000a50c(&Peripherals::GPIOA,2,'\x01',in_r3,in_stack_ffffff90,in_stack_ffffff94);
      FUN_80010ce0(100);
      FUN_80013b58();
      FUN_80013b58();
      for (local_10 = 0; local_10 < DAT_20001d35; local_10 = local_10 + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000b6f4((int *)&DAT_20001208,(ushort *)0x20001d03,(ushort)DAT_20001d35,0xff);
      FUN_8000819a((undefined1 *)0x20001d03,(uint)DAT_20001d35);
      DAT_20001d35 = 0;
      local_11 = '\x1e';
      do {
        cVar1 = local_11 + -1;
        if (local_11 == '\0') goto LAB_8000f4c4;
        FUN_80010ce0(100);
        local_11 = cVar1;
      } while ((_DAT_2000229e == 0) || (0x31 < _DAT_2000229e));
      DAT_20001cd0 = 2;
      DAT_20001d02 = DAT_2000229e + 1;
      if (_DAT_2000229e < 0x32) {
        FUN_80008168((undefined4 *)0x20001cd1,(undefined4 *)0x2000226c,(uint)_DAT_2000229e);
      }
      else {
        FUN_80013b58();
        FUN_80013b58();
        FUN_80008168((undefined4 *)0x20001cd1,(undefined4 *)0x2000226c,0x31);
      }
      FUN_80013b58();
      FUN_80013b58();
      for (local_12 = 0; local_12 < _DAT_2000229e; local_12 = local_12 + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000819a((undefined1 *)0x2000226c,(uint)_DAT_2000229e);
      _DAT_2000229e = 0;
LAB_8000f4c4:
      if (cVar1 == -1) {
        FUN_80013b58();
        FUN_80013b58();
        _DAT_2000229e = 0;
      }
      FUN_80012534(10);
    }
    if (DAT_2000a5b5 != 0) {
      FUN_80013b58();
      FUN_80013b58();
      for (local_13 = 0; local_13 < DAT_2000a5b5; local_13 = local_13 + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000b6f4((int *)&DAT_20001298,(ushort *)0x2000a583,(ushort)DAT_2000a5b5,0xff);
      FUN_8000819a((undefined1 *)0x2000a583,(uint)DAT_2000a5b5);
      DAT_2000a5b5 = 0;
      local_14 = '<';
      do {
        cVar1 = local_14 + -1;
        if (local_14 == '\0') goto LAB_8000f708;
        FUN_80010ce0(0x32);
        local_14 = cVar1;
      } while ((DAT_200024f9 == 0) || (0x31 < DAT_200024f9));
      DAT_2000a582 = DAT_200024f9;
      if (DAT_200024f9 < 0x32) {
        FUN_80008168((undefined4 *)0x2000a550,(undefined4 *)0x200024c7,(uint)DAT_200024f9);
      }
      else {
        FUN_80013b58();
        FUN_80013b58();
        FUN_80008168((undefined4 *)0x2000a550,(undefined4 *)0x200024c7,0x32);
      }
      FUN_80013b58();
      FUN_80013b58();
      for (local_15 = 0; local_15 < DAT_200024f9; local_15 = local_15 + 1) {
        FUN_80013b58();
      }
      FUN_80013b58();
      FUN_8000819a((undefined1 *)0x200024c7,0x32);
      DAT_200024f9 = 0;
LAB_8000f708:
      if (cVar1 == -1) {
        FUN_80013b58();
        FUN_80013b58();
        DAT_200024f9 = 0;
      }
      FUN_80012534(10);
    }
    if (DAT_2000135e != 0) {
      FUN_8000819a((undefined1 *)0x20001392,100);
      if (0x31 < DAT_2000135e) {
        DAT_2000135e = 0x32;
        FUN_80013b58();
        FUN_80013b58();
      }
      FUN_8000cebc((undefined1 *)0x20001392,0x57,(ushort)DAT_2000135e,(undefined4 *)&DAT_2000132c);
      FUN_8000819a(&DAT_2000132c,(uint)DAT_2000135e);
      DAT_2000135e = 0;
                    // WARNING: Subroutine does not return
      FUN_80012e30(_DAT_20001400,(undefined4 *)0x20001392,-1,0);
    }
    if (DAT_20001d02 != 0) {
      FUN_8000819a((undefined1 *)0x20001d36,100);
      if (0x31 < DAT_20001d02) {
        DAT_20001d02 = 0x32;
        FUN_80013b58();
        FUN_80013b58();
      }
      FUN_8000cebc((undefined1 *)0x20001d36,0x57,(ushort)DAT_20001d02,(undefined4 *)&DAT_20001cd0);
      FUN_8000819a(&DAT_20001cd0,(uint)DAT_20001d02);
      DAT_20001d02 = 0;
                    // WARNING: Subroutine does not return
      FUN_80012e30(_DAT_20001400,(undefined4 *)0x20001d36,-1,0);
    }
    if (DAT_2000a582 != 0) {
      FUN_8000819a((undefined1 *)0x2000a5b6,100);
      if (0x31 < DAT_2000a582) {
        DAT_2000a582 = 0x32;
        FUN_80013b58();
        FUN_80013b58();
      }
      FUN_8000cebc((undefined1 *)0x2000a5b6,0x56,(ushort)DAT_2000a582,(undefined4 *)0x2000a550);
      FUN_8000819a((undefined1 *)0x2000a550,(uint)DAT_2000a582);
      DAT_2000a582 = 0;
                    // WARNING: Subroutine does not return
      FUN_80012e30(_DAT_20001400,(undefined4 *)0x2000a5b6,-1,0);
    }
    if (DAT_2000239a != 0) {
      FUN_8000819a((undefined1 *)0x20002463,100);
      if (99 < DAT_2000239a) {
        DAT_2000239a = 100;
        FUN_80013b58();
        FUN_80013b58();
      }
      puVar2 = (undefined1 *)0x200022d2;
      FUN_8000cebc((undefined1 *)0x20002463,0x76,(ushort)DAT_2000239a,(undefined4 *)0x200022d2);
      FUN_8000819a(puVar2,(uint)DAT_2000239a);
      DAT_2000239a = 0;
                    // WARNING: Subroutine does not return
      FUN_80012e30(_DAT_20001400,(undefined4 *)0x20002463,-1,0);
    }
    FUN_80012534(10);
    in_r3 = extraout_r3_00;
  } while( true );
}



void FUN_8000fa18(void)

{
  FUN_8000b1b8((int *)&DAT_20001298);
  FUN_80010270((undefined4 *)&DAT_20001298);
  return;
}



void FUN_8000fa34(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined2 *)(iVar1 + 0x2e) = 0;
  *(undefined2 *)(iVar1 + 0x26) = 0;
  FUN_8000b1b0();
  return;
}



void FUN_8000fa54(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if ((*(char *)((int)piVar1 + 0x41) == '!') && ((*(uint *)(*piVar1 + 0x14) & 0xff) >> 7 != 0)) {
    *(undefined2 *)((int)piVar1 + 0x26) = 0;
    FUN_8000fd48(piVar1);
  }
  if ((*(char *)((int)piVar1 + 0x42) == '\"') && (*(int *)(*piVar1 + 0x14) << 0x19 < 0)) {
    *(undefined2 *)((int)piVar1 + 0x2e) = 0;
    FUN_8000fc8c(piVar1);
  }
  piVar1[0x11] = piVar1[0x11] | 0x10;
  FUN_8000b1b0();
  return;
}



void FUN_8000fad0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[9];
  if (-1 < *(int *)*param_1 * 0x4000000) {
    *(undefined2 *)((int)piVar2 + 0x2e) = 0;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0xc));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0xc));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) & 0xfffffeff;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0x14));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0x14) = *(uint *)(*piVar2 + 0x14) & 0xfffffffe;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0x14));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0x14) = *(uint *)(*piVar2 + 0x14) & 0xffffffbf;
    *(undefined1 *)((int)piVar2 + 0x42) = 0x20;
    if (piVar2[0xc] == 1) {
      do {
        ExclusiveAccess((uint *)(*piVar2 + 0xc));
        bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0xc));
      } while (!bVar1);
      *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) & 0xffffffef;
    }
  }
  piVar2[0xd] = 0;
  if (piVar2[0xc] == 1) {
    FUN_8000b0d8();
  }
  else {
    FUN_8000b6e4();
  }
  return;
}



void FUN_8000fbc4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x34) = 1;
  if (*(int *)(iVar1 + 0x30) == 1) {
    FUN_8000b0d8();
  }
  else {
    FUN_8000b6ec();
  }
  return;
}



void FUN_8000fbf8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[9];
  if (*(int *)*param_1 * 0x4000000 < 0) {
    FUN_8000b8f8();
  }
  else {
    *(undefined2 *)((int)piVar2 + 0x26) = 0;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0x14));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0x14));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0x14) = *(uint *)(*piVar2 + 0x14) & 0xffffff7f;
    do {
      ExclusiveAccess((uint *)(*piVar2 + 0xc));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*piVar2 + 0xc));
    } while (!bVar1);
    *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) | 0x40;
  }
  return;
}



void FUN_8000fc74(void)

{
  FUN_8000b900();
  return;
}



void FUN_8000fc8c(int *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess((uint *)(*param_1 + 0xc));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
  } while (!bVar1);
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  if (param_1[0xc] == 1) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0xc));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
    } while (!bVar1);
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
  }
  *(undefined1 *)((int)param_1 + 0x42) = 0x20;
  param_1[0xc] = 0;
  return;
}



undefined4 FUN_8000fd20(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  FUN_8000b8f8();
  return 0;
}



void FUN_8000fd48(int *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess((uint *)(*param_1 + 0xc));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
  } while (!bVar1);
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff3f;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  return;
}



undefined1 FUN_8000fd80(int *param_1)

{
  bool bVar1;
  short sVar2;
  undefined1 local_9;
  
  if (*(char *)((int)param_1 + 0x42) == '\"') {
    if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
      *(ushort *)param_1[10] = (ushort)*(undefined4 *)(*param_1 + 4) & 0x1ff;
      param_1[10] = param_1[10] + 2;
    }
    else {
      if ((param_1[2] == 0x1000) || ((param_1[2] == 0 && (param_1[4] == 0)))) {
        *(byte *)param_1[10] = (byte)*(undefined4 *)(*param_1 + 4);
      }
      else {
        *(byte *)param_1[10] = (byte)*(undefined4 *)(*param_1 + 4) & 0x7f;
      }
      param_1[10] = param_1[10] + 1;
    }
    sVar2 = *(short *)((int)param_1 + 0x2e) + -1;
    *(short *)((int)param_1 + 0x2e) = sVar2;
    if (sVar2 == 0) {
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffdf;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
      *(undefined1 *)((int)param_1 + 0x42) = 0x20;
      param_1[0xd] = 0;
      if (param_1[0xc] == 1) {
        param_1[0xc] = 0;
        do {
          ExclusiveAccess((uint *)(*param_1 + 0xc));
          bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
        } while (!bVar1);
        *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffef;
        FUN_8000b0d8();
      }
      else {
        FUN_8000b6e4();
      }
      local_9 = 0;
    }
    else {
      local_9 = 0;
    }
  }
  else {
    local_9 = 2;
  }
  return local_9;
}



void FUN_8000feec(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_14;
  
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(*param_1 + 0xc) =
       *(uint *)(*param_1 + 0xc) & 0xffffe9f3 | param_1[2] | param_1[4] | param_1[5];
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  if ((USART1 *)*param_1 == &Peripherals::USART1) {
    local_14 = FUN_8000a96c();
  }
  else {
    local_14 = FUN_8000a948();
  }
  uVar2 = (local_14 * 0x19) / (uint)(param_1[1] << 2);
  uVar1 = (uVar2 % 100) * 0x10 + 0x32;
  *(uint *)(*param_1 + 8) =
       (uVar1 / 100 & 0xf0) + (uVar2 / 100) * 0x10 +
       ((uint)((int)((ulonglong)uVar1 * 0x51eb851f >> 0x20) << 0x17) >> 0x1c);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 FUN_8000ffa8(int *param_1,int param_2,ushort param_3)

{
  bool bVar1;
  
  param_1[10] = param_2;
  *(ushort *)(param_1 + 0xb) = param_3;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0x22;
  *(undefined4 *)(param_1[0xf] + 0x28) = 0x800fad1;
  *(undefined4 *)(param_1[0xf] + 0x2c) = 0x800fbc5;
  *(undefined4 *)(param_1[0xf] + 0x30) = 0x800fa55;
  *(undefined4 *)(param_1[0xf] + 0x34) = 0;
  FUN_80009e10((int *)param_1[0xf],*param_1 + 4,param_2,(uint)param_3);
  if (param_1[4] != 0) {
    do {
      ExclusiveAccess((uint *)(*param_1 + 0xc));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
    } while (!bVar1);
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x100;
  }
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x40;
  return 0;
}



undefined1 FUN_800100b4(int *param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined1 local_1;
  
  if (*(char *)((int)param_1 + 0x41) == '!') {
    if ((param_1[2] == 0x1000) && (param_1[4] == 0)) {
      *(uint *)(*param_1 + 4) = *(ushort *)param_1[8] & 0x1ff;
      param_1[8] = param_1[8] + 2;
    }
    else {
      pbVar2 = (byte *)param_1[8];
      param_1[8] = (int)(pbVar2 + 1);
      *(uint *)(*param_1 + 4) = (uint)*pbVar2;
    }
    sVar1 = *(short *)((int)param_1 + 0x26) + -1;
    *(short *)((int)param_1 + 0x26) = sVar1;
    if (sVar1 == 0) {
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff7f;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x40;
    }
    local_1 = 0;
  }
  else {
    local_1 = 2;
  }
  return local_1;
}



undefined1 FUN_80010148(int *param_1,uint param_2,char param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  
  do {
    if (((*(uint *)*param_1 & param_2) == param_2) != (bool)param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar2 = FUN_8000a53c(param_5), (uint)(iVar2 - param_4) <= param_5))));
  do {
    ExclusiveAccess((uint *)(*param_1 + 0xc));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0xc));
  } while (!bVar1);
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffe5f;
  do {
    ExclusiveAccess((uint *)(*param_1 + 0x14));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 0x14));
  } while (!bVar1);
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined1 *)((int)param_1 + 0x41) = 0x20;
  *(undefined1 *)((int)param_1 + 0x42) = 0x20;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return 3;
}



void FUN_8001021c(void)

{
  FUN_8000b1b8((int *)&DAT_200011c0);
  FUN_80010270((undefined4 *)&DAT_200011c0);
  return;
}



void FUN_80010238(void)

{
  FUN_8000b1b8((int *)&DAT_20001208);
  FUN_80010270((undefined4 *)&DAT_20001208);
  return;
}



void FUN_80010254(void)

{
  FUN_8000b1b8((int *)&DAT_20001250);
  FUN_80010270((undefined4 *)&DAT_20001250);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 * FUN_80010270(undefined4 *param_1)

{
  ushort uVar1;
  byte bVar2;
  UART4 *pUVar3;
  undefined1 local_2a;
  undefined1 local_22;
  
  if (((USART1 *)*param_1 == &Peripherals::USART1) && ((*_DAT_200011c0 & 0x10) != 0)) {
    FUN_8000b0e4((int *)&DAT_200011c0);
    uVar1 = 0x226 - (short)*(undefined4 *)(_DAT_20000e14 + 4);
    FUN_80008168((undefined4 *)0x20001e1e,(undefined4 *)0x20002046,(uint)uVar1);
    _DAT_20002044 = uVar1;
    FUN_8000819a((undefined1 *)0x20002046,(uint)uVar1);
    FUN_8000b68c((int *)&DAT_200011c0,0x20002046,0x226);
  }
  if (((USART2 *)*param_1 == &Peripherals::USART2) && ((*_DAT_20001208 & 0x10) != 0)) {
    FUN_8000b0e4((int *)&DAT_20001208);
    uVar1 = 0x32 - (short)*(undefined4 *)(_DAT_20000e9c + 4);
    FUN_80008168((undefined4 *)0x2000226c,(undefined4 *)0x200022a0,(uint)uVar1);
    _DAT_2000229e = uVar1;
    FUN_8000819a((undefined1 *)0x200022a0,(uint)uVar1);
    FUN_8000b68c((int *)&DAT_20001208,0x200022a0,0x32);
  }
  if (((USART3 *)*param_1 == &Peripherals::USART3) && ((*_DAT_20001250 & 0x10) != 0)) {
    FUN_8000b0e4((int *)&DAT_20001250);
    uVar1 = 200 - (short)*(undefined4 *)(_DAT_20000f24 + 4);
    FUN_80008168((undefined4 *)0x200022d2,(undefined4 *)0x2000239b,(uint)uVar1);
    local_22 = (undefined1)uVar1;
    DAT_2000239a = local_22;
    FUN_8000819a((undefined1 *)0x2000239b,(uint)uVar1);
    FUN_8000b68c((int *)&DAT_20001250,0x2000239b,200);
  }
  pUVar3 = (UART4 *)*param_1;
  if ((pUVar3 == &Peripherals::UART4) && (pUVar3 = (UART4 *)0x0, (*_DAT_20001298 & 0x10) != 0)) {
    FUN_8000b0e4((int *)&DAT_20001298);
    uVar1 = 0x32 - (short)*(undefined4 *)(_DAT_20000d8c + 4);
    FUN_80008168((undefined4 *)0x200024c7,(undefined4 *)0x200024fa,(uint)uVar1);
    local_2a = (undefined1)uVar1;
    DAT_200024f9 = local_2a;
    FUN_8000819a((undefined1 *)0x200024fa,(uint)uVar1);
    bVar2 = FUN_8000b68c((int *)&DAT_20001298,0x200024fa,0x32);
    pUVar3 = (UART4 *)(uint)bVar2;
  }
  return (undefined1 *)pUVar3;
}



void FUN_8001054c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_r3;
  undefined4 in_stack_fffffff0;
  undefined3 in_stack_fffffff4;
  uint uVar2;
  int iVar3;
  
  uVar2 = CONCAT13(param_1,in_stack_fffffff4) & 0xff00ffff;
  while ((byte)(uVar2 >> 0x10) < 8) {
    cVar1 = -(char)((int)uVar2 >> 0x1f);
    iVar3 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar1,(char)uVar2));
    if (cVar1 == '\0') {
      FUN_8000a50c(&Peripherals::GPIOC,0x80,'\x01',param_4,in_stack_fffffff0,iVar3);
    }
    else {
      FUN_8000a50c(&Peripherals::GPIOC,0x80,'\0',param_4,in_stack_fffffff0,iVar3);
    }
    FUN_8000d184();
    param_4 = extraout_r3;
    uVar2 = CONCAT13((char)((uint)iVar3 >> 0x18) << 1,
                     CONCAT12((char)((uint)iVar3 >> 0x10) + '\x01',(short)iVar3));
  }
  return;
}



void FUN_800105bc(void)

{
  uint uVar1;
  undefined4 extraout_r3;
  GPIOC *pGVar2;
  int iVar3;
  uint local_18 [4];
  
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x10;
  uVar1 = Peripherals::RCC.APB2ENR;
  uVar1 = Peripherals::RCC.APB2ENR;
  Peripherals::RCC.APB2ENR = uVar1 | 0x20;
  uVar1 = Peripherals::RCC.APB2ENR;
  iVar3 = 0x180;
  local_18[0] = 0x180;
  local_18[1] = 1;
  local_18[2] = 1;
  local_18[3] = 3;
  pGVar2 = &Peripherals::GPIOC;
  FUN_8000a184(&Peripherals::GPIOC,local_18);
  FUN_8000a50c(pGVar2,(ushort)iVar3,'\0',extraout_r3,pGVar2,iVar3);
  return;
}



void FUN_80010634(void)

{
  return;
}



void FUN_80010664(void)

{
  return;
}



undefined4 FUN_80010674(void)

{
  return 2;
}



void FUN_80010678(byte param_1,int param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((int)&Peripherals::SCB.CCR + (param_1 & 0xf)) = (char)(param_2 << 4);
  }
  else {
    *(char *)((int)&Peripherals::NVIC.IPR0 + (int)(char)param_1) = (char)(param_2 << 4);
  }
  return;
}



void FUN_800106b8(void)

{
  return;
}



ushort FUN_80010720(int param_1,ushort param_2)

{
  undefined1 local_b;
  undefined2 local_a;
  undefined2 local_8;
  
  local_8 = 0xffff;
  for (local_a = 0; local_a < param_2; local_a = local_a + 1) {
    local_8 = local_8 ^ *(byte *)(param_1 + (uint)local_a);
    for (local_b = 0; local_b < 8; local_b = local_b + 1) {
      if ((local_8 & 1) == 0) {
        local_8 = local_8 >> 1;
      }
      else {
        local_8 = local_8 >> 1 ^ 0xa001;
      }
    }
  }
  return local_8;
}



void FUN_800107b4(void)

{
  return;
}



undefined4 FUN_80010850(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_8000b6f4((int *)&DAT_200012e0,(ushort *)&local_c,1,0xffffffff);
  return local_c;
}



// WARNING: Removing unreachable block (ram,0x80010a4a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80010874(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined1 *puStack00000004;
  int iStack00000008;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined4 uStack00000018;
  int iStack0000001c;
  undefined2 uStack00000020;
  int iStack00000024;
  int iStack00000028;
  undefined4 uStack0000002c;
  ushort uStack00000032;
  
  uStack0000002c = 0xffffffff;
  iStack00000028 = 0x14;
  iStack00000024 = (uint)param_1 * 0x200 + -0x200;
  uStack00000032 = param_1;
  FUN_80013b54(0x8014ef6,(uint)param_1,iStack00000024,param_4);
  uStack00000018 = 0x60824;
  _uStack00000014 = 0x55aa;
  puStack00000004 = (undefined1 *)&stack0x00000014;
  iStack0000001c = iStack00000024;
  uStack00000020 = 2;
  uVar1 = FUN_800107b4();
  uStack00000012._1_1_ = (undefined1)((ushort)uVar1 >> 8);
  _uStack00000014 = CONCAT13(uStack00000012._1_1_,CONCAT12((char)uVar1,uStack00000014));
  uStack00000012 = uVar1;
  FUN_8000cb84();
  uVar2 = extraout_r1;
  uVar3 = extraout_r2;
  uVar4 = extraout_r3;
  while( true ) {
    iStack00000028 = iStack00000028 + -1;
    if (iStack00000028 == 0) {
      FUN_80013b54(0x8014e6c,uVar2,uVar3,uVar4);
      return uStack0000002c;
    }
    _DAT_20000d44 = FUN_8000cb2c();
    if (0x20d < _DAT_20000d44) break;
    FUN_80012530();
    uVar2 = extraout_r1_02;
    uVar3 = extraout_r2_02;
    uVar4 = extraout_r3_04;
  }
  FUN_80013b54(0x8014762,0x8015032,0x53,extraout_r3_00);
  FUN_80013b54(0x8015015,extraout_r1_00,extraout_r2_00,extraout_r3_01);
  uStack00000010 = _DAT_200014d2;
  uStack0000000e = FUN_800107b4();
  if (uStack00000010 != uStack0000000e) {
    FUN_80013b54(0x8014f69,(uint)uStack00000010,(uint)uStack0000000e,extraout_r3_02);
    return 0xffffffff;
  }
  iStack00000008 = _DAT_200014d8;
  if (_DAT_200014d8 != iStack00000024) {
    FUN_80013b54(0x8014f2a,iStack00000024,_DAT_200014d8,extraout_r3_02);
    return 0xffffffff;
  }
  FUN_80013b54(0x8014762,0x8015032,0x61,extraout_r3_02);
  FUN_80013b54(0x8015006,extraout_r1_01,extraout_r2_01,extraout_r3_03);
  FUN_80008164(0x20000fac,(undefined4 *)0x200014de,0x200);
  return 0;
}



undefined1 FUN_80010a58(undefined1 param_1)

{
  int iVar1;
  undefined4 uStack_10;
  undefined1 uStack_a;
  
  FUN_80011dd0();
  FUN_80011d58();
  uStack_a = 0;
  FUN_8000d4f4();
  uStack_10 = 10;
  do {
    if (uStack_10 < 1) {
LAB_80010ab2:
      FUN_80011d80();
      FUN_80011e58();
      FUN_8000d4f4();
      return uStack_a;
    }
    iVar1 = FUN_8000d334();
    if (iVar1 == 0) {
      uStack_a = 1;
      goto LAB_80010ab2;
    }
    uStack_10 = uStack_10 + -1;
  } while( true );
}



undefined1 FUN_80010a5c(undefined1 param_1)

{
  int iVar1;
  int iStack00000008;
  undefined1 uStack0000000e;
  undefined1 uStack0000000f;
  
  uStack0000000f = param_1;
  FUN_80011dd0();
  FUN_80011d58();
  uStack0000000e = 0;
  FUN_8000d4f4();
  iStack00000008 = 10;
  do {
    if (iStack00000008 < 1) {
LAB_80010ab2:
      FUN_80011d80();
      FUN_80011e58();
      FUN_8000d4f4();
      return uStack0000000e;
    }
    iVar1 = FUN_8000d334();
    if (iVar1 == 0) {
      uStack0000000e = 1;
      goto LAB_80010ab2;
    }
    iStack00000008 = iStack00000008 + -1;
  } while( true );
}



void FUN_80010ad0(undefined1 param_1)

{
  FUN_80011dd0();
  FUN_80010afc(param_1);
  FUN_80011e58();
  FUN_8000d4f4();
  return;
}



void FUN_80010ad4(undefined1 param_1)

{
  undefined1 uStack00000007;
  
  uStack00000007 = param_1;
  FUN_80011dd0();
  FUN_80010afc(uStack00000007);
  FUN_80011e58();
  FUN_8000d4f4();
  return;
}



void FUN_80010afc(undefined1 param_1)

{
  FUN_80011d58();
  FUN_8000d4f4();
  FUN_80011d80();
  return;
}



void FUN_80010b00(undefined1 param_1)

{
  undefined1 uStack00000007;
  
  uStack00000007 = param_1;
  FUN_80011d58();
  FUN_8000d4f4();
  FUN_80011d80();
  return;
}



void FUN_80010b20(undefined1 param_1)

{
  FUN_80011da8();
  FUN_80011d58();
  return;
}



void FUN_80010b24(undefined1 param_1)

{
  undefined1 uStack00000007;
  
  uStack00000007 = param_1;
  FUN_80011da8();
  FUN_80011d58();
  return;
}



void FUN_80010b3c(undefined1 param_1)

{
  undefined4 uStack_10;
  
  FUN_80011d80();
  for (uStack_10 = 7; -1 < uStack_10; uStack_10 = uStack_10 + -1) {
    FUN_80011e2c();
    FUN_8000d4f4();
    FUN_80010afc(param_1);
  }
  return;
}



void FUN_80010b40(undefined1 param_1,undefined1 param_2)

{
  int iStack00000000;
  undefined1 uStack00000006;
  undefined1 uStack00000007;
  
  uStack00000006 = param_2;
  uStack00000007 = param_1;
  FUN_80011d80();
  for (iStack00000000 = 7; -1 < iStack00000000; iStack00000000 = iStack00000000 + -1) {
    FUN_80011e2c();
    FUN_8000d4f4();
    FUN_80010afc(uStack00000007);
  }
  return;
}



void FUN_80010b90(void)

{
  FUN_80011e58();
  FUN_80011e04();
  FUN_8000d4f4();
  FUN_80011d58();
  FUN_8000d4f4();
  FUN_80011e04();
  FUN_8000d4f4();
  FUN_80011d80();
  FUN_80011e58();
  FUN_8000d4f4();
  return;
}



void FUN_80010b94(undefined1 param_1)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined1 uStack0000000f;
  
  uStack0000000f = param_1;
  FUN_80011e58();
  FUN_80011e04();
  uStack00000008 = 200;
  FUN_8000d4f4();
  FUN_80011d58();
  uStack00000004 = 400;
  FUN_8000d4f4();
  FUN_80011e04();
  FUN_8000d4f4();
  FUN_80011d80();
  FUN_80011e58();
  FUN_8000d4f4();
  return;
}



void FUN_80010bec(char param_1,char param_2,byte param_3)

{
  uint uVar1;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  FUN_80011d84(param_1,(uint)(byte)param_2,(uint)param_3,in_r3);
  for (uStack_10 = 7; -1 < (int)uStack_10; uStack_10 = uStack_10 - 1) {
    uVar1 = 1 << (uStack_10 & 0xff);
    FUN_80011e30(param_1,(byte)(param_3 | param_2 << 1) & uVar1,uVar1,uStack_10);
    FUN_8000d4f8(200);
    FUN_80010b00(param_1);
  }
  return;
}



void FUN_80010bf0(char param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uStack00000000;
  byte bStack00000005;
  byte bStack00000006;
  char cStack00000007;
  
  bStack00000005 = (byte)param_3;
  bStack00000006 = bStack00000005 | param_2 << 1;
  cStack00000007 = param_1;
  FUN_80011d84(param_1,(uint)param_2,param_3,param_4);
  for (uStack00000000 = 7; -1 < (int)uStack00000000; uStack00000000 = uStack00000000 - 1) {
    uVar1 = 1 << (uStack00000000 & 0xff);
    FUN_80011e30(cStack00000007,bStack00000006 & uVar1,uVar1,uStack00000000);
    FUN_8000d4f8(200);
    FUN_80010b00(cStack00000007);
  }
  return;
}



void FUN_80010c58(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  
  FUN_80011dac(param_1,param_2,param_3,param_4);
  FUN_80011d5c(param_1,extraout_r1,extraout_r2,extraout_r3);
  FUN_8000d4f8(200);
  FUN_80011e08(param_1,extraout_r1_00,extraout_r2_00,extraout_r3_00);
  FUN_8000d4f8(200);
  FUN_80011d84(param_1,extraout_r1_01,extraout_r2_01,extraout_r3_01);
  FUN_8000d4f8(400);
  return;
}



void FUN_80010c9c(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  
  FUN_80011e08(param_1,param_2,param_3,param_4);
  FUN_80011d5c(param_1,extraout_r1,extraout_r2,extraout_r3);
  FUN_8000d4f8(200);
  FUN_80011dac(param_1,extraout_r1_00,extraout_r2_00,extraout_r3_00);
  FUN_8000d4f8(200);
  return;
}



undefined4 FUN_80010ce0(int param_1)

{
  undefined4 local_14;
  
  local_14 = param_1;
  if (param_1 == 0) {
    local_14 = 1;
  }
  FUN_80012534(local_14);
  return 0;
}



void FUN_80010d08(int param_1)

{
  undefined4 local_4;
  
  for (local_4 = param_1 << 1; local_4 != 0; local_4 = local_4 + -1) {
  }
  return;
}



void FUN_80010d24(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80010d28(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = _DAT_2000a710;
  iVar2 = FUN_800120f0(_DAT_2000142c + 4);
  if (iVar2 == 0) {
    _DAT_2000a54c = _DAT_2000a54c & ~(1 << (*(uint *)(_DAT_2000142c + 0x2c) & 0xff));
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    FUN_80012214((int *)&DAT_2000a6e8,_DAT_2000142c + 4);
  }
  else {
    uVar3 = uVar1 + param_1;
    *(uint *)(_DAT_2000142c + 4) = uVar3;
    if (uVar3 < uVar1) {
      FUN_800121a8(_DAT_2000143c,(uint *)(_DAT_2000142c + 4));
    }
    else {
      FUN_800121a8(_DAT_20001434,(uint *)(_DAT_2000142c + 4));
      if (uVar3 < _DAT_2000a680) {
        _DAT_2000a680 = uVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80010e1c(int param_1)

{
  FUN_80012250();
  _DAT_2000a538 = _DAT_2000a538 + 1;
  if (_DAT_2000142c == 0) {
    _DAT_2000142c = param_1;
    if (_DAT_2000a538 == 1) {
      FUN_800113d0();
    }
  }
  else if ((_DAT_2000a6dc == 0) && (*(uint *)(_DAT_2000142c + 0x2c) <= *(uint *)(param_1 + 0x2c))) {
    _DAT_2000142c = param_1;
  }
  _DAT_2000a548 = _DAT_2000a548 + 1;
  *(int *)(param_1 + 0x44) = _DAT_2000a548;
  _DAT_2000a54c = _DAT_2000a54c | 1 << (*(uint *)(param_1 + 0x2c) & 0xff);
  FUN_80012214((int *)(&DAT_20001444 + *(int *)(param_1 + 0x2c) * 0x14),param_1 + 4);
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80010f34(void)

{
  FUN_80012250();
  if (_DAT_2000a714 == 0) {
    FUN_80012168((undefined4 *)0x2000a61c);
    FUN_80012168((undefined4 *)0x2000a630);
    _DAT_20001430 = 0x2000a61c;
    _DAT_20001440 = 0x2000a630;
    _DAT_2000a714 = FUN_80012cfc(10,0xc,0);
    if (_DAT_2000a714 != 0) {
      FUN_8001247c(_DAT_2000a714,0x801509c);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



void FUN_80010fbc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80010fc0(void)

{
  if (_DAT_2000a53c != 0) {
    FUN_80012250();
    FUN_800120f0(*(int *)(_DAT_2000a708 + 0xc) + 4);
    _DAT_2000a538 = _DAT_2000a538 + -1;
    _DAT_2000a53c = _DAT_2000a53c + -1;
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  return;
}



void FUN_8001101c(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[0x10] != 0) {
    param_1[3] = param_1[3] + param_1[0x10];
    if ((uint)param_1[1] <= (uint)param_1[3]) {
      param_1[3] = *param_1;
    }
    FUN_80008168(param_2,(undefined4 *)param_1[3],param_1[0x10]);
  }
  return;
}



undefined4 FUN_80011060(uint *param_1,undefined4 *param_2,int param_3)

{
  uint local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_1c = param_1[0xe];
  if (param_1[0x10] == 0) {
    local_1c = *param_1;
    if (local_1c == 0) {
      local_18 = FUN_800136e8(param_1[1]);
      local_1c = 0;
      param_1[1] = 0;
    }
  }
  else {
    if (param_3 == 0) {
      FUN_80008168((undefined4 *)param_1[2],param_2,param_1[0x10]);
      if (*(uint *)(param_1[2] + param_1[0x10] + 4) <= *(uint *)(param_1[2] + param_1[0x10] + 8)) {
        param_1[2] = *param_1;
      }
    }
    else {
      FUN_80008164(*(undefined4 *)(param_3 + 0xc),param_2,*(uint *)(param_3 + 0x40));
      param_1[3] = param_1[3] - param_1[0x10];
      if (param_1[3] < *param_1) {
        param_1[3] = param_1[1] - param_1[0x10];
      }
      if ((param_3 == 2) && (local_1c != 0)) {
        local_1c = local_1c - 1;
      }
    }
    local_1c = local_1c + 1;
  }
  param_1[0xe] = local_1c;
  return local_18;
}



void FUN_80011128(void)

{
  FUN_800122f0();
  FUN_800122f0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80011144(void)

{
  undefined4 uStack00000000;
  uint *in_stack_00000004;
  
  *in_stack_00000004 = (uint)(*_DAT_20001430 == 0);
  if (*in_stack_00000004 == 0) {
    uStack00000000 = *(undefined4 *)_DAT_20001430[3];
  }
  else {
    uStack00000000 = 0;
  }
  return uStack00000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011184(int param_1)

{
  _DAT_2000a6e0 = &DAT_20002530;
  _DAT_2000a6e4 = 0;
  _DAT_20002534 = (undefined4 *)(param_1 + 0x20002524U & 0xfffffff8);
  _DAT_20001438 = _DAT_20002534;
  _DAT_20002534[1] = 0;
  *_DAT_20001438 = 0;
  _DAT_20002534 = _DAT_20002534 + -0x800094c;
  _DAT_20002530 = _DAT_20001438;
  _DAT_2000a67c = _DAT_20002534;
  _DAT_2000a674 = _DAT_20002534;
  _DAT_2000a644 = 0x80000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8001123c(void)

{
  do {
    do {
      FUN_80010fbc();
    } while (_DAT_20001444 < 2);
    Peripherals::SCB.ICSR = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  } while( true );
}



void FUN_80011274(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  if (param_2 == 0) {
    *param_5 = param_5;
  }
  else {
    *param_5 = param_3;
  }
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  FUN_80012d70();
  *(undefined1 *)(param_5 + 0x13) = param_4;
  return;
}



void FUN_80011278(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uStack00000003;
  undefined4 uStack00000004;
  int iStack00000008;
  undefined4 uStack0000000c;
  undefined4 *in_stack_00000018;
  
  if (param_2 == 0) {
    *in_stack_00000018 = in_stack_00000018;
  }
  else {
    *in_stack_00000018 = param_3;
  }
  in_stack_00000018[0xf] = param_1;
  in_stack_00000018[0x10] = param_2;
  uStack00000003 = param_4;
  uStack00000004 = param_3;
  iStack00000008 = param_2;
  uStack0000000c = param_1;
  FUN_80012d70();
  *(undefined1 *)(in_stack_00000018 + 0x13) = uStack00000003;
  return;
}



// WARNING: Removing unreachable block (ram,0x80011304)
// WARNING: Removing unreachable block (ram,0x8001130a)
// WARNING: Removing unreachable block (ram,0x8001130e)
// WARNING: Removing unreachable block (ram,0x8001131a)

void FUN_800112bc(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  uint uStack_24;
  
  FUN_80008188((undefined1 *)param_7[0xc],(undefined1 *)(param_3 << 2),0xa5);
  for (uStack_24 = 0;
      (uStack_24 < 0x10 &&
      (*(undefined1 *)((int)param_7 + uStack_24 + 0x34) = *(undefined1 *)(param_2 + uStack_24),
      *(char *)(param_2 + uStack_24) != '\0')); uStack_24 = uStack_24 + 1) {
  }
  *(undefined1 *)((int)param_7 + 0x43) = 0;
  if (6 < param_5) {
    param_5 = 6;
  }
  param_7[0xb] = param_5;
  param_7[0x13] = param_5;
  param_7[0x14] = 0;
  FUN_80012194();
  FUN_80012194();
  param_7[4] = param_7;
  param_7[6] = 7 - param_5;
  param_7[9] = param_7;
  param_7[0x15] = 0;
  *(undefined1 *)(param_7 + 0x16) = 0;
  uVar1 = FUN_80011d08();
  *param_7 = uVar1;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_7;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80011304)
// WARNING: Removing unreachable block (ram,0x8001130a)
// WARNING: Removing unreachable block (ram,0x8001130e)
// WARNING: Removing unreachable block (ram,0x8001131a)

void FUN_800112c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  undefined4 uStack0000000c;
  int iStack00000010;
  int iStack00000014;
  undefined4 uStack00000018;
  uint in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  uStack0000000c = param_4;
  iStack00000010 = param_3;
  iStack00000014 = param_2;
  uStack00000018 = param_1;
  FUN_80008188((undefined1 *)in_stack_00000030[0xc],(undefined1 *)(param_3 << 2),0xa5);
  uStack00000008 = (in_stack_00000030[0xc] + iStack00000010 * 4) - 4U & 0xfffffff8;
  for (uStack00000004 = 0;
      (uStack00000004 < 0x10 &&
      (*(undefined1 *)((int)in_stack_00000030 + uStack00000004 + 0x34) =
            *(undefined1 *)(iStack00000014 + uStack00000004),
      *(char *)(iStack00000014 + uStack00000004) != '\0')); uStack00000004 = uStack00000004 + 1) {
  }
  *(undefined1 *)((int)in_stack_00000030 + 0x43) = 0;
  if (6 < in_stack_00000028) {
    in_stack_00000028 = 6;
  }
  in_stack_00000030[0xb] = in_stack_00000028;
  in_stack_00000030[0x13] = in_stack_00000028;
  uStack00000000 = 0;
  in_stack_00000030[0x14] = 0;
  FUN_80012194();
  FUN_80012194();
  in_stack_00000030[4] = in_stack_00000030;
  in_stack_00000030[6] = 7 - in_stack_00000028;
  in_stack_00000030[9] = in_stack_00000030;
  in_stack_00000030[0x15] = uStack00000000;
  *(char *)(in_stack_00000030 + 0x16) = (char)uStack00000000;
  uVar1 = FUN_80011d08();
  *in_stack_00000030 = uVar1;
  if (in_stack_0000002c != (undefined4 *)0x0) {
    *in_stack_0000002c = in_stack_00000030;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800113cc(void)

{
  uint uStack_c;
  
  for (uStack_c = 0; uStack_c < 7; uStack_c = uStack_c + 1) {
    FUN_80012164();
  }
  func_0x8065c3d4();
  FUN_80012168((undefined4 *)0x2000a64c);
  FUN_80012168((undefined4 *)0x2000a660);
  FUN_80012168((undefined4 *)&DAT_2000a688);
  FUN_80012168((undefined4 *)0x2000a6fc);
  FUN_80012168((undefined4 *)&DAT_2000a6e8);
  _DAT_20001434 = 0x2000a64c;
  _DAT_2000143c = 0x2000a660;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800113d0(void)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  uint uStack0000000c;
  
  for (uStack0000000c = 0; uStack0000000c < 7; uStack0000000c = uStack0000000c + 1) {
    FUN_80012164();
  }
  func_0x8065c3d4();
  uStack00000004 = 0x2000a64c;
  FUN_80012168((undefined4 *)0x2000a64c);
  uStack00000008 = 0x2000a660;
  FUN_80012168((undefined4 *)0x2000a660);
  FUN_80012168((undefined4 *)&DAT_2000a688);
  FUN_80012168((undefined4 *)0x2000a6fc);
  FUN_80012168((undefined4 *)&DAT_2000a6e8);
  _DAT_20001434 = uStack00000004;
  _DAT_2000143c = uStack00000008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011460(int *param_1)

{
  int *local_8;
  int *local_4;
  
  for (local_8 = (int *)&DAT_2000a6e0; (int *)*local_8 < param_1; local_8 = (int *)*local_8) {
  }
  local_4 = param_1;
  if ((int *)((int)local_8 + local_8[1]) == param_1) {
    local_8[1] = local_8[1] + param_1[1];
    local_4 = local_8;
  }
  if ((undefined1 *)((int)local_4 + local_4[1]) == (undefined1 *)*local_8) {
    if (*local_8 == _DAT_20001438) {
      *local_4 = _DAT_20001438;
    }
    else {
      local_4[1] = local_4[1] + *(int *)(*local_8 + 4);
      *local_4 = *(int *)*local_8;
    }
  }
  else {
    *local_4 = *local_8;
  }
  if (local_8 != local_4) {
    *local_8 = (int)local_4;
  }
  return;
}



void FUN_80011524(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_80011528(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 local_1c;
  
  *(uint *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_1;
  if (param_3 < param_2) {
    if (param_2 < param_4) {
      FUN_800121a4();
    }
    local_1c = (uint)(param_2 >= param_4);
  }
  else if (param_3 - param_4 < *(uint *)(param_1 + 0x18)) {
    local_1c = FUN_800121a8(_DAT_20001440,(uint *)(param_1 + 4));
  }
  else {
    local_1c = 1;
  }
  return local_1c;
}



bool FUN_800115ac(int param_1)

{
  int iVar1;
  
  FUN_8001224c();
  iVar1 = *(int *)(param_1 + 0x38);
  FUN_800122a4();
  return iVar1 == 0;
}



bool FUN_800115d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_8001224c();
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_800122a4();
  return iVar1 == iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011608(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_r2;
  undefined4 unaff_r8;
  undefined4 in_cr14;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(*param_1);
  }
  enableIRQinterrupts();
  enableFIQinterrupts();
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  software_interrupt(0);
  coprocessor_store(0,in_cr14,unaff_r8);
  iVar2 = *(int *)(*(int *)(_DAT_20001430 + 0xc) + 0xc);
  FUN_800120ec(iVar2 + 4,param_2,in_r2);
  if (((*(int *)(iVar2 + 0x1c) == 1) && (iVar3 = FUN_80011524(), iVar3 != 0)) &&
     (iVar3 = FUN_80013aa4(iVar2,0), iVar3 == 0)) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  (**(code **)(iVar2 + 0x24))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011624(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(_DAT_20001430 + 0xc) + 0xc);
  FUN_800120ec(iVar2 + 4,param_2,param_3);
  if (((*(int *)(iVar2 + 0x1c) == 1) && (iVar3 = FUN_80011524(), iVar3 != 0)) &&
     (iVar3 = FUN_80013aa4(iVar2,0), iVar3 == 0)) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  (**(code **)(iVar2 + 0x24))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800116a0(void)

{
  bool bVar1;
  int iVar2;
  int extraout_r2;
  undefined8 uVar3;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  do {
    do {
      uVar3 = FUN_800131a0();
      if ((int)uVar3 == 0) {
        return;
      }
    } while (iStack_1c < 0);
    if (*(int *)(iStack_14 + 0x14) != 0) {
      FUN_800120ec(iStack_14 + 4,(int)((ulonglong)uVar3 >> 0x20),extraout_r2);
    }
    FUN_8001188c();
    switch(iStack_1c) {
    case 0:
    case 1:
    case 2:
    case 6:
    case 7:
      iVar2 = FUN_80011524();
      if (((iVar2 != 0) && ((**(code **)(iStack_14 + 0x24))(), *(int *)(iStack_14 + 0x1c) == 1)) &&
         (iVar2 = FUN_80013aa4(iStack_14,0), iVar2 == 0)) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      break;
    case 3:
    case 8:
      break;
    case 4:
    case 9:
      *(undefined4 *)(iStack_14 + 0x18) = uStack_18;
      if (*(int *)(iStack_14 + 0x18) == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      FUN_80011524();
      break;
    case 5:
      FUN_800122f0();
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void switchD_800116f4::default(void)

{
  bool bVar1;
  int iVar2;
  int extraout_r2;
  undefined8 uVar3;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  
  do {
    do {
      uVar3 = FUN_800131a0();
      if ((int)uVar3 == 0) {
        return;
      }
    } while (in_stack_0000001c < 0);
    if (*(int *)(in_stack_00000024 + 0x14) != 0) {
      FUN_800120ec(in_stack_00000024 + 4,(int)((ulonglong)uVar3 >> 0x20),extraout_r2);
    }
    FUN_8001188c();
    switch(in_stack_0000001c) {
    case 0:
    case 1:
    case 2:
    case 6:
    case 7:
      iVar2 = FUN_80011524();
      if (((iVar2 != 0) &&
          ((**(code **)(in_stack_00000024 + 0x24))(), *(int *)(in_stack_00000024 + 0x1c) == 1)) &&
         (iVar2 = FUN_80013aa4(in_stack_00000024,0), iVar2 == 0)) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      break;
    case 3:
    case 8:
      break;
    case 4:
    case 9:
      *(undefined4 *)(in_stack_00000024 + 0x18) = in_stack_00000020;
      if (*(int *)(in_stack_00000024 + 0x18) == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      FUN_80011524();
      break;
    case 5:
      FUN_800122f0();
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void switchD_800116f4::default(void)

{
  bool bVar1;
  int iVar2;
  int extraout_r2;
  undefined8 uVar3;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  
  do {
    do {
      uVar3 = FUN_800131a0();
      if ((int)uVar3 == 0) {
        return;
      }
    } while (in_stack_0000001c < 0);
    if (*(int *)(in_stack_00000024 + 0x14) != 0) {
      FUN_800120ec(in_stack_00000024 + 4,(int)((ulonglong)uVar3 >> 0x20),extraout_r2);
    }
    FUN_8001188c();
    switch(in_stack_0000001c) {
    case 0:
    case 1:
    case 2:
    case 6:
    case 7:
      iVar2 = FUN_80011524();
      if (((iVar2 != 0) &&
          ((**(code **)(in_stack_00000024 + 0x24))(), *(int *)(in_stack_00000024 + 0x1c) == 1)) &&
         (iVar2 = FUN_80013aa4(in_stack_00000024,0), iVar2 == 0)) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      break;
    case 3:
    case 8:
      break;
    case 4:
    case 9:
      *(undefined4 *)(in_stack_00000024 + 0x18) = in_stack_00000020;
      if (*(int *)(in_stack_00000024 + 0x18) == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      FUN_80011524();
      break;
    case 5:
      FUN_800122f0();
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800117a8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  int iStack_18;
  
  FUN_80012a80();
  uVar1 = FUN_8001188c();
  if (iStack_18 == 0) {
    if ((param_2 == 0) && (param_1 <= uVar1)) {
      FUN_800138c0();
      FUN_80011624(param_1,uVar1,extraout_r2);
    }
    else {
      FUN_800124d0(_DAT_2000a714);
      iVar2 = FUN_800138c4();
      if (iVar2 == 0) {
        Peripherals::SCB.ICSR = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800117ac(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int extraout_r2;
  uint uStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  
  uStack00000008 = param_2;
  uStack0000000c = param_1;
  FUN_80012a80();
  uStack00000004 = FUN_8001188c();
  if (param_5 == 0) {
    if ((uStack00000008 == 0) && (uStack0000000c <= uStack00000004)) {
      FUN_800138c0();
      FUN_80011624(uStack0000000c,uStack00000004,extraout_r2);
    }
    else {
      if (uStack00000008 != 0) {
        uStack00000008 = (uint)(*_DAT_20001440 == 0);
      }
      FUN_800124d0(_DAT_2000a714);
      iVar1 = FUN_800138c4();
      if (iVar1 == 0) {
        Peripherals::SCB.ICSR = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
  }
  return;
}



void FUN_80011844(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011848(void)

{
  if (*_DAT_20001434 == 0) {
    _DAT_2000a680 = 0xffffffff;
  }
  else {
    _DAT_2000a680 = *(undefined4 *)(*(int *)(_DAT_20001434[3] + 0xc) + 4);
  }
  return;
}



void FUN_8001188c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_80011890(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_8001351c();
  if (uVar1 < _DAT_20001428) {
    FUN_800118d4();
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  _DAT_20001428 = uVar1;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800118d4(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    while( true ) {
      do {
        piVar2 = _DAT_20001430;
        if (*_DAT_20001430 == 0) {
          _DAT_20001430 = _DAT_20001440;
          _DAT_20001440 = piVar2;
          return;
        }
        uVar5 = *(uint *)_DAT_20001430[3];
        iVar3 = *(int *)(_DAT_20001430[3] + 0xc);
        FUN_800120f0(iVar3 + 4);
        (**(code **)(iVar3 + 0x24))();
      } while (*(int *)(iVar3 + 0x1c) != 1);
      uVar4 = uVar5 + *(int *)(iVar3 + 0x18);
      if (uVar4 <= uVar5) break;
      *(uint *)(iVar3 + 4) = uVar4;
      *(int *)(iVar3 + 0x10) = iVar3;
      FUN_800121a8(_DAT_20001430,(uint *)(iVar3 + 4));
    }
    iVar3 = FUN_80013aa8(iVar3,0,uVar5,0);
  } while (iVar3 != 0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x800119ec)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800119a4(void)

{
  bool bVar1;
  
  if (_DAT_20000018 == -1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_800119ec(void)

{
  return;
}



void FUN_80011a5c(void)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int in_stack_ffffffe8;
  undefined4 local_14;
  
  do {
    uVar1 = FUN_80011144();
    FUN_800117ac(uVar1,local_14,extraout_r2,extraout_r3,in_stack_ffffffe8);
    switchD_800116f4::default();
  } while( true );
}



void FUN_80011a7c(int param_1)

{
  bool bVar1;
  uint extraout_r1;
  char local_d;
  
  FUN_80012250();
  local_d = *(char *)(param_1 + 0x45);
  while (('\0' < local_d && (*(int *)(param_1 + 0x24) != 0))) {
    bVar1 = FUN_80013800(param_1 + 0x24);
    if (bVar1 != 0) {
      FUN_80012708((uint)bVar1,extraout_r1);
    }
    local_d = local_d + -1;
  }
  *(undefined1 *)(param_1 + 0x45) = 0xff;
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



// WARNING: Removing unreachable block (ram,0x80011b8c)
// WARNING: Removing unreachable block (ram,0x80011b92)
// WARNING: Removing unreachable block (ram,0x80011b96)
// WARNING: Removing unreachable block (ram,0x80011ba2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_80011b2c(uint param_1)

{
  int *piVar1;
  bool bVar2;
  uint local_28;
  int *local_20;
  int *local_1c;
  uint local_18;
  
  local_28 = 0;
  FUN_80012a84();
  if (_DAT_20001438 == (int *)0x0) {
    FUN_80011184(0);
  }
  if ((param_1 & _DAT_2000a644) == 0) {
    if (param_1 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_1 + 8;
      if ((local_18 & 7) != 0) {
        local_18 = (local_18 & 0xfffffff8) + 8;
      }
    }
    if ((local_18 != 0) && (local_18 <= _DAT_2000a674)) {
      local_20 = (int *)&DAT_2000a6e0;
      local_1c = _DAT_2000a6e0;
      while( true ) {
        bVar2 = false;
        if ((uint)local_1c[1] < local_18) {
          bVar2 = *local_1c != 0;
        }
        if (!bVar2) break;
        local_20 = local_1c;
        local_1c = (int *)*local_1c;
      }
      if (local_1c != _DAT_20001438) {
        local_28 = *local_20 + 8;
        *local_20 = *local_1c;
        if (0x10 < local_1c[1] - local_18) {
          piVar1 = (int *)((int)local_1c + local_18);
          if (((uint)piVar1 & 7) != 0) {
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              setBasePriority(0x50);
            }
            InstructionSynchronizationBarrier(0xf);
            DataSynchronizationBarrier(0xf);
            do {
                    // WARNING: Do nothing block with infinite loop
            } while( true );
          }
          piVar1[1] = local_1c[1] - local_18;
          local_1c[1] = local_18;
          FUN_80011460(piVar1);
        }
        _DAT_2000a674 = _DAT_2000a674 - local_1c[1];
        if (_DAT_2000a674 < _DAT_2000a67c) {
          _DAT_2000a67c = _DAT_2000a674;
        }
        local_1c[1] = local_1c[1] | _DAT_2000a644;
        *local_1c = 0;
      }
    }
  }
  FUN_800138c4();
  if ((local_28 & 7) != 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return local_28;
}



void FUN_80011d08(void)

{
  return;
}



void FUN_80011d58(void)

{
  return;
}



void FUN_80011d5c(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\x01') {
    FUN_800092e8(&Peripherals::GPIOB,0x40,param_3,param_4);
  }
  return;
}



void FUN_80011d80(void)

{
  return;
}



void FUN_80011d84(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\x01') {
    FUN_800092cc(&Peripherals::GPIOB,0x40,param_3,param_4);
  }
  return;
}



void FUN_80011da8(void)

{
  return;
}



void FUN_80011dac(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\x01') {
    FUN_800092e8(&Peripherals::GPIOB,0x80,param_3,param_4);
  }
  return;
}



void FUN_80011dd0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011dd4(char param_1)

{
  if (param_1 == '\x01') {
    _DAT_20000040 = 0x80;
    _DAT_20000044 = 0;
    FUN_8000a184(&Peripherals::GPIOB,(uint *)&DAT_20000040);
    FUN_80011e04();
    return;
  }
  return;
}



void FUN_80011e04(void)

{
  return;
}



void FUN_80011e08(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\x01') {
    FUN_800092cc(&Peripherals::GPIOB,0x80,param_3,param_4);
  }
  return;
}



void FUN_80011e2c(void)

{
  return;
}



void FUN_80011e30(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((char)param_2 != '\0') {
    FUN_80011dac(param_1,param_2,param_3,param_4);
    FUN_80011e58();
    return;
  }
  FUN_80011e08(param_1,param_2,param_3,param_4);
  FUN_80011e58();
  return;
}



void FUN_80011e58(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011e5c(char param_1)

{
  if (param_1 == '\x01') {
    _DAT_20000040 = 0x80;
    _DAT_20000044 = 1;
    _DAT_2000004c = 3;
    FUN_8000a184(&Peripherals::GPIOB,(uint *)&DAT_20000040);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011e94(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined1 auStack_260 [550];
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  
  FUN_8000819a(&local_3a,0x32);
  FUN_8000819a(auStack_260,0x226);
  local_3a = 0x5a;
  local_39 = FUN_8000a4dc(&Peripherals::GPIOA,0x8000);
  local_38 = FUN_8000a4dc(&Peripherals::GPIOB,8);
  local_37 = FUN_8000a4dc(&Peripherals::GPIOB,1);
  FUN_8000a4dc(&Peripherals::GPIOB,2);
  local_36 = 1;
  local_35 = FUN_8000a4d8(0x40010c00,0x200);
  local_34 = FUN_8000a4d8(0x40010c00,0x100);
  local_33 = FUN_8000a4d8(0x40011000,8);
  local_32 = FUN_8000a4d8(0x40011000,4);
  local_31 = FUN_8000a4d8(0x40011000,2);
  local_30 = FUN_8000a4d8(0x40011000,1);
  local_2f = FUN_8000a4d8(0x40010800,0x1000);
  local_2e = FUN_8000a4d8(0x40010800,0x800);
  FUN_8000ceb8();
  FUN_80012e2c();
  FUN_80013b54(0x8014dfe,extraout_r1,extraout_r2,extraout_r3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80011fe4(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puStack00000000;
  char cStack00000007;
  undefined4 uStack00000008;
  
  FUN_80008196(&stack0x0000000e,0x226,param_3);
  uStack00000008 = FUN_8001351c();
  FUN_8000a4dc(&Peripherals::GPIOC,8);
  FUN_8000a4dc(&Peripherals::GPIOC,4);
  FUN_8000a4dc(&Peripherals::GPIOC,2);
  FUN_8000a4dc(&Peripherals::GPIOC,1);
  DAT_20001d9a = DAT_20001d9a + '\x01';
  puStack00000000 = (undefined4 *)&stack0x0000000e;
  cStack00000007 = FUN_8000cebc((undefined1 *)puStack00000000,0x74,9,(undefined4 *)&stack0x00000234)
  ;
                    // WARNING: Subroutine does not return
  FUN_80012e30(_DAT_20001400,puStack00000000,-1,0);
}



undefined1 FUN_800120ec(undefined4 param_1,undefined4 param_2,int param_3)

{
  return *(undefined1 *)(param_3 + 0x14);
}



int FUN_800120f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  if (piVar1[1] == param_1) {
    piVar1[1] = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *piVar1 = *piVar1 + -1;
  return *piVar1;
}



void FUN_80012138(void)

{
  FUN_80013b58();
  FUN_80013b58();
  return;
}



void FUN_80012164(void)

{
  return;
}



void FUN_80012168(undefined4 *param_1)

{
  param_1[1] = param_1 + 2;
  param_1[2] = 0xffffffff;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 2;
  *param_1 = 0;
  return;
}



void FUN_80012194(void)

{
  return;
}



void FUN_800121a4(void)

{
  return;
}



void FUN_800121a8(int *param_1,uint *param_2)

{
  int *local_c;
  
  if (*param_2 == 0xffffffff) {
    local_c = (int *)param_1[4];
  }
  else {
    for (local_c = param_1 + 2; *(uint *)local_c[1] <= *param_2; local_c = (int *)local_c[1]) {
    }
  }
  param_2[1] = local_c[1];
  *(uint **)(param_2[1] + 8) = param_2;
  param_2[2] = (uint)local_c;
  local_c[1] = (int)param_2;
  param_2[4] = (uint)param_1;
  *param_1 = *param_1 + 1;
  return;
}



void FUN_80012210(void)

{
  return;
}



void FUN_80012214(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *(int *)(param_2 + 4) = iVar1;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = param_2;
  *(int *)(iVar1 + 8) = param_2;
  *(int **)(param_2 + 0x10) = param_1;
  *param_1 = *param_1 + 1;
  return;
}



void FUN_8001224c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012250(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  _DAT_20000018 = _DAT_20000018 + 1;
  if ((_DAT_20000018 == 1) && (uVar2 = Peripherals::SCB.ICSR, (uVar2 & 0xff) != 0)) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_800122a4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_800122a8(void)

{
  bool bVar1;
  int iVar2;
  
  if (_DAT_20000018 != 0) {
    iVar2 = _DAT_20000018 + -1;
    _DAT_20000018 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
    }
    return iVar2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_800122f0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800122f4(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -8);
    if ((*(uint *)(param_1 + -4) & _DAT_2000a644) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (*piVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((*(uint *)(param_1 + -4) & _DAT_2000a644) != 0) && (*piVar2 == 0)) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) & ~_DAT_2000a644;
      FUN_80012a84();
      _DAT_2000a674 = _DAT_2000a674 + *(int *)(param_1 + -4);
      FUN_80011460(piVar2);
      FUN_800138c4();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800123b4(void)

{
  Peripherals::STK.CTRL = 0;
  Peripherals::STK.VAL = 0;
  Peripherals::STK.LOAD_ = _DAT_20000004 / 1000 - 1;
  Peripherals::STK.CTRL = 7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800123f8(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  if ((0xf < uVar2) && ((byte)(&Peripherals::NVIC.field_0x2f0)[uVar2] < DAT_2000a52c)) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar2 = Peripherals::SCB.AIRCR;
  if ((uVar2 & 0x700) <= _DAT_2000a530) {
    return;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_8001247c(undefined4 param_1,undefined4 param_2)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (7 < local_c) {
      return;
    }
    if (*(int *)(local_c * 8 + 0x2000a69c) == 0) break;
    local_c = local_c + 1;
  }
  *(undefined4 *)(local_c * 8 + 0x2000a69c) = param_2;
  *(undefined4 *)(local_c * 8 + 0x2000a6a0) = param_1;
  return;
}



void FUN_800124d0(int param_1)

{
  FUN_80012250();
  if (*(char *)(param_1 + 0x44) == -1) {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) == -1) {
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



void FUN_80012530(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012534(int param_1)

{
  bool bVar1;
  int local_14;
  
  local_14 = 0;
  if (param_1 != 0) {
    if (_DAT_2000a544 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_80012a84();
    FUN_80010d28(param_1,0);
    local_14 = FUN_800138c4();
  }
  if (local_14 == 0) {
    Peripherals::SCB.ICSR = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800125a4(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 extraout_r1;
  undefined1 *extraout_r1_00;
  undefined1 *puVar3;
  int extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  int local_18;
  
  FUN_80012250();
  if (param_1 == 0) {
    local_18 = iRam20000000;
  }
  cVar2 = FUN_800120ec(local_18 + 4,extraout_r1,extraout_r2);
  puVar3 = extraout_r1_00;
  uVar4 = extraout_r2_00;
  if ((cVar2 == '\0') &&
     (puVar3 = (undefined1 *)(*(int *)(local_18 + 0x2c) * 5),
     *(int *)(&DAT_20001444 + *(int *)(local_18 + 0x2c) * 0x14) == 0)) {
    uVar4 = 1 << (*(uint *)(local_18 + 0x2c) & 0xff);
    puVar3 = &DAT_2000a54c;
    _DAT_2000a54c = _DAT_2000a54c & ~uVar4;
  }
  if (*(int *)(local_18 + 0x28) != 0) {
    FUN_800120ec(local_18 + 0x18,puVar3,uVar4);
  }
  _DAT_2000a548 = _DAT_2000a548 + 1;
  if (local_18 == _DAT_2000142c) {
    FUN_80012210();
    _DAT_2000a53c = _DAT_2000a53c + 1;
  }
  else {
    _DAT_2000a538 = _DAT_2000a538 + -1;
    FUN_80011128();
    FUN_80011844();
  }
  FUN_800122a4();
  if ((_DAT_2000a6dc != 0) && (local_18 == _DAT_2000142c)) {
    if (_DAT_2000a544 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    Peripherals::SCB.ICSR = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800126e4(void)

{
  undefined4 *in_stack_00000000;
  
  *in_stack_00000000 = _DAT_2000a684;
  in_stack_00000000[1] = _DAT_2000a710;
  return;
}



void FUN_80012708(undefined4 param_1,uint param_2)

{
  *(undefined4 *)(param_2 & 0xffff | 0x20000000) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012714(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_800121a4();
  FUN_80010d24();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012758(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_80012210();
  FUN_80010d24();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x8001286e) overlaps instruction at (ram,0x8001286c)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800127ac(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_r12;
  undefined4 in_cr14;
  
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((param_1 != 0) && (param_1 != _DAT_2000142c)) {
    FUN_8001224c();
    iVar2 = FUN_800119ec();
    if (iVar2 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  coprocessor_load(0,in_cr14,in_r12);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x8001286e) overlaps instruction at (ram,0x8001286c)
// 
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800127b0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_r12;
  undefined4 in_cr14;
  int iStack00000004;
  int iStack00000008;
  
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((param_1 != 0) && (param_1 != _DAT_2000142c)) {
    iStack00000004 = param_1;
    iStack00000008 = param_1;
    FUN_8001224c();
    iVar2 = FUN_800119ec();
    if (iVar2 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  coprocessor_load(0,in_cr14,in_r12);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012878(void)

{
  bool bVar1;
  int local_14;
  
  local_14 = FUN_8001344c(0x8011241,0x8015097,0x80,0);
  if (local_14 == 1) {
    local_14 = FUN_80013a3c();
  }
  if (local_14 == 1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    _DAT_2000a680 = 0xffffffff;
    _DAT_2000a6dc = 1;
    _DAT_2000a710 = 0;
    FUN_80012bac();
  }
  else if (local_14 == -1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012928(int param_1)

{
  int iVar1;
  int local_18;
  
  FUN_80012250();
  local_18 = param_1;
  if (param_1 == 0) {
    local_18 = _DAT_2000142c;
  }
  iVar1 = FUN_800120f0(local_18 + 4);
  if ((iVar1 == 0) && (*(int *)(&DAT_20001444 + *(int *)(local_18 + 0x2c) * 0x14) == 0)) {
    _DAT_2000a54c = _DAT_2000a54c & ~(1 << (*(uint *)(local_18 + 0x2c) & 0xff));
  }
  if (*(int *)(local_18 + 0x28) != 0) {
    FUN_800120f0(local_18 + 0x18);
  }
  FUN_80012214((int *)&DAT_2000a6e8,local_18 + 4);
  if (*(char *)(local_18 + 0x58) == '\x01') {
    *(undefined1 *)(local_18 + 0x58) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



void FUN_80012a80(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012a84(void)

{
  _DAT_2000a544 = _DAT_2000a544 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80012a94(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  if (_DAT_2000a544 == 0) {
    _DAT_2000a71c = 0;
    piVar3 = *(int **)(_DAT_2000142c + 0x30);
    if ((((*piVar3 != -0x5a5a5a5b) || (piVar3[1] != -0x5a5a5a5b)) || (piVar3[2] != -0x5a5a5a5b)) ||
       (piVar3[3] != -0x5a5a5a5b)) {
      FUN_80012138();
    }
    if (*(int *)(&DAT_20001444 + (0x1f - LZCOUNT(_DAT_2000a54c)) * 0x14) == 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar1 = (0x1f - LZCOUNT(_DAT_2000a54c)) * 0x14;
    *(undefined4 *)(iVar1 + 0x20001448) = *(undefined4 *)(*(int *)(iVar1 + 0x20001448) + 4);
    if (*(int *)(iVar1 + 0x20001448) == iVar1 + 0x2000144c) {
      *(undefined4 *)(iVar1 + 0x20001448) = *(undefined4 *)(*(int *)(iVar1 + 0x20001448) + 4);
    }
    _DAT_2000142c = *(int *)(*(int *)(iVar1 + 0x20001448) + 0xc);
  }
  else {
    _DAT_2000a71c = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80012bac(void)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  byte local_15;
  
  uVar2 = Peripherals::NVIC.IPR0._0_1_;
  Peripherals::NVIC.IPR0._0_1_ = 0xff;
  local_15 = Peripherals::NVIC.IPR0._0_1_;
  DAT_2000a52c = local_15 & 0x50;
  _DAT_2000a530 = 7;
  for (; (int)((uint)local_15 * 0x1000000) < 0; local_15 = local_15 << 1) {
    _DAT_2000a530 = _DAT_2000a530 + -1;
  }
  if (_DAT_2000a530 != 3) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  _DAT_2000a530 = 0x300;
  Peripherals::NVIC.IPR0._0_1_ = uVar2;
  uVar3 = Peripherals::SCB.SHPR3;
  Peripherals::SCB.SHPR3 = uVar3 | 0xf00000;
  uVar3 = Peripherals::SCB.SHPR3;
  Peripherals::SCB.SHPR3 = uVar3 | 0xf0000000;
  FUN_800123b4();
  _DAT_20000018 = 0;
  FUN_80011608((int *)0x0,&DAT_20000018);
  FUN_80012a94();
  FUN_800119a4();
  return 0;
}



uint FUN_80012c94(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (param_2 <= param_1) {
    uVar2 = FUN_80012cfc(param_1,0,2);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x38) = param_2;
    }
    return uVar2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



uint FUN_80012cfc(int param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  uint uVar2;
  int local_20;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = param_2 * param_1;
    }
    uVar2 = FUN_80011b2c(local_20 + 0x50);
    if (uVar2 != 0) {
      FUN_80011278(param_1,param_2,uVar2 + 0x50,param_3);
    }
    return uVar2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_80012d70(void)

{
  return;
}



void FUN_80012d74(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 != (int *)0x0) {
    FUN_80012250();
    param_1[1] = param_1[0xf] * param_1[0x10] + *param_1;
    param_1[0xe] = 0;
    param_1[2] = *param_1;
    param_1[3] = (param_1[0xf] + -1) * param_1[0x10] + *param_1;
    *(undefined1 *)(param_1 + 0x11) = 0xff;
    *(undefined1 *)((int)param_1 + 0x45) = 0xff;
    if (param_2 == 0) {
      if ((param_1[4] != 0) && (bVar1 = FUN_80013800((int)(param_1 + 4)), bVar1)) {
        Peripherals::SCB.ICSR = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
    else {
      FUN_80012168(param_1 + 4);
      FUN_80012168(param_1 + 9);
    }
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_80012e2c(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80012fac)

void FUN_80012e30(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == (uint *)0x0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar2 = false;
  if (param_2 == (undefined4 *)0x0) {
    bVar2 = param_1[0x10] != 0;
  }
  if (bVar2) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar2 = false;
  if (param_4 == 2) {
    bVar2 = param_1[0xf] != 1;
  }
  if (bVar2) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  iVar1 = FUN_800134e4();
  if (iVar1 == 0 && param_3 != 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_80012250();
  if ((param_1[0xf] <= param_1[0xe]) && (param_4 != 2)) {
    if (param_3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_800122a8();
    }
    FUN_800126e4();
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  iVar1 = FUN_80011060(param_1,param_2,param_4);
  if (param_1[9] == 0) {
    if (iVar1 != 0) {
      Peripherals::SCB.ICSR = 0x10000000;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
  }
  else {
    bVar2 = FUN_80013800((int)(param_1 + 9));
    if (bVar2) {
      Peripherals::SCB.ICSR = 0x10000000;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



void FUN_80013058(void)

{
  return;
}



undefined4 FUN_8001305c(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_34;
  
  if (param_1 == (uint *)0x0) {
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar3 = false;
  if (param_2 == (undefined4 *)0x0) {
    bVar3 = param_1[0x10] != 0;
  }
  if (!bVar3) {
    bVar3 = false;
    if (param_4 == 2) {
      bVar3 = param_1[0xf] != 1;
    }
    if (!bVar3) {
      FUN_800123f8();
      uVar2 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        uVar2 = getBasePriority();
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      if ((param_1[0xe] < param_1[0xf]) || (param_4 == 2)) {
        cVar1 = *(char *)((int)param_1 + 0x45);
        FUN_80011060(param_1,param_2,param_4);
        if (cVar1 == -1) {
          if (((param_1[9] != 0) && (bVar3 = FUN_80013800((int)(param_1 + 9)), bVar3)) &&
             (param_3 != (undefined4 *)0x0)) {
            *param_3 = 1;
          }
        }
        else {
          *(char *)((int)param_1 + 0x45) = cVar1 + '\x01';
        }
        local_34 = 1;
      }
      else {
        local_34 = 0;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(uVar2);
      }
      return local_34;
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_800131a0(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x800132c0)

void FUN_800131a4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar2 = false;
  if (param_2 == (undefined4 *)0x0) {
    bVar2 = param_1[0x10] != 0;
  }
  if (bVar2) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  iVar1 = FUN_800134e4();
  if (iVar1 == 0 && param_3 != 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_80012250();
  iVar1 = param_1[0xe];
  if (iVar1 == 0) {
    if (param_3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_800122a8();
    }
    FUN_800126e4();
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  FUN_8001101c(param_1,param_2);
  param_1[0xe] = iVar1 + -1;
  if ((param_1[4] != 0) && (bVar2 = FUN_80013800((int)(param_1 + 4)), bVar2)) {
    Peripherals::SCB.ICSR = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
                    // WARNING: Subroutine does not return
  FUN_800122a8();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80013380(int *param_1,uint *param_2)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (param_2 != (uint *)0x0) {
    FUN_80012250();
    if ((*param_2 != 0xffffffff) &&
       ((_DAT_2000a684 == *param_1 || (_DAT_2000a710 < (uint)param_1[1])))) {
      if (_DAT_2000a710 - param_1[1] < *param_2) {
        *param_2 = *param_2 - (_DAT_2000a710 - param_1[1]);
        FUN_800126e4();
      }
      else {
        *param_2 = 0;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_80013448(void)

{
  return;
}



undefined4 FUN_8001344c(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_80011b2c((uint)param_3 << 2);
  if (uVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_80011b2c(0x5c);
    if (local_24 == 0) {
      FUN_800122f4(uVar1);
    }
    else {
      *(uint *)(local_24 + 0x30) = uVar1;
    }
  }
  if (local_24 == 0) {
    local_28 = 0xffffffff;
  }
  else {
    FUN_800112c0(param_1,param_2,(uint)param_3,param_4);
    FUN_80010e1c(local_24);
    local_28 = 1;
  }
  return local_28;
}



void FUN_800134e0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_800134e4(void)

{
  undefined4 local_4;
  
  if (_DAT_2000a6dc == 0) {
    local_4 = 1;
  }
  else if (_DAT_2000a544 == 0) {
    local_4 = 2;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_8001351c(void)

{
  return _DAT_2000a710;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80013530(void)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  
  piVar2 = _DAT_20001434;
  local_18 = 0;
  if (_DAT_2000a544 == 0) {
    uVar4 = _DAT_2000a710 + 1;
    _DAT_2000a710 = uVar4;
    if (uVar4 == 0) {
      if (*_DAT_20001434 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      _DAT_20001434 = _DAT_2000143c;
      _DAT_2000143c = piVar2;
      _DAT_2000a684 = _DAT_2000a684 + 1;
      FUN_80011848();
    }
    uVar3 = _DAT_2000a680;
    if (_DAT_2000a680 <= uVar4) {
      while (*_DAT_20001434 != 0) {
        iVar5 = *(int *)(_DAT_20001434[3] + 0xc);
        uVar3 = *(uint *)(iVar5 + 4);
        if (uVar4 < *(uint *)(iVar5 + 4)) goto LAB_80013690;
        FUN_800120f0(iVar5 + 4);
        if (*(int *)(iVar5 + 0x28) != 0) {
          FUN_800120f0(iVar5 + 0x18);
        }
        _DAT_2000a54c = _DAT_2000a54c | 1 << (*(uint *)(iVar5 + 0x2c) & 0xff);
        FUN_80012214((int *)(&DAT_20001444 + *(int *)(iVar5 + 0x2c) * 0x14),iVar5 + 4);
        if (*(uint *)(_DAT_2000142c + 0x2c) <= *(uint *)(iVar5 + 0x2c)) {
          local_18 = 1;
        }
      }
      _DAT_2000a680 = 0xffffffff;
      uVar3 = _DAT_2000a680;
    }
LAB_80013690:
    _DAT_2000a680 = uVar3;
    if (1 < *(uint *)(&DAT_20001444 + *(int *)(_DAT_2000142c + 0x2c) * 0x14)) {
      local_18 = 1;
    }
  }
  else {
    _DAT_2000a540 = _DAT_2000a540 + 1;
  }
  if (_DAT_2000a71c != 0) {
    local_18 = 1;
  }
  return local_18;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_800136e8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_1c;
  
  local_1c = 0;
  if (param_1 != 0) {
    if (param_1 != _DAT_2000142c) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x50);
      }
      InstructionSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x4c)) && (*(int *)(param_1 + 0x50) == 0)) {
      iVar2 = FUN_800120f0(param_1 + 4);
      if ((iVar2 == 0) && (*(int *)(&DAT_20001444 + *(int *)(param_1 + 0x2c) * 0x14) == 0)) {
        _DAT_2000a54c = _DAT_2000a54c & ~(1 << (*(uint *)(param_1 + 0x2c) & 0xff));
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(param_1 + 0x18) = 7 - *(int *)(param_1 + 0x2c);
      _DAT_2000a54c = _DAT_2000a54c | 1 << (*(uint *)(param_1 + 0x2c) & 0xff);
      FUN_80012214((int *)(&DAT_20001444 + *(int *)(param_1 + 0x2c) * 0x14),param_1 + 4);
      local_1c = 1;
    }
  }
  return local_1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_80013800(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (iVar2 != 0) {
    FUN_800120f0(iVar2 + 0x18);
    if (_DAT_2000a544 == 0) {
      FUN_800120f0(iVar2 + 4);
      _DAT_2000a54c = _DAT_2000a54c | 1 << (*(uint *)(iVar2 + 0x2c) & 0xff);
      FUN_80012214((int *)(&DAT_20001444 + *(int *)(iVar2 + 0x2c) * 0x14),iVar2 + 4);
    }
    else {
      FUN_80012214((int *)&DAT_2000a688,iVar2 + 0x18);
    }
    bVar1 = *(uint *)(_DAT_2000142c + 0x2c) < *(uint *)(iVar2 + 0x2c);
    if (bVar1) {
      _DAT_2000a71c = 1;
    }
    return bVar1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_800138c0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800138c4(void)

{
  bool bVar1;
  int iVar2;
  int local_18;
  int local_10;
  
  local_10 = 0;
  if (_DAT_2000a544 != 0) {
    FUN_80012250();
    _DAT_2000a544 = _DAT_2000a544 + -1;
    if ((_DAT_2000a544 == 0) && (_DAT_2000a538 != 0)) {
      while (_DAT_2000a688 != 0) {
        local_10 = *(int *)(_DAT_2000a694 + 0xc);
        FUN_800120f0(local_10 + 0x18);
        FUN_800120f0(local_10 + 4);
        _DAT_2000a54c = _DAT_2000a54c | 1 << (*(uint *)(local_10 + 0x2c) & 0xff);
        FUN_80012214((int *)(&DAT_20001444 + *(int *)(local_10 + 0x2c) * 0x14),local_10 + 4);
        if (*(uint *)(_DAT_2000142c + 0x2c) <= *(uint *)(local_10 + 0x2c)) {
          _DAT_2000a71c = 1;
        }
      }
      if (local_10 != 0) {
        FUN_80011848();
      }
      local_18 = _DAT_2000a540;
      if (_DAT_2000a540 != 0) {
        do {
          iVar2 = FUN_80013530();
          if (iVar2 != 0) {
            _DAT_2000a71c = 1;
          }
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        _DAT_2000a540 = 0;
      }
      if (_DAT_2000a71c != 0) {
        Peripherals::SCB.ICSR = 0x10000000;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
    }
                    // WARNING: Subroutine does not return
    FUN_800122a8();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



int FUN_80013a3c(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_80010f34();
  iVar2 = FUN_80013448();
  if (iVar2 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80013aa4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_20;
  
  uStack_20 = 0;
  if (param_1 != 0) {
    if (_DAT_2000a714 != 0) {
      if (param_2 < 6) {
        iVar2 = FUN_800134e0();
        if (iVar2 == 2) {
          uStack_20 = FUN_80012e2c();
        }
        else {
          uStack_20 = FUN_80012e2c();
        }
      }
      else {
        uStack_20 = FUN_80013058();
      }
    }
    return uStack_20;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80013aa8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iStack00000004;
  undefined4 uStack00000008;
  int iStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  int iStack0000001c;
  int iStack00000020;
  
  uStack00000010 = 0;
  if (param_1 != 0) {
    if (_DAT_2000a714 != 0) {
      iStack00000004 = param_2;
      uStack00000008 = param_3;
      iStack0000000c = param_1;
      uStack00000014 = param_4;
      uStack00000018 = param_3;
      iStack0000001c = param_2;
      iStack00000020 = param_1;
      if (param_2 < 6) {
        iVar2 = FUN_800134e0();
        if (iVar2 == 2) {
          uStack00000010 = FUN_80012e2c();
        }
        else {
          uStack00000010 = FUN_80012e2c();
        }
      }
      else {
        uStack00000010 = FUN_80013058();
      }
    }
    return uStack00000010;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_80013b54(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_80013d40(param_1,&uStack_c,DAT_80013b70,DAT_80013b6c);
  return;
}



void FUN_80013b58(void)

{
  undefined *in_r3;
  byte *in_stack_00000000;
  
  FUN_80013d40(in_stack_00000000,(uint *)&stack0x00000004,DAT_80013b70,in_r3);
  return;
}



byte * FUN_80013b78(void)

{
  byte *pbVar1;
  undefined *in_r3;
  byte *in_stack_00000004;
  
  pbVar1 = FUN_80013d40(in_stack_00000004,(uint *)&stack0x00000008,&stack0x00000000,in_r3);
  FUN_8001446e();
  return pbVar1;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x80013f62) overlaps instruction at (ram,0x80013f60)
// 
// WARNING: Removing unreachable block (ram,0x80013ffa)

byte * FUN_80013d40(byte *param_1,uint *param_2,undefined4 param_3,undefined *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int extraout_r2;
  undefined *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int unaff_r8;
  uint *puVar14;
  uint *unaff_r10;
  char *pcVar15;
  uint in_r12;
  uint extraout_r12;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  longlong lVar19;
  uint local_88;
  undefined1 local_84 [4];
  char *local_80;
  char *local_7c;
  uint local_74;
  char local_50 [28];
  byte *pbStack_34;
  uint *puStack_30;
  undefined4 local_2c;
  undefined *puStack_28;
  
  puStack_28 = param_4;
  local_2c = param_3;
  puStack_30 = param_2;
  pbStack_34 = param_1;
  pbVar10 = (byte *)0x0;
  pbVar12 = param_1;
  do {
    pbVar10 = pbVar10 + (int)param_1;
    if (pbVar12[1] == 0) {
      return pbVar10;
    }
    uVar9 = 0;
    uVar13 = 0;
    local_74 = 0;
    pbVar12 = pbVar12 + 1;
    while( true ) {
      pbVar11 = pbVar12 + 1;
      uVar3 = 1 << (*pbVar11 - 0x20 & 0xff);
      if ((uVar3 & 0xe165) == 0) break;
      uVar9 = uVar9 | uVar3;
      pbVar12 = pbVar11;
    }
    if (*pbVar11 == 0x2a) {
      puVar7 = param_2 + 1;
      uVar3 = *param_2;
      local_74 = uVar3;
      if ((int)uVar3 < 0) {
        uVar9 = uVar9 | 0x2000;
        local_74 = -uVar3;
      }
      uVar9 = uVar9 | 2;
      pbVar11 = pbVar12 + 2;
    }
    else {
      while( true ) {
        bVar1 = *pbVar11;
        uVar3 = bVar1 - 0x30;
        puVar7 = param_2;
        if (9 < uVar3) break;
        uVar9 = uVar9 | 2;
        pbVar11 = pbVar11 + 1;
        local_74 = (uint)bVar1 + local_74 * 10 + -0x30;
      }
    }
    pbVar12 = pbVar11;
    puVar14 = puVar7;
    if (*pbVar11 == 0x2e) {
      pbVar12 = pbVar11 + 1;
      uVar9 = uVar9 | 4;
      if (*pbVar12 == 0x2a) {
        puVar14 = puVar7 + 1;
        uVar13 = *puVar7;
        pbVar12 = pbVar11 + 2;
      }
      else {
        uVar3 = 0xffffffd0;
        for (; *pbVar12 - 0x30 < 10; pbVar12 = pbVar12 + 1) {
          uVar13 = (uint)*pbVar12 + uVar13 * 10 + -0x30;
        }
      }
    }
    uVar4 = (uint)*pbVar12;
    if (uVar4 == 0x6c) {
      uVar9 = uVar9 | 0x100000;
LAB_80013e16:
      uVar3 = (uint)pbVar12[1];
      if (uVar3 == uVar4) {
        uVar9 = uVar9 + 0x100000;
        pbVar12 = pbVar12 + 1;
      }
LAB_80013e22:
      pbVar12 = pbVar12 + 1;
    }
    else {
      if (uVar4 < 0x6d) {
        if (uVar4 != 0x4c) {
          if (uVar4 == 0x68) {
            uVar9 = uVar9 | 0x300000;
            goto LAB_80013e16;
          }
          if (uVar4 != 0x6a) goto LAB_80013e24;
          uVar9 = uVar9 | 0x200000;
        }
        goto LAB_80013e22;
      }
      if ((uVar4 == 0x74) || (uVar4 == 0x7a)) goto LAB_80013e22;
    }
LAB_80013e24:
    pbVar11 = (byte *)(uint)*pbVar12;
    bVar18 = SBORROW4((int)pbVar11,0x66);
    bVar16 = (int)(pbVar11 + -0x66) < 0;
    bVar17 = pbVar11 == (byte *)0x66;
LAB_80013e28:
    if (bVar17) {
      return pbVar11;
    }
    if (bVar16 == bVar18) {
      uVar4 = uVar3;
      if (pbVar11 == (byte *)0x70) goto LAB_80013f42;
      if ((byte *)0x70 < pbVar11) {
        if (pbVar11 == (byte *)0x73) {
          unaff_r10 = (uint *)*puVar14;
          iVar5 = -1;
          goto LAB_80013ed2;
        }
        if (pbVar11 != (byte *)0x75) {
          if (pbVar11 != (byte *)0x78) goto LAB_80013e78;
          uVar13 = 0x780;
        }
        goto LAB_80013f60;
      }
      if (pbVar11 == (byte *)0x67) {
        return (byte *)0x67;
      }
      uVar4 = local_88;
      if (pbVar11 == (byte *)0x69) goto LAB_80013f42;
      if (pbVar11 == (byte *)0x6e) {
        uVar13 = (uVar9 << 9) >> 0x1d;
        if (uVar13 == 2) {
          puVar6 = (undefined4 *)*puVar14;
          *puVar6 = pbVar10;
          puVar6[1] = (int)pbVar10 >> 0x1f;
          halt_baddata();
        }
        if (uVar13 != 3) {
          if (uVar13 != 4) {
            *(byte **)*puVar14 = pbVar10;
            halt_baddata();
          }
          *(char *)*puVar14 = (char)pbVar10;
          halt_baddata();
        }
        *(short *)*puVar14 = (short)pbVar10;
        halt_baddata();
      }
      if (pbVar11 != (byte *)0x6f) goto LAB_80013e78;
      param_2 = (uint *)((uVar9 << 9) >> 0x1d);
      local_88 = uVar3;
      if (param_2 == (uint *)0x2) {
        pbVar11 = (byte *)((int)puVar14 + 7);
        local_84[0] = 0x40;
        unaff_r8 = 1;
        param_2 = puVar14;
LAB_8001404c:
        iVar5 = 0;
        if ((uVar3 != 8 || unaff_r10 != (uint *)0x0) ||
           ((in_r12 == 0 && pbVar11 == (byte *)0x0 && (-1 < (int)(uVar9 << 0x1d)))))
        goto LAB_8001406e;
        local_84[0] = 0x30;
        goto code_r0x80014068;
      }
      in_r12 = *puVar14;
      pbVar11 = (byte *)0x0;
      if (param_2 == (uint *)0x3) {
        param_2 = (uint *)0xb;
        pbVar11 = pbRam00000007;
        in_r12 = uRam00000003;
      }
      iVar5 = 0;
      unaff_r8 = 0;
      if ((int)(uVar9 << 0x1c) < 0) {
        if ((uVar3 == 0x10 && unaff_r10 == (uint *)0x0) && (in_r12 != 0 || pbVar11 != (byte *)0x0))
        {
          local_84[0] = 0x30;
          local_84[1] = 0;
          unaff_r8 = 2;
        }
        goto LAB_8001404c;
      }
LAB_8001406e:
      lVar19 = CONCAT44(pbVar11,in_r12);
      if (iVar5 == 0x58) {
        local_7c = &DAT_80014158;
      }
      else {
        local_7c = s_0123456789abcdef_80014144;
      }
      local_80 = local_50;
      while( true ) {
        if (lVar19 == 0) break;
        lVar19 = FUN_800087d0((uint)lVar19,(uint)((ulonglong)lVar19 >> 0x20),local_88,
                              (uint)unaff_r10);
        local_80 = local_80 + -1;
        *local_80 = local_7c[extraout_r2];
      }
      pcVar15 = local_50 + -(int)local_80;
      if ((int)(uVar9 << 0x1d) < 0) {
        uVar9 = uVar9 & 0xfffeffff;
      }
      else {
        uVar13 = 1;
      }
      if ((int)pcVar15 < (int)uVar13) {
        local_88 = uVar13 - (int)pcVar15;
      }
      else {
        local_88 = 0;
      }
      local_74 = local_74 - (int)(pcVar15 + unaff_r8 + local_88);
      if (-1 < (int)(uVar9 << 0xf)) {
        iVar5 = FUN_80014444(local_74,uVar9,local_2c,param_4);
        pbVar10 = pbVar10 + iVar5;
      }
      for (iVar5 = 0; iVar5 < unaff_r8; iVar5 = iVar5 + 1) {
        (*(code *)param_4)(local_84[iVar5],local_2c);
        pbVar10 = pbVar10 + 1;
      }
      if ((int)(uVar9 << 0xf) < 0) {
        iVar5 = FUN_80014444(local_74,uVar9,local_2c,param_4);
        pbVar10 = pbVar10 + iVar5;
      }
      while (uVar13 = local_88 - 1, bVar17 = 0 < (int)local_88, local_88 = uVar13, bVar17) {
        (*(code *)param_4)(0x30,local_2c);
        pbVar10 = pbVar10 + 1;
      }
      while (unaff_r10 = (uint *)(pcVar15 + -1), uVar13 = local_74, puVar8 = param_4,
            0 < (int)pcVar15) {
        cVar2 = *local_80;
        local_80 = local_80 + 1;
        (*(code *)param_4)(cVar2,local_2c);
        pbVar10 = pbVar10 + 1;
        pcVar15 = (char *)unaff_r10;
      }
    }
    else {
      if (pbVar11 == (byte *)0x58) {
        uVar4 = 10;
LAB_80013f42:
        local_88 = uVar4;
        uVar3 = (uVar9 << 9) >> 0x1d;
        unaff_r10 = (uint *)0x0;
        if (uVar3 == 2) {
LAB_80013f60:
          puVar7 = (uint *)((uint)((int)puVar14 + 7) & 0xfffffff8);
          param_2 = puVar7 + 2;
          in_r12 = *puVar7;
          pbVar11 = (byte *)puVar7[1];
        }
        else {
          param_2 = puVar14 + 1;
          in_r12 = *puVar14;
          if (uVar3 == 3) {
            in_r12 = (uint)(short)in_r12;
          }
          pbVar11 = (byte *)((int)in_r12 >> 0x1f);
          if (uVar3 == 4) {
            in_r12 = (uint)(char)in_r12;
            pbVar11 = (byte *)((int)in_r12 >> 0x1f);
          }
        }
        if ((int)pbVar11 < 0) {
          bVar17 = in_r12 != 0;
          in_r12 = -in_r12;
          pbVar11 = (byte *)(-(uint)bVar17 - (int)pbVar11);
          local_84[0] = 0x2d;
LAB_80013f9e:
        }
        else {
          if ((int)(uVar9 << 0x14) < 0) {
            local_84[0] = 0x2b;
            goto LAB_80013f9e;
          }
          if ((uVar9 & 1) != 0) {
            local_84[0] = 0x20;
            goto LAB_80013f9e;
          }
        }
        iVar5 = 4;
code_r0x80014068:
        unaff_r8 = 1;
        uVar13 = uVar13 - 1;
        goto LAB_8001406e;
      }
      if ((byte *)0x58 < pbVar11) {
        if (pbVar11 == (byte *)0x63) {
          local_88._0_2_ = (ushort)(byte)*puVar14;
          iVar5 = 1;
          unaff_r10 = &local_88;
LAB_80013ed2:
          puVar14 = puVar14 + 1;
          unaff_r8 = 0;
          if (-1 < (int)(uVar9 << 0x1d)) {
            for (; unaff_r8 < iVar5; unaff_r8 = unaff_r8 + 1) {
            }
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          for (; (unaff_r8 < (int)uVar13 &&
                 ((unaff_r8 < iVar5 || (*(char *)((int)unaff_r10 + unaff_r8) != '\0'))));
              unaff_r8 = unaff_r8 + 1) {
          }
          uVar13 = iVar5 - unaff_r8;
          FUN_8001443c();
          goto LAB_80013f2c;
        }
        uVar4 = local_88;
        if (pbVar11 != (byte *)0x64) {
          if (pbVar11 == (byte *)0x65) {
            return (byte *)0x65;
          }
          goto LAB_80013e78;
        }
        goto LAB_80013f42;
      }
      pcVar15 = (char *)unaff_r10;
      if (pbVar11 != (byte *)0x0) break;
      do {
        unaff_r10 = (uint *)(pcVar15 + 1);
        (*(code *)param_4)(*pcVar15,local_2c);
LAB_80013f2c:
        bVar17 = unaff_r8 != 0;
        unaff_r8 = unaff_r8 + -1;
        pcVar15 = (char *)unaff_r10;
      } while (bVar17);
      pbVar10 = (byte *)0xffffffff;
      puVar8 = param_4 + -1;
      param_2 = puVar14;
    }
    param_1 = (byte *)FUN_80014420(uVar13,uVar9,local_2c,puVar8);
    in_r12 = extraout_r12;
  } while( true );
  bVar18 = SBORROW4((int)pbVar11,0x45);
  bVar16 = (int)(pbVar11 + -0x45) < 0;
  bVar17 = pbVar11 == (byte *)0x45;
  if (!bVar17) {
    bVar18 = SBORROW4((int)pbVar11,0x46);
    bVar16 = (int)(pbVar11 + -0x46) < 0;
    bVar17 = pbVar11 == (byte *)0x46;
    if (!bVar17) {
      if (pbVar11 == (byte *)0x47) {
        return (byte *)0x47;
      }
LAB_80013e78:
      (*(code *)param_4)(pbVar11,local_2c);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  goto LAB_80013e28;
}



int FUN_80014420(int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 << 0x12 < 0) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*(code *)param_4)(0x20,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



int FUN_8001443c(void)

{
  int unaff_r4;
  int unaff_r5;
  code *unaff_r6;
  char in_NG;
  
  while (in_NG == '\0') {
    (*unaff_r6)(0x20);
    unaff_r5 = unaff_r5 + 1;
    unaff_r4 = unaff_r4 + -1;
    in_NG = unaff_r4 < 0;
  }
  return unaff_r5;
}



int FUN_80014444(int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_2 << 0xf < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if (-1 < param_2 << 0x12) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*(code *)param_4)(uVar2,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



void FUN_8001446e(void)

{
  return;
}


