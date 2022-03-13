#===============================================================================
# CC65 Tools Assembler Definitions
#-------------------------------------------------------------------------------

AS          = ca65
LD          = cl65
RM          = rm
AS_FLAGS   += --listing $(@:.obj=.lst) -o $@ -DW65C265SXB
LD_FLAGS    =  -C $(CFG) -vm -m $(MAP)

#===============================================================================
# Rules
#-------------------------------------------------------------------------------

.asm.obj:
		$(AS) $(AS_FLAGS) $<

#===============================================================================
# Targets
#-------------------------------------------------------------------------------

CFG     = sxb-hacker.cfg
MAP     = sxb-hacker.map
SREC	= sxb-hacker.s28
BINS    = sxb-0x0200.bin sxb-0x0300.bin
OBJS	= w65c265sxb.obj sxb-hacker.obj
LSTS	= w65c265sxb.lst sxb-hacker.lst

all:	$(BINS) $(SREC)

clean:
	$(RM) -f $(MAP) $(SREC)\
		$(OBJS)\
		$(LSTS)\
		$(BINS)

debug:
	$(DEBUG)

#===============================================================================
# Dependencies
#-------------------------------------------------------------------------------

$(BINS): $(OBJS) $(CFG)
	$(LD) $(LD_FLAGS) -o $@ $(OBJS)

$(SREC): $(BINS)
	srec_cat  -o $(SREC)\
		-data-only\
		-execution_start_address 0x0000\
		-address-length 3 -line-length 47\
		sxb-0x0200.bin -binary -offset 0x0200\
		sxb-0x0300.bin -binary -offset 0x0300
	cmp $(SREC) originals/$(SREC)

w65c265sxb.obj: w65c265.inc w65c265sxb.inc w65c265sxb.asm
sxb-hacker.obj: w65c265.inc sxb-hacker.asm

.SUFFIXES: .asm .obj
