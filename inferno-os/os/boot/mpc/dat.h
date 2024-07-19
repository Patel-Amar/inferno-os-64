typedef struct Alarm Alarm;
typedef struct Block Block;
typedef struct IMM IMM;
typedef struct Queue Queue;

typedef struct List {
	void	*next;
} List;

typedef struct {
	int	fake;
	int	pri;
} Lock;
#define	lock(x)
#define	unlock(x)

struct Alarm {
	List;
	int	busy;
	long	dt;
	void	(*f)(Alarm*);
	void	*arg;
};

enum {
	Eaddrlen	= 6,
	ETHERMINTU	= 60,		/* minimum transmit size */
	ETHERMAXTU	= 1514,		/* maximum transmit size */
	ETHERHDRSIZE	= 14,		/* size of an ethernet header */

	MaxEther	= 4,
};

typedef struct {
	uchar	d[Eaddrlen];
	uchar	s[Eaddrlen];
	uchar	type[2];
	uchar	data[1500];
	uchar	crc[4];
} Etherpkt;

extern uchar broadcast[Eaddrlen];

enum {
	Npart		= 20+2,		/* 8 sub partitions, disk, and partition */
	Maxxfer		= 16*1024,	/* maximum transfer size/cmd */
};

typedef struct {
	ulong	start;
	ulong	end;
	char	name[NAMELEN+1];
} Partition;

typedef struct {
	int	online;
	int	npart;		/* number of real partitions */
	Partition p[Npart];
	ulong	offset;
	Partition *current;	/* current partition */

	ulong	cap;		/* total bytes */
	int	bytes;		/* bytes/sector */
	int	sectors;	/* sectors/track */
	int	heads;		/* heads/cyl */
	long	cyl;		/* cylinders/drive */

	char	lba;		/* true if drive has logical block addressing */
	char	multi;		/* non-zero if drive does multiple block xfers */
} Disc;

enum {
	ScsiTestunit	= 0x00,
	ScsiExtsens	= 0x03,
	ScsiInquiry	= 0x12,
	ScsiModesense	= 0x1a,
	ScsiStartunit	= 0x1B,
	ScsiStopunit	= 0x1B,
	ScsiGetcap	= 0x25,
	ScsiRead	= 0x08,
	ScsiWrite	= 0x0a,
	ScsiExtread	= 0x28,
	ScsiExtwrite	= 0x2a,

	/* data direction */
	ScsiIn		= 1,
	ScsiOut		= 0,
};

typedef struct Scsibuf Scsibuf;
typedef struct Scsibuf {
	void*		virt;
	void*		phys;
	Scsibuf*	next;
};

typedef struct Scsidata {
	uchar*		base;
	uchar*		lim;
	uchar*		ptr;
} Scsidata;

typedef struct Ureg Ureg;

typedef struct Scsi {
	ulong		pid;
	ushort		target;
	ushort		lun;
	ushort		rflag;
	ushort		status;
	Scsidata 	cmd;
	Scsidata 	data;
	Scsibuf*	b;
	uchar*		save;
	uchar		cmdblk[16];
} Scsi;

typedef struct Segdesc {
	ulong	d0;
	ulong	d1;
} Segdesc;

typedef struct Mach {
	ulong	ticks;			/* of the clock since boot time */
	ulong	delayloop;
	long	cpuhz;	/* general system clock (cycles) */
	long	clockgen;	/* clock generator frequency (cycles) */
	ulong	cpupvr;	/* cpu type in processor version register */
	ulong	cputype;	/* cpu variant in BCD (eg, 0x823xx) */
	void*	alarm;			/* alarms bound to this clock */
	ulong*	bcsr;
	IMM*	iomem;
} Mach;

/* Mach.cputype */
#define MPCREV(x)	((x) & 0xFF)
#define MPCMODEL(x)	(((x)>>8) & 0xFFF)
#define MPCFAMILY(x)	(((x)>>24) & 0x0F)


extern Mach *m;

#define Q_MAGIC		((((4*21)+0)*21)+7)

typedef struct Exec Exec;
struct	Exec
{
	uchar	magic[4];		/* magic number */
	uchar	text[4];	 	/* size of text segment */
	uchar	data[4];	 	/* size of initialized data */
	uchar	bss[4];	  		/* size of uninitialized data */
	uchar	syms[4];	 	/* size of symbol table */
	uchar	entry[4];	 	/* entry point */
	uchar	spsz[4];		/* size of sp/pc offset table */
	uchar	pcsz[4];		/* size of pc/line number table */
};

/*
 *  bootline passed by boot program
 */
#define BOOTLINE ((char *)0x200000-150)

/*
 * Where we leave configuration info.
 */
#define BOOTARGS	((char*)(0x200000))
#define	BOOTARGSLEN	1024
#define	MAXCONF		32

/*
 *  a parsed plan9.ini line
 */
#define ISAOPTLEN	16
#define NISAOPT		8

typedef struct  ISAConf {
	char	type[NAMELEN];
	ulong	port;
	ulong	irq;
	ulong	mem;
	ulong	size;
	uchar	ea[6];

	int	nopt;
	char	opt[NISAOPT][ISAOPTLEN];
} ISAConf;

typedef struct {
	int	size;
	ulong	addr;
} Map;

typedef struct {
	char*	name;
	Map*	map;
	Map*	mapend;

	Lock;
} RMap;

typedef struct PCIcfg PCIcfg;

extern	uchar*	vgamem;

struct Block {
	uchar	*rp;
	uchar	*wp;
	uchar	*lim;
	uchar	*data;
	Block*	next;
	ulong	magic;
};
#define	BLEN(b)	((b)->wp-(b)->rp)

typedef struct QLock {
	int	dummy;
} QLock;
