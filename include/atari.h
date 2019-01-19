/*****************************************************************************/
/*                                                                           */
/*                                 atari.h                                   */
/*                                                                           */
/*                      Atari system specific definitions                    */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2000-2019 Mark Keates <markk@dendrite.co.uk>                          */
/*               Freddy Offenga <taf_offenga@yahoo.com>                      */
/*               Christian Groessler <chris@groessler.org>                   */
/*               Bill Kendrick <nbs@sonic.net>                               */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef _ATARI_H
#define _ATARI_H



/* Check for errors */
#if !defined(__ATARI__)
#  error This module may only be used when compiling for the Atari!
#endif



/*****************************************************************************/
/* Character codes                                                           */
/*****************************************************************************/

#define CH_DELCHR       0xFE   /* delete char under the cursor */
#define CH_ENTER        0x9B
#define CH_ESC          0x1B
#define CH_CURS_UP      28
#define CH_CURS_DOWN    29
#define CH_CURS_LEFT    30
#define CH_CURS_RIGHT   31

#define CH_TAB          0x7F   /* tabulator */
#define CH_EOL          0x9B   /* end-of-line marker */
#define CH_CLR          0x7D   /* clear screen */
#define CH_BEL          0xFD   /* bell */
#define CH_DEL          0x7E   /* back space (delete char to the left) */
#define CH_RUBOUT       0x7E   /* back space (old, deprecated) */
#define CH_DELLINE      0x9C   /* delete line */
#define CH_INSLINE      0x9D   /* insert line */

/* These are defined to be Atari + NumberKey */
#define CH_F1           177
#define CH_F2           178
#define CH_F3           179
#define CH_F4           180
#define CH_F5           181
#define CH_F6           182
#define CH_F7           183
#define CH_F8           184
#define CH_F9           185
#define CH_F10          176

#define CH_ULCORNER     0x11
#define CH_URCORNER     0x05
#define CH_LLCORNER     0x1A
#define CH_LRCORNER     0x03
#define CH_TTEE         0x17
#define CH_BTEE         0x18
#define CH_LTEE         0x01
#define CH_RTEE         0x04
#define CH_CROSS        0x13
#define CH_HLINE        0x12
#define CH_VLINE        0x7C


/*****************************************************************************/
/* Masks for joy_read                                                        */
/*****************************************************************************/

#define JOY_UP_MASK     0x01
#define JOY_DOWN_MASK   0x02
#define JOY_LEFT_MASK   0x04
#define JOY_RIGHT_MASK  0x08
#define JOY_BTN_1_MASK  0x10

#define JOY_FIRE_MASK   JOY_BTN_1_MASK
#define JOY_FIRE(v)     ((v) & JOY_FIRE_MASK)


/*****************************************************************************/
/* Keyboard values returned by kbcode / CH                                   */
/*****************************************************************************/

#define KEY_NONE        ((unsigned char) 0xFF)

#define KEY_0           ((unsigned char) 0x32)
#define KEY_1           ((unsigned char) 0x1F)
#define KEY_2           ((unsigned char) 0x1E)
#define KEY_3           ((unsigned char) 0x1A)
#define KEY_4           ((unsigned char) 0x18)
#define KEY_5           ((unsigned char) 0x1D)
#define KEY_6           ((unsigned char) 0x1B)
#define KEY_7           ((unsigned char) 0x33)
#define KEY_8           ((unsigned char) 0x35)
#define KEY_9           ((unsigned char) 0x30)

#define KEY_A           ((unsigned char) 0x3F)
#define KEY_B           ((unsigned char) 0x15)
#define KEY_C           ((unsigned char) 0x12)
#define KEY_D           ((unsigned char) 0x3A)
#define KEY_E           ((unsigned char) 0x2A)
#define KEY_F           ((unsigned char) 0x38)
#define KEY_G           ((unsigned char) 0x3D)
#define KEY_H           ((unsigned char) 0x39)
#define KEY_I           ((unsigned char) 0x0D)
#define KEY_J           ((unsigned char) 0x01)
#define KEY_K           ((unsigned char) 0x05)
#define KEY_L           ((unsigned char) 0x00)
#define KEY_M           ((unsigned char) 0x25)
#define KEY_N           ((unsigned char) 0x23)
#define KEY_O           ((unsigned char) 0x08)
#define KEY_P           ((unsigned char) 0x0A)
#define KEY_Q           ((unsigned char) 0x2F)
#define KEY_R           ((unsigned char) 0x28)
#define KEY_S           ((unsigned char) 0x3E)
#define KEY_T           ((unsigned char) 0x2D)
#define KEY_U           ((unsigned char) 0x0B)
#define KEY_V           ((unsigned char) 0x10)
#define KEY_W           ((unsigned char) 0x2E)
#define KEY_X           ((unsigned char) 0x16)
#define KEY_Y           ((unsigned char) 0x2B)
#define KEY_Z           ((unsigned char) 0x17)

