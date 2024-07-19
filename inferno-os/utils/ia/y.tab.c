
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 
{
	Sym	*sym;
	vlong	lval;
	double	dval;
	char	sval[8];
	Gen	gen;
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
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
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
};
#define	YYNPROD	102
#define	YYPRIVATE 57344
#define	yydebug	1
#define	YYLAST	601
short	yyact[] =
{
  93,  73, 257,  46,   2,  51,  40, 176, 104, 241,
 225, 222,  43,  37, 221,  53, 168, 242,  67,  67,
  67,  67,  81,  62,  76,  49, 180,  86,  81,  81,
  45, 223, 220, 109,  72,  80,  83,  44,  41,  96,
  42,  39, 116,  89,  50, 133, 130, 103,  64,  84,
 100,  74,  98, 251,  38, 198,  85,  71, 254, 244,
 110, 111, 112, 108, 107, 234, 233,  92,  94, 232,
 231, 229, 219, 127, 218, 215, 214, 117, 129, 151,
 150, 149, 147, 148, 142, 143, 144, 145, 146, 137,
 136,  63,  69,  70,  75, 139, 140, 135, 134, 132,
 131, 126, 154, 163, 156, 160, 166, 167, 162, 161,
 165, 125, 158, 124, 172, 123,  67, 122, 121, 171,
 120, 119,  67, 165, 115,  67, 153, 114, 155, 113,
 102, 228, 157, 101, 159,  99,  97,  95, 202, 203,
  36, 197, 199,  35,  34, 174,  31, 187,  78, 191,
 182, 201, 164, 186, 188, 189, 192, 193, 183, 185,
  32,  33, 195, 196, 194, 252,  65, 200,  60,  59,
  47,   7,  48,  60,  59, 210, 204, 205, 206, 207,
 208,  52, 224, 211, 212, 213, 138, 170, 226, 175,
 227,  57,  60,  59, 181, 184,  57, 209, 190, 230,
  41,  41,  42,  42,  78,  78,  54,  55,  58, 164,
  41,  68,  42,  58,  82,  57,  61,  91,  77,  56,
 163,  61, 178, 177, 179, 240,  41,  90,  42, 259,
 165, 239,  58,  60,  59,  41, 249,  42,  82, 246,
  61, 105, 106, 235, 236, 237, 238, 247, 248, 178,
 177, 179, 129,   1,  66, 250,  57, 110,  10,   0,
 243,  41, 245,  42,   0,  78, 178, 177, 179, 164,
  41,  68,  42,  58,   8, 253,  79,   0,   0,  56,
   0,  61,  87,  88,   0, 258,   9,  30,  13,  14,
  15,  16,  11,  12,  17,  18,  20,  19,  21,  22,
  23,  24,  25,  26, 151, 150, 149, 147, 148, 142,
 143, 144, 145, 146,  28,  27,  29,   0,   0,   4,
   3,   5,  60,  59,   6, 151, 150, 149, 147, 148,
 142, 143, 144, 145, 146, 151, 150, 149, 147, 148,
 142, 143, 144, 145, 146,  57,  60, 256,   0,   0,
  41,   0,  42, 144, 145, 146, 217,   0,   0,   0,
  54,  55,  58,   0,   0,   0,  60,  59,  82,  57,
  61,   0,   0,  60,  59,   0,   0, 216,  41,  47,
  42,  48, 128, 255,  68,   0,  58, 169, 118,  57,
 105, 106,  56,   0,  61,  47,  57,  48,   0,  60,
  59,  41,   0,  42,  68,   0,  58,   0,  60,  59,
   0,  68,  56,  58,  61,   0,   0,   0,   0,  56,
   0,  61,  57,   0,   0,   0,   0,  60,  59,   0,
   0,  57, 142, 143, 144, 145, 146, 173,  55,  58,
  60,  59,   0,   0, 128,  56,  68,  61,  58,   0,
  57,  60,  59,   0,  56,  41,  61,  42,  60,  59,
   0,   0,   0,  57,   0,   0,   0,  58,   0,  60,
  59,   0,   0,  82,  57,  61,   0,   0,  68,   0,
  58,  57,  60,  59,   0,  38,  82,   0,  61,  54,
  55,  58,  57,  60,  59,   0,   0,  56,  58,  61,
   0,   0,   0,  38,  82,  57,  61,  68,   0,  58,
   0,   0,   0,   0,   0,  56,  57,  61,   0,   0,
  68,   0,  58,   0,   0,   0,   0,   0,  82,   0,
  61,   0,   0,  58,   0,   0,   0,   0,   0,  82,
   0,  61, 151, 150, 149, 147, 148, 142, 143, 144,
 145, 146, 151, 150, 149, 147, 148, 142, 143, 144,
 145, 146, 150, 149, 147, 148, 142, 143, 144, 145,
 146, 149, 147, 148, 142, 143, 144, 145, 146, 147,
 148, 142, 143, 144, 145, 146,   0,   0,   0,   0,
 152,   0,   0,   0,   0,   0,   0,   0,   0,   0,
 141
};
short	yypact[] =
{
-1000, 272,-1000,  96, 110,  93,-1000,  91,  88,   0,
 198, 341, 341, 198, 442,-1000, 198, 364, 460, 357,
 164, 431,   0,-1000, 107, 198, 484, 473, 473,   0,
-1000,-1000,-1000, 484, 484,-1000,-1000,  84, 484,  83,
-1000,-1000,  -3,  82,-1000,-1000,-1000,-1000,  -5,  80,
  77,-1000,-1000,  -8, 232, 232, 418,-1000,-1000, 484,
 484, 484,  76,  74,  71,-1000,-1000, -13, 381,  68,
  67,  65,  64,  62,  60,  58,  48, 399,  -9,  47,
  46, -10, 484,-1000,  45,  44,  37,  36, 174,-1000,
 272, 272, 548,-1000, 538, 198,-1000, 198, 484, 341,
 484, 132, 313, 173,-1000, 484, 484,-1000, -40, 331,
-1000,-1000,-1000, 390, 198, 460, 189, -29, 186, 198,
 132, 357, 163, 198, 224, 198, 198,-1000,-1000, -13,
 484, 198, 198, 216,   1, 198, 198, 449, 484,-1000,
-1000,-1000, 484, 484, 484, 484, 484, 190, 167, 484,
 484, 484,-1000,-1000,  23,-1000,  22, 321,-1000, 300,
  21,  19,-1000, -23, -42, -45,-1000,-1000,-1000,-1000,
-1000,-1000, -24, 381,-1000,-1000, -46,-1000,-1000,-1000,
 216, 232,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,  75,-1000,-1000,  18, 484,  17,
  16,-1000,  13,  12, 342, 342,-1000,-1000,-1000, 484,
 484, 572, 565, 557, 198, 198,-1000,-1000, 341, 159,
 116,-1000,-1000, 233, -29,-1000, -47, -38,-1000, 198,
   6, 198, 198,   0,  -1, 423, 423,-1000,-1000,-1000,
-1000,-1000, 131,-1000, 198,-1000,   5,-1000,-1000,-1000,
-1000, 337, -54,-1000, 198,-1000, 183,-1000,-1000,-1000
};
short	yypgo[] =
{
   0,   0,  33,   7,   8,   6,   3, 258,  30,  37,
  24,  12,  73, 254, 166,   5,  13,   1, 255, 253,
   4, 227, 217, 171
};
short	yyr1[] =
{
   0,  19,  19,  21,  20,  22,  20,  20,  20,  20,
  20,  20,  23,  23,  23,  23,  23,  23,  23,  23,
  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,
  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,
  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,
  23,  23,  23,  15,  15,  15,   7,   7,  12,  12,
  14,  14,  13,  13,  13,   4,   4,   4,   3,   3,
   3,   8,   9,  11,  11,   5,   5,   6,   6,  10,
  17,  17,  18,  18,  16,   1,   1,   1,   1,   1,
   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2
};
short	yyr2[] =
{
   0,   0,   2,   0,   4,   0,   4,   4,   4,   1,
   2,   2,   4,   4,   6,   6,   4,   6,   6,   4,
   2,   2,   1,   4,   4,   4,   4,   4,   4,   4,
   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
   4,   2,   1,   6,   7,   6,   8,   4,   6,   6,
   6,   6,   2,   4,   2,   2,   1,   1,   1,   1,
   3,   4,   4,   5,   7,   0,   2,   2,   1,   1,
   1,   1,   1,   1,   1,   1,   4,   1,   4,   4,
   2,   2,   2,   3,   2,   1,   1,   2,   2,   2,
   3,   1,   3,   3,   3,   3,   3,   4,   4,   3,
   3,   3
};
short	yychk[] =
{
-1000, -19, -20,  48,  47,  49,  52, -23,   2,  14,
  -7,  20,  21,  16,  17,  18,  19,  22,  23,  25,
  24,  26,  27,  28,  29,  30,  31,  43,  42,  44,
  15,  50,  50,  51,  51,  52,  52, -16,  54,  -8,
  -5,  37,  39, -11,  -9,  -8,  -6,  38,  40, -11,
  -8, -15, -14,  -1,  47,  48,  55,  32,  49,  10,
   9,  57,  -5, -12,  -8, -14, -13,  -1,  47, -12,
 -12,  -9, -16, -17,  -8, -12, -10,  54,  41, -13,
 -16,  -1,  55, -16, -10,  -8,  -1, -13, -13, -16,
 -21, -22,  -2,  -1,  -2,  53,  -1,  53,  55,  53,
  55,  53,  53,  55,  -4,   9,  10,  -4,  -5,  -2,
  -1,  -1,  -1,  53,  53,  53,  55,  -4,   7,  53,
  53,  53,  53,  53,  53,  53,  53, -12,  45,  -1,
  55,  53,  53,  55,  53,  53,  53,  53,  12, -20,
 -20,  52,   9,  10,  11,  12,  13,   7,   8,   6,
   5,   4,  52,  -8,  -5,  -8,  -5,  -2, -11,  -2,
  -6,  -5, -15,  -1,  36,  -5,  -1,  -1,  56,  56,
 -12, -15,  -1,  47,  -8, -12,  -3,  34,  33,  35,
  55,   8,  -8,  -9, -12,  -9,  -8, -10,  -8,  -8,
 -12, -10,  -8,  -8,  -2,  -8,  -8,  -5,  54,  -5,
  -8, -16,  -1,  -1,  -2,  -2,  -2,  -2,  -2,   7,
   8,  -2,  -2,  -2,  53,  53,  56,  56,  53,  53,
  55,  56,  56,  55,  -4,  56,  -3,  -4,  56,  53,
  -1,  53,  53,  53,  53,  -2,  -2,  -8,  -8, -11,
 -15,  56,  55,  -8,  53,  -8,  -5, -16, -16, -17,
 -18,  54,  34,  -8,  53,  46,  10,  56,  -8,  46
};
short	yydef[] =
{
   1,  -2,   2,   0,   0,   0,   9,   0,   0,  56,
   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,
   0,   0,   0,  42,   0,   0,   0,   0,   0,   0,
  57,   3,   5,   0,   0,  10,  11,   0,   0,   0,
  71,  75,   0,   0,  73,  74,  72,  77,   0,   0,
   0,  20,  21,   0,  65,  65,   0,  85,  86,   0,
   0,   0,   0,   0,   0,  58,  59,   0,  65,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,  41,   0,   0,   0,   0,   0,  52,
   0,   0,   0,  91,   0,   0,  84,   0,   0,   0,
   0,   0,   0,   0,  54,   0,   0,  55,   0,   0,
  87,  88,  89,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,  80,  81,  84,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,
   6,   7,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   8,  12,  71,  13,  71,   0,  16,   0,
   0,   0,  19,   0,   0,   0,  66,  67,  60,  90,
  23,  24,   0,  65,  25,  27,   0,  68,  69,  70,
   0,  65,  26,  28,  29,  30,  31,  37,  32,  33,
  35,  36,  34,  38,   0,  39,  40,   0,   0,   0,
   0,  47,   0,   0,  92,  93,  94,  95,  96,   0,
   0,  99, 100, 101,   0,   0,  76,  78,   0,   0,
   0,  53,  61,   0,  54,  62,   0,   0,  79,   0,
   0,   0,   0,   0,   0,  97,  98,  14,  15,  17,
  18,  63,   0,  43,   0,  45,   0,  48,  49,  50,
  51,   0,   0,  44,   0,  82,   0,  64,  46,  83
};
short	yytok1[] =
{
   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,  54,  13,   6,   0,
  55,  56,  11,   9,  53,  10,   0,  12,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,  50,  52,
   7,  51,   8,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0,   0,   4,   0,  57
};
short	yytok2[] =
{
   2,   3,  14,  15,  16,  17,  18,  19,  20,  21,
  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,
  42,  43,  44,  45,  46,  47,  48,  49
};
long	yytok3[] =
{
   0
};
#define YYFLAG 		-1000
#define	yyclearin	yychar = -1
#define	yyerrok		yyerrflag = 0

