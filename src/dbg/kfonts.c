/* kfonts.c
 * 
 *  Source for data encoded from KFONTS.dat .
 *  Do not hand edit.
 */

#include <allegro.h>
#include <allegro/internal/aintern.h>



static DATAFILE_PROPERTY korvet_font0_prop[] = {
    { "12-19-2002, 12:24", DAT_ID('D', 'A', 'T', 'E') },
    { "KORVET_FONT0", DAT_ID('N', 'A', 'M', 'E') },
    { "c:\\esl\\c\\Test\\Allegro\\font_dat\\K_F1.FNT", DAT_ID('O', 'R', 'I', 'G') },
    { 0, DAT_END }
};

static FONT_GLYPH korvet_font0_glyph0 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph1 = {
    8, 16, /* width, height */
    "\0\0\0~ЃҐЃЃЅ™Ѓ~\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph2 = {
    8, 16, /* width, height */
    "\0\0\0~яЫяяГзя~\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph3 = {
    8, 16, /* width, height */
    "\0\0\0\0lюююю|8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph4 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""8|ю|8\x10\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph5 = {
    8, 16, /* width, height */
    "\0\0\0\x18<<ззз\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph6 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~яя~\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph7 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\x18<<\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph8 = {
    8, 16, /* width, height */
    "ююююююоЖЖоюююююю"
};

static FONT_GLYPH korvet_font0_glyph9 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<fBBf<\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph10 = {
    8, 16, /* width, height */
    "\0\0яяяГ™ЅЅ™Гяяя\0\0"
};

static FONT_GLYPH korvet_font0_glyph11 = {
    8, 16, /* width, height */
    "\0\0\0\x1f\xf\x19\x18\x18\x18|ММx\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph12 = {
    8, 16, /* width, height */
    "\0\0\0xММx000ь00\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph13 = {
    8, 16, /* width, height */
    "\0\0\0?3?00000pа\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph14 = {
    8, 16, /* width, height */
    "\0\0\0~f~fffnомА\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph15 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18Ы<з<Ы\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph16 = {
    8, 16, /* width, height */
    "\0\0@`px|~|xp`@\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph17 = {
    8, 16, /* width, height */
    "\0\0\x2\x6\xe\x1e>~>\x1e\xe\x6\x2\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph18 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18~<\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph19 = {
    8, 16, /* width, height */
    "\0\0\0""ffffff\0""ff\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph20 = {
    8, 16, /* width, height */
    "\0\0\0~¶¶¶¶v666\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph21 = {
    8, 16, /* width, height */
    "\0\0xМ`8lЖЖl8\ff<\0\0"
};

static FONT_GLYPH korvet_font0_glyph22 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0ююю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph23 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18~<\x18~\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph24 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph25 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\x18\x18~<\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph26 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18\fю\f\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph27 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""0`ю`0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph28 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0аааю\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph29 = {
    8, 16, /* width, height */
    "\0\0\0\0\0$fяf$\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph30 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18<~яя\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph31 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яя~<\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph32 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph33 = {
    8, 16, /* width, height */
    "\0\0\0\x18<<\x18\x18\x18\0\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph34 = {
    8, 16, /* width, height */
    "\0\0""fff\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph35 = {
    8, 16, /* width, height */
    "\0\0llюllllюll\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph36 = {
    8, 16, /* width, height */
    "\0\x10\x10|ЖДА8\x6""FЖ|\x10\x10\0\0"
};

static FONT_GLYPH korvet_font0_glyph37 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ВЖ\f\x18""0fЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph38 = {
    8, 16, /* width, height */
    "\0\0\0""8ll8vЬММv\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph39 = {
    8, 16, /* width, height */
    "\0\0\x1c\f\x18 \0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph40 = {
    8, 16, /* width, height */
    "\0\0\0\f\x18""00000\x18\f\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph41 = {
    8, 16, /* width, height */
    "\0\0\0""0\x18\f\f\f\f\f\x18""0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph42 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""f<я<f\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph43 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18\x18~\x18\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph44 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0""8\x18""0@\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph45 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0~\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph46 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph47 = {
    8, 16, /* width, height */
    "\0\0\0\x2\x6\f\x18""0`АЂ\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph48 = {
    8, 16, /* width, height */
    "\0\0\0|ЖОЮцжЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph49 = {
    8, 16, /* width, height */
    "\0\0\0\x18""8x\x18\x18\x18\x18\x18~\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph50 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\f\x18""0`Жю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph51 = {
    8, 16, /* width, height */
    "\0\0\0юЖ\f\x18<\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph52 = {
    8, 16, /* width, height */
    "\0\0\0\f\x1c<lМю\f\f\x1e\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph53 = {
    8, 16, /* width, height */
    "\0\0\0юАААь\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph54 = {
    8, 16, /* width, height */
    "\0\0\0""8`ААьЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph55 = {
    8, 16, /* width, height */
    "\0\0\0юЖ\x6\f\x18""0000\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph56 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖ|ЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph57 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖ~\x6\x6\fx\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph58 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\0\0\0\x18\x18\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph59 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\0\0\0\x18\x18""0@\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph60 = {
    8, 16, /* width, height */
    "\0\0\0\x6\f\x18""0`0\x18\f\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph61 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~\0\0~\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph62 = {
    8, 16, /* width, height */
    "\0\0\0`0\x18\f\x6\f\x18""0`\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph63 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖ\f\x18\x18\0\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph64 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЮЮЮЬА|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph65 = {
    8, 16, /* width, height */
    "\0\0\0\x10""8lЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph66 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph67 = {
    8, 16, /* width, height */
    "\0\0\0<fВАААВf<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph68 = {
    8, 16, /* width, height */
    "\0\0\0шlffffflш\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph69 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxhbfю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph70 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxh``р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph71 = {
    8, 16, /* width, height */
    "\0\0\0<fВААОЖf:\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph72 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖюЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph73 = {
    8, 16, /* width, height */
    "\0\0\0<\x18\x18\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph74 = {
    8, 16, /* width, height */
    "\0\0\0\x1e\f\f\f\f\fММx\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph75 = {
    8, 16, /* width, height */
    "\0\0\0жfllxllfж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph76 = {
    8, 16, /* width, height */
    "\0\0\0р`````bfю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph77 = {
    8, 16, /* width, height */
    "\0\0\0ЖоюЦЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph78 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖжцЮОЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph79 = {
    8, 16, /* width, height */
    "\0\0\0""8lЖЖЖЖЖl8\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph80 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|```р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph81 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖЖЦЮ|\f\xe\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph82 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|lffж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph83 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖ`8\fЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph84 = {
    8, 16, /* width, height */
    "\0\0\0яЫ™\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph85 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph86 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЖЖl8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph87 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЦЦюоl\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph88 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖl8lЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph89 = {
    8, 16, /* width, height */
    "\0\0\0ГГГf<\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph90 = {
    8, 16, /* width, height */
    "\0\0\0юЖЊ\x18""0`ВЖю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph91 = {
    8, 16, /* width, height */
    "\0\0\0<0000000<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph92 = {
    8, 16, /* width, height */
    "\0\0\0\0ЂА`0\x18\f\x6\x2\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph93 = {
    8, 16, /* width, height */
    "\0\0\0<\f\f\f\f\f\f\f<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph94 = {
    8, 16, /* width, height */
    "\0\x10""8lЖ\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph95 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0я\0\0"
};

static FONT_GLYPH korvet_font0_glyph96 = {
    8, 16, /* width, height */
    "\0""80\x18\x4\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph97 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0x\f|ММv\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph98 = {
    8, 16, /* width, height */
    "\0\0\0а``xlfffЬ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph99 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖААЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph100 = {
    8, 16, /* width, height */
    "\0\0\0\x1c\f\f<lМММv\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph101 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖюАЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph102 = {
    8, 16, /* width, height */
    "\0\0\0\x1c""620x000x\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph103 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0vМММ|\fМx\0\0"
};

static FONT_GLYPH korvet_font0_glyph104 = {
    8, 16, /* width, height */
    "\0\0\0а``lvfffж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph105 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\0""8\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph106 = {
    8, 16, /* width, height */
    "\0\0\0\f\f\0\x1c\f\f\f\fll8\0\0"
};

static FONT_GLYPH korvet_font0_glyph107 = {
    8, 16, /* width, height */
    "\0\0\0а``flxlfж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph108 = {
    8, 16, /* width, height */
    "\0\0\0""8\x18\x18\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph109 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0lЦЦЦЦЦ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph110 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Ьfffff\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph111 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph112 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьfff|``р\0\0"
};

static FONT_GLYPH korvet_font0_glyph113 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0vМММ|\f\f\x1e\0\0"
};

static FONT_GLYPH korvet_font0_glyph114 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Ьvf``р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph115 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Жp\x1cЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph116 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""00ь006\x1c\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph117 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МММММv\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph118 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖl8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph119 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЦЦюl\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph120 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Жl88lЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph121 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖЖ~\x6\fx\0\0"
};

static FONT_GLYPH korvet_font0_glyph122 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юМ\x18""0fю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph123 = {
    8, 16, /* width, height */
    "\0\0\0\xe\x18\x18\x18""0\x18\x18\x18\xe\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph124 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\0\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph125 = {
    8, 16, /* width, height */
    "\0\0\0p\x18\x18\x18\f\x18\x18\x18p\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph126 = {
    8, 16, /* width, height */
    "\0\0я\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph127 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x10""8lЖЖЖю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph128 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph129 = {
    8, 16, /* width, height */
    "ррррр\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph130 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph131 = {
    8, 16, /* width, height */
    "яяяяя\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph132 = {
    8, 16, /* width, height */
    "\0\0\0\0\0рррррр\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph133 = {
    8, 16, /* width, height */
    "ррррррррррр\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph134 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfрррррр\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph135 = {
    8, 16, /* width, height */
    "яяяяярррррр\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph136 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\xf\xf\xf\xf\xf\xf\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph137 = {
    8, 16, /* width, height */
    "ррррр\xf\xf\xf\xf\xf\xf\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph138 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph139 = {
    8, 16, /* width, height */
    "яяяяя\xf\xf\xf\xf\xf\xf\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph140 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яяяяяя\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph141 = {
    8, 16, /* width, height */
    "ррррряяяяяя\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph142 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfяяяяяя\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph143 = {
    8, 16, /* width, height */
    "яяяяяяяяяяя\0\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph144 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0ррррр"
};

static FONT_GLYPH korvet_font0_glyph145 = {
    8, 16, /* width, height */
    "ррррр\0\0\0\0\0\0ррррр"
};

static FONT_GLYPH korvet_font0_glyph146 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\0\0\0\0\0\0ррррр"
};

static FONT_GLYPH korvet_font0_glyph147 = {
    8, 16, /* width, height */
    "яяяяя\0\0\0\0\0\0ррррр"
};

static FONT_GLYPH korvet_font0_glyph148 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ррррррррррр"
};

static FONT_GLYPH korvet_font0_glyph149 = {
    8, 16, /* width, height */
    "рррррррррррррррр"
};

static FONT_GLYPH korvet_font0_glyph150 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfррррррррррр"
};

static FONT_GLYPH korvet_font0_glyph151 = {
    8, 16, /* width, height */
    "яяяяяррррррррррр"
};

static FONT_GLYPH korvet_font0_glyph152 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\xf\xf\xf\xf\xf\xfррррр"
};