#define KEY_COMMA       ((unsigned char) 0x20)
#define KEY_PERIOD      ((unsigned char) 0x22)
#define KEY_SLASH       ((unsigned char) 0x26)
#define KEY_SEMICOLON   ((unsigned char) 0x02)
#define KEY_PLUS        ((unsigned char) 0x06)
#define KEY_ASTERISK    ((unsigned char) 0x07)
#define KEY_DASH        ((unsigned char) 0x0E)
#define KEY_EQUALS      ((unsigned char) 0x0F)
#define KEY_LESSTHAN    ((unsigned char) 0x36)
#define KEY_GREATERTHAN ((unsigned char) 0x37)

#define KEY_ESC         ((unsigned char) 0x1C)
#define KEY_TAB         ((unsigned char) 0x2C)
#define KEY_SPACE       ((unsigned char) 0x21)
#define KEY_RETURN      ((unsigned char) 0x0C)
#define KEY_DELETE      ((unsigned char) 0x34)
#define KEY_CAPS        ((unsigned char) 0x3C)
#define KEY_INVERSE     ((unsigned char) 0x27)
#define KEY_HELP        ((unsigned char) 0x11)

/* Function keys only exist on the 1200XL model. */
#define KEY_F1          ((unsigned char) 0x03)
#define KEY_F2          ((unsigned char) 0x04)
#define KEY_F3          ((unsigned char) 0x13)
#define KEY_F4          ((unsigned char) 0x14)

/* N.B. Cannot read Ctrl key alone */
#define KEY_CTRL        ((unsigned char) 0x80)

/* N.B. Cannot read Shift key alone via KBCODE;
** instead, check "Shfit key press" bit of SKSTAT register.
** Also, no way to tell left Shift from right Shift.
*/
#define KEY_SHIFT       ((unsigned char) 0x40)


/* Composed keys
** (Other combinations are possible, including Shift+Ctrl+key,
** though not all such combinations are available.)
*/

#define KEY_EXCLAMATIONMARK     (KEY_1 | KEY_SHIFT)
#define KEY_QUOTE               (KEY_2 | KEY_SHIFT)
#define KEY_HASH                (KEY_3 | KEY_SHIFT)
#define KEY_DOLLAR              (KEY_4 | KEY_SHIFT)
#define KEY_PERCENT             (KEY_5 | KEY_SHIFT)
#define KEY_AMPERSAND           (KEY_6 | KEY_SHIFT)
#define KEY_APOSTROPHE          (KEY_7 | KEY_SHIFT)
#define KEY_AT                  (KEY_8 | KEY_SHIFT)
#define KEY_OPENINGPARAN        (KEY_9 | KEY_SHIFT)
#define KEY_CLOSINGPARAN        (KEY_0 | KEY_SHIFT)
#define KEY_UNDERLINE           (KEY_DASH | KEY_SHIFT)
#define KEY_BAR                 (KEY_EQUALS | KEY_SHIFT)
#define KEY_COLON               (KEY_SEMICOLON | KEY_SHIFT)
#define KEY_BACKSLASH           (KEY_PLUS | KEY_SHIFT)
#define KEY_CIRCUMFLEX          (KEY_ASTERISK | KEY_SHIFT)
#define KEY_OPENINGBRACKET      (KEY_COMMA | KEY_SHIFT)
#define KEY_CLOSINGBRACKET      (KEY_PERIOD | KEY_SHIFT)
#define KEY_QUESTIONMARK        (KEY_SLASH | KEY_SHIFT)
#define KEY_CLEAR               (KEY_LESSTHAN | KEY_SHIFT)
#define KEY_INSERT              (KEY_GREATERTHAN | KEY_SHIFT)

