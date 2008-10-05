
LIBS     = -liberty $(shell allegro-config --libs)
CFLAGS   = -g -Wall -fomit-frame-pointer -Isrc $(shell allegro-config --cflags)

sources = _main.c \
          vg.c \
          floppy.c \
          i8080.c \
          keyboard.c memory.c   \
          pic.c ppi.c printer.c screen.c  \
          serial.c timer.c      \
          wav.c gui.c osd.c \
	  mouse.c joystick.c \
          dbg/dbg.c dbg/_dasm.c dbg/dasm80.c dbg/_dump.c dbg/_regs.c dbg/_history.c dbg/dbg_tools.c dbg/scremul.c dbg/kfonts.c \
          dbg/label.c dbg/asm80.c dbg/readwrite.c dbg/sym.c dbg/lbl_korvet.c dbg/comname.c \
          dbg/gt_main.c


objs1	= $(patsubst %.c,%.o,$(sources))
objs2	= $(patsubst %.s,%.o,$(objs1))
objs	= $(addprefix objs/,$(objs2))

VPATH	= src 

.PHONY: all clean depend

all:    kdbg.exe

clean: 
	rm -rf objs/dbg/*
	rm -rf objs/*
	rm -f kdbg.exe

objs/%.o:	%.c
	gcc $(CFLAGS) -c -o $@ $<

objs/%.o:	%.s
	gcc $(CFLAGS) -c -o $@ $<


kdbg.exe:	$(objs)
	@gcc $^ -o $@ $(LIBS)

include $(wildcard objs/*.d)
include $(wildcard objs/dbg/*.d)