static FONT_GLYPH korvet_font0_glyph153 = {
    8, 16, /* width, height */
    "ррррр\xf\xf\xf\xf\xf\xfррррр"
};

static FONT_GLYPH korvet_font0_glyph154 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xfррррр"
};

static FONT_GLYPH korvet_font0_glyph155 = {
    8, 16, /* width, height */
    "яяяяя\xf\xf\xf\xf\xf\xfррррр"
};

static FONT_GLYPH korvet_font0_glyph156 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яяяяяяррррр"
};

static FONT_GLYPH korvet_font0_glyph157 = {
    8, 16, /* width, height */
    "ррррряяяяяяррррр"
};

static FONT_GLYPH korvet_font0_glyph158 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfяяяяяяррррр"
};

static FONT_GLYPH korvet_font0_glyph159 = {
    8, 16, /* width, height */
    "яяяяяяяяяяяррррр"
};

static FONT_GLYPH korvet_font0_glyph160 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph161 = {
    8, 16, /* width, height */
    "ррррр\0\0\0\0\0\0\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph162 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\0\0\0\0\0\0\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph163 = {
    8, 16, /* width, height */
    "яяяяя\0\0\0\0\0\0\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph164 = {
    8, 16, /* width, height */
    "\0\0\0\0\0рррррр\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph165 = {
    8, 16, /* width, height */
    "ррррррррррр\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph166 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfрррррр\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph167 = {
    8, 16, /* width, height */
    "яяяяярррррр\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph168 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph169 = {
    8, 16, /* width, height */
    "ррррр\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph170 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph171 = {
    8, 16, /* width, height */
    "яяяяя\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph172 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яяяяяя\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph173 = {
    8, 16, /* width, height */
    "ррррряяяяяя\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph174 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfяяяяяя\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph175 = {
    8, 16, /* width, height */
    "яяяяяяяяяяя\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font0_glyph176 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0яяяяя"
};

static FONT_GLYPH korvet_font0_glyph177 = {
    8, 16, /* width, height */
    "ррррр\0\0\0\0\0\0яяяяя"
};

static FONT_GLYPH korvet_font0_glyph178 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\0\0\0\0\0\0яяяяя"
};

static FONT_GLYPH korvet_font0_glyph179 = {
    8, 16, /* width, height */
    "яяяяя\0\0\0\0\0\0яяяяя"
};

static FONT_GLYPH korvet_font0_glyph180 = {
    8, 16, /* width, height */
    "\0\0\0\0\0рррррряяяяя"
};

static FONT_GLYPH korvet_font0_glyph181 = {
    8, 16, /* width, height */
    "ррррррррррряяяяя"
};

static FONT_GLYPH korvet_font0_glyph182 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfрррррряяяяя"
};

static FONT_GLYPH korvet_font0_glyph183 = {
    8, 16, /* width, height */
    "яяяяярррррряяяяя"
};

static FONT_GLYPH korvet_font0_glyph184 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\xf\xf\xf\xf\xf\xfяяяяя"
};

static FONT_GLYPH korvet_font0_glyph185 = {
    8, 16, /* width, height */
    "ррррр\xf\xf\xf\xf\xf\xfяяяяя"
};

static FONT_GLYPH korvet_font0_glyph186 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xfяяяяя"
};

static FONT_GLYPH korvet_font0_glyph187 = {
    8, 16, /* width, height */
    "яяяяя\xf\xf\xf\xf\xf\xfяяяяя"
};

static FONT_GLYPH korvet_font0_glyph188 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яяяяяяяяяяя"
};

static FONT_GLYPH korvet_font0_glyph189 = {
    8, 16, /* width, height */
    "ррррряяяяяяяяяяя"
};

static FONT_GLYPH korvet_font0_glyph190 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xfяяяяяяяяяяя"
};

static FONT_GLYPH korvet_font0_glyph191 = {
    8, 16, /* width, height */
    "яяяяяяяяяяяяяяяя"
};

static FONT_GLYPH korvet_font0_glyph192 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МЦцЦЦМ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph193 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0x\f|ММv\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph194 = {
    8, 16, /* width, height */
    "\0\0\0\x6|АьЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph195 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МММММю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font0_glyph196 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0""8llllюЖ‚\0\0"
};

static FONT_GLYPH korvet_font0_glyph197 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖюАЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph198 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~ЫЫЫ~\x18\x18\x18\0\0"
};

static FONT_GLYPH korvet_font0_glyph199 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юfb``р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph200 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Жl88lЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph201 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖОЮцжЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph202 = {
    8, 16, /* width, height */
    "\0\0\0(8\0ЖОЮцжЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph203 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0жlx~fж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph204 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\xe""6fffЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph205 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖоюЦЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph206 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph207 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph208 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph209 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~ММ|lО\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph210 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьfff|``р\0\0"
};

static FONT_GLYPH korvet_font0_glyph211 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖААЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph212 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~Z\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph213 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖЖ~\x6\x6|\0\0"
};

static FONT_GLYPH korvet_font0_glyph214 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦ||ЦЦ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph215 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьf|ffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph216 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0р`|ffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph217 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖцЮЮц\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph218 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Ж\x1c\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph219 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦЦЦЦю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph220 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Ж\x1e\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph221 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦЦЦЦю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font0_glyph222 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖ~\x6\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph223 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0р°<66<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph224 = {
    8, 16, /* width, height */
    "\0\0\0МЦЦЦцЦЦЦМ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph225 = {
    8, 16, /* width, height */
    "\0\0\0\x1e""6fЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph226 = {
    8, 16, /* width, height */
    "\0\0\0юfb`|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph227 = {
    8, 16, /* width, height */
    "\0\0\0ММММММММю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font0_glyph228 = {
    8, 16, /* width, height */
    "\0\0\0<lllllllюЖ‚\0\0"
};

static FONT_GLYPH korvet_font0_glyph229 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxhbfю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph230 = {
    8, 16, /* width, height */
    "\0\0\0~ЫЫЫЫ~\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph231 = {
    8, 16, /* width, height */
    "\0\0\0юfb`````р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph232 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖl88lЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph233 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖОЮцжЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph234 = {
    8, 16, /* width, height */
    "\0(8ЖЖЖОЮцжЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph235 = {
    8, 16, /* width, height */
    "\0\0\0жfllxllfж\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph236 = {
    8, 16, /* width, height */
    "\0\0\0\xe""6ffffffЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph237 = {
    8, 16, /* width, height */
    "\0\0\0ЖоюЦЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph238 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖюЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph239 = {
    8, 16, /* width, height */
    "\0\0\0""8lЖЖЖЖЖl8\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph240 = {
    8, 16, /* width, height */
    "\0\0\0юЖЖЖЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph241 = {
    8, 16, /* width, height */
    "\0\0\0~МММ|<lМО\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph242 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|```р\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph243 = {
    8, 16, /* width, height */
    "\0\0\0<fВАААВf<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph244 = {
    8, 16, /* width, height */
    "\0\0\0яЫ™\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph245 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖ~\x6\x6\x6|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph246 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦ|8|ЦЦЦ\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph247 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph248 = {
    8, 16, /* width, height */
    "\0\0\0р```|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph249 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖцЮЮЮц\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph250 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\x6<\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph251 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦЦЦЦЦЦю\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph252 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\x6>\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph253 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦЦЦЦЦЦю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font0_glyph254 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖ~\x6\x6\x6\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font0_glyph255 = {
    8, 16, /* width, height */
    "\0\0\0р°00<666<\0\0\0\0"
};