#define KEY_UP      (KEY_UNDERLINE | KEY_CTRL)
#define KEY_DOWN    (KEY_EQUALS | KEY_CTRL)
#define KEY_LEFT    (KEY_PLUS | KEY_CTRL)
#define KEY_RIGHT   (KEY_ASTERISK | KEY_CTRL)


/*****************************************************************************/
/* Color register functions                                                  */
/*****************************************************************************/

extern void __fastcall__ _setcolor     (unsigned char color_reg, unsigned char hue, unsigned char luminace);
extern void __fastcall__ _setcolor_low (unsigned char color_reg, unsigned char color_value);
extern unsigned char __fastcall__ _getcolor (unsigned char color_reg);

/*****************************************************************************/
/* Other screen functions                                                    */
/*****************************************************************************/

extern int  __fastcall__ _graphics (unsigned char mode); /* mode value same as in BASIC */
extern void __fastcall__ _scroll (signed char numlines);
                                          /* numlines > 0  scrolls up */
                                          /* numlines < 0  scrolls down */


/*****************************************************************************/
/* Misc. functions                                                           */
/*****************************************************************************/

extern unsigned char get_ostype(void);       /* get ROM version */
extern unsigned char get_tv(void);           /* get TV system */
extern void _save_vecs(void);                /* save system vectors */
extern void _rest_vecs(void);                /* restore system vectors */
extern char *_getdefdev(void);               /* get default floppy device */
extern unsigned char _is_cmdline_dos(void);  /* does DOS support command lines */


/*****************************************************************************/
/* Global variables                                                          */
/*****************************************************************************/

extern unsigned char _dos_type;         /* the DOS flavour */
#ifndef __ATARIXL__
extern void atr130_emd[];
extern void atrstd_joy[];               /* referred to by joy_static_stddrv[] */
extern void atrmj8_joy[];
extern void atrjoy_mou[];
extern void atrst_mou[];                /* referred to by mouse_static_stddrv[] */
extern void atrami_mou[];
extern void atrtrk_mou[];
extern void atrtt_mou[];
extern void atrrdev_ser[];
extern void atr3_tgi[];
extern void atr4_tgi[];
extern void atr5_tgi[];
extern void atr6_tgi[];
extern void atr7_tgi[];
extern void atr8_tgi[];                 /* referred to by tgi_static_stddrv[] */
extern void atr8p2_tgi[];
extern void atr9_tgi[];
extern void atr9p2_tgi[];
extern void atr10_tgi[];
extern void atr10p2_tgi[];
extern void atr11_tgi[];
extern void atr14_tgi[];
extern void atr15_tgi[];
extern void atr15p2_tgi[];
#else
extern void atrx130_emd[];
extern void atrxstd_joy[];              /* referred to by joy_static_stddrv[] */
extern void atrxmj8_joy[];
extern void atrxjoy_mou[];
extern void atrxst_mou[];               /* referred to by mouse_static_stddrv[] */
extern void atrxami_mou[];
extern void atrxtrk_mou[];
extern void atrxtt_mou[];
extern void atrxrdev_ser[];
extern void atrx3_tgi[];
extern void atrx4_tgi[];
extern void atrx5_tgi[];
extern void atrx6_tgi[];
extern void atrx7_tgi[];
extern void atrx8_tgi[];                /* referred to by tgi_static_stddrv[] */
extern void atrx8p2_tgi[];
extern void atrx9_tgi[];
extern void atrx9p2_tgi[];
extern void atrx10_tgi[];
extern void atrx10p2_tgi[];
extern void atrx11_tgi[];
extern void atrx14_tgi[];
extern void atrx15_tgi[];
extern void atrx15p2_tgi[];
#endif


/*****************************************************************************/
/* get_ostype return value defines (for explanation, see ostype.s)           */
/*****************************************************************************/

