;;; Segment .interp (0000000000400238)
0000000000400238                         2F 6C 69 62 36 34 2F 6C         /lib64/l
0000000000400240 64 2D 6C 69 6E 75 78 2D 78 38 36 2D 36 34 2E 73 d-linux-x86-64.s
0000000000400250 6F 2E 32 00                                     o.2.           
;;; Segment .note.ABI-tag (0000000000400254)
0000000000400254             04 00 00 00 10 00 00 00 01 00 00 00     ............
0000000000400260 47 4E 55 00 00 00 00 00 02 00 00 00 06 00 00 00 GNU.............
0000000000400270 18 00 00 00                                     ....           
;;; Segment .note.gnu.build-id (0000000000400274)
0000000000400274             04 00 00 00 14 00 00 00 03 00 00 00     ............
0000000000400280 47 4E 55 00 2A 29 BE 20 D1 75 F5 9D 41 DF 6B 75 GNU.*). .u..A.ku
0000000000400290 8B F3 16 33 B2 0F D4 57                         ...3...W       
;;; Segment .gnu.hash (0000000000400298)
0000000000400298                         01 00 00 00 01 00 00 00         ........
00000000004002A0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00000000004002B0 00 00 00 00                                     ....           
;;; Segment .dynsym (00000000004002B8)
;    0                                          00000000 00000000 00 
;    1 putchar                                  00000000 00000000 12 
;    2 __libc_start_main                        00000000 00000000 12 
;    3 __gmon_start__                           00000000 00000000 20 
;;; Segment .dynstr (0000000000400318)
0000000000400318                         00 6C 69 62 63 2E 73 6F         .libc.so
0000000000400320 2E 36 00 70 75 74 63 68 61 72 00 5F 5F 6C 69 62 .6.putchar.__lib
0000000000400330 63 5F 73 74 61 72 74 5F 6D 61 69 6E 00 5F 5F 67 c_start_main.__g
0000000000400340 6D 6F 6E 5F 73 74 61 72 74 5F 5F 00 47 4C 49 42 mon_start__.GLIB
0000000000400350 43 5F 32 2E 32 2E 35 00                         C_2.2.5.       
;;; Segment .gnu.version (0000000000400358)
0000000000400358                         00 00 02 00 02 00 00 00         ........
;;; Segment .gnu.version_r (0000000000400360)
0000000000400360 01 00 01 00 01 00 00 00 10 00 00 00 00 00 00 00 ................
0000000000400370 75 1A 69 09 00 00 02 00 34 00 00 00 00 00 00 00 u.i.....4.......
;;; Segment .rela.dyn (0000000000400380)
; 00600FF8   6 00000003 0000000000000000 __gmon_start__ (3)
;;; Segment .rela.plt (0000000000400398)
; 00601018   7 00000001 0000000000000000 putchar (1)
; 00601020   7 00000002 0000000000000000 __libc_start_main (2)
; 00601028   7 00000003 0000000000000000 __gmon_start__ (3)
;;; Segment .init (00000000004003E0)

;; _init: 00000000004003E0
;;   Called from:
;;     000000000040057E (in __libc_csu_init)
_init proc
	sub	rsp,08
	mov	rax,[0000000000600FF8]                                 ; [rip+00200C0D]
	test	rax,rax
	jz	00000000004003F5

l00000000004003F0:
	call	0000000000400430

l00000000004003F5:
	add	rsp,08
	ret
;;; Segment .plt (0000000000400400)
0000000000400400 FF 35 02 0C 20 00 FF 25 04 0C 20 00 0F 1F 40 00 .5.. ..%.. ...@.
0000000000400410 FF 25 02 0C 20 00                               .%.. .         
0000000000400416                   68 00 00 00 00 E9 E0 FF FF FF       h.........
0000000000400420 FF 25 FA 0B 20 00                               .%.. .         
0000000000400426                   68 01 00 00 00 E9 D0 FF FF FF       h.........
0000000000400430 FF 25 F2 0B 20 00                               .%.. .         
0000000000400436                   68 02 00 00 00 E9 C0 FF FF FF       h.........
;;; Segment .text (0000000000400440)

;; _start: 0000000000400440
_start proc
	xor	ebp,ebp
	mov	r9,rdx
	pop	rsi
	mov	rdx,rsp
	and	rsp,F0
	push	rax
	push	rsp
	mov	r8,+004005C0
	mov	rcx,+00400550
	mov	rdi,+0040053D
	call	0000000000400420
	hlt
000000000040046A                               66 0F 1F 44 00 00           f..D..

;; deregister_tm_clones: 0000000000400470
;;   Called from:
;;     00000000004004ED (in __do_global_dtors_aux)
deregister_tm_clones proc
	mov	eax,00601047
	push	rbp
	sub	r8,+00601040
	cmp	rax,0E
	mov	rbp,rsp
	ja	0000000000400487