static FONT_GLYPH* korvet_font0_range0_glyphs[] = {
    &korvet_font0_glyph0,
    &korvet_font0_glyph1,
    &korvet_font0_glyph2,
    &korvet_font0_glyph3,
    &korvet_font0_glyph4,
    &korvet_font0_glyph5,
    &korvet_font0_glyph6,
    &korvet_font0_glyph7,
    &korvet_font0_glyph8,
    &korvet_font0_glyph9,
    &korvet_font0_glyph10,
    &korvet_font0_glyph11,
    &korvet_font0_glyph12,
    &korvet_font0_glyph13,
    &korvet_font0_glyph14,
    &korvet_font0_glyph15,
    &korvet_font0_glyph16,
    &korvet_font0_glyph17,
    &korvet_font0_glyph18,
    &korvet_font0_glyph19,
    &korvet_font0_glyph20,
    &korvet_font0_glyph21,
    &korvet_font0_glyph22,
    &korvet_font0_glyph23,
    &korvet_font0_glyph24,
    &korvet_font0_glyph25,
    &korvet_font0_glyph26,
    &korvet_font0_glyph27,
    &korvet_font0_glyph28,
    &korvet_font0_glyph29,
    &korvet_font0_glyph30,
    &korvet_font0_glyph31,
    &korvet_font0_glyph32,
    &korvet_font0_glyph33,
    &korvet_font0_glyph34,
    &korvet_font0_glyph35,
    &korvet_font0_glyph36,
    &korvet_font0_glyph37,
    &korvet_font0_glyph38,
    &korvet_font0_glyph39,
    &korvet_font0_glyph40,
    &korvet_font0_glyph41,
    &korvet_font0_glyph42,
    &korvet_font0_glyph43,
    &korvet_font0_glyph44,
    &korvet_font0_glyph45,
    &korvet_font0_glyph46,
    &korvet_font0_glyph47,
    &korvet_font0_glyph48,
    &korvet_font0_glyph49,
    &korvet_font0_glyph50,
    &korvet_font0_glyph51,
    &korvet_font0_glyph52,
    &korvet_font0_glyph53,
    &korvet_font0_glyph54,
    &korvet_font0_glyph55,
    &korvet_font0_glyph56,
    &korvet_font0_glyph57,
    &korvet_font0_glyph58,
    &korvet_font0_glyph59,
    &korvet_font0_glyph60,
    &korvet_font0_glyph61,
    &korvet_font0_glyph62,
    &korvet_font0_glyph63,
    &korvet_font0_glyph64,
    &korvet_font0_glyph65,
    &korvet_font0_glyph66,
    &korvet_font0_glyph67,
    &korvet_font0_glyph68,
    &korvet_font0_glyph69,
    &korvet_font0_glyph70,
    &korvet_font0_glyph71,
    &korvet_font0_glyph72,
    &korvet_font0_glyph73,
    &korvet_font0_glyph74,
    &korvet_font0_glyph75,
    &korvet_font0_glyph76,
    &korvet_font0_glyph77,
    &korvet_font0_glyph78,
    &korvet_font0_glyph79,
    &korvet_font0_glyph80,
    &korvet_font0_glyph81,
    &korvet_font0_glyph82,
    &korvet_font0_glyph83,
    &korvet_font0_glyph84,
    &korvet_font0_glyph85,
    &korvet_font0_glyph86,
    &korvet_font0_glyph87,
    &korvet_font0_glyph88,
    &korvet_font0_glyph89,
    &korvet_font0_glyph90,
    &korvet_font0_glyph91,
    &korvet_font0_glyph92,
    &korvet_font0_glyph93,
    &korvet_font0_glyph94,
    &korvet_font0_glyph95,
    &korvet_font0_glyph96,
    &korvet_font0_glyph97,
    &korvet_font0_glyph98,
    &korvet_font0_glyph99,
    &korvet_font0_glyph100,
    &korvet_font0_glyph101,
    &korvet_font0_glyph102,
    &korvet_font0_glyph103,
    &korvet_font0_glyph104,
    &korvet_font0_glyph105,
    &korvet_font0_glyph106,
    &korvet_font0_glyph107,
    &korvet_font0_glyph108,
    &korvet_font0_glyph109,
    &korvet_font0_glyph110,
    &korvet_font0_glyph111,
    &korvet_font0_glyph112,
    &korvet_font0_glyph113,
    &korvet_font0_glyph114,
    &korvet_font0_glyph115,
    &korvet_font0_glyph116,
    &korvet_font0_glyph117,
    &korvet_font0_glyph118,
    &korvet_font0_glyph119,
    &korvet_font0_glyph120,
    &korvet_font0_glyph121,
    &korvet_font0_glyph122,
    &korvet_font0_glyph123,
    &korvet_font0_glyph124,
    &korvet_font0_glyph125,
    &korvet_font0_glyph126,
    &korvet_font0_glyph127,
    &korvet_font0_glyph128,
    &korvet_font0_glyph129,
    &korvet_font0_glyph130,
    &korvet_font0_glyph131,
    &korvet_font0_glyph132,
    &korvet_font0_glyph133,
    &korvet_font0_glyph134,
    &korvet_font0_glyph135,
    &korvet_font0_glyph136,
    &korvet_font0_glyph137,
    &korvet_font0_glyph138,
    &korvet_font0_glyph139,
    &korvet_font0_glyph140,
    &korvet_font0_glyph141,
    &korvet_font0_glyph142,
    &korvet_font0_glyph143,
    &korvet_font0_glyph144,
    &korvet_font0_glyph145,
    &korvet_font0_glyph146,
    &korvet_font0_glyph147,
    &korvet_font0_glyph148,
    &korvet_font0_glyph149,
    &korvet_font0_glyph150,
    &korvet_font0_glyph151,
    &korvet_font0_glyph152,
    &korvet_font0_glyph153,
    &korvet_font0_glyph154,
    &korvet_font0_glyph155,
    &korvet_font0_glyph156,
    &korvet_font0_glyph157,
    &korvet_font0_glyph158,
    &korvet_font0_glyph159,
    &korvet_font0_glyph160,
    &korvet_font0_glyph161,
    &korvet_font0_glyph162,
    &korvet_font0_glyph163,
    &korvet_font0_glyph164,
    &korvet_font0_glyph165,
    &korvet_font0_glyph166,
    &korvet_font0_glyph167,
    &korvet_font0_glyph168,
    &korvet_font0_glyph169,
    &korvet_font0_glyph170,
    &korvet_font0_glyph171,
    &korvet_font0_glyph172,
    &korvet_font0_glyph173,
    &korvet_font0_glyph174,
    &korvet_font0_glyph175,
    &korvet_font0_glyph176,
    &korvet_font0_glyph177,
    &korvet_font0_glyph178,
    &korvet_font0_glyph179,
    &korvet_font0_glyph180,
    &korvet_font0_glyph181,
    &korvet_font0_glyph182,
    &korvet_font0_glyph183,
    &korvet_font0_glyph184,
    &korvet_font0_glyph185,
    &korvet_font0_glyph186,
    &korvet_font0_glyph187,
    &korvet_font0_glyph188,
    &korvet_font0_glyph189,
    &korvet_font0_glyph190,
    &korvet_font0_glyph191,
    &korvet_font0_glyph192,
    &korvet_font0_glyph193,
    &korvet_font0_glyph194,
    &korvet_font0_glyph195,
    &korvet_font0_glyph196,
    &korvet_font0_glyph197,
    &korvet_font0_glyph198,
    &korvet_font0_glyph199,
    &korvet_font0_glyph200,
    &korvet_font0_glyph201,
    &korvet_font0_glyph202,
    &korvet_font0_glyph203,
    &korvet_font0_glyph204,
    &korvet_font0_glyph205,
    &korvet_font0_glyph206,
    &korvet_font0_glyph207,
    &korvet_font0_glyph208,
    &korvet_font0_glyph209,
    &korvet_font0_glyph210,
    &korvet_font0_glyph211,
    &korvet_font0_glyph212,
    &korvet_font0_glyph213,
    &korvet_font0_glyph214,
    &korvet_font0_glyph215,
    &korvet_font0_glyph216,
    &korvet_font0_glyph217,
    &korvet_font0_glyph218,
    &korvet_font0_glyph219,
    &korvet_font0_glyph220,
    &korvet_font0_glyph221,
    &korvet_font0_glyph222,
    &korvet_font0_glyph223,
    &korvet_font0_glyph224,
    &korvet_font0_glyph225,
    &korvet_font0_glyph226,
    &korvet_font0_glyph227,
    &korvet_font0_glyph228,
    &korvet_font0_glyph229,
    &korvet_font0_glyph230,
    &korvet_font0_glyph231,
    &korvet_font0_glyph232,
    &korvet_font0_glyph233,
    &korvet_font0_glyph234,
    &korvet_font0_glyph235,
    &korvet_font0_glyph236,
    &korvet_font0_glyph237,
    &korvet_font0_glyph238,
    &korvet_font0_glyph239,
    &korvet_font0_glyph240,
    &korvet_font0_glyph241,
    &korvet_font0_glyph242,
    &korvet_font0_glyph243,
    &korvet_font0_glyph244,
    &korvet_font0_glyph245,
    &korvet_font0_glyph246,
    &korvet_font0_glyph247,
    &korvet_font0_glyph248,
    &korvet_font0_glyph249,
    &korvet_font0_glyph250,
    &korvet_font0_glyph251,
    &korvet_font0_glyph252,
    &korvet_font0_glyph253,
    &korvet_font0_glyph254,
    &korvet_font0_glyph255,
    0
};

static FONT_MONO_DATA korvet_font0_range0 = {
    0, 256, /* begin, end */
    korvet_font0_range0_glyphs,
    0
};

static FONT korvet_font0 = {
    &korvet_font0_range0,
    16, /* height */
    (FONT_VTABLE *)0 /* color flag */
};



static DATAFILE_PROPERTY korvet_font1_prop[] = {
    { "12-19-2002, 12:23", DAT_ID('D', 'A', 'T', 'E') },
    { "KORVET_FONT1", DAT_ID('N', 'A', 'M', 'E') },
    { "c:\\esl\\c\\Test\\Allegro\\font_dat\\K_F2.FNT", DAT_ID('O', 'R', 'I', 'G') },
    { 0, DAT_END }
};

static FONT_GLYPH korvet_font1_glyph0 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph1 = {
    8, 16, /* width, height */
    "\0\0\0~ЃҐЃЃЅ™Ѓ~\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph2 = {
    8, 16, /* width, height */
    "\0\0\0~яЫяяГзя~\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph3 = {
    8, 16, /* width, height */
    "\0\0\0\0lюююю|8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph4 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""8|ю|8\x10\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph5 = {
    8, 16, /* width, height */
    "\0\0\0\x18<<ззз\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph6 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~яя~\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph7 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\x18<<\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph8 = {
    8, 16, /* width, height */
    "ююююююоЖЖоюююююю"
};

static FONT_GLYPH korvet_font1_glyph9 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<fBBf<\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph10 = {
    8, 16, /* width, height */
    "\0\0яяяГ™ЅЅ™Гяяя\0\0"
};

static FONT_GLYPH korvet_font1_glyph11 = {
    8, 16, /* width, height */
    "\0\0\0\x1f\xf\x19\x18\x18\x18|ММx\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph12 = {
    8, 16, /* width, height */
    "\0\0\0xММx000ь00\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph13 = {
    8, 16, /* width, height */
    "\0\0\0?3?00000pа\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph14 = {
    8, 16, /* width, height */
    "\0\0\0~f~fffnомА\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph15 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18Ы<з<Ы\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph16 = {
    8, 16, /* width, height */
    "\0\0@`px|~|xp`@\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph17 = {
    8, 16, /* width, height */
    "\0\0\x2\x6\xe\x1e>~>\x1e\xe\x6\x2\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph18 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18~<\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph19 = {
    8, 16, /* width, height */
    "\0\0\0""ffffff\0""ff\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph20 = {
    8, 16, /* width, height */
    "\0\0\0~¶¶¶¶v666\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph21 = {
    8, 16, /* width, height */
    "\0\0xМ`8lЖЖl8\ff<\0\0"
};

static FONT_GLYPH korvet_font1_glyph22 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0ююю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph23 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18~<\x18~\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph24 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph25 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\x18\x18~<\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph26 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18\fю\f\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph27 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""0`ю`0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph28 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0аааю\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph29 = {
    8, 16, /* width, height */
    "\0\0\0\0\0$fяf$\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph30 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18<~яя\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph31 = {
    8, 16, /* width, height */
    "\0\0\0\0\0яя~<\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph32 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph33 = {
    8, 16, /* width, height */
    "\0\0\0\x18<<<\x18\x18\0\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph34 = {
    8, 16, /* width, height */
    "\0\0""fff$\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph35 = {
    8, 16, /* width, height */
    "\0\0\0llюlllюll\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph36 = {
    8, 16, /* width, height */
    "\0\x10\x10|ЖДА8\x6""FЖ|\x10\x10\0\0"
};

static FONT_GLYPH korvet_font1_glyph37 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ВЖ\f\x18""0fЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph38 = {
    8, 16, /* width, height */
    "\0\0\0""8ll8vЬММv\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph39 = {
    8, 16, /* width, height */
    "\0\0""8\x18""0@\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph40 = {
    8, 16, /* width, height */
    "\0\0\0\f\x18""00000\x18\f\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph41 = {
    8, 16, /* width, height */
    "\0\0\0""0\x18\f\f\f\f\f\x18""0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph42 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""f<я<f\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph43 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\x18я\x18\x18\x18\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph44 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0""8\x18""0@\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph45 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0ю\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph46 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0``\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph47 = {
    8, 16, /* width, height */
    "\0\0\0\x2\x6\f\x18""0`АЂ\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph48 = {
    8, 16, /* width, height */
    "\0\0\0|ЖОЮцжЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph49 = {
    8, 16, /* width, height */
    "\0\0\0\x18""8x\x18\x18\x18\x18\x18~\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph50 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\f\x18""0`Жю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph51 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\x6<\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph52 = {
    8, 16, /* width, height */
    "\0\0\0\f\x1c<lМю\f\f\x1e\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph53 = {
    8, 16, /* width, height */
    "\0\0\0юАААь\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph54 = {
    8, 16, /* width, height */
    "\0\0\0""8`ААьЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph55 = {
    8, 16, /* width, height */
    "\0\0\0юЖ\x6\f\x18""0000\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph56 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖ|ЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph57 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖ~\x6\x6\fx\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph58 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\0\0\0\x18\x18\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph59 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\0\0\0\x18\x18""0@\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph60 = {
    8, 16, /* width, height */
    "\0\0\0\x6\f\x18""0`0\x18\f\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph61 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~\0\0~\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph62 = {
    8, 16, /* width, height */
    "\0\0\0`0\x18\f\x6\f\x18""0`\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph63 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖ\f\x18\x18\0\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph64 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЮЮЮЬА|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph65 = {
    8, 16, /* width, height */
    "\0\0\0\x10""8lЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph66 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph67 = {
    8, 16, /* width, height */
    "\0\0\0<fВАААВf<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph68 = {
    8, 16, /* width, height */
    "\0\0\0шlffffflш\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph69 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxhbfю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph70 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxh``р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph71 = {
    8, 16, /* width, height */
    "\0\0\0<fВААОЖf:\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph72 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖюЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph73 = {
    8, 16, /* width, height */
    "\0\0\0<\x18\x18\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph74 = {
    8, 16, /* width, height */
    "\0\0\0\x1e\f\f\f\f\fММx\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph75 = {
    8, 16, /* width, height */
    "\0\0\0жfllxllfж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph76 = {
    8, 16, /* width, height */
    "\0\0\0р`````bfю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph77 = {
    8, 16, /* width, height */
    "\0\0\0ЖоюЦЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph78 = {
    8, 16, /* width, height */
    "\0\0\0ЖжцЮОЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph79 = {
    8, 16, /* width, height */
    "\0\0\0""8lЖЖЖЖЖl8\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph80 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|```р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph81 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖЖЖЦЮ|\f\xe\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph82 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|lffж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph83 = {
    8, 16, /* width, height */
    "\0\0\0|ЖЖ`8\fЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph84 = {
    8, 16, /* width, height */
    "\0\0\0яЫ™\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph85 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph86 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЖЖl8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph87 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖЦЦюоl\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph88 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖl8lЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph89 = {
    8, 16, /* width, height */
    "\0\0\0ГГГf<\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph90 = {
    8, 16, /* width, height */
    "\0\0\0яГ†\f\x18""0aГя\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph91 = {
    8, 16, /* width, height */
    "\0\0\0<0000000<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph92 = {
    8, 16, /* width, height */
    "\0\0\0\0ЂА`0\x18\f\x6\x2\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph93 = {
    8, 16, /* width, height */
    "\0\0\0<\f\f\f\f\f\f\f<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph94 = {
    8, 16, /* width, height */
    "\0\x10""8lЖ\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph95 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0я\0\0"
};