/* masks */
#define AT_OS_TYPE_MAIN  7
#define AT_OS_TYPE_MINOR (7 << 3)
/* AT_OS_TYPE_MAIN values */
#define AT_OS_UNKNOWN  0
#define AT_OS_400800   1
#define AT_OS_1200XL   2
#define AT_OS_XLXE     3
/* AS_OS_TYPE_MINOR values */
/* for 400/800 remember this are the ROM versions */
/* to check whether the hw is PAL or NTSC, use get_tv() */
#define AT_OS_400800PAL_A  1
#define AT_OS_400800PAL_B  2
#define AT_OS_400800NTSC_A 1
#define AT_OS_400800NTSC_B 2
#define AT_OS_1200_10  1
#define AT_OS_1200_11  2
#define AT_OS_XLXE_1   1
#define AT_OS_XLXE_2   2
#define AT_OS_XLXE_3   3
#define AT_OS_XLXE_4   4


/*****************************************************************************/
/* get_tv return values                                                      */
/*****************************************************************************/

#define AT_NTSC     0
#define AT_PAL      1


/*****************************************************************************/
/* valid _dos_type values                                                    */
/*****************************************************************************/

#define SPARTADOS   0
#define REALDOS     1
#define BWDOS       2
#define OSADOS      3
#define XDOS        4
#define ATARIDOS    5
#define MYDOS       6
#define NODOS       255


/*****************************************************************************/
/* Define hardware and where they're mapped in memory                        */
/*****************************************************************************/

#include <_gtia.h>
#define GTIA_READ  (*(struct __gtia_read*)0xD000)
#define GTIA_WRITE (*(struct __gtia_write*)0xD000)

#include <_pbi.h>

#include <_pokey.h>
#define POKEY_READ  (*(struct __pokey_read*)0xD200)
#define POKEY_WRITE (*(struct __pokey_write*)0xD200)

#include <_pia.h>
#define PIA (*(struct __pia*)0xD300)

#include <_antic.h>
#define ANTIC (*(struct __antic*)0xD400)


/*****************************************************************************/
/* Shadow registers for hardware registers                                   */
/*****************************************************************************/

/* GTIA shadows */
#define STRIG0 (*(unsigned char*)0x284) /* TRIG0 */
#define STRIG1 (*(unsigned char*)0x285) /* TRIG1 */
#define STRIG2 (*(unsigned char*)0x286) /* TRIG2 */
#define STRIG3 (*(unsigned char*)0x287) /* TRIG3 */
#define PCOLR0 (*(unsigned char*)0x2C0) /* COLPM0 */
#define PCOLR1 (*(unsigned char*)0x2C1) /* COLPM1 */
#define PCOLR2 (*(unsigned char*)0x2C2) /* COLPM2 */
#define PCOLR3 (*(unsigned char*)0x2C3) /* COLPM3 */
#define COLOR0 (*(unsigned char*)0x2C4) /* COLPF0 */
#define COLOR1 (*(unsigned char*)0x2C5) /* COLPF1 */
#define COLOR2 (*(unsigned char*)0x2C6) /* COLPF2 */
#define COLOR3 (*(unsigned char*)0x2C7) /* COLPF3 */
#define COLOR4 (*(unsigned char*)0x2C8) /* COLPBK */
#define GPRIOR (*(unsigned char*)0x264) /* PRIOR */

/* ANTIC shadows */
#define SDMCTL (*(unsigned char*)0x22F) /* DMACTL */
#define CHACT  (*(unsigned char*)0x2F3) /* CHACTL */
#define SDLSTL (*(unsigned char*)0x230) /* DLISTL */
#define SDLSTH (*(unsigned char*)0x231) /* DLISTH */
#define SDLST  (*(unsigned int*)0x230)  /* DLISTL/H together */
#define CHBAS  (*(unsigned char*)0x2F4) /* CHBASE */
#define LPENH  (*(unsigned char*)0x233) /* PENH */
#define LPENV  (*(unsigned char*)0x234) /* PENV */

/* POKEY shadows */
#define PADDL0 (*(unsigned char*)0x270) /* POT0 */
#define PADDL1 (*(unsigned char*)0x271) /* POT1 */
#define PADDL2 (*(unsigned char*)0x272) /* POT2 */
#define PADDL3 (*(unsigned char*)0x273) /* POT3 */
#define PADDL4 (*(unsigned char*)0x274) /* POT4 */
#define PADDL5 (*(unsigned char*)0x275) /* POT5 */
#define PADDL6 (*(unsigned char*)0x276) /* POT6 */
#define PADDL7 (*(unsigned char*)0x277) /* POT7 */
#define CH     (*(unsigned char*)0x2FC) /* KBCODE */
#define POKMSK (*(unsigned char*)0x10)  /* IRQEN */
#define SSKCTL (*(unsigned char*)0x232) /* SKCTL */