#ifdef	yydebug
#include	"y.debug"
#else
#define	yydebug		0
char*	yytoknames[1];		/* for debugging */
char*	yystates[1];		/* for debugging */
#endif

/*	parser for yacc output	*/

int	yynerrs = 0;		/* number of errors */
int	yyerrflag = 0;		/* error recovery flag */

extern	int	fprint(int, char*, ...);
extern	int	sprint(char*, char*, ...);

char*
yytokname(int yyc)
{
	static char x[16];

	if(yyc > 0 && yyc <= sizeof(yytoknames)/sizeof(yytoknames[0]))
	if(yytoknames[yyc-1])
		return yytoknames[yyc-1];
	sprint(x, "<%d>", yyc);
	return x;
}

char*
yystatname(int yys)
{
	static char x[16];

	if(yys >= 0 && yys < sizeof(yystates)/sizeof(yystates[0]))
	if(yystates[yys])
		return yystates[yys];
	sprint(x, "<%d>\n", yys);
	return x;
}

long
yylex1(void)
{
	long yychar;
	long *t3p;
	int c;

	yychar = yylex();
	if(yychar <= 0) {
		c = yytok1[0];
		goto out;
	}
	if(yychar < sizeof(yytok1)/sizeof(yytok1[0])) {
		c = yytok1[yychar];
		goto out;
	}
	if(yychar >= YYPRIVATE)
		if(yychar < YYPRIVATE+sizeof(yytok2)/sizeof(yytok2[0])) {
			c = yytok2[yychar-YYPRIVATE];
			goto out;
		}
	for(t3p=yytok3;; t3p+=2) {
		c = t3p[0];
		if(c == yychar) {
			c = t3p[1];
			goto out;
		}
		if(c == 0)
			break;
	}
	c = 0;

out:
	if(c == 0)
		c = yytok2[1];	/* unknown char */
	if(yydebug >= 3)
		fprint(2, "lex %.4lux %s\n", yychar, yytokname(c));
	return c;
}