static FONT_GLYPH korvet_font1_glyph96 = {
    8, 16, /* width, height */
    "\0""80\x18\x4\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph97 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0x\f|ММv\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph98 = {
    8, 16, /* width, height */
    "\0\0\0а``xlfffЬ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph99 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖААЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph100 = {
    8, 16, /* width, height */
    "\0\0\0\x1c\f\f<lМММv\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph101 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖюАЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph102 = {
    8, 16, /* width, height */
    "\0\0\0\x1c""620x000x\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph103 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0vМММ|\fМx\0\0"
};

static FONT_GLYPH korvet_font1_glyph104 = {
    8, 16, /* width, height */
    "\0\0\0а``lvfffж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph105 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\0""8\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph106 = {
    8, 16, /* width, height */
    "\0\0\0\f\f\0\x1c\f\f\f\fll8\0\0"
};

static FONT_GLYPH korvet_font1_glyph107 = {
    8, 16, /* width, height */
    "\0\0\0а``flxlfж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph108 = {
    8, 16, /* width, height */
    "\0\0\0""8\x18\x18\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph109 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0жяЫЫЫЫ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph110 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Ьfffff\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph111 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph112 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьfff|``р\0\0"
};

static FONT_GLYPH korvet_font1_glyph113 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0vМММ|\f\f\x1e\0\0"
};

static FONT_GLYPH korvet_font1_glyph114 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Ьvf``р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph115 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Жp\x1cЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph116 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""00ь006\x1c\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph117 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МММММv\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph118 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖl8\x10\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph119 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЦЦюl\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph120 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Жl88lЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph121 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖЖ~\x6\fx\0\0"
};

static FONT_GLYPH korvet_font1_glyph122 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юМ\x18""0fю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph123 = {
    8, 16, /* width, height */
    "\0\0\0\xe\x18\x18\x18""0\x18\x18\x18\xe\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph124 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\0\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph125 = {
    8, 16, /* width, height */
    "\0\0\0p\x18\x18\x18\f\x18\x18\x18p\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph126 = {
    8, 16, /* width, height */
    "\0\0\0vЬ\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph127 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x10""8lЖЖЖю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph128 = {
    8, 16, /* width, height */
    "\"€\"€\"€\"€\"€\"€\"€\"€"
};

static FONT_GLYPH korvet_font1_glyph129 = {
    8, 16, /* width, height */
    "UЄUЄUЄUЄUЄUЄUЄUЄ"
};

static FONT_GLYPH korvet_font1_glyph130 = {
    8, 16, /* width, height */
    "ЭwЭwЭwЭwЭwЭwЭwЭw"
};

static FONT_GLYPH korvet_font1_glyph131 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph132 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph133 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18ш\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph134 = {
    8, 16, /* width, height */
    "llllllllмlllllll"
};

static FONT_GLYPH korvet_font1_glyph135 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0ьlllllll"
};

static FONT_GLYPH korvet_font1_glyph136 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ш\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph137 = {
    8, 16, /* width, height */
    "llllllм\fмlllllll"
};

static FONT_GLYPH korvet_font1_glyph138 = {
    8, 16, /* width, height */
    "llllllllllllllll"
};

static FONT_GLYPH korvet_font1_glyph139 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ь\fмlllllll"
};

static FONT_GLYPH korvet_font1_glyph140 = {
    8, 16, /* width, height */
    "llllllм\fь\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph141 = {
    8, 16, /* width, height */
    "llllllllь\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph142 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18ш\x18ш\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph143 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph144 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x1f\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph145 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18я\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph146 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph147 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph148 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph149 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph150 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x1f\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph151 = {
    8, 16, /* width, height */
    "llllllllolllllll"
};

static FONT_GLYPH korvet_font1_glyph152 = {
    8, 16, /* width, height */
    "llllllo`\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph153 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0`olllllll"
};

static FONT_GLYPH korvet_font1_glyph154 = {
    8, 16, /* width, height */
    "llllllп\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph155 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0пlllllll"
};

static FONT_GLYPH korvet_font1_glyph156 = {
    8, 16, /* width, height */
    "llllllo`olllllll"
};

static FONT_GLYPH korvet_font1_glyph157 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph158 = {
    8, 16, /* width, height */
    "llllllп\0пlllllll"
};

static FONT_GLYPH korvet_font1_glyph159 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18я\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph160 = {
    8, 16, /* width, height */
    "llllllllя\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph161 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph162 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0яlllllll"
};

static FONT_GLYPH korvet_font1_glyph163 = {
    8, 16, /* width, height */
    "llllllll\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph164 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x1f\x18\x1f\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph165 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\x1f\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph166 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0lllllll"
};

static FONT_GLYPH korvet_font1_glyph167 = {
    8, 16, /* width, height */
    "llllllllяlllllll"
};

static FONT_GLYPH korvet_font1_glyph168 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18я\x18я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph169 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18ш\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph170 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH korvet_font1_glyph171 = {
    8, 16, /* width, height */
    "яяяяяяяяяяяяяяяя"
};

static FONT_GLYPH korvet_font1_glyph172 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0яяяяяяяя"
};

static FONT_GLYPH korvet_font1_glyph173 = {
    8, 16, /* width, height */
    "рррррррррррррррр"
};

static FONT_GLYPH korvet_font1_glyph174 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH korvet_font1_glyph175 = {
    8, 16, /* width, height */
    "яяяяяяяя\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph176 = {
    8, 16, /* width, height */
    "\0\0\0\x1e""6fЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph177 = {
    8, 16, /* width, height */
    "\0\0\0юfb`|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph178 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph179 = {
    8, 16, /* width, height */
    "\0\0\0юfb`````р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph180 = {
    8, 16, /* width, height */
    "\0\0\0<lllllllюЖ‚\0\0"
};

static FONT_GLYPH korvet_font1_glyph181 = {
    8, 16, /* width, height */
    "\0\0\0юfbhxhbfю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph182 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦ|8|ЦЦЦ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph183 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\x6<\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph184 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖОЮцжЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph185 = {
    8, 16, /* width, height */
    "\0(8ЖЖЖОЮцжЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph186 = {
    8, 16, /* width, height */
    "\0\0\0жfllxllfж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph187 = {
    8, 16, /* width, height */
    "\0\0\0\xe""6ffffffЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph188 = {
    8, 16, /* width, height */
    "\0\0\0ЖоюЦЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph189 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖюЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph190 = {
    8, 16, /* width, height */
    "\0\0\0""8lЖЖЖЖЖl8\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph191 = {
    8, 16, /* width, height */
    "\0\0\0юЖЖЖЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph192 = {
    8, 16, /* width, height */
    "\0\0\0ьfff|```р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph193 = {
    8, 16, /* width, height */
    "\0\0\0<fВАААВf<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph194 = {
    8, 16, /* width, height */
    "\0\0\0яЫ™\x18\x18\x18\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph195 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖ~\x6\x6\x6|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph196 = {
    8, 16, /* width, height */
    "\0\0\0~ЫЫЫЫ~\x18\x18<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph197 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖl8lЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph198 = {
    8, 16, /* width, height */
    "\0\0\0ММММММММю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font1_glyph199 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖ~\x6\x6\x6\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph200 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦЦЦЦЦЦю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph201 = {
    8, 16, /* width, height */
    "\0\0\0ЦЦЦЦЦЦЦЦю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font1_glyph202 = {
    8, 16, /* width, height */
    "\0\0\0р°00<666<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph203 = {
    8, 16, /* width, height */
    "\0\0\0ЖЖЖЖцЮЮЮц\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph204 = {
    8, 16, /* width, height */
    "\0\0\0р```|fffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph205 = {
    8, 16, /* width, height */
    "\0\0\0|Ж\x6\x6>\x6\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph206 = {
    8, 16, /* width, height */
    "\0\0\0МЦЦЦцЦЦЦМ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph207 = {
    8, 16, /* width, height */
    "\0\0\0~МММ|<lМО\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph208 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0x\f|ММv\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph209 = {
    8, 16, /* width, height */
    "\0\0\0\x6|АьЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph210 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьf|ffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph211 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юfb``р\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph212 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0""8llllюЖ‚\0\0"
};

static FONT_GLYPH korvet_font1_glyph213 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖюАЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph214 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦ||ЦЦ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph215 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Ж\x1c\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph216 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖОЮцжЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph217 = {
    8, 16, /* width, height */
    "\0\0\0(8\0ЖОЮцжЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph218 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0жlx~fж\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph219 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\xe""6fffЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph220 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖоюЦЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph221 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖюЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph222 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖЖЖЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph223 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0юЖЖЖЖЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph224 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ьfff|``р\0\0"
};

static FONT_GLYPH korvet_font1_glyph225 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|ЖААЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph226 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~Z\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph227 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖЖ~\x6\x6|\0\0"
};

static FONT_GLYPH korvet_font1_glyph228 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~ЫЫЫ~\x18\x18\x18\0\0"
};

static FONT_GLYPH korvet_font1_glyph229 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0Жl88lЖ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph230 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МММММю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font1_glyph231 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖЖ~\x6\x6\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph232 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦЦЦЦю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph233 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЦЦЦЦЦю\x6\x2\0\0"
};

static FONT_GLYPH korvet_font1_glyph234 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0р°<66<\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph235 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ЖЖцЮЮц\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph236 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0р`|ffь\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph237 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0|Ж\x1e\x6Ж|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph238 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0МЦцЦЦМ\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph239 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~ММ|lО\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph240 = {
    8, 16, /* width, height */
    "\0\0(\0юbhxhbfю\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph241 = {
    8, 16, /* width, height */
    "\0\0\0\0(\0|ЖюАЖ|\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph242 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\x3\x6\f\x18""0"
};

static FONT_GLYPH korvet_font1_glyph243 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0А`0\x18\f"
};