/* PIA shadows */
#define STICK0 (*(unsigned char*)0x278) /* PORTA for controller port 1 */
#define STICK1 (*(unsigned char*)0x279) /* PORTA for controller port 2 */
#define STICK2 (*(unsigned char*)0x27A) /* PORTB for controller port 3 */
#define STICK3 (*(unsigned char*)0x27B) /* PORTB for controller port 4 */
#define PTRIG0 (*(unsigned char*)0x27C) /* PORTA for controller port 1, paddle 1 */
#define PTRIG1 (*(unsigned char*)0x27D) /* PORTA for controller port 1, paddle 2 */
#define PTRIG2 (*(unsigned char*)0x27E) /* PORTA for controller port 1, paddle 3 */
#define PTRIG3 (*(unsigned char*)0x27F) /* PORTA for controller port 1, paddle 4 */
#define PTRIG4 (*(unsigned char*)0x280) /* PORTA for controller port 2, paddle 5 */
#define PTRIG5 (*(unsigned char*)0x281) /* PORTA for controller port 2, paddle 6 */
#define PTRIG6 (*(unsigned char*)0x282) /* PORTA for controller port 2, paddle 7 */
#define PTRIG7 (*(unsigned char*)0x283) /* PORTA for controller port 2, paddle 8 */


/*****************************************************************************/
/* Device control block                                                      */
/*****************************************************************************/

struct __dcb {
    unsigned char device;     /* device id */
    unsigned char unit;       /* unit number */
    unsigned char command;    /* command */
    unsigned char status;     /* command type / status return */
    void          *buffer;    /* pointer to buffer */
    unsigned char timeout;    /* device timeout in seconds */
    unsigned char unused;
    unsigned int  xfersize;   /* # of bytes to transfer */
    unsigned char aux1;       /* 1st command auxiliary byte */
    unsigned char aux2;       /* 2nd command auxiliary byte */
};
#define DCB (*(struct __dcb *)0x300)


/*****************************************************************************/
/* I/O control block                                                         */
/*****************************************************************************/

struct __iocb {
    unsigned char handler;    /* ICHIDZ - handler index number (0xff denotes free) */
    unsigned char drive;      /* ICDNOZ - device number (drive) */
    unsigned char command;    /* ICCOMZ - command */
    unsigned char status;     /* ICSTAZ - status of last operation */
    void          *buffer;    /* ICBALZ/HZ - pointer to buffer */
    void          *put_byte;  /* ICPTLZ/HZ - pointer to device's PUT BYTE routine */
    unsigned int  buflen;     /* ICBLLZ/HZ - length of buffer */
    unsigned char aux1;       /* ICAX1Z - 1st auxiliary byte */
    unsigned char aux2;       /* ICAX2Z - 2nd auxiliary byte */
    unsigned char aux3;       /* ICAX3Z - 3rd auxiliary byte */
    unsigned char aux4;       /* ICAX4Z - 4th auxiliary byte */
    unsigned char aux5;       /* ICAX5Z - 5th auxiliary byte */
    unsigned char spare;      /* ICAX6Z aka CIOCHR - spare byte */
};
#define ZIOCB (*(struct __iocb *)0x20)  /* zero page IOCB */
#define IOCB (*(struct __iocb *)0x340)  /* system IOCB buffers (IOCB0 thru IOCB7) */

