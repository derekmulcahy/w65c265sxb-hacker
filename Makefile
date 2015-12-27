#===============================================================================
# WDC Tools Assembler Definitions
#-------------------------------------------------------------------------------

AS			=	wdc816as

LD			=	wdcln

RM			=	erase

AS_FLAGS	=	-g -l -DW65C265SXB=1

LD_FLAGS	=	-g -hm28 -t -C0300

DEBUG		=	wdcdb.exe

#===============================================================================
# Rules
#-------------------------------------------------------------------------------

.asm.obj:
		$(AS) $(AS_FLAGS) $<

#===============================================================================
# Targets
#-------------------------------------------------------------------------------

OBJS	= \
		w65c265sxb.obj \
		sxb-hacker.obj

all:	sxb-hacker.s28

clean:
		$(RM) $(OBJS)
		$(RM) *.bin
		$(RM) *.lst

debug:
		$(DEBUG)

#===============================================================================
# Dependencies
#-------------------------------------------------------------------------------

sxb-hacker.s28: $(OBJS)
		$(LD) $(LD_FLAGS) -O $@ $(OBJS)
		
w65c256.inc:	\
		w65c816.inc

w65c265sxb.obj: \
		w65c265.inc \
		w65c265sxb.inc \
		w65c265sxb.asm

sxb-hacker.obj: \
		w65c816.inc \
		sxb-hacker.asm
