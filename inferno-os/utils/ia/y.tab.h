
typedef union 
{
	Sym	*sym;
	vlong	lval;
	double	dval;
	char	sval[8];
	Gen	gen;
}	YYSTYPE;
extern	YYSTYPE	yylval;
#define	LADD	57346
#define	LMUL	57347
#define	LBEQ	57348
#define	LBR	57349
#define	LBRET	57350
#define	LCALL	57351
#define	LFLT2	57352
#define	LFLT3	57353
#define	LMOVB	57354
#define	LMOVBU	57355
#define	LMOVW	57356
#define	LMOVF	57357
#define	LLUI	57358
#define	LSYS	57359
#define	LSYS0	57360
#define	LCSR	57361
#define	LSWAP	57362
#define	LAMO	57363
#define	LCONST	57364
#define	LSP	57365
#define	LSB	57366
#define	LFP	57367
#define	LPC	57368
#define	LREG	57369
#define	LFREG	57370
#define	LR	57371
#define	FR	57372
#define	LCTL	57373
#define	LDATA	57374
#define	LTEXT	57375
#define	LWORD	57376
#define	LSCONST	57377
#define	LFCONST	57378
#define	LNAME	57379
#define	LLAB	57380
#define	LVAR	57381