/* IOCB Command Codes */
#define IOCB_OPEN        0x03  /* open */
#define IOCB_GETREC      0x05  /* get record */
#define IOCB_GETCHR      0x07  /* get character(s) */
#define IOCB_PUTREC      0x09  /* put record */
#define IOCB_PUTCHR      0x0B  /* put character(s) */
#define IOCB_CLOSE       0x0C  /* close */
#define IOCB_STATIS      0x0D  /* status */
#define IOCB_SPECIL      0x0E  /* special */
#define IOCB_DRAWLN      0x11  /* draw line */
#define IOCB_FILLIN      0x12  /* draw line with right fill */
#define IOCB_RENAME      0x20  /* rename disk file */
#define IOCB_DELETE      0x21  /* delete disk file */
#define IOCB_LOCKFL      0x23  /* lock file (set to read-only) */
#define IOCB_UNLOCK      0x24  /* unlock file */
#define IOCB_POINT       0x25  /* point sector */
#define IOCB_NOTE        0x26  /* note sector */
#define IOCB_GETFL       0x27  /* get file length */
#define IOCB_CHDIR_MYDOS 0x29  /* change directory (MyDOS) */
#define IOCB_MKDIR       0x2A  /* make directory (MyDOS/SpartaDOS) */
#define IOCB_RMDIR       0x2B  /* remove directory (SpartaDOS) */
#define IOCB_CHDIR_SPDOS 0x2C  /* change directory (SpartaDOS) */
#define IOCB_GETCWD      0x30  /* get current directory (MyDOS/SpartaDOS) */
#define IOCB_FORMAT      0xFE  /* format */


/*****************************************************************************/
/* Other Atari 8-bit OS Page 0 addresses                                     */
/*****************************************************************************/

/* Seems to be used to store VBLANK timer */
#define LINZBS (*(unsigned int*)0x00)

/* Cassette initialization vector
** JSR through here if the cassette boot was successful.
*/
#define CASINI (*(unsigned int*)0x02)

/* RAM pointer for the memory test used on powerup. Also used to
** store the disk boot address--normally 1798 ($706)--for the
** boot continuation routine.
*/
#define RAMLO (*(unsigned int*)0x04)

/* Temporary Register for RAM size; used during powerup
** sequence to test RAM availability. This value is then moved to
** RAMTOP, location 106 ($6A). Reads one when the BASIC or the
** A (left) cartridge is plugged in.
*/
#define TRAMSZ (*(unsigned char*)0x06)

/* RAM test data register. Reads one when the B or the right
** cartridge is inserted.
*/
#define TSTDAT (*(unsigned char*)0x07)

/* Warmstart flag */
#define WARMST (*(unsigned char*)0x08)
#define WARMST_POWERUP 0x00
#define WARMST_NORMAL  0xff

/* Boot flag success indicator */
#define BOOTQ /* "BOOT?" */ (*(unsigned char*)0x09)
#define BOOTQ_NO_DEVICE 0
#define BOOTQ_DISK      1
#define BOOTQ_CASSETTE  2

/* Start vector for disk (or non-cartridge) software. */
#define DOSVEC (*(unsigned int*)0x0A)

/* Initialization address for the disk boot. */
#define DOSINI (*(unsigned int*)0x0C)

/* Applications memory high limit and pointer. */
#define APPMHI (*(unsigned int*)0x0E)


/* Note: Locations 0x10 through 0x7F are cleared on either cold- or warmstart. */

/* POKMSK 0x10; defined above */

/* BREAK key status */
#define BRKKEY (*(unsigned char*)0x11)
#define BRKKEY_PRESSED  0
#define BRKKEY_RELEASED 1

/* Internal realtime clock. Increments every stage one VBLANK interrupt */
#define RTCLOK_HI (*(unsigned char*)0x12)
#define RTCLOK_MD (*(unsigned char*)0x13)
#define RTCLOK_LO (*(unsigned char*)0x14)
#define _rtclok (unsigned long)((((unsigned long)RTCLOK_HI) << 16) | (((unsigned int)RTCLOK_MD) << 8) | RTCLOK_LO)

/* Indirect buffer address register (page zero).
** Temporary pointer to the current disk buffer.
*/
#define BUFADR (*(unsigned int*)0x15)

/* Command for CIO vector. */
#define ICCOMT (*(unsigned char*)(0x17)

/* FIXME - 0x18 thru 0x1F worth including? -bjk 2019.02.16 */

/* Internal status storage. The SIO routines in ROM use this byte to
** store the status of the current SIO operation.
*/
#define STATUS (*(unsigned char*)(0x30))

/* Data frame checksum used by SIO */
#define CHKSUM (*(unsigned char*)(0x31))

