;;; Segment .text (10071000)

;; get: 10071000
get proc
	mov	eax,[esp+04]
	inc	eax
	cmp	eax,03
	ja	10071029

l1007100A:
	jmp	dword ptr [10071030+eax*4]

l10071011:
	mov	eax,10072018
	ret

l10071017:
	mov	eax,10072014
	ret

l1007101D:
	mov	eax,10072010
	ret

l10071023:
	mov	eax,10072008
	ret

l10071029:
	mov	eax,10072000
	ret
1007102F                                              90                .
l10071030	dd	0x10071011
l10071034	dd	0x10071017
l10071038	dd	0x1007101D
l1007103C	dd	0x10071023
10071040 8B 44 24 04 83 F8 03 77 1F FF 24 85 70 10 07 10 .D$....w..$.p...
10071050 B8 18 20 07 10 C3 B8 14 20 07 10 C3 B8 10 20 07 .. ..... ..... .
10071060 10 C3 B8 08 20 07 10 C3 B8 00 20 07 10 C3 8B FF .... ..... .....
10071070 50 10 07 10 56 10 07 10 5C 10 07 10 62 10 07 10 P...V...\...b...

;; DllMain: 10071080
DllMain proc
	mov	eax,00000001
	ret	000C
;;; Segment .rdata (10072000)
10072000 6F 74 68 65 72 00 00 00 74 68 72 65 65 00 00 00 other...three...
10072010 74 77 6F 00 6F 6E 65 00 7A 65 72 6F 00 00 00 00 two.one.zero....
10072020 00 00 00 00 E1 76 F0 55 00 00 00 00 5C 20 00 00 .....v.U....\ ..
10072030 01 00 00 00 02 00 00 00 02 00 00 00 48 20 00 00 ............H ..
10072040 50 20 00 00 58 20 00 00 00 10 00 00 00 30 00 00 P ..X .......0..
10072050 67 20 00 00 6B 20 00 00 00 00 01 00 73 77 69 74 g ..k ......swit
10072060 63 68 2E 64 6C 6C 00 67 65 74 00 67 65 74 33 00 ch.dll.get.get3.
;;; Segment .data (10073000)
10073000 40 10 07 10                                     @...           
;;; Segment .reloc (10074000)
10074000 00 10 00 00 30 00 00 00 0D 30 12 30 18 30 1E 30 ....0....0.0.0.0
10074010 24 30 2A 30 30 30 34 30 38 30 3C 30 4C 30 51 30 $0*0004080<0L0Q0
10074020 57 30 5D 30 63 30 69 30 70 30 74 30 78 30 7C 30 W0]0c0i0p0t0x0|0
10074030 00 30 00 00 0C 00 00 00 00 30 00 00 00 00 00 00 .0.......0......
10074040 00 00 00 00 00 00 00 00                         ........       