l0000000000400485:
	pop	rbp
	ret

l0000000000400487:
	mov	eax,00000000
	test	rax,rax
	jz	0000000000400485

l0000000000400491:
	pop	rbp
	mov	edi,00601040
	jmp	rax
0000000000400499                            0F 1F 80 00 00 00 00          .......

;; register_tm_clones: 00000000004004A0
;;   Called from:
;;     0000000000400520 (in frame_dummy)
;;     0000000000400528 (in frame_dummy)
register_tm_clones proc
	mov	eax,00601040
	push	rbp
	sub	r8,+00601040
	sar	rax,03
	mov	rbp,rsp
	mov	rdx,rax
	shr	rdx,3F
	add	rax,rdx
	sar	rax,01
	jnz	00000000004004C4

l00000000004004C2:
	pop	rbp
	ret

l00000000004004C4:
	mov	edx,00000000
	test	rdx,rdx
	jz	00000000004004C2

l00000000004004CE:
	pop	rbp
	mov	rsi,rax
	mov	edi,00601040
	jmp	rdx
00000000004004D9                            0F 1F 80 00 00 00 00          .......

;; __do_global_dtors_aux: 00000000004004E0
__do_global_dtors_aux proc
	cmp	[0000000000601040],00                                  ; [rip+00200B59]
	jnz	00000000004004FA

l00000000004004E9:
	push	rbp
	mov	rbp,rsp
	call	0000000000400470
	pop	rbp
	mov	[0000000000601040],01                                  ; [rip+00200B46]

l00000000004004FA:
	ret
00000000004004FC                                     0F 1F 40 00             ..@.

;; frame_dummy: 0000000000400500
frame_dummy proc
	cmp	[0000000000600E20],00                                  ; [rip+00200918]
	jz	0000000000400528

l000000000040050A:
	mov	eax,00000000
	test	rax,rax
	jz	0000000000400528

l0000000000400514:
	push	rbp
	mov	edi,00600E20
	mov	rbp,rsp
	call	rax
	pop	rbp
	jmp	00000000004004A0
0000000000400525                0F 1F 00                              ...       

l0000000000400528:
	jmp	00000000004004A0

;; f: 000000000040052D
;;   Called from:
;;     0000000000400546 (in main)
f proc
	push	rbp
	mov	rbp,rsp
	mov	edi,00000078
	call	0000000000400410
	pop	rbp
	ret

;; main: 000000000040053D
main proc
	push	rbp
	mov	rbp,rsp
	mov	eax,00000000
	call	000000000040052D
	pop	rbp
	ret
000000000040054D                                        0F 1F 00              ...

;; __libc_csu_init: 0000000000400550
__libc_csu_init proc
	push	r15
	mov	r15d,edi
	push	r14
	mov	r14,rsi
	push	r13
	mov	r13,rdx
	push	r12
	lea	r12,[0000000000600E10]                                 ; [rip+002008A8]
	push	rbp
	lea	rbp,[0000000000600E18]                                 ; [rip+002008A8]
	push	rbx
	sub	rbp,r12
	xor	ebx,ebx
	sar	rbp,03
	sub	rsp,08
	call	00000000004003E0
	test	rbp,rbp
	jz	00000000004005A6

l0000000000400588:
	nop	dword ptr [rax+rax+00000000]

l0000000000400590:
	mov	rdx,r13
	mov	rsi,r14
	mov	edi,r15d
	call	qword ptr [r12+rbx*8]
	add	rbx,01
	cmp	rbx,rbp
	jnz	0000000000400590

l00000000004005A6:
	add	rsp,08
	pop	rbx
	pop	rbp
	pop	r12
	pop	r13
	pop	r14
	pop	r15
	ret
00000000004005B5                66 66 2E 0F 1F 84 00 00 00 00 00      ff.........

;; __libc_csu_fini: 00000000004005C0
__libc_csu_fini proc
	ret
;;; Segment .fini (00000000004005C4)

;; _fini: 00000000004005C4
_fini proc
	sub	rsp,08
	add	rsp,08
	ret
;;; Segment .rodata (00000000004005D0)
_IO_stdin_used		; 00000000004005D0
	db	0x01, 0x00, 0x02, 0x00
