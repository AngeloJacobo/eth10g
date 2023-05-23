////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.h
// {{{
// Project:	10Gb Ethernet switch
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga -I .: -d -o . allclocks.txt global.txt wbdown.txt icape.txt version.txt gpio.txt spio.txt wbuconsole.txt zipmaster.txt smiconsole.txt bkram.txt flash.txt sdspi.txt vpktpassthru.txt smiscope.txt flashscope.txt fanscope.txt cfgscope.txt mem_bkram_only.txt mem_flash_bkram.txt i2ccpu.txt fan.txt sirefclk.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
// }}}
// Copyright (C) 2023, Gisselquist Technology, LLC
// {{{
// This file is part of the ETH10G project.
//
// The ETH10G project contains free software and gateware, licensed under the
// Apache License, Version 2.0 (the "License").  You may not use this project,
// or this file, except in compliance with the License.  You may obtain a copy
// of the License at
// }}}
//	http://www.apache.org/licenses/LICENSE-2.0
// {{{
// Unless required by applicable law or agreed to in writing, files
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.
//
////////////////////////////////////////////////////////////////////////////////
//
// }}}
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
// FLASH erase/program configuration registers
#define	R_FLASHCFG      	0x00800000	// 00800000, wbregs names: FLASHCFG, QSPIC
// cfgscope scope
#define	R_CFGSCOPE      	0x00800020	// 00800020, wbregs names: CFGSCOPE
#define	R_CFGSCOPED     	0x00800024	// 00800020, wbregs names: CFGSCOPED
// fanscope compressed scope
#define	R_FANSCOPE      	0x00800040	// 00800040, wbregs names: FANSCOPE
#define	R_FANSCOPED     	0x00800044	// 00800040, wbregs names: FANSCOPED
// flashdbg compressed scope
#define	R_FLASHSCOPE    	0x00800060	// 00800060, wbregs names: FLASHSCOPE
#define	R_FLASHSCOPED   	0x00800064	// 00800060, wbregs names: FLASHSCOPED
// scope_smi compressed scope
#define	R_SMISCOPE      	0x00800080	// 00800080, wbregs names: SMISCOPE
#define	R_SMISCOPED     	0x00800084	// 00800080, wbregs names: SMISCOPED
// SD-SPI addresses
#define	R_SDSPI_CTRL    	0x008000a0	// 008000a0, wbregs names: SDCARD
#define	R_SDSPI_DATA    	0x008000a4	// 008000a0, wbregs names: SDDATA
#define	R_SDSPI_FIFOA   	0x008000a8	// 008000a0, wbregs names: SDFIFOA, SDFIF0, SDFIFA
#define	R_SDSPI_FIFOB   	0x008000ac	// 008000a0, wbregs names: SDFIFOB, SDFIF1, SDFIFB
// CONSOLE registers
#define	R_CONSOLE_FIFO  	0x008000c4	// 008000c0, wbregs names: UFIFO
#define	R_CONSOLE_UARTRX	0x008000c8	// 008000c0, wbregs names: RX
#define	R_CONSOLE_UARTTX	0x008000cc	// 008000c0, wbregs names: TX
#define	R_FAN_FPGAPWM   	0x008000e0	// 008000e0, wbregs names: FAN_FPGAPWM
#define	R_FAN_SYSPWM    	0x008000e4	// 008000e0, wbregs names: FAN_SYSPWM
#define	R_FAN_TACH      	0x008000e8	// 008000e0, wbregs names: FAN_TACH
#define	R_FAN_TEMP      	0x008000ec	// 008000e0, wbregs names: FAN_TEMP
#define	R_FAN           	0x008000f0	// 008000e0, wbregs names: FAN_CTRL
#define	R_FAN_OVW       	0x008000f4	// 008000e0, wbregs names: FAN_OVW, FAN_OVERRIDE
#define	R_FAN_ADDR      	0x008000f8	// 008000e0, wbregs names: FAN_ADDR, FAN_ADDRESS
#define	R_FAN_CKCOUNT   	0x008000fc	// 008000e0, wbregs names: FANCLK, FAN_CKCOUNT
// FPGA CONFIG REGISTERS: 0x4e0-0x4ff
#define	R_CFG_CRC       	0x00800100	// 00800100, wbregs names: FPGACRC
#define	R_CFG_FAR       	0x00800104	// 00800100, wbregs names: FPGAFAR
#define	R_CFG_FDRI      	0x00800108	// 00800100, wbregs names: FPGAFDRI
#define	R_CFG_FDRO      	0x0080010c	// 00800100, wbregs names: FPGAFDRO
#define	R_CFG_CMD       	0x00800110	// 00800100, wbregs names: FPGACMD
#define	R_CFG_CTL0      	0x00800114	// 00800100, wbregs names: FPGACTL0
#define	R_CFG_MASK      	0x00800118	// 00800100, wbregs names: FPGAMASK
#define	R_CFG_STAT      	0x0080011c	// 00800100, wbregs names: FPGASTAT
#define	R_CFG_LOUT      	0x00800120	// 00800100, wbregs names: FPGALOUT
#define	R_CFG_COR0      	0x00800124	// 00800100, wbregs names: FPGACOR0
#define	R_CFG_MFWR      	0x00800128	// 00800100, wbregs names: FPGAMFWR
#define	R_CFG_CBC       	0x0080012c	// 00800100, wbregs names: FPGACBC
#define	R_CFG_IDCODE    	0x00800130	// 00800100, wbregs names: FPGAIDCODE
#define	R_CFG_AXSS      	0x00800134	// 00800100, wbregs names: FPGAAXSS
#define	R_CFG_COR1      	0x00800138	// 00800100, wbregs names: FPGACOR1
#define	R_CFG_WBSTAR    	0x00800140	// 00800100, wbregs names: WBSTAR
#define	R_CFG_TIMER     	0x00800144	// 00800100, wbregs names: CFGTIMER
#define	R_CFG_BOOTSTS   	0x00800158	// 00800100, wbregs names: BOOTSTS
#define	R_CFG_CTL1      	0x00800160	// 00800100, wbregs names: FPGACTL1
#define	R_CFG_BSPI      	0x0080017c	// 00800100, wbregs names: FPGABSPI
#define	R_I2CCPU        	0x00800180	// 00800180, wbregs names: I2CCPU, I2CCPU_CTRL, I2CCPUCTRL
#define	R_I2CCPU_OVW    	0x00800184	// 00800180, wbregs names: I2CCPU_OVW, I2CCPU_OVERRIDE
#define	R_I2CCPU_ADDR   	0x00800188	// 00800180, wbregs names: I2CCPU_ADDR, I2CCPU_ADDRESS
#define	R_I2CCPU_CKCOUNT	0x0080018c	// 00800180, wbregs names: I2CCPUCLK, I2CCPU_CKCOUNT
#define	R_BUILDTIME     	0x008001c0	// 008001c0, wbregs names: BUILDTIME
#define	R_GPIO          	0x008001c4	// 008001c4, wbregs names: GPIO, GPI, GPO
#define	R_SIREFCLK      	0x008001c8	// 008001c8, wbregs names: SIREFCLK
#define	R_SPIO          	0x008001cc	// 008001cc, wbregs names: SPIO
#define	R_VERSION       	0x008001d0	// 008001d0, wbregs names: VERSION
#define	R_BKRAM         	0x01000000	// 01000000, wbregs names: RAM
#define	R_FLASH         	0x02000000	// 02000000, wbregs names: FLASH
// ZipCPU control/debug registers
#define	R_ZIPCTRL       	0x04000000	// 04000000, wbregs names: CPU, ZIPCTRL
#define	R_ZIPREGS       	0x04000080	// 04000000, wbregs names: ZIPREGS
#define	R_ZIPS0         	0x04000080	// 04000000, wbregs names: SR0
#define	R_ZIPS1         	0x04000084	// 04000000, wbregs names: SR1
#define	R_ZIPS2         	0x04000088	// 04000000, wbregs names: SR2
#define	R_ZIPS3         	0x0400008c	// 04000000, wbregs names: SR3
#define	R_ZIPS4         	0x04000090	// 04000000, wbregs names: SR4
#define	R_ZIPS5         	0x04000094	// 04000000, wbregs names: SR5
#define	R_ZIPS6         	0x04000098	// 04000000, wbregs names: SR6
#define	R_ZIPS7         	0x0400009c	// 04000000, wbregs names: SR7
#define	R_ZIPS8         	0x040000a0	// 04000000, wbregs names: SR8
#define	R_ZIPS9         	0x040000a4	// 04000000, wbregs names: SR9
#define	R_ZIPS10        	0x040000a8	// 04000000, wbregs names: SR10
#define	R_ZIPS11        	0x040000ac	// 04000000, wbregs names: SR11
#define	R_ZIPS12        	0x040000b0	// 04000000, wbregs names: SR12
#define	R_ZIPSSP        	0x040000b4	// 04000000, wbregs names: SSP, SR13
#define	R_ZIPCC         	0x040000b8	// 04000000, wbregs names: ZIPCC, CC, SCC, SR14
#define	R_ZIPPC         	0x040000bc	// 04000000, wbregs names: ZIPPC, PC, SPC, SR15
#define	R_ZIPUSER       	0x040000c0	// 04000000, wbregs names: ZIPUSER
#define	R_ZIPU0         	0x040000c0	// 04000000, wbregs names: UR0
#define	R_ZIPU1         	0x040000c4	// 04000000, wbregs names: UR1
#define	R_ZIPU2         	0x040000c8	// 04000000, wbregs names: UR2
#define	R_ZIPU3         	0x040000cc	// 04000000, wbregs names: UR3
#define	R_ZIPU4         	0x040000d0	// 04000000, wbregs names: UR4
#define	R_ZIPU5         	0x040000d4	// 04000000, wbregs names: UR5
#define	R_ZIPU6         	0x040000d8	// 04000000, wbregs names: UR6
#define	R_ZIPU7         	0x040000dc	// 04000000, wbregs names: UR7
#define	R_ZIPU8         	0x040000e0	// 04000000, wbregs names: UR8
#define	R_ZIPU9         	0x040000e4	// 04000000, wbregs names: UR9
#define	R_ZIPU10        	0x040000e8	// 04000000, wbregs names: SR10
#define	R_ZIPU11        	0x040000ec	// 04000000, wbregs names: SR11
#define	R_ZIPU12        	0x040000f0	// 04000000, wbregs names: SR12
#define	R_ZIPUSP        	0x040000f4	// 04000000, wbregs names: USP, UR13
#define	R_ZIPUCC        	0x040000f8	// 04000000, wbregs names: ZIPUCC, UCC
#define	R_ZIPUPC        	0x040000fc	// 04000000, wbregs names: ZIPUPC, UPC
#define	R_ZIPSYSTEM     	0x04000100	// 04000000, wbregs names: ZIPSYSTEM, ZIPSYS
#define	R_ZIPPIC        	0x04000100	// 04000000, wbregs names: ZIPPIC
#define	R_ZIPWDOG       	0x04000104	// 04000000, wbregs names: ZIPWDOG
#define	R_ZIPBDOG       	0x04000108	// 04000000, wbregs names: ZIPBDOG
#define	R_ZIPAPIC       	0x0400010c	// 04000000, wbregs names: ZIPAPIC
#define	R_ZIPTIMA       	0x04000110	// 04000000, wbregs names: ZIPTIMA
#define	R_ZIPTIMB       	0x04000114	// 04000000, wbregs names: ZIPTIMB
#define	R_ZIPTIMC       	0x04000118	// 04000000, wbregs names: ZIPTIMC
#define	R_ZIPJIFF       	0x0400011c	// 04000000, wbregs names: ZIPJIFF
#define	R_ZIPMTASK      	0x04000120	// 04000000, wbregs names: ZIPMTASK
#define	R_ZIPMMSTL      	0x04000124	// 04000000, wbregs names: ZIPMMSTL
#define	R_ZIPMPSTL      	0x04000128	// 04000000, wbregs names: ZIPMPSTL
#define	R_ZIPMINSN      	0x0400012c	// 04000000, wbregs names: ZIPMINSN
#define	R_ZIPUTASK      	0x04000130	// 04000000, wbregs names: ZIPUTASK
#define	R_ZIPUMSTL      	0x04000134	// 04000000, wbregs names: ZIPUMSTL
#define	R_ZIPUPSTL      	0x04000138	// 04000000, wbregs names: ZIPUPSTL
#define	R_ZIPUINSN      	0x0400013c	// 04000000, wbregs names: ZIPUINSN
#define	R_ZIPDMAC       	0x04000140	// 04000000, wbregs names: ZIPDMAC


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
#define	BAUDRATE	1000000
// @REGDEFS.H.DEFNS for peripherals
#define	FLASHBASE	0x02000000
#define	FLASHLEN	0x02000000
#define	FLASHLGLEN	25
//
#define	FLASH_RDDELAY	1
#define	FLASH_NDUMMY	6
//
#define	BKRAMBASE	0x01000000
#define	BKRAMLEN	0x00040000
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters
// @REGDEFS.H.INSERT for peripherals
// Flash control constants
#define	QSPI_FLASH	// This core and hardware support a Quad SPI flash
#define	SZPAGEB		256			// Bytes in a page
#define	PGLENB		256
#define	SZPAGEW		64			// 32b words in a page
#define	PGLENW		64
#define	NPAGES		256			// Pages per sector
#define	SECTORSZB	(NPAGES * SZPAGEB)	// In bytes, not words!!
#define	SECTORSZW	(NPAGES * SZPAGEW)	// In words
#define	NSECTORS	((1 << FLASHLGLEN)/SECTORSZB)
#define	SECTOROF(A)	((A) & (-1<<16))
#define	SUBSECTOROF(A)	((A) & (-1<<12))
#define	PAGEOF(A)	((A) & (-1<<8))
#define	FLASHSZ		FLASHLEN