int
yyparse(void)
{
	struct
	{
		YYSTYPE	yyv;
		int	yys;
	} yys[YYMAXDEPTH], *yyp, *yypt;
	short *yyxi;
	int yyj, yym, yystate, yyn, yyg;
	long yychar;
	YYSTYPE save1, save2;
	int save3, save4;

	save1 = yylval;
	save2 = yyval;
	save3 = yynerrs;
	save4 = yyerrflag;

	yystate = 0;
	yychar = -1;
	yynerrs = 0;
	yyerrflag = 0;
	yyp = &yys[-1];
	goto yystack;

ret0:
	yyn = 0;
	goto ret;

ret1:
	yyn = 1;
	goto ret;

ret:
	yylval = save1;
	yyval = save2;
	yynerrs = save3;
	yyerrflag = save4;
	return yyn;

yystack:
	/* put a state and value onto the stack */
	if(yydebug >= 4)
		fprint(2, "char %s in %s", yytokname(yychar), yystatname(yystate));

	yyp++;
	if(yyp >= &yys[YYMAXDEPTH]) {
		yyerror("yacc stack overflow");
		goto ret1;
	}
	yyp->yys = yystate;
	yyp->yyv = yyval;

yynewstate:
	yyn = yypact[yystate];
	if(yyn <= YYFLAG)
		goto yydefault; /* simple state */
	if(yychar < 0)
		yychar = yylex1();
	yyn += yychar;
	if(yyn < 0 || yyn >= YYLAST)
		goto yydefault;
	yyn = yyact[yyn];
	if(yychk[yyn] == yychar) { /* valid shift */
		yychar = -1;
		yyval = yylval;
		yystate = yyn;
		if(yyerrflag > 0)
			yyerrflag--;
		goto yystack;
	}

yydefault:
	/* default state action */
	yyn = yydef[yystate];
	if(yyn == -2) {
		if(yychar < 0)
			yychar = yylex1();

		/* look through exception table */
		for(yyxi=yyexca;; yyxi+=2)
			if(yyxi[0] == -1 && yyxi[1] == yystate)
				break;
		for(yyxi += 2;; yyxi += 2) {
			yyn = yyxi[0];
			if(yyn < 0 || yyn == yychar)
				break;
		}
		yyn = yyxi[1];
		if(yyn < 0)
			goto ret0;
	}
	if(yyn == 0) {
		/* error ... attempt to resume parsing */
		switch(yyerrflag) {
		case 0:   /* brand new error */
			yyerror("syntax error");
			yynerrs++;
			if(yydebug >= 1) {
				fprint(2, "%s", yystatname(yystate));
				fprint(2, "saw %s\n", yytokname(yychar));
			}

		case 1:
		case 2: /* incompletely recovered error ... try again */
			yyerrflag = 3;

			/* find a state where "error" is a legal shift action */
			while(yyp >= yys) {
				yyn = yypact[yyp->yys] + YYERRCODE;
				if(yyn >= 0 && yyn < YYLAST) {
					yystate = yyact[yyn];  /* simulate a shift of "error" */
					if(yychk[yystate] == YYERRCODE)
						goto yystack;
				}

				/* the current yyp has no shift onn "error", pop stack */
				if(yydebug >= 2)
					fprint(2, "error recovery pops state %d, uncovers %d\n",
						yyp->yys, (yyp-1)->yys );
				yyp--;
			}
			/* there is no state on the stack with an error shift ... abort */
			goto ret1;

		case 3:  /* no shift yet; clobber input char */
			if(yydebug >= 2)
				fprint(2, "error recovery discards %s\n", yytokname(yychar));
			if(yychar == YYEOFCODE)
				goto ret1;
			yychar = -1;
			goto yynewstate;   /* try again in the same state */
		}
	}

	/* reduction by production yyn */
	if(yydebug >= 2)
		fprint(2, "reduce %d in:\n\t%s", yyn, yystatname(yystate));

	yypt = yyp;
	yyp -= yyr2[yyn];
	yyval = (yyp+1)->yyv;
	yym = yyn;

	/* consult goto table to find next state */
	yyn = yyr1[yyn];
	yyg = yypgo[yyn];
	yyj = yyg + yyp->yys + 1;

	if(yyj >= YYLAST || yychk[yystate=yyact[yyj]] != -yyn)
		yystate = yyact[yyg];
	switch(yym) {
		
case 3:
#line	34	"a.y"
{
		if(yypt[-1].yyv.sym->value != pc)
			yyerror("redeclaration of %s", yypt[-1].yyv.sym->name);
		yypt[-1].yyv.sym->value = pc;
	} break;
case 5:
#line	41	"a.y"
{
		yypt[-1].yyv.sym->type = LLAB;
		yypt[-1].yyv.sym->value = pc;
	} break;
case 7:
#line	47	"a.y"
{
		yypt[-3].yyv.sym->type = LVAR;
		yypt[-3].yyv.sym->value = yypt[-1].yyv.lval;
	} break;
case 8:
#line	52	"a.y"
{
		if(yypt[-3].yyv.sym->value != yypt[-1].yyv.lval)
			yyerror("redeclaration of %s", yypt[-3].yyv.sym->name);
		yypt[-3].yyv.sym->value = yypt[-1].yyv.lval;
	} break;
case 12:
#line	63	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 13:
#line	67	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 14:
#line	71	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 15:
#line	75	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 16:
#line	80	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 17:
#line	84	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 18:
#line	89	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 19:
#line	94	"a.y"
{
		Gen regzero;
		regzero = nullgen;
		regzero.type = D_REG;
		regzero.reg = 0;
		outcode(yypt[-3].yyv.lval, &regzero, yypt[-2].yyv.gen.reg, &yypt[-0].yyv.gen);
	} break;
case 20:
#line	103	"a.y"
{
		outcode(yypt[-1].yyv.lval, &nullgen, NREG, &yypt[-0].yyv.gen);
	} break;
case 21:
#line	108	"a.y"
{
		outcode(yypt[-1].yyv.lval, &nullgen, NREG, &yypt[-0].yyv.gen);
	} break;
case 22:
#line	114	"a.y"
{
		outcode(yypt[-0].yyv.lval, &nullgen, NREG, &nullgen);
	} break;
case 23:
#line	119	"a.y"
{
		outcode(yypt[-3].yyv.lval, &nullgen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 24:
#line	123	"a.y"
{
		outcode(yypt[-3].yyv.lval, &nullgen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 25:
#line	128	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 26:
#line	132	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 27:
#line	136	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 28:
#line	141	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 29:
#line	145	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 30:
#line	149	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 31:
#line	155	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 32:
#line	159	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 33:
#line	163	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 34:
#line	167	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 35:
#line	171	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 36:
#line	175	"a.y"
{
		Gen regzero;
		regzero = nullgen;
		regzero.type = D_REG;
		regzero.reg = 0;
		outcode(ACSRRW, &yypt[-0].yyv.gen, yypt[-2].yyv.gen.reg, &regzero);
	} break;
case 37:
#line	183	"a.y"
{
		Gen regzero;
		int r = yypt[-2].yyv.gen.offset;
		if(r < 0 || r >= NREG)
			yyerror("immediate value out of range");
		regzero = nullgen;
		regzero.type = D_REG;
		regzero.reg = 0;
		outcode(ACSRRWI, &yypt[-0].yyv.gen, r, &regzero);
	} break;
case 38:
#line	194	"a.y"
{
		outcode(ACSRRS, &yypt[-2].yyv.gen, REGZERO, &yypt[-0].yyv.gen);
	} break;
case 39:
#line	199	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 40:
#line	203	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 41:
#line	209	"a.y"
{
		outcode(yypt[-1].yyv.lval, &nullgen, NREG, &yypt[-0].yyv.gen);
	} break;
case 42:
#line	214	"a.y"
{
		Gen syscon;
		syscon = nullgen;
		syscon.type = D_CONST;
		syscon.offset = yypt[-0].yyv.lval;
		outcode(ASYS, &nullgen, NREG, &syscon);
	} break;
case 43:
#line	223	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 44:
#line	228	"a.y"
{
		if(yypt[-2].yyv.lval < 0 || yypt[-2].yyv.lval >= NREG)
			yyerror("immediate value out of range");
		outcode(yypt[-6].yyv.lval + (ACSRRWI-ACSRRW), &yypt[-5].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 45:
#line	235	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 46:
#line	240	"a.y"
{
		outcode(yypt[-7].yyv.lval, &yypt[-4].yyv.gen, (yypt[-6].yyv.lval<<16)|yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 47:
#line	245	"a.y"
{
		outcode(yypt[-3].yyv.lval, &yypt[-2].yyv.gen, NREG, &yypt[-0].yyv.gen);
	} break;
case 48:
#line	249	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 49:
#line	254	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 50:
#line	258	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 51:
#line	262	"a.y"
{
		outcode(yypt[-5].yyv.lval, &yypt[-4].yyv.gen, yypt[-2].yyv.lval, &yypt[-0].yyv.gen);
	} break;
case 52:
#line	267	"a.y"
{
		outcode(yypt[-1].yyv.lval, &nullgen, NREG, &yypt[-0].yyv.gen);
	} break;
case 53:
#line	273	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_BRANCH;
		yyval.gen.offset = yypt[-3].yyv.lval + pc;
	} break;
case 54:
#line	279	"a.y"
{
		yyval.gen = nullgen;
		if(pass == 2)
			yyerror("undefined label: %s", yypt[-1].yyv.sym->name);
		yyval.gen.type = D_BRANCH;
		yyval.gen.sym = yypt[-1].yyv.sym;
		yyval.gen.offset = yypt[-0].yyv.lval;
	} break;
case 55:
#line	288	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_BRANCH;
		yyval.gen.sym = yypt[-1].yyv.sym;
		yyval.gen.offset = yypt[-1].yyv.sym->value + yypt[-0].yyv.lval;
	} break;
case 60:
#line	305	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_OREG;
		yyval.gen.reg = yypt[-1].yyv.lval;
		yyval.gen.offset = 0;
	} break;
case 61:
#line	312	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_OREG;
		yyval.gen.reg = yypt[-1].yyv.lval;
		yyval.gen.offset = yypt[-3].yyv.lval;
	} break;
case 62:
#line	321	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_OREG;
		yyval.gen.name = yypt[-1].yyv.lval;
		yyval.gen.sym = S;
		yyval.gen.offset = yypt[-3].yyv.lval;
	} break;
case 63:
#line	329	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_OREG;
		yyval.gen.name = yypt[-1].yyv.lval;
		yyval.gen.sym = yypt[-4].yyv.sym;
		yyval.gen.offset = yypt[-3].yyv.lval;
	} break;
case 64:
#line	337	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_OREG;
		yyval.gen.name = D_STATIC;
		yyval.gen.sym = yypt[-6].yyv.sym;
		yyval.gen.offset = yypt[-3].yyv.lval;
	} break;
case 65:
#line	346	"a.y"
{
		yyval.lval = 0;
	} break;
case 66:
#line	350	"a.y"
{
		yyval.lval = yypt[-0].yyv.lval;
	} break;
case 67:
#line	354	"a.y"
{
		yyval.lval = -yypt[-0].yyv.lval;
	} break;
case 71:
#line	365	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_REG;
		yyval.gen.reg = yypt[-0].yyv.lval;
	} break;
case 72:
#line	373	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_FREG;
		yyval.gen.reg = yypt[-0].yyv.lval;
	} break;
case 76:
#line	386	"a.y"
{
		if(yypt[-1].yyv.lval < 0 || yypt[-1].yyv.lval >= NREG)
			yyerror("register value out of range");
		yyval.lval = yypt[-1].yyv.lval;
	} break;
case 78:
#line	395	"a.y"
{
		if(yypt[-1].yyv.lval < 0 || yypt[-1].yyv.lval >= NREG)
			yyerror("register value out of range");
		yyval.lval = yypt[-1].yyv.lval;
	} break;
case 79:
#line	403	"a.y"
{
		if(yypt[-1].yyv.lval < 0 || yypt[-1].yyv.lval >= 0xFFF)
			yyerror("CSR value out of range");
		yyval.gen = nullgen;
		yyval.gen.type = D_CTLREG;
		yyval.gen.offset = yypt[-1].yyv.lval;
	} break;
case 80:
#line	413	"a.y"
{
		yyval.gen = yypt[-0].yyv.gen;
		yyval.gen.type = D_CONST;
	} break;
case 81:
#line	418	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_SCONST;
		memcpy(yyval.gen.sval, yypt[-0].yyv.sval, sizeof(yyval.gen.sval));
	} break;