;;; Segment .eh_frame_hdr (00000000004005D4)
00000000004005D4             01 1B 03 3B 38 00 00 00 06 00 00 00     ...;8.......
00000000004005E0 2C FE FF FF 84 00 00 00 6C FE FF FF 54 00 00 00 ,.......l...T...
00000000004005F0 59 FF FF FF AC 00 00 00 69 FF FF FF CC 00 00 00 Y.......i.......
0000000000400600 7C FF FF FF EC 00 00 00 EC FF FF FF 34 01 00 00 |...........4...
;;; Segment .eh_frame (0000000000400610)
0000000000400610 14 00 00 00 00 00 00 00 01 7A 52 00 01 78 10 01 .........zR..x..
0000000000400620 1B 0C 07 08 90 01 07 10 14 00 00 00 1C 00 00 00 ................
0000000000400630 10 FE FF FF 2A 00 00 00 00 00 00 00 00 00 00 00 ....*...........
0000000000400640 14 00 00 00 00 00 00 00 01 7A 52 00 01 78 10 01 .........zR..x..
0000000000400650 1B 0C 07 08 90 01 00 00 24 00 00 00 1C 00 00 00 ........$.......
0000000000400660 A0 FD FF FF 40 00 00 00 00 0E 10 46 0E 18 4A 0F ....@......F..J.
0000000000400670 0B 77 08 80 00 3F 1A 3B 2A 33 24 22 00 00 00 00 .w...?.;*3$"....
0000000000400680 1C 00 00 00 44 00 00 00 A5 FE FF FF 10 00 00 00 ....D...........
0000000000400690 00 41 0E 10 86 02 43 0D 06 4B 0C 07 08 00 00 00 .A....C..K......
00000000004006A0 1C 00 00 00 64 00 00 00 95 FE FF FF 10 00 00 00 ....d...........
00000000004006B0 00 41 0E 10 86 02 43 0D 06 4B 0C 07 08 00 00 00 .A....C..K......
00000000004006C0 44 00 00 00 84 00 00 00 88 FE FF FF 65 00 00 00 D...........e...
00000000004006D0 00 42 0E 10 8F 02 45 0E 18 8E 03 45 0E 20 8D 04 .B....E....E. ..
00000000004006E0 45 0E 28 8C 05 48 0E 30 86 06 48 0E 38 83 07 4D E.(..H.0..H.8..M
00000000004006F0 0E 40 6C 0E 38 41 0E 30 41 0E 28 42 0E 20 42 0E .@l.8A.0A.(B. B.
0000000000400700 18 42 0E 10 42 0E 08 00 14 00 00 00 CC 00 00 00 .B..B...........
0000000000400710 B0 FE FF FF 02 00 00 00 00 00 00 00 00 00 00 00 ................
0000000000400720 00 00 00 00                                     ....           
;;; Segment .init_array (0000000000600E10)
0000000000600E10 00 05 40 00 00 00 00 00                         ..@.....       
;;; Segment .fini_array (0000000000600E18)
0000000000600E18                         E0 04 40 00 00 00 00 00         ..@.....
;;; Segment .jcr (0000000000600E20)
0000000000600E20 00 00 00 00 00 00 00 00                         ........       
;;; Segment .dynamic (0000000000600E28)
; DT_NEEDED       libc.so.6
; DT_INIT         00000000004003E0
; DT_DEBUG        00000000004005C4
; DT_INIT_ARRAY   0000000000600E10
; DT_INIT_ARRAYSZ 0000000000000008
; DT_FINI_ARRAY   0000000000600E18
; DT_FINI_ARRAYSZ 0000000000000008
; DT_GNU_HASH     0000000000400298
; DT_STRTAB       0000000000400318
; DT_SYMTAB       00000000004002B8
; DT_STRSZ        0000000000000040
; DT_SYMENT                     24
; DT_DEBUG        0000000000000000
; DT_PLTGOT       0000000000601000
; DT_PLTRELSZ                   72
; DT_PLTREL       0000000000000007
; DT_JMPREL       0000000000400398
; DT_RELA         0000000000400380
; DT_RELASZ                     24
; DT_RELAENT                    24
; DT_VERNEED      0000000000400360
; DT_VERNEEDNUM                  1
; DT_VERSYM       0000000000400358
;;; Segment .got (0000000000600FF8)
__gmon_start___GOT		; 0000000000600FF8
	dq	0x0000000000000000
;;; Segment .got.plt (0000000000601000)
0000000000601000 28 0E 60 00 00 00 00 00 00 00 00 00 00 00 00 00 (.`.............
0000000000601010 00 00 00 00 00 00 00 00                         ........       
putchar_GOT		; 0000000000601018
	dq	0x0000000000400416
__libc_start_main_GOT		; 0000000000601020
	dq	0x0000000000400426
__gmon_start___GOT		; 0000000000601028
	dq	0x0000000000400436
;;; Segment .data (0000000000601030)
0000000000601030 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
;;; Segment .bss (0000000000601040)
0000000000601040 00 00 00 00 00 00 00 00                         ........       