static FONT_GLYPH korvet_font1_glyph244 = {
    8, 16, /* width, height */
    "\f\x18""0`А\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph245 = {
    8, 16, /* width, height */
    "0\x18\f\x6\x3\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph246 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18\fю\f\x18\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph247 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""0`ю`0\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph248 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\x18\x18~<\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph249 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18\x18\x18\x18\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph250 = {
    8, 16, /* width, height */
    "\0\0\0\0""00\0ь\0""00\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph251 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18я\x18\x18\0я\0\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph252 = {
    8, 16, /* width, height */
    "\0\0\0‹‹ИЁ€€€€\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph253 = {
    8, 16, /* width, height */
    "\0\0\0‚D|ЖЖЖ|D‚\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph254 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<<<<<<\0\0\0\0\0"
};

static FONT_GLYPH korvet_font1_glyph255 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH* korvet_font1_range0_glyphs[] = {
    &korvet_font1_glyph0,
    &korvet_font1_glyph1,
    &korvet_font1_glyph2,
    &korvet_font1_glyph3,
    &korvet_font1_glyph4,
    &korvet_font1_glyph5,
    &korvet_font1_glyph6,
    &korvet_font1_glyph7,
    &korvet_font1_glyph8,
    &korvet_font1_glyph9,
    &korvet_font1_glyph10,
    &korvet_font1_glyph11,
    &korvet_font1_glyph12,
    &korvet_font1_glyph13,
    &korvet_font1_glyph14,
    &korvet_font1_glyph15,
    &korvet_font1_glyph16,
    &korvet_font1_glyph17,
    &korvet_font1_glyph18,
    &korvet_font1_glyph19,
    &korvet_font1_glyph20,
    &korvet_font1_glyph21,
    &korvet_font1_glyph22,
    &korvet_font1_glyph23,
    &korvet_font1_glyph24,
    &korvet_font1_glyph25,
    &korvet_font1_glyph26,
    &korvet_font1_glyph27,
    &korvet_font1_glyph28,
    &korvet_font1_glyph29,
    &korvet_font1_glyph30,
    &korvet_font1_glyph31,
    &korvet_font1_glyph32,
    &korvet_font1_glyph33,
    &korvet_font1_glyph34,
    &korvet_font1_glyph35,
    &korvet_font1_glyph36,
    &korvet_font1_glyph37,
    &korvet_font1_glyph38,
    &korvet_font1_glyph39,
    &korvet_font1_glyph40,
    &korvet_font1_glyph41,
    &korvet_font1_glyph42,
    &korvet_font1_glyph43,
    &korvet_font1_glyph44,
    &korvet_font1_glyph45,
    &korvet_font1_glyph46,
    &korvet_font1_glyph47,
    &korvet_font1_glyph48,
    &korvet_font1_glyph49,
    &korvet_font1_glyph50,
    &korvet_font1_glyph51,
    &korvet_font1_glyph52,
    &korvet_font1_glyph53,
    &korvet_font1_glyph54,
    &korvet_font1_glyph55,
    &korvet_font1_glyph56,
    &korvet_font1_glyph57,
    &korvet_font1_glyph58,
    &korvet_font1_glyph59,
    &korvet_font1_glyph60,
    &korvet_font1_glyph61,
    &korvet_font1_glyph62,
    &korvet_font1_glyph63,
    &korvet_font1_glyph64,
    &korvet_font1_glyph65,
    &korvet_font1_glyph66,
    &korvet_font1_glyph67,
    &korvet_font1_glyph68,
    &korvet_font1_glyph69,
    &korvet_font1_glyph70,
    &korvet_font1_glyph71,
    &korvet_font1_glyph72,
    &korvet_font1_glyph73,
    &korvet_font1_glyph74,
    &korvet_font1_glyph75,
    &korvet_font1_glyph76,
    &korvet_font1_glyph77,
    &korvet_font1_glyph78,
    &korvet_font1_glyph79,
    &korvet_font1_glyph80,
    &korvet_font1_glyph81,
    &korvet_font1_glyph82,
    &korvet_font1_glyph83,
    &korvet_font1_glyph84,
    &korvet_font1_glyph85,
    &korvet_font1_glyph86,
    &korvet_font1_glyph87,
    &korvet_font1_glyph88,
    &korvet_font1_glyph89,
    &korvet_font1_glyph90,
    &korvet_font1_glyph91,
    &korvet_font1_glyph92,
    &korvet_font1_glyph93,
    &korvet_font1_glyph94,
    &korvet_font1_glyph95,
    &korvet_font1_glyph96,
    &korvet_font1_glyph97,
    &korvet_font1_glyph98,
    &korvet_font1_glyph99,
    &korvet_font1_glyph100,
    &korvet_font1_glyph101,
    &korvet_font1_glyph102,
    &korvet_font1_glyph103,
    &korvet_font1_glyph104,
    &korvet_font1_glyph105,
    &korvet_font1_glyph106,
    &korvet_font1_glyph107,
    &korvet_font1_glyph108,
    &korvet_font1_glyph109,
    &korvet_font1_glyph110,
    &korvet_font1_glyph111,
    &korvet_font1_glyph112,
    &korvet_font1_glyph113,
    &korvet_font1_glyph114,
    &korvet_font1_glyph115,
    &korvet_font1_glyph116,
    &korvet_font1_glyph117,
    &korvet_font1_glyph118,
    &korvet_font1_glyph119,
    &korvet_font1_glyph120,
    &korvet_font1_glyph121,
    &korvet_font1_glyph122,
    &korvet_font1_glyph123,
    &korvet_font1_glyph124,
    &korvet_font1_glyph125,
    &korvet_font1_glyph126,
    &korvet_font1_glyph127,
    &korvet_font1_glyph128,
    &korvet_font1_glyph129,
    &korvet_font1_glyph130,
    &korvet_font1_glyph131,
    &korvet_font1_glyph132,
    &korvet_font1_glyph133,
    &korvet_font1_glyph134,
    &korvet_font1_glyph135,
    &korvet_font1_glyph136,
    &korvet_font1_glyph137,
    &korvet_font1_glyph138,
    &korvet_font1_glyph139,
    &korvet_font1_glyph140,
    &korvet_font1_glyph141,
    &korvet_font1_glyph142,
    &korvet_font1_glyph143,
    &korvet_font1_glyph144,
    &korvet_font1_glyph145,
    &korvet_font1_glyph146,
    &korvet_font1_glyph147,
    &korvet_font1_glyph148,
    &korvet_font1_glyph149,
    &korvet_font1_glyph150,
    &korvet_font1_glyph151,
    &korvet_font1_glyph152,
    &korvet_font1_glyph153,
    &korvet_font1_glyph154,
    &korvet_font1_glyph155,
    &korvet_font1_glyph156,
    &korvet_font1_glyph157,
    &korvet_font1_glyph158,
    &korvet_font1_glyph159,
    &korvet_font1_glyph160,
    &korvet_font1_glyph161,
    &korvet_font1_glyph162,
    &korvet_font1_glyph163,
    &korvet_font1_glyph164,
    &korvet_font1_glyph165,
    &korvet_font1_glyph166,
    &korvet_font1_glyph167,
    &korvet_font1_glyph168,
    &korvet_font1_glyph169,
    &korvet_font1_glyph170,
    &korvet_font1_glyph171,
    &korvet_font1_glyph172,
    &korvet_font1_glyph173,
    &korvet_font1_glyph174,
    &korvet_font1_glyph175,
    &korvet_font1_glyph176,
    &korvet_font1_glyph177,
    &korvet_font1_glyph178,
    &korvet_font1_glyph179,
    &korvet_font1_glyph180,
    &korvet_font1_glyph181,
    &korvet_font1_glyph182,
    &korvet_font1_glyph183,
    &korvet_font1_glyph184,
    &korvet_font1_glyph185,
    &korvet_font1_glyph186,
    &korvet_font1_glyph187,
    &korvet_font1_glyph188,
    &korvet_font1_glyph189,
    &korvet_font1_glyph190,
    &korvet_font1_glyph191,
    &korvet_font1_glyph192,
    &korvet_font1_glyph193,
    &korvet_font1_glyph194,
    &korvet_font1_glyph195,
    &korvet_font1_glyph196,
    &korvet_font1_glyph197,
    &korvet_font1_glyph198,
    &korvet_font1_glyph199,
    &korvet_font1_glyph200,
    &korvet_font1_glyph201,
    &korvet_font1_glyph202,
    &korvet_font1_glyph203,
    &korvet_font1_glyph204,
    &korvet_font1_glyph205,
    &korvet_font1_glyph206,
    &korvet_font1_glyph207,
    &korvet_font1_glyph208,
    &korvet_font1_glyph209,
    &korvet_font1_glyph210,
    &korvet_font1_glyph211,
    &korvet_font1_glyph212,
    &korvet_font1_glyph213,
    &korvet_font1_glyph214,
    &korvet_font1_glyph215,
    &korvet_font1_glyph216,
    &korvet_font1_glyph217,
    &korvet_font1_glyph218,
    &korvet_font1_glyph219,
    &korvet_font1_glyph220,
    &korvet_font1_glyph221,
    &korvet_font1_glyph222,
    &korvet_font1_glyph223,
    &korvet_font1_glyph224,
    &korvet_font1_glyph225,
    &korvet_font1_glyph226,
    &korvet_font1_glyph227,
    &korvet_font1_glyph228,
    &korvet_font1_glyph229,
    &korvet_font1_glyph230,
    &korvet_font1_glyph231,
    &korvet_font1_glyph232,
    &korvet_font1_glyph233,
    &korvet_font1_glyph234,
    &korvet_font1_glyph235,
    &korvet_font1_glyph236,
    &korvet_font1_glyph237,
    &korvet_font1_glyph238,
    &korvet_font1_glyph239,
    &korvet_font1_glyph240,
    &korvet_font1_glyph241,
    &korvet_font1_glyph242,
    &korvet_font1_glyph243,
    &korvet_font1_glyph244,
    &korvet_font1_glyph245,
    &korvet_font1_glyph246,
    &korvet_font1_glyph247,
    &korvet_font1_glyph248,
    &korvet_font1_glyph249,
    &korvet_font1_glyph250,
    &korvet_font1_glyph251,
    &korvet_font1_glyph252,
    &korvet_font1_glyph253,
    &korvet_font1_glyph254,
    &korvet_font1_glyph255,
    0
};

static FONT_MONO_DATA korvet_font1_range0 = {
    0, 256, /* begin, end */
    korvet_font1_range0_glyphs,
    0
};

static FONT korvet_font1 = {
    &korvet_font1_range0,
    16, /* height */
    (FONT_VTABLE *)0 /* color flag */
};



static DATAFILE_PROPERTY pc_font_prop[] = {
    { "10-12-1998, 19:56", DAT_ID('D', 'A', 'T', 'E') },
    { "PC_FONT", DAT_ID('N', 'A', 'M', 'E') },
    { "c:\\esl\\c\\Test\\Allegro\\font_dat\\FONT16.FNT", DAT_ID('O', 'R', 'I', 'G') },
    { 0, DAT_END }
};

static FONT_GLYPH pc_font_glyph0 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph1 = {
    8, 16, /* width, height */
    "\0\0~ЃҐҐҐЃЃЅ™Ѓ~\0\0\0"
};

static FONT_GLYPH pc_font_glyph2 = {
    8, 16, /* width, height */
    "\0\0~яЫЫЫяяГзя~\0\0\0"
};

static FONT_GLYPH pc_font_glyph3 = {
    8, 16, /* width, height */
    "\0\0lюююююю|8\x10\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph4 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""8|ю|8\x10\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph5 = {
    8, 16, /* width, height */
    "\0\0\0\x18<<ззз\x18\x18<\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph6 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~яя~\x18\x18<\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph7 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18<<\x18\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph8 = {
    8, 16, /* width, height */
    "яяяяяязГГзяяяяяя"
};