case 82:
#line	426	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_FCONST;
		yyval.gen.dval = yypt[-0].yyv.dval;
	} break;
case 83:
#line	432	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_FCONST;
		yyval.gen.dval = -yypt[-0].yyv.dval;
	} break;
case 84:
#line	440	"a.y"
{
		yyval.gen = nullgen;
		yyval.gen.type = D_CONST;
		yyval.gen.offset = yypt[-0].yyv.lval;
		if(thechar == 'j' && (vlong)yyval.gen.offset != yypt[-0].yyv.lval){
			yyval.gen.type = D_VCONST;
			yyval.gen.vval = yypt[-0].yyv.lval;
		}
	} break;
case 86:
#line	453	"a.y"
{
		yyval.lval = yypt[-0].yyv.sym->value;
	} break;
case 87:
#line	457	"a.y"
{
		yyval.lval = -yypt[-0].yyv.lval;
	} break;
case 88:
#line	461	"a.y"
{
		yyval.lval = yypt[-0].yyv.lval;
	} break;
case 89:
#line	465	"a.y"
{
		yyval.lval = ~yypt[-0].yyv.lval;
	} break;
case 90:
#line	469	"a.y"
{
		yyval.lval = yypt[-1].yyv.lval;
	} break;
case 92:
#line	476	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval + yypt[-0].yyv.lval;
	} break;
case 93:
#line	480	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval - yypt[-0].yyv.lval;
	} break;
case 94:
#line	484	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval * yypt[-0].yyv.lval;
	} break;
case 95:
#line	488	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval / yypt[-0].yyv.lval;
	} break;
case 96:
#line	492	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval % yypt[-0].yyv.lval;
	} break;
case 97:
#line	496	"a.y"
{
		yyval.lval = yypt[-3].yyv.lval << yypt[-0].yyv.lval;
	} break;
case 98:
#line	500	"a.y"
{
		yyval.lval = yypt[-3].yyv.lval >> yypt[-0].yyv.lval;
	} break;
case 99:
#line	504	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval & yypt[-0].yyv.lval;
	} break;
case 100:
#line	508	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval ^ yypt[-0].yyv.lval;
	} break;
case 101:
#line	512	"a.y"
{
		yyval.lval = yypt[-2].yyv.lval | yypt[-0].yyv.lval;
	} break;
	}
	goto yystack;  /* stack new state and value */
}