////////////////////////////////////////////////////////////////////////////////
//
// ZipCPU register definitions
// {{{

#define	CPU_GO		0x0000
#define	CPU_HALT	0x0001
#define	CPU_STALL	0x0002
#define	CPU_STEP	0x0004
#define	CPU_RESET	0x0008
#define	CPU_CLRCACHE	0x0010
// (Reserved)		0x00e0
#define	CPU_SLEEPING	0x0100
#define	CPU_GIE		0x0200
#define	CPU_INT		0x0400
#define	CPU_BREAK	0x0800
#define	CPU_EXINT	0xfffff000
//
#define	CPU_sR0		0x0020
#define	CPU_sSP		0x002d
#define	CPU_sCC		0x002e
#define	CPU_sPC		0x002f
#define	CPU_uR0		0x0030
#define	CPU_uSP		0x003d
#define	CPU_uCC		0x003e
#define	CPU_uPC		0x003f

#ifdef	BKROM_ACCESS
#define	RESET_ADDRESS	@$[0x%08x](bkrom.REGBASE)
#else
#ifdef	FLASH_ACCESS
#define	RESET_ADDRESS	0x02e00000
#else
#define	RESET_ADDRESS	0x01000000
#endif	// FLASH_ACCESS
#endif	// BKROM_ACCESS
// }}}
// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