static FONT_GLYPH pc_font_glyph9 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<fBBf<\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph10 = {
    8, 16, /* width, height */
    "яяяяГ™ЅЅ™Гяяяяяя"
};

static FONT_GLYPH pc_font_glyph11 = {
    8, 16, /* width, height */
    "\0\0\0\x1e\xe\x1a""2xМММx\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph12 = {
    8, 16, /* width, height */
    "\0\0\0<fff<\x18~\x18\x18\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph13 = {
    8, 16, /* width, height */
    "\0\0\0?3?000pра\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph14 = {
    8, 16, /* width, height */
    "\0\0\0ccccgзжА\0\0\0"
};

static FONT_GLYPH pc_font_glyph15 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18Ы<з<Ы\x18\x18\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph16 = {
    8, 16, /* width, height */
    "\0\0\0ЂАашюшаАЂ\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph17 = {
    8, 16, /* width, height */
    "\0\0\0\x2\x6\xe>ю>\xe\x6\x2\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph18 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18\x18\x18\x18~<\x18\0"
};

static FONT_GLYPH pc_font_glyph19 = {
    8, 16, /* width, height */
    "\0\0\0""ffffff\0""ff\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph20 = {
    8, 16, /* width, height */
    "\0\0\0ЫЫЫ{\x1b\x1b\x1b\x1b\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph21 = {
    8, 16, /* width, height */
    "\0\0|Ж`8lЖЖl8\fЖ|\0\0"
};

static FONT_GLYPH pc_font_glyph22 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0ююю\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph23 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18~<\x18~\0\0\0"
};

static FONT_GLYPH pc_font_glyph24 = {
    8, 16, /* width, height */
    "\0\0\0\x18<~\x18\x18\x18\x18\x18\x18\x18\x18\x18\0"
};

static FONT_GLYPH pc_font_glyph25 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\x18\x18\x18\x18\x18\x18\x18~<\x18\0"
};

static FONT_GLYPH pc_font_glyph26 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18\fю\f\x18\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph27 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""0`ю`0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph28 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0АААю\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph29 = {
    8, 16, /* width, height */
    "\0\0\0\0\0(lюl(\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph30 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""88||юю\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph31 = {
    8, 16, /* width, height */
    "\0\0\0\0юю||88\x10\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph32 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph33 = {
    8, 16, /* width, height */
    "\0\0\x18<<<<\x18\x18\x18\0\0\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph34 = {
    8, 16, /* width, height */
    "\0""fffff$\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph35 = {
    8, 16, /* width, height */
    "\0\0lllюlllюlll\0\0\0"
};

static FONT_GLYPH pc_font_glyph36 = {
    8, 16, /* width, height */
    "\x18\x18\x18|ЖВА|\x6†Ж|\x18\x18\x18\0"
};

static FONT_GLYPH pc_font_glyph37 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ВЖ\f\x18""0fЖ\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph38 = {
    8, 16, /* width, height */
    "\0\0""8lll8vЬМММv\0\0\0"
};

static FONT_GLYPH pc_font_glyph39 = {
    8, 16, /* width, height */
    "\0""0000`\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph40 = {
    8, 16, /* width, height */
    "\0\0\f\x18""0000000\x18\f\0\0\0"
};

static FONT_GLYPH pc_font_glyph41 = {
    8, 16, /* width, height */
    "\0\0""0\x18\f\f\f\f\f\f\f\x18""0\0\0\0"
};

static FONT_GLYPH pc_font_glyph42 = {
    8, 16, /* width, height */
    "\0\0\0\0""ff<я<ff\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph43 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\x18~\x18\x18\x18\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph44 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\x18\x18\x18\x18""0\0\0"
};

static FONT_GLYPH pc_font_glyph45 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0ю\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph46 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\x18\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph47 = {
    8, 16, /* width, height */
    "\0\0\0\x2\x6\f\x18""0`АЂ\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph48 = {
    8, 16, /* width, height */
    "\0\0|ЖЖОЮццжЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph49 = {
    8, 16, /* width, height */
    "\0\0\x18\x18""8x\x18\x18\x18\x18\x18\x18~\0\0\0"
};

static FONT_GLYPH pc_font_glyph50 = {
    8, 16, /* width, height */
    "\0\0|ЖЖ\x6\x6\f\x18""0`Жю\0\0\0"
};

static FONT_GLYPH pc_font_glyph51 = {
    8, 16, /* width, height */
    "\0\0|Ж\x6\x6\x6<\x6\x6\x6Ж|\0\0\0"
};

static FONT_GLYPH pc_font_glyph52 = {
    8, 16, /* width, height */
    "\0\0\f\x1c<lММю\f\f\f\x1e\0\0\0"
};

static FONT_GLYPH pc_font_glyph53 = {
    8, 16, /* width, height */
    "\0\0юАААь\x6\x6\x6\x6Ж|\0\0\0"
};

static FONT_GLYPH pc_font_glyph54 = {
    8, 16, /* width, height */
    "\0\0""8`ААьЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph55 = {
    8, 16, /* width, height */
    "\0\0юЖЖ\x6\x6\f\x18""0000\0\0\0"
};

static FONT_GLYPH pc_font_glyph56 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЖ|ЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph57 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЖЖ~\x6\x6\fx\0\0\0"
};

static FONT_GLYPH pc_font_glyph58 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\0\0\0\0\0\0\x18\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph59 = {
    8, 16, /* width, height */
    "\0\0\0\x18\x18\0\0\0\0\x18\x18\x18\x18""0\0\0"
};

static FONT_GLYPH pc_font_glyph60 = {
    8, 16, /* width, height */
    "\0\0\0\x6\f\x18""0`0\x18\f\x6\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph61 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0~\0\0~\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph62 = {
    8, 16, /* width, height */
    "\0\0\0`0\x18\f\x6\f\x18""0`\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph63 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖ\f\x18\x18\x18\0\x18\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph64 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЮЮЮЬАА|\0\0\0"
};

static FONT_GLYPH pc_font_glyph65 = {
    8, 16, /* width, height */
    "\0\0\x10""8lЖЖЖюЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph66 = {
    8, 16, /* width, height */
    "\0\0ьffff|ffffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph67 = {
    8, 16, /* width, height */
    "\0\0|ЖЖААААЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph68 = {
    8, 16, /* width, height */
    "\0\0ьfffffffffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph69 = {
    8, 16, /* width, height */
    "\0\0юfb`hxhhbfю\0\0\0"
};

static FONT_GLYPH pc_font_glyph70 = {
    8, 16, /* width, height */
    "\0\0юfb`hxhh``р\0\0\0"
};

static FONT_GLYPH pc_font_glyph71 = {
    8, 16, /* width, height */
    "\0\0|ЖЖАААЮЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph72 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖюЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph73 = {
    8, 16, /* width, height */
    "\0\0<\x18\x18\x18\x18\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph74 = {
    8, 16, /* width, height */
    "\0\0\x1e\f\f\f\f\f\f\fММx\0\0\0"
};

static FONT_GLYPH pc_font_glyph75 = {
    8, 16, /* width, height */
    "\0\0жffllxllffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph76 = {
    8, 16, /* width, height */
    "\0\0р```````bfю\0\0\0"
};

static FONT_GLYPH pc_font_glyph77 = {
    8, 16, /* width, height */
    "\0\0ЖЖоююЦЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph78 = {
    8, 16, /* width, height */
    "\0\0ЖЖжцюЮОЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph79 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЖЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph80 = {
    8, 16, /* width, height */
    "\0\0ьfffff|```р\0\0\0"
};

static FONT_GLYPH pc_font_glyph81 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЖЖЖЦЮ|\f\0\0\0"
};

static FONT_GLYPH pc_font_glyph82 = {
    8, 16, /* width, height */
    "\0\0ьffff|lfffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph83 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖ`8\fЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph84 = {
    8, 16, /* width, height */
    "\0\0~~Z\x18\x18\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph85 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph86 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖЖЖЖl8\x10\0\0\0"
};

static FONT_GLYPH pc_font_glyph87 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖЦЦю|ll\0\0\0"
};

static FONT_GLYPH pc_font_glyph88 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖl888lЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph89 = {
    8, 16, /* width, height */
    "\0\0""fffff<\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph90 = {
    8, 16, /* width, height */
    "\0\0юЖЖЊ\x18""0`ВЖЖю\0\0\0"
};

static FONT_GLYPH pc_font_glyph91 = {
    8, 16, /* width, height */
    "\0\0<000000000<\0\0\0"
};

static FONT_GLYPH pc_font_glyph92 = {
    8, 16, /* width, height */
    "\0\0\0ЂАаp8\x1c\xe\x6\x2\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph93 = {
    8, 16, /* width, height */
    "\0\0<\f\f\f\f\f\f\f\f\f<\0\0\0"
};

static FONT_GLYPH pc_font_glyph94 = {
    8, 16, /* width, height */
    "\x10\x10""8lЖ\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph95 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0яя\0\0"
};

static FONT_GLYPH pc_font_glyph96 = {
    8, 16, /* width, height */
    "000\x18\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph97 = {
    8, 16, /* width, height */
    "\0\0\0\0\0xМ\f|МММv\0\0\0"
};

static FONT_GLYPH pc_font_glyph98 = {
    8, 16, /* width, height */
    "\0\0а```xlffff|\0\0\0"
};

static FONT_GLYPH pc_font_glyph99 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖААЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph100 = {
    8, 16, /* width, height */
    "\0\0\x1c\f\f\f<lММММv\0\0\0"
};

static FONT_GLYPH pc_font_glyph101 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖюАЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph102 = {
    8, 16, /* width, height */
    "\0\0""8ld`р`````р\0\0\0"
};

static FONT_GLYPH pc_font_glyph103 = {
    8, 16, /* width, height */
    "\0\0\0\0\0vМММММ|\fМx\0"
};

static FONT_GLYPH pc_font_glyph104 = {
    8, 16, /* width, height */
    "\0\0а``lvfffffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph105 = {
    8, 16, /* width, height */
    "\0\0\x18\x18\0""8\x18\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph106 = {
    8, 16, /* width, height */
    "\0\0\x6\x6\0\xe\x6\x6\x6\x6\x6\x6""ff<\0"
};

static FONT_GLYPH pc_font_glyph107 = {
    8, 16, /* width, height */
    "\0\0а``fflxlffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph108 = {
    8, 16, /* width, height */
    "\0\0""8\x18\x18\x18\x18\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph109 = {
    8, 16, /* width, height */
    "\0\0\0\0\0мюЦЦЦЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph110 = {
    8, 16, /* width, height */
    "\0\0\0\0\0Ьfffffff\0\0\0"
};

static FONT_GLYPH pc_font_glyph111 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph112 = {
    8, 16, /* width, height */
    "\0\0\0\0\0Ьffffff|`р\0"
};

static FONT_GLYPH pc_font_glyph113 = {
    8, 16, /* width, height */
    "\0\0\0\0\0vММММММ|\f\x1e\0"
};

static FONT_GLYPH pc_font_glyph114 = {
    8, 16, /* width, height */
    "\0\0\0\0\0Ьvf````р\0\0\0"
};

static FONT_GLYPH pc_font_glyph115 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖp\x1cЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph116 = {
    8, 16, /* width, height */
    "\0\0\x10""00ь000006\x1c\0\0\0"
};

