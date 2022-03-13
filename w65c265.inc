;===============================================================================
; __        ____  ____   ____ ____   __  ____
; \ \      / / /_| ___| / ___|___ \ / /_| ___|
;  \ \ /\ / / '_ \___ \| |     __) | '_ \___ \
;   \ V  V /| (_) |__) | |___ / __/| (_) |__) |
;    \_/\_/  \___/____/ \____|_____|\___/____/
;
; Western Design Center W65C265 device definitions
;-------------------------------------------------------------------------------
; Copyright (C)2015 HandCoded Software Ltd.
; All rights reserved.
;
; This work is made available under the terms of the Creative Commons
; Attribution-NonCommercial-ShareAlike 4.0 International license. Open the
; following URL to see the details.
;
; http://creativecommons.org/licenses/by-nc-sa/4.0/
;
;===============================================================================
; Notes:
;
; Various macros and definitions for the W65C265 microcontroller.
;
;===============================================================================
; Revision History:
;
; 2015-12-18 AJ Initial version
;-------------------------------------------------------------------------------
; $Id$
;-------------------------------------------------------------------------------

;===============================================================================
; Hardware Registers
;-------------------------------------------------------------------------------

;00DF00-1F CS0 Port Replacement & Expansion uninitialized

PD0             =     $00DF00         ; Port 0 Data Register
PD1             =     $00DF01         ; Port 1 Data Register
PD2             =     $00DF02         ; Port 2 Data Register
PD3             =     $00DF03         ; Port 3 Data Register
PDD0            =     $00DF04         ; Port 0 Data Direction Register
PDD1            =     $00DF05         ; Port 1 Data Direction Register
PDD2            =     $00DF06         ; Port 2 Data Direction Register
PDD3            =     $00DF07         ; Port 3 Data Direction Register

PD4             =     $00DF20         ; Port 4 Data Register
PD5             =     $00DF21         ; Port 5 Data Register
PD6             =     $00DF22         ; Port 6 Data Register
PD7             =     $00DF23         ; Port 7 Data Register
PDD4            =     $00DF24         ; Port 4 Data Direction Register
PDD5            =     $00DF25         ; Port 5 Data Direction Register
PDD6            =     $00DF26         ; Port 6 Data Direction Register
PCS7            =     $00DF27         ; Port 7 Chip Select

;00DF28-3F --- Reserved uninitialized

BCR             =     $00DF40         ; Bus Control Register
SSCR            =     $00DF41         ; System Speed Control Register
TCR             =     $00DF42         ; Timer Control Register
TER             =     $00DF43         ; Timer Enable Register
TIFR            =     $00DF44         ; Timer Interrupt Flag Register
EIFR            =     $00DF45         ; Edge Interrupt Flag Register
TIER            =     $00DF46         ; Timer Interrupt Enable Register
EIER            =     $00DF47         ; Edge Interrupt Enable Register
UIFR            =     $00DF48         ; UART Interrupt Flag Register
UIER            =     $00DF49         ; UART Interrupt Enable Register

T0LL            =     $00DF50         ; Timer 0 Latch Low
T0LH            =     $00DF51         ; Timer 0 Latch High
T1LL            =     $00DF52         ; Timer 1 Latch Low
T1LH            =     $00DF53         ; Timer 1 Latch High
T2LL            =     $00DF54         ; Timer 2 Latch Low
T2LH            =     $00DF55         ; Timer 2 Latch High
T3LL            =     $00DF56         ; Timer 3 Latch Low
T3LH            =     $00DF57         ; Timer 3 Latch High
T4LL            =     $00DF58         ; Timer 4 Latch Low
T4LH            =     $00DF59         ; Timer 4 Latch High
T5LL            =     $00DF5A         ; Timer 5 Latch Low
T5LH            =     $00DF5B         ; Timer 5 Latch High
T6LL            =     $00DF5C         ; Timer 6 Latch Low
T6LH            =     $00DF5D         ; Timer 6 Latch High
T7LL            =     $00DF5E         ; Timer 7 Latch Low
T7LH            =     $00DF5F         ; Timer 7 Latch High
T0CL            =     $00DF60         ; Timer 0 Counter Low
T0CH            =     $00DF61         ; Timer 0 Counter High
T1CL            =     $00DF62         ; Timer 1 Counter Low
T1CH            =     $00DF63         ; Timer 1 Counter High
T2CL            =     $00DF64         ; Timer 2 Counter Low
T2CH            =     $00DF65         ; Timer 2 Counter High
T3CL            =     $00DF66         ; Timer 3 Counter Low
T3CH            =     $00DF67         ; Timer 3 Counter High
T4CL            =     $00DF68         ; Timer 4 Counter Low
T4CH            =     $00DF69         ; Timer 4 Counter High
T5CL            =     $00DF6A         ; Timer 5 Counter Low
T5CH            =     $00DF6B         ; Timer 5 Counter High
T6CL            =     $00DF6C         ; Timer 6 Counter Low
T6CH            =     $00DF6D         ; Timer 6 Counter High
T7CL            =     $00DF6E         ; Timer 7 Counter Low
T7CH            =     $00DF6F         ; Timer 7 Counter High

;00DFC0-FF CS1 COProcessor Expansion uninitialized

ACSR0           =     $00DF70         ; UART 0 Control/Status Register
ARTD0           =     $00DF71         ; UART 0 Data Register
ACSR1           =     $00DF72         ; UART 1 Control/Status Register
ARTD1           =     $00DF73         ; UART 1 Data Register
ACSR2           =     $00DF74         ; UART 2 Control/Status Register
ARTD2           =     $00DF75         ; UART 2 Data Register
ACSR3           =     $00DF76         ; UART 3 Control/Status Register
ARTD3           =     $00DF77         ; UART 3 Data Register
PIBFR           =     $00DF78         ; Parallel Interface Flag Register
PIBER           =     $00DF79         ; Parallel Interface Enable Register
PIR2            =     $00DF7A         ; Parallel Interface Register 2
PIR3            =     $00DF7B         ; Parallel Interface Register 3
PIR4            =     $00DF7C         ; Parallel Interface Register 4
PIR5            =     $00DF7D         ; Parallel Interface Register 5
PIR6            =     $00DF7E         ; Parallel Interface Register 6
PIR7            =     $00DF7F         ; Parallel Interface Register 7

;00DF80-BF RAM RAM Registers uninitialized

                .include "w65c816.inc"