/* Pointer to the data buffer, the contents of which are transmitted
** during an I/O operation, used by SIO and the Device Control Block (DCB);
** points to the byte to send or receive. (BUFRLO/HI)
*/
#define BUFR (*(unsigned int*)(0x32))

/* Next byte past the end of the SIO and DCB data buffer (above). (BFENLO/HI) */
#define BFEN (*(unsigned int*)(0x34))

/* Number of command frame retries */
#define CRETRY (*(unsigned char*)(0x36))

/* Number of device retries */
#define DRETRY (*(unsigned char*)(0x37))

/* Data buffer full flag (0xff indicates full) */
#define BUFRFL (*(unsigned char*)(0x38))

/* Receive done flag (0xff indicates done) */
#define RECVDN (*(unsigned char*)(0x39))

/* Transmission done flag (0xff indicates done) */
#define XMTDON (*(unsigned char*)(0x3a))

/* Checksum sent flag (0xff indicates sent) */
#define CHKSNT (*(unsigned char*)(0x3b))

/* Flag for "no checksum follows data." (non-zero indicates no checksum follows) */
#define NOCKSM (*(unsigned char*)(0x3c))

/* Cassette buffer pointer */
#define BPTR (*(unsigned char*)(0x3d))

/* Inter-record gap type between cassette records */
#define FTYPE (*(unsigned char*)(0x3e))

/* Cassette end of file flag (non-zero indicates EOF reached) */
#define FEOF (*(unsigned char*)(0x3f))

/* Beep count retain register. Counts the number of beeps required
** by the cassette handler during the OPEN command for play or
** record operations; one beep for play, two for record.
*/
#define FREQ (*(unsigned char*)(0x40))

/* Noisy I/O flag used by SIO to signal the beeping heard during
** disk and cassette I/O. (Set to zero for silence)
*/
#define SOUNDR (*(unsigned char*)(0x41))

/* Critical I/O region flag; defines the current operation as a time-
** critical section when the value here is non-zero (causes only
** stage one VBLANK to be processed)
*/
#define CRITIC (*(unsigned char*)(0x42))

/* FIXME - 0x43 thru 0x48 worth including? -bjk 2019.02.16 */

/* Disk I/O error number */
#define ERRNO (*(unsigned char*)(0x49))

/* FIXME - 0x4a thru 0x4b worth including? -bjk 2019.02.16 */

/* Display status and keyboard register used by the display handler.
** Also used to indicate memory is too small for the screen mode,
** cursor out of range error, and the BREAK abort status.
*/
#define DSTAT (*(unsigned char*)(0x4c))

/* Attract mode timer and flag (rotates colors via shadow registers,
** to avoid screen burn-in, once it reaches 127). Reset to zero by
** keypresses.
*/
#define ATRACT (*(unsigned char*)(0x4d))

/* Dark attract mask; set to 254 (0xfe) for normal brightness when;
** set to 246 (0xd6) to guarantee screen luminance not exceeding 50% .
*/
#define DRKMSK (*(unsigned char*)(0x4e))

/* FIXME - 0x4f thru 0x51 worth including? -bjk 2019.02.16 */

/* Bytes 0x50 to 0x7a) are used by the screen editor and display handler */

/* Column of the left margin of text (GRAPHICS 0 or text window only);
** 0 is leftmost; defaults to 2
*/
#define LMARGN (*(unsigned char*)(0x52))

/* Column of the left margin of text (GRAPHICS 0 or text window only);
** 39 is rightmost & default
*/
#define RMARGN (*(unsigned char*)(0x53))

/* Current graphics or text screen cursor row, value ranging from zero to 191 */
#define ROWCRS (*(unsigned char*)(0x54))

/* Current graphics or text screen cursor column, value ranging from zero to 319 */
#define COLCRS (*(unsigned int*)(0x55))


/*****************************************************************************/
/* Other Atari 8-bit OS Page 2 addresses                                     */
/*****************************************************************************/
/* FIXME */

/*****************************************************************************/
/* Other Atari 8-bit OS Page 3 addresses                                     */
/*****************************************************************************/
/* FIXME */

/*****************************************************************************/
/* Other Atari 8-bit OS Page 4 addresses                                     */
/*****************************************************************************/
/* FIXME */


/* End of atari.h */
#endif