static FONT_GLYPH pc_font_glyph117 = {
    8, 16, /* width, height */
    "\0\0\0\0\0МММММММv\0\0\0"
};

static FONT_GLYPH pc_font_glyph118 = {
    8, 16, /* width, height */
    "\0\0\0\0\0""ffffff<\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph119 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖЖЦЦюll\0\0\0"
};

static FONT_GLYPH pc_font_glyph120 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖl88lЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph121 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖЖЖЖЖ~\x6\fш\0"
};

static FONT_GLYPH pc_font_glyph122 = {
    8, 16, /* width, height */
    "\0\0\0\0\0юЖМ\x18""0fЖю\0\0\0"
};

static FONT_GLYPH pc_font_glyph123 = {
    8, 16, /* width, height */
    "\0\xe\x18\x18\x18\x18\x18pp\x18\x18\x18\x18\x18\xe\0"
};

static FONT_GLYPH pc_font_glyph124 = {
    8, 16, /* width, height */
    "\0\0\x18\x18\x18\x18\x18\0\x18\x18\x18\x18\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph125 = {
    8, 16, /* width, height */
    "\0p\x18\x18\x18\x18\x18\xe\xe\x18\x18\x18\x18\x18p\0"
};

static FONT_GLYPH pc_font_glyph126 = {
    8, 16, /* width, height */
    "\0\0vЬ\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph127 = {
    8, 16, /* width, height */
    "\0\0\0\0\x10""8lЖЖЖЖю\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph128 = {
    8, 16, /* width, height */
    "\0\0\x10""8lЖЖЖюЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph129 = {
    8, 16, /* width, height */
    "\0\0юfb`|fffffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph130 = {
    8, 16, /* width, height */
    "\0\0ьfff|fffffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph131 = {
    8, 16, /* width, height */
    "\0\0юfb```````р\0\0\0"
};

static FONT_GLYPH pc_font_glyph132 = {
    8, 16, /* width, height */
    "\0\0>fffffffffяГГ\0"
};

static FONT_GLYPH pc_font_glyph133 = {
    8, 16, /* width, height */
    "\0\0юffbhxhbffю\0\0\0"
};

static FONT_GLYPH pc_font_glyph134 = {
    8, 16, /* width, height */
    "\0\0ЦЦЦ|8|ЦЦЦЦЦ\0\0\0"
};

static FONT_GLYPH pc_font_glyph135 = {
    8, 16, /* width, height */
    "\0\0|Ж\x6\x6\x6<\x6\x6\x6Ж|\0\0\0"
};

static FONT_GLYPH pc_font_glyph136 = {
    8, 16, /* width, height */
    "\0\0ЖЖОЮюцжЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph137 = {
    8, 16, /* width, height */
    "88ЖЖОЮюцжЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph138 = {
    8, 16, /* width, height */
    "\0\0жfllxllfffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph139 = {
    8, 16, /* width, height */
    "\0\0>fffffffffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph140 = {
    8, 16, /* width, height */
    "\0\0ЖоююЦЖЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph141 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖюЖЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph142 = {
    8, 16, /* width, height */
    "\0\0|ЖЖЖЖЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph143 = {
    8, 16, /* width, height */
    "\0\0юЖЖЖЖЖЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph144 = {
    8, 16, /* width, height */
    "\0\0ьfffff|```р\0\0\0"
};

static FONT_GLYPH pc_font_glyph145 = {
    8, 16, /* width, height */
    "\0\0|ЖЖААААЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph146 = {
    8, 16, /* width, height */
    "\0\0~~Z\x18\x18\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph147 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖ~\x6\x6\x6Ж|\0\0\0"
};

static FONT_GLYPH pc_font_glyph148 = {
    8, 16, /* width, height */
    "\0\0\x18~ЫЫЫЫЫЫЫ~\x18\0\0\0"
};

static FONT_GLYPH pc_font_glyph149 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖl888lЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph150 = {
    8, 16, /* width, height */
    "\0\0ММММММММММю\x6\x6\0"
};

static FONT_GLYPH pc_font_glyph151 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖЖЖ~\x6\x6\x6\x6\0\0\0"
};

static FONT_GLYPH pc_font_glyph152 = {
    8, 16, /* width, height */
    "\0\0ЦЦЦЦЦЦЦЦЦЦю\0\0\0"
};

static FONT_GLYPH pc_font_glyph153 = {
    8, 16, /* width, height */
    "\0\0ЦЦЦЦЦЦЦЦЦЦю\x3\x3\0"
};

static FONT_GLYPH pc_font_glyph154 = {
    8, 16, /* width, height */
    "\0\0шр°0<66666|\0\0\0"
};

static FONT_GLYPH pc_font_glyph155 = {
    8, 16, /* width, height */
    "\0\0ЖЖЖЖцЮЮЮЮЮц\0\0\0"
};

static FONT_GLYPH pc_font_glyph156 = {
    8, 16, /* width, height */
    "\0\0р```|fffffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph157 = {
    8, 16, /* width, height */
    "\0\0xМ††&>&††Мx\0\0\0"
};

static FONT_GLYPH pc_font_glyph158 = {
    8, 16, /* width, height */
    "\0\0њ¶¶¶¶ц¶¶¶¶њ\0\0\0"
};

static FONT_GLYPH pc_font_glyph159 = {
    8, 16, /* width, height */
    "\0\0~ММММ|lММОО\0\0\0"
};

static FONT_GLYPH pc_font_glyph160 = {
    8, 16, /* width, height */
    "\0\0\0\0\0xМ\f|МММv\0\0\0"
};

static FONT_GLYPH pc_font_glyph161 = {
    8, 16, /* width, height */
    "\0\0\0\x1c""0`|fffff<\0\0\0"
};

static FONT_GLYPH pc_font_glyph162 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ьff|fffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph163 = {
    8, 16, /* width, height */
    "\0\0\0\0\0юb`````р\0\0\0"
};

static FONT_GLYPH pc_font_glyph164 = {
    8, 16, /* width, height */
    "\0\0\0\0\0>ffffffяГГ\0"
};

static FONT_GLYPH pc_font_glyph165 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖюААЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph166 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЦЦЦ||ЦЦЦ\0\0\0"
};

static FONT_GLYPH pc_font_glyph167 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<ff\f\x6""ff<\0\0\0"
};

static FONT_GLYPH pc_font_glyph168 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖОЮюцжЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph169 = {
    8, 16, /* width, height */
    "\0\0""88\0ЖОЮюцжЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph170 = {
    8, 16, /* width, height */
    "\0\0\0\0\0жflxlffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph171 = {
    8, 16, /* width, height */
    "\0\0\0\0\0>ffffffж\0\0\0"
};

static FONT_GLYPH pc_font_glyph172 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖоююЦЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph173 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖЖюЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph174 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖЖЖЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph175 = {
    8, 16, /* width, height */
    "\0\0\0\0\0юЖЖЖЖЖЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph176 = {
    8, 16, /* width, height */
    "D\x11""D\x11""D\x11""D\x11""D\x11""D\x11""D\x11""D\x11"
};

static FONT_GLYPH pc_font_glyph177 = {
    8, 16, /* width, height */
    "ЄUЄUЄUЄUЄUЄUЄUЄU"
};

static FONT_GLYPH pc_font_glyph178 = {
    8, 16, /* width, height */
    "wЭwЭwЭwЭwЭwЭwЭwЭ"
};

static FONT_GLYPH pc_font_glyph179 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph180 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph181 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18ш\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph182 = {
    8, 16, /* width, height */
    "66666666ц6666666"
};

static FONT_GLYPH pc_font_glyph183 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0ю6666666"
};

static FONT_GLYPH pc_font_glyph184 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ш\x18ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph185 = {
    8, 16, /* width, height */
    "666666ц\x6ц6666666"
};

static FONT_GLYPH pc_font_glyph186 = {
    8, 16, /* width, height */
    "6666666666666666"
};

static FONT_GLYPH pc_font_glyph187 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0ю\x6ц6666666"
};

static FONT_GLYPH pc_font_glyph188 = {
    8, 16, /* width, height */
    "666666ц\x6ю\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph189 = {
    8, 16, /* width, height */
    "66666666ю\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph190 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18ш\x18ш\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph191 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0ш\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph192 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x1f\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph193 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph194 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph195 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph196 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph197 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph198 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x1f\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph199 = {
    8, 16, /* width, height */
    "6666666676666666"
};

static FONT_GLYPH pc_font_glyph200 = {
    8, 16, /* width, height */
    "66666670?\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph201 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0?076666666"
};

static FONT_GLYPH pc_font_glyph202 = {
    8, 16, /* width, height */
    "666666ч\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph203 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0ч6666666"
};

static FONT_GLYPH pc_font_glyph204 = {
    8, 16, /* width, height */
    "6666667076666666"
};

static FONT_GLYPH pc_font_glyph205 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph206 = {
    8, 16, /* width, height */
    "666666ч\0ч6666666"
};

static FONT_GLYPH pc_font_glyph207 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18я\0я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph208 = {
    8, 16, /* width, height */
    "66666666я\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph209 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0я\0я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph210 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0я6666666"
};

static FONT_GLYPH pc_font_glyph211 = {
    8, 16, /* width, height */
    "66666666?\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph212 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x1f\x18\x1f\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph213 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\x1f\x18\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph214 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0?6666666"
};

static FONT_GLYPH pc_font_glyph215 = {
    8, 16, /* width, height */
    "66666666я6666666"
};

static FONT_GLYPH pc_font_glyph216 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18я\x18я\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph217 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18ш\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph218 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\x1f\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph219 = {
    8, 16, /* width, height */
    "яяяяяяяяяяяяяяяя"
};

static FONT_GLYPH pc_font_glyph220 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0яяяяяяяя"
};

static FONT_GLYPH pc_font_glyph221 = {
    8, 16, /* width, height */
    "рррррррррррррррр"
};

static FONT_GLYPH pc_font_glyph222 = {
    8, 16, /* width, height */
    "\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf\xf"
};

static FONT_GLYPH pc_font_glyph223 = {
    8, 16, /* width, height */
    "яяяяяяяя\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph224 = {
    8, 16, /* width, height */
    "\0\0\0\0\0Ьfffff|``р\0"
};

static FONT_GLYPH pc_font_glyph225 = {
    8, 16, /* width, height */
    "\0\0\0\0\0|ЖЖААЖЖ|\0\0\0"
};

static FONT_GLYPH pc_font_glyph226 = {
    8, 16, /* width, height */
    "\0\0\0\0\0~Z\x18\x18\x18\x18\x18<\0\0\0"
};

static FONT_GLYPH pc_font_glyph227 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖЖЖЖЖ~\x6\fш\0"
};

static FONT_GLYPH pc_font_glyph228 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\x18~ЫЫЫЫЫ~\x18\x18\0"
};

static FONT_GLYPH pc_font_glyph229 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖl88lЖЖ\0\0\0"
};

static FONT_GLYPH pc_font_glyph230 = {
    8, 16, /* width, height */
    "\0\0\0\0\0МММММММю\x6\x6\0"
};

static FONT_GLYPH pc_font_glyph231 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖЖЖ~\x6\x6\x6\0\0\0"
};

static FONT_GLYPH pc_font_glyph232 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЦЦЦЦЦЦЦю\0\0\0"
};

static FONT_GLYPH pc_font_glyph233 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЦЦЦЦЦЦЦю\x3\x3\0"
};

static FONT_GLYPH pc_font_glyph234 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ш°<6666|\0\0\0"
};

static FONT_GLYPH pc_font_glyph235 = {
    8, 16, /* width, height */
    "\0\0\0\0\0ЖЖцЮЮЮЮц\0\0\0"
};

static FONT_GLYPH pc_font_glyph236 = {
    8, 16, /* width, height */
    "\0\0\0\0\0р``|fffь\0\0\0"
};

static FONT_GLYPH pc_font_glyph237 = {
    8, 16, /* width, height */
    "\0\0\0\0\0<f\x6\x1e\x6""ff<\0\0\0"
};

static FONT_GLYPH pc_font_glyph238 = {
    8, 16, /* width, height */
    "\0\0\0\0\0њ¶¶ц¶¶¶њ\0\0\0"
};

static FONT_GLYPH pc_font_glyph239 = {
    8, 16, /* width, height */
    "\0\0\0\0\0~МММ|lМО\0\0\0"
};

static FONT_GLYPH pc_font_glyph240 = {
    8, 16, /* width, height */
    "\0\0\0\0ю\0\0ю\0\0ю\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph241 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18~\x18\x18\0\0я\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph242 = {
    8, 16, /* width, height */
    "\0\0\0""0\x18\f\x6\f\x18""0\0~\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph243 = {
    8, 16, /* width, height */
    "\0\0\0\f\x18""0`0\x18\f\0~\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph244 = {
    8, 16, /* width, height */
    "\0\0\0\xe\x1b\x1b\x18\x18\x18\x18\x18\x18\x18\x18\x18\x18"
};

static FONT_GLYPH pc_font_glyph245 = {
    8, 16, /* width, height */
    "\x18\x18\x18\x18\x18\x18\x18\x18\x18ШШp\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph246 = {
    8, 16, /* width, height */
    "\0\0\0\0\x18\x18\0~\0\x18\x18\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph247 = {
    8, 16, /* width, height */
    "\0\0\0\0\0vЬ\0vЬ\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph248 = {
    8, 16, /* width, height */
    "\0""8lll8\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph249 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\x18\x18\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph250 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\x18\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph251 = {
    8, 16, /* width, height */
    "\0\xf\f\f\f\f\fмl<\x1c\f\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph252 = {
    8, 16, /* width, height */
    "\0\0Шlllll\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph253 = {
    8, 16, /* width, height */
    "\0\0pШ0`Иш\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph254 = {
    8, 16, /* width, height */
    "\0\0\0\0<<<<<<<<\0\0\0\0"
};

static FONT_GLYPH pc_font_glyph255 = {
    8, 16, /* width, height */
    "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
};

static FONT_GLYPH* pc_font_range0_glyphs[] = {
    &pc_font_glyph0,
    &pc_font_glyph1,
    &pc_font_glyph2,
    &pc_font_glyph3,
    &pc_font_glyph4,
    &pc_font_glyph5,
    &pc_font_glyph6,
    &pc_font_glyph7,
    &pc_font_glyph8,
    &pc_font_glyph9,
    &pc_font_glyph10,
    &pc_font_glyph11,
    &pc_font_glyph12,
    &pc_font_glyph13,
    &pc_font_glyph14,
    &pc_font_glyph15,
    &pc_font_glyph16,
    &pc_font_glyph17,
    &pc_font_glyph18,
    &pc_font_glyph19,
    &pc_font_glyph20,
    &pc_font_glyph21,
    &pc_font_glyph22,
    &pc_font_glyph23,
    &pc_font_glyph24,
    &pc_font_glyph25,
    &pc_font_glyph26,
    &pc_font_glyph27,
    &pc_font_glyph28,
    &pc_font_glyph29,
    &pc_font_glyph30,
    &pc_font_glyph31,
    &pc_font_glyph32,
    &pc_font_glyph33,
    &pc_font_glyph34,
    &pc_font_glyph35,
    &pc_font_glyph36,
    &pc_font_glyph37,
    &pc_font_glyph38,
    &pc_font_glyph39,
    &pc_font_glyph40,
    &pc_font_glyph41,
    &pc_font_glyph42,
    &pc_font_glyph43,
    &pc_font_glyph44,
    &pc_font_glyph45,
    &pc_font_glyph46,
    &pc_font_glyph47,
    &pc_font_glyph48,
    &pc_font_glyph49,
    &pc_font_glyph50,
    &pc_font_glyph51,
    &pc_font_glyph52,
    &pc_font_glyph53,
    &pc_font_glyph54,
    &pc_font_glyph55,
    &pc_font_glyph56,
    &pc_font_glyph57,
    &pc_font_glyph58,
    &pc_font_glyph59,
    &pc_font_glyph60,
    &pc_font_glyph61,
    &pc_font_glyph62,
    &pc_font_glyph63,
    &pc_font_glyph64,
    &pc_font_glyph65,
    &pc_font_glyph66,
    &pc_font_glyph67,
    &pc_font_glyph68,
    &pc_font_glyph69,
    &pc_font_glyph70,
    &pc_font_glyph71,
    &pc_font_glyph72,
    &pc_font_glyph73,
    &pc_font_glyph74,
    &pc_font_glyph75,
    &pc_font_glyph76,
    &pc_font_glyph77,
    &pc_font_glyph78,
    &pc_font_glyph79,
    &pc_font_glyph80,
    &pc_font_glyph81,
    &pc_font_glyph82,
    &pc_font_glyph83,
    &pc_font_glyph84,
    &pc_font_glyph85,
    &pc_font_glyph86,
    &pc_font_glyph87,
    &pc_font_glyph88,
    &pc_font_glyph89,
    &pc_font_glyph90,
    &pc_font_glyph91,
    &pc_font_glyph92,
    &pc_font_glyph93,
    &pc_font_glyph94,
    &pc_font_glyph95,
    &pc_font_glyph96,
    &pc_font_glyph97,
    &pc_font_glyph98,
    &pc_font_glyph99,
    &pc_font_glyph100,
    &pc_font_glyph101,
    &pc_font_glyph102,
    &pc_font_glyph103,
    &pc_font_glyph104,
    &pc_font_glyph105,
    &pc_font_glyph106,
    &pc_font_glyph107,
    &pc_font_glyph108,
    &pc_font_glyph109,
    &pc_font_glyph110,
    &pc_font_glyph111,
    &pc_font_glyph112,
    &pc_font_glyph113,
    &pc_font_glyph114,
    &pc_font_glyph115,
    &pc_font_glyph116,
    &pc_font_glyph117,
    &pc_font_glyph118,
    &pc_font_glyph119,
    &pc_font_glyph120,
    &pc_font_glyph121,
    &pc_font_glyph122,
    &pc_font_glyph123,
    &pc_font_glyph124,
    &pc_font_glyph125,
    &pc_font_glyph126,
    &pc_font_glyph127,
    &pc_font_glyph128,
    &pc_font_glyph129,
    &pc_font_glyph130,
    &pc_font_glyph131,
    &pc_font_glyph132,
    &pc_font_glyph133,
    &pc_font_glyph134,
    &pc_font_glyph135,
    &pc_font_glyph136,
    &pc_font_glyph137,
    &pc_font_glyph138,
    &pc_font_glyph139,
    &pc_font_glyph140,
    &pc_font_glyph141,
    &pc_font_glyph142,
    &pc_font_glyph143,
    &pc_font_glyph144,
    &pc_font_glyph145,
    &pc_font_glyph146,
    &pc_font_glyph147,
    &pc_font_glyph148,
    &pc_font_glyph149,
    &pc_font_glyph150,
    &pc_font_glyph151,
    &pc_font_glyph152,
    &pc_font_glyph153,
    &pc_font_glyph154,
    &pc_font_glyph155,
    &pc_font_glyph156,
    &pc_font_glyph157,
    &pc_font_glyph158,
    &pc_font_glyph159,
    &pc_font_glyph160,
    &pc_font_glyph161,
    &pc_font_glyph162,
    &pc_font_glyph163,
    &pc_font_glyph164,
    &pc_font_glyph165,
    &pc_font_glyph166,
    &pc_font_glyph167,
    &pc_font_glyph168,
    &pc_font_glyph169,
    &pc_font_glyph170,
    &pc_font_glyph171,
    &pc_font_glyph172,
    &pc_font_glyph173,
    &pc_font_glyph174,
    &pc_font_glyph175,
    &pc_font_glyph176,
    &pc_font_glyph177,
    &pc_font_glyph178,
    &pc_font_glyph179,
    &pc_font_glyph180,
    &pc_font_glyph181,
    &pc_font_glyph182,
    &pc_font_glyph183,
    &pc_font_glyph184,
    &pc_font_glyph185,
    &pc_font_glyph186,
    &pc_font_glyph187,
    &pc_font_glyph188,
    &pc_font_glyph189,
    &pc_font_glyph190,
    &pc_font_glyph191,
    &pc_font_glyph192,
    &pc_font_glyph193,
    &pc_font_glyph194,
    &pc_font_glyph195,
    &pc_font_glyph196,
    &pc_font_glyph197,
    &pc_font_glyph198,
    &pc_font_glyph199,
    &pc_font_glyph200,
    &pc_font_glyph201,
    &pc_font_glyph202,
    &pc_font_glyph203,
    &pc_font_glyph204,
    &pc_font_glyph205,
    &pc_font_glyph206,
    &pc_font_glyph207,
    &pc_font_glyph208,
    &pc_font_glyph209,
    &pc_font_glyph210,
    &pc_font_glyph211,
    &pc_font_glyph212,
    &pc_font_glyph213,
    &pc_font_glyph214,
    &pc_font_glyph215,
    &pc_font_glyph216,
    &pc_font_glyph217,
    &pc_font_glyph218,
    &pc_font_glyph219,
    &pc_font_glyph220,
    &pc_font_glyph221,
    &pc_font_glyph222,
    &pc_font_glyph223,
    &pc_font_glyph224,
    &pc_font_glyph225,
    &pc_font_glyph226,
    &pc_font_glyph227,
    &pc_font_glyph228,
    &pc_font_glyph229,
    &pc_font_glyph230,
    &pc_font_glyph231,
    &pc_font_glyph232,
    &pc_font_glyph233,
    &pc_font_glyph234,
    &pc_font_glyph235,
    &pc_font_glyph236,
    &pc_font_glyph237,
    &pc_font_glyph238,
    &pc_font_glyph239,
    &pc_font_glyph240,
    &pc_font_glyph241,
    &pc_font_glyph242,
    &pc_font_glyph243,
    &pc_font_glyph244,
    &pc_font_glyph245,
    &pc_font_glyph246,
    &pc_font_glyph247,
    &pc_font_glyph248,
    &pc_font_glyph249,
    &pc_font_glyph250,
    &pc_font_glyph251,
    &pc_font_glyph252,
    &pc_font_glyph253,
    &pc_font_glyph254,
    &pc_font_glyph255,
    0
};

static FONT_MONO_DATA pc_font_range0 = {
    0, 256, /* begin, end */
    pc_font_range0_glyphs,
    0
};

static FONT pc_font = {
    &pc_font_range0,
    16, /* height */
    (FONT_VTABLE *)0 /* color flag */
};



DATAFILE data[] = {
    { &korvet_font0, DAT_ID('F', 'O', 'N', 'T'), 5133, korvet_font0_prop },
    { &korvet_font1, DAT_ID('F', 'O', 'N', 'T'), 5133, korvet_font1_prop },
    { &pc_font, DAT_ID('F', 'O', 'N', 'T'), 5133, pc_font_prop },
    { 0, DAT_END, 0, 0 }
};



#ifdef ALLEGRO_USE_CONSTRUCTOR
CONSTRUCTOR_FUNCTION(static void _construct_me(void));
static void _construct_me(void)
{
    _construct_datafile(data);
}
#endif



/* end of kfonts.c */



