4004c2:	5d                   	pop    %rbp
  4004c3:	c3                   	retq   
  4004c4:	ba 00 00 00 00       	mov    $0x0,%edx
  4004c9:	48 85 d2             	test   %rdx,%rdx
  4004cc:	74 f4                	je     4004c2 <register_tm_clones+0x22>
  4004ce:	5d                   	pop    %rbp
  4004cf:	48 89 c6             	mov    %rax,%rsi
  4004d2:	bf 40 10 60 00       	mov    $0x601040,%edi
  4004d7:	ff e2                	jmpq   *%rdx
  4004d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000004004e0 <__do_global_dtors_aux>:
  4004e0:	80 3d 59 0b 20 00 00 	cmpb   $0x0,0x200b59(%rip)        # 601040 <__TMC_END__>
  4004e7:	75 11                	jne    4004fa <__do_global_dtors_aux+0x1a>
  4004e9:	55                   	push   %rbp
  4004ea:	48 89 e5             	mov    %rsp,%rbp
  4004ed:	e8 7e ff ff ff       	callq  400470 <deregister_tm_clones>
  4004f2:	5d                   	pop    %rbp
  4004f3:	c6 05 46 0b 20 00 01 	movb   $0x1,0x200b46(%rip)        # 601040 <__TMC_END__>
  4004fa:	f3 c3                	repz retq 
  4004fc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400500 <frame_dummy>:
  400500:	48 83 3d 18 09 20 00 	cmpq   $0x0,0x200918(%rip)        # 600e20 <__JCR_END__>
  400507:	00 
  400508:	74 1e                	je     400528 <frame_dummy+0x28>
  40050a:	b8 00 00 00 00       	mov    $0x0,%eax
  40050f:	48 85 c0             	test   %rax,%rax
  400512:	74 14                	je     400528 <frame_dummy+0x28>
  400514:	55                   	push   %rbp
  400515:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  40051a:	48 89 e5             	mov    %rsp,%rbp
  40051d:	ff d0                	callq  *%rax
  40051f:	5d                   	pop    %rbp
  400520:	e9 7b ff ff ff       	jmpq   4004a0 <register_tm_clones>
  400525:	0f 1f 00             	nopl   (%rax)
  400528:	e9 73 ff ff ff       	jmpq   4004a0 <register_tm_clones>

000000000040052d <main>:
  40052d:	55                   	push   %rbp
  40052e:	48 89 e5             	mov    %rsp,%rbp
  400531:	bf d4 05 40 00       	mov    $0x4005d4,%edi
  400536:	e8 d5 fe ff ff       	callq  400410 <puts@plt>
  40053b:	b8 00 00 00 00       	mov    $0x0,%eax
  400540:	5d                   	pop    %rbp
  400541:	c3                   	retq   
  400542:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400549:	00 00 00 
  40054c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400550 <__libc_csu_init>:
  400550:	41 57                	push   %r15
  400552:	41 89 ff             	mov    %edi,%r15d
  400555:	41 56                	push   %r14
  400557:	49 89 f6             	mov    %rsi,%r14
  40055a:	41 55                	push   %r13
  40055c:	49 89 d5             	mov    %rdx,%r13
  40055f:	41 54                	push   %r12
  400561:	4c 8d 25 a8 08 20 00 	lea    0x2008a8(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  400568:	55                   	push   %rbp
  400569:	48 8d 2d a8 08 20 00 	lea    0x2008a8(%rip),%rbp        # 600e18 <__init_array_end>
  400570:	53                   	push   %rbx
  400571:	4c 29 e5             	sub    %r12,%rbp
  400574:	31 db                	xor    %ebx,%ebx
  400576:	48 c1 fd 03          	sar    $0x3,%rbp
  40057a:	48 83 ec 08          	sub    $0x8,%rsp
  40057e:	e8 5d fe ff ff       	callq  4003e0 <_init>
  400583:	48 85 ed             	test   %rbp,%rbp
  400586:	74 1e                	je     4005a6 <__libc_csu_init+0x56>
  400588:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40058f:	00 
  400590:	4c 89 ea             	mov    %r13,%rdx
  400593:	4c 89 f6             	mov    %r14,%rsi
  400596:	44 89 ff             	mov    %r15d,%edi
  400599:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40059d:	48 83 c3 01          	add    $0x1,%rbx
  4005a1:	48 39 eb             	cmp    %rbp,%rbx
  4005a4:	75 ea                	jne    400590 <__libc_csu_init+0x40>
  4005a6:	48 83 c4 08          	add    $0x8,%rsp
  4005aa:	5b                   	pop    %rbx
  4005ab:	5d                   	pop    %rbp
  4005ac:	41 5c                	pop    %r12
  4005ae:	41 5d                	pop    %r13
  4005b0:	41 5e                	pop    %r14
  4005b2:	41 5f                	pop    %r15
  4005b4:	c3                   	retq   
  4005b5:	66 66 2e 0f 1f 84 00 	data32 nopw %cs:0x0(%rax,%rax,1)
  4005bc:	00 00 00 00 

00000000004005c0 <__libc_csu_fini>:
  4005c0:	f3 c3                	repz retq 

Дизассемблирование раздела .fini:

00000000004005c4 <_fini>:
  4005c4:	48 83 ec 08          	sub    $0x8,%rsp
  4005c8:	48 83 c4 08          	add    $0x8,%rsp
  4005cc:	c3                   	retq   

Дизассемблирование раздела .rodata:

00000000004005d0 <_IO_stdin_used>:
  4005d0:	01 00                	add    %eax,(%rax)
  4005d2:	02 00                	add    (%rax),%al
  4005d4:	48                   	rex.W
  4005d5:	65                   	gs
  4005d6:	6c                   	insb   (%dx),%es:(%rdi)
  4005d7:	6c                   	insb   (%dx),%es:(%rdi)
  4005d8:	6f                   	outsl  %ds:(%rsi),(%dx)
  4005d9:	2c 20                	sub    $0x20,%al
  4005db:	77 6f                	ja     40064c <_IO_stdin_used+0x7c>
  4005dd:	72 6c                	jb     40064b <_IO_stdin_used+0x7b>
  4005df:	64 21 00             	and    %eax,%fs:(%rax)

Дизассемблирование раздела .eh_frame_hdr:

00000000004005e4 <.eh_frame_hdr>:
  4005e4:	01 1b                	add    %ebx,(%rbx)
  4005e6:	03 3b                	add    (%rbx),%edi
  4005e8:	30 00                	xor    %al,(%rax)
  4005ea:	00 00                	add    %al,(%rax)
  4005ec:	05 00 00 00 1c       	add    $0x1c000000,%eax
  4005f1:	fe                   	(bad)  
  4005f2:	ff                   	(bad)  
  4005f3:	ff                   	(bad)  
  4005f4:	7c 00                	jl     4005f6 <_IO_stdin_used+0x26>
  4005f6:	00 00                	add    %al,(%rax)
  4005f8:	5c                   	pop    %rsp
  4005f9:	fe                   	(bad)  
  4005fa:	ff                   	(bad)  
  4005fb:	ff 4c 00 00          	decl   0x0(%rax,%rax,1)
  4005ff:	00 49 ff             	add    %cl,-0x1(%rcx)
  400602:	ff                   	(bad)  
  400603:	ff a4 00 00 00 6c ff 	jmpq   *-0x940000(%rax,%rax,1)
  40060a:	ff                   	(bad)  
  40060b:	ff c4                	inc    %esp
  40060d:	00 00                	add    %al,(%rax)
  40060f:	00 dc                	add    %bl,%ah
  400611:	ff                   	(bad)  
  400612:	ff                   	(bad)  
  400613:	ff 0c 01             	decl   (%rcx,%rax,1)
	...

Дизассемблирование раздела .eh_frame:

0000000000400618 <__FRAME_END__-0xf0>:
  400618:	14 00                	adc    $0x0,%al
  40061a:	00 00                	add    %al,(%rax)
  40061c:	00 00                	add    %al,(%rax)
  40061e:	00 00                	add    %al,(%rax)
  400620:	01 7a 52             	add    %edi,0x52(%rdx)
  400623:	00 01                	add    %al,(%rcx)
  400625:	78 10                	js     400637 <_IO_stdin_used+0x67>
  400627:	01 1b                	add    %ebx,(%rbx)
  400629:	0c 07                	or     $0x7,%al
  40062b:	08 90 01 07 10 14    	or     %dl,0x14100701(%rax)
  400631:	00 00                	add    %al,(%rax)
  400633:	00 1c 00             	add    %bl,(%rax,%rax,1)
  400636:	00 00                	add    %al,(%rax)
  400638:	08 fe                	or     %bh,%dh
  40063a:	ff                   	(bad)  
  40063b:	ff 2a                	ljmpq  *(%rdx)
	...
  400645:	00 00                	add    %al,(%rax)
  400647:	00 14 00             	add    %dl,(%rax,%rax,1)
  40064a:	00 00                	add    %al,(%rax)
  40064c:	00 00                	add    %al,(%rax)
  40064e:	00 00                	add    %al,(%rax)
  400650:	01 7a 52             	add    %edi,0x52(%rdx)
  400653:	00 01                	add    %al,(%rcx)
  400655:	78 10                	js     400667 <_IO_stdin_used+0x97>
  400657:	01 1b                	add    %ebx,(%rbx)
  400659:	0c 07                	or     $0x7,%al
  40065b:	08 90 01 00 00 24    	or     %dl,0x24000001(%rax)
  400661:	00 00                	add    %al,(%rax)
  400663:	00 1c 00             	add    %bl,(%rax,%rax,1)
  400666:	00 00                	add    %al,(%rax)
  400668:	98                   	cwtl   
  400669:	fd                   	std    
  40066a:	ff                   	(bad)  
  40066b:	ff 40 00             	incl   0x0(%rax)
  40066e:	00 00                	add    %al,(%rax)
  400670:	00 0e                	add    %cl,(%rsi)
  400672:	10 46 0e             	adc    %al,0xe(%rsi)
  400675:	18 4a 0f             	sbb    %cl,0xf(%rdx)
  400678:	0b 77 08             	or     0x8(%rdi),%esi
  40067b:	80 00 3f             	addb   $0x3f,(%rax)
  40067e:	1a 3b                	sbb    (%rbx),%bh
  400680:	2a 33                	sub    (%rbx),%dh
  400682:	24 22                	and    $0x22,%al
  400684:	00 00                	add    %al,(%rax)
  400686:	00 00                	add    %al,(%rax)
  400688:	1c 00                	sbb    $0x0,%al
  40068a:	00 00                	add    %al,(%rax)
  40068c:	44 00 00             	add    %r8b,(%rax)
  40068f:	00 9d fe ff ff 15    	add    %bl,0x15fffffe(%rbp)
  400695:	00 00                	add    %al,(%rax)
  400697:	00 00                	add    %al,(%rax)
  400699:	41 0e                	rex.B (bad) 
  40069b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  4006a1:	50                   	push   %rax
  4006a2:	0c 07                	or     $0x7,%al
  4006a4:	08 00                	or     %al,(%rax)
  4006a6:	00 00                	add    %al,(%rax)
  4006a8:	44 00 00             	add    %r8b,(%rax)
  4006ab:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
  4006af:	00 a0 fe ff ff 65    	add    %ah,0x65fffffe(%rax)
  4006b5:	00 00                	add    %al,(%rax)
  4006b7:	00 00                	add    %al,(%rax)
  4006b9:	42 0e                	rex.X (bad) 
  4006bb:	10 8f 02 45 0e 18    	adc    %cl,0x180e4502(%rdi)
  4006c1:	8e 03                	mov    (%rbx),%es
  4006c3:	45 0e                	rex.RB (bad) 
  4006c5:	20 8d 04 45 0e 28    	and    %cl,0x280e4504(%rbp)
  4006cb:	8c 05 48 0e 30 86    	mov    %es,-0x79cff1b8(%rip)        # ffffffff86701519 <_end+0xffffffff861004d1>
  4006d1:	06                   	(bad)  
  4006d2:	48 0e                	rex.W (bad) 
  4006d4:	38 83 07 4d 0e 40    	cmp    %al,0x400e4d07(%rbx)
  4006da:	6c                   	insb   (%dx),%es:(%rdi)
  4006db:	0e                   	(bad)  
  4006dc:	38 41 0e             	cmp    %al,0xe(%rcx)
  4006df:	30 41 0e             	xor    %al,0xe(%rcx)
  4006e2:	28 42 0e             	sub    %al,0xe(%rdx)
  4006e5:	20 42 0e             	and    %al,0xe(%rdx)
  4006e8:	18 42 0e             	sbb    %al,0xe(%rdx)
  4006eb:	10 42 0e             	adc    %al,0xe(%rdx)
  4006ee:	08 00                	or     %al,(%rax)
  4006f0:	14 00                	adc    $0x0,%al
  4006f2:	00 00                	add    %al,(%rax)
  4006f4:	ac                   	lods   %ds:(%rsi),%al
  4006f5:	00 00                	add    %al,(%rax)
  4006f7:	00 c8                	add    %cl,%al
  4006f9:	fe                   	(bad)  
  4006fa:	ff                   	(bad)  
  4006fb:	ff 02                	incl   (%rdx)
	...

0000000000400708 <__FRAME_END__>:
  400708:	00 00                	add    %al,(%rax)
	...

Дизассемблирование раздела .init_array:

0000000000600e10 <__frame_dummy_init_array_entry>:
  600e10:	00 05 40 00 00 00    	add    %al,0x40(%rip)        # 600e56 <_DYNAMIC+0x2e>
	...

Дизассемблирование раздела .fini_array:

0000000000600e18 <__do_global_dtors_aux_fini_array_entry>:
  600e18:	e0 04                	loopne 600e1e <__do_global_dtors_aux_fini_array_entry+0x6>
  600e1a:	40 00 00             	add    %al,(%rax)
  600e1d:	00 00                	add    %al,(%rax)
	...

Дизассемблирование раздела .jcr:

0000000000600e20 <__JCR_END__>:
	...

Дизассемблирование раздела .dynamic:

0000000000600e28 <_DYNAMIC>:
  600e28:	01 00                	add    %eax,(%rax)
  600e2a:	00 00                	add    %al,(%rax)
  600e2c:	00 00                	add    %al,(%rax)
  600e2e:	00 00                	add    %al,(%rax)
  600e30:	01 00                	add    %eax,(%rax)
  600e32:	00 00                	add    %al,(%rax)
  600e34:	00 00                	add    %al,(%rax)
  600e36:	00 00                	add    %al,(%rax)
  600e38:	0c 00                	or     $0x0,%al
  600e3a:	00 00                	add    %al,(%rax)
  600e3c:	00 00                	add    %al,(%rax)
  600e3e:	00 00                	add    %al,(%rax)
  600e40:	e0 03                	loopne 600e45 <_DYNAMIC+0x1d>
  600e42:	40 00 00             	add    %al,(%rax)
  600e45:	00 00                	add    %al,(%rax)
  600e47:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 600e4d <_DYNAMIC+0x25>
  600e4d:	00 00                	add    %al,(%rax)
  600e4f:	00 c4                	add    %al,%ah
  600e51:	05 40 00 00 00       	add    $0x40,%eax
  600e56:	00 00                	add    %al,(%rax)
  600e58:	19 00                	sbb    %eax,(%rax)
  600e5a:	00 00                	add    %al,(%rax)
  600e5c:	00 00                	add    %al,(%rax)
  600e5e:	00 00                	add    %al,(%rax)
  600e60:	10 0e                	adc    %cl,(%rsi)
  600e62:	60                   	(bad)  
  600e63:	00 00                	add    %al,(%rax)
  600e65:	00 00                	add    %al,(%rax)
  600e67:	00 1b                	add    %bl,(%rbx)
  600e69:	00 00                	add    %al,(%rax)
  600e6b:	00 00                	add    %al,(%rax)
  600e6d:	00 00                	add    %al,(%rax)
  600e6f:	00 08                	add    %cl,(%rax)
  600e71:	00 00                	add    %al,(%rax)
  600e73:	00 00                	add    %al,(%rax)
  600e75:	00 00                	add    %al,(%rax)
  600e77:	00 1a                	add    %bl,(%rdx)
  600e79:	00 00                	add    %al,(%rax)
  600e7b:	00 00                	add    %al,(%rax)
  600e7d:	00 00                	add    %al,(%rax)
  600e7f:	00 18                	add    %bl,(%rax)
  600e81:	0e                   	(bad)  
  600e82:	60                   	(bad)  
  600e83:	00 00                	add    %al,(%rax)
  600e85:	00 00                	add    %al,(%rax)
  600e87:	00 1c 00             	add    %bl,(%rax,%rax,1)
  600e8a:	00 00                	add    %al,(%rax)
  600e8c:	00 00                	add    %al,(%rax)
  600e8e:	00 00                	add    %al,(%rax)
  600e90:	08 00                	or     %al,(%rax)
  600e92:	00 00                	add    %al,(%rax)
  600e94:	00 00                	add    %al,(%rax)
  600e96:	00 00                	add    %al,(%rax)
  600e98:	f5                   	cmc    
  600e99:	fe                   	(bad)  
  600e9a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600e9d:	00 00                	add    %al,(%rax)
  600e9f:	00 98 02 40 00 00    	add    %bl,0x4002(%rax)
  600ea5:	00 00                	add    %al,(%rax)
  600ea7:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 600ead <_DYNAMIC+0x85>
  600ead:	00 00                	add    %al,(%rax)
  600eaf:	00 18                	add    %bl,(%rax)
  600eb1:	03 40 00             	add    0x0(%rax),%eax
  600eb4:	00 00                	add    %al,(%rax)
  600eb6:	00 00                	add    %al,(%rax)
  600eb8:	06                   	(bad)  
  600eb9:	00 00                	add    %al,(%rax)
  600ebb:	00 00                	add    %al,(%rax)
  600ebd:	00 00                	add    %al,(%rax)
  600ebf:	00 b8 02 40 00 00    	add    %bh,0x4002(%rax)
  600ec5:	00 00                	add    %al,(%rax)
  600ec7:	00 0a                	add    %cl,(%rdx)
  600ec9:	00 00                	add    %al,(%rax)
  600ecb:	00 00                	add    %al,(%rax)
  600ecd:	00 00                	add    %al,(%rax)
  600ecf:	00 3d 00 00 00 00    	add    %bh,0x0(%rip)        # 600ed5 <_DYNAMIC+0xad>
  600ed5:	00 00                	add    %al,(%rax)
  600ed7:	00 0b                	add    %cl,(%rbx)
  600ed9:	00 00                	add    %al,(%rax)
  600edb:	00 00                	add    %al,(%rax)
  600edd:	00 00                	add    %al,(%rax)
  600edf:	00 18                	add    %bl,(%rax)
  600ee1:	00 00                	add    %al,(%rax)
  600ee3:	00 00                	add    %al,(%rax)
  600ee5:	00 00                	add    %al,(%rax)
  600ee7:	00 15 00 00 00 00    	add    %dl,0x0(%rip)        # 600eed <_DYNAMIC+0xc5>
	...
  600ef5:	00 00                	add    %al,(%rax)
  600ef7:	00 03                	add    %al,(%rbx)
	...
  600f01:	10 60 00             	adc    %ah,0x0(%rax)
  600f04:	00 00                	add    %al,(%rax)
  600f06:	00 00                	add    %al,(%rax)
  600f08:	02 00                	add    (%rax),%al
  600f0a:	00 00                	add    %al,(%rax)
  600f0c:	00 00                	add    %al,(%rax)
  600f0e:	00 00                	add    %al,(%rax)
  600f10:	48 00 00             	rex.W add %al,(%rax)
  600f13:	00 00                	add    %al,(%rax)
  600f15:	00 00                	add    %al,(%rax)
  600f17:	00 14 00             	add    %dl,(%rax,%rax,1)
  600f1a:	00 00                	add    %al,(%rax)
  600f1c:	00 00                	add    %al,(%rax)
  600f1e:	00 00                	add    %al,(%rax)
  600f20:	07                   	(bad)  
  600f21:	00 00                	add    %al,(%rax)
  600f23:	00 00                	add    %al,(%rax)
  600f25:	00 00                	add    %al,(%rax)
  600f27:	00 17                	add    %dl,(%rdi)
  600f29:	00 00                	add    %al,(%rax)
  600f2b:	00 00                	add    %al,(%rax)
  600f2d:	00 00                	add    %al,(%rax)
  600f2f:	00 98 03 40 00 00    	add    %bl,0x4003(%rax)
  600f35:	00 00                	add    %al,(%rax)
  600f37:	00 07                	add    %al,(%rdi)
  600f39:	00 00                	add    %al,(%rax)
  600f3b:	00 00                	add    %al,(%rax)
  600f3d:	00 00                	add    %al,(%rax)
  600f3f:	00 80 03 40 00 00    	add    %al,0x4003(%rax)
  600f45:	00 00                	add    %al,(%rax)
  600f47:	00 08                	add    %cl,(%rax)
  600f49:	00 00                	add    %al,(%rax)
  600f4b:	00 00                	add    %al,(%rax)
  600f4d:	00 00                	add    %al,(%rax)
  600f4f:	00 18                	add    %bl,(%rax)
  600f51:	00 00                	add    %al,(%rax)
  600f53:	00 00                	add    %al,(%rax)
  600f55:	00 00                	add    %al,(%rax)
  600f57:	00 09                	add    %cl,(%rcx)
  600f59:	00 00                	add    %al,(%rax)
  600f5b:	00 00                	add    %al,(%rax)
  600f5d:	00 00                	add    %al,(%rax)
  600f5f:	00 18                	add    %bl,(%rax)
  600f61:	00 00                	add    %al,(%rax)
  600f63:	00 00                	add    %al,(%rax)
  600f65:	00 00                	add    %al,(%rax)
  600f67:	00 fe                	add    %bh,%dh
  600f69:	ff                   	(bad)  
  600f6a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f6d:	00 00                	add    %al,(%rax)
  600f6f:	00 60 03             	add    %ah,0x3(%rax)
  600f72:	40 00 00             	add    %al,(%rax)
  600f75:	00 00                	add    %al,(%rax)
  600f77:	00 ff                	add    %bh,%bh
  600f79:	ff                   	(bad)  
  600f7a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f7d:	00 00                	add    %al,(%rax)
  600f7f:	00 01                	add    %al,(%rcx)
  600f81:	00 00                	add    %al,(%rax)
  600f83:	00 00                	add    %al,(%rax)
  600f85:	00 00                	add    %al,(%rax)
  600f87:	00 f0                	add    %dh,%al
  600f89:	ff                   	(bad)  
  600f8a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  600f8d:	00 00                	add    %al,(%rax)
  600f8f:	00 56 03             	add    %dl,0x3(%rsi)
  600f92:	40 00 00             	add    %al,(%rax)
	...

Дизассемблирование раздела .got:

0000000000600ff8 <.got>:
	...

Дизассемблирование раздела .got.plt:

0000000000601000 <_GLOBAL_OFFSET_TABLE_>:
  601000:	28 0e                	sub    %cl,(%rsi)
  601002:	60                   	(bad)  
	...
  601017:	00 16                	add    %dl,(%rsi)
  601019:	04 40                	add    $0x40,%al
  60101b:	00 00                	add    %al,(%rax)
  60101d:	00 00                	add    %al,(%rax)
  60101f:	00 26                	add    %ah,(%rsi)
  601021:	04 40                	add    $0x40,%al
  601023:	00 00                	add    %al,(%rax)
  601025:	00 00                	add    %al,(%rax)
  601027:	00 36                	add    %dh,(%rsi)
  601029:	04 40                	add    $0x40,%al
  60102b:	00 00                	add    %al,(%rax)
  60102d:	00 00                	add    %al,(%rax)
	...

Дизассемблирование раздела .data:

0000000000601030 <__data_start>:
	...

0000000000601038 <__dso_handle>:
	...

Дизассемблирование раздела .bss:

0000000000601040 <__bss_start>:
	...

Дизассемблирование раздела .comment:

0000000000000000 <.comment>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp (%r8),%spl
   5:	28 55 62             	sub    %dl,0x62(%rbp)
   8:	75 6e                	jne    78 <_init-0x400368>
   a:	74 75                	je     81 <_init-0x40035f>
   c:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
   f:	38 2e                	cmp    %ch,(%rsi)
  11:	34 2d                	xor    $0x2d,%al
  13:	32 75 62             	xor    0x62(%rbp),%dh
  16:	75 6e                	jne    86 <_init-0x40035a>
  18:	74 75                	je     8f <_init-0x400351>
  1a:	31 7e 31             	xor    %edi,0x31(%rsi)
  1d:	34 2e                	xor    $0x2e,%al
  1f:	30 34 2e             	xor    %dh,(%rsi,%rbp,1)
  22:	31 29                	xor    %ebp,(%rcx)
  24:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
  27:	38 2e                	cmp    %ch,(%rsi)
  29:	34 00                	xor    $0x0,%al
  2b:	47                   	rex.RXB
  2c:	43                   	rex.XB
  2d:	43 3a 20             	rex.XB cmp (%r8),%spl
  30:	28 55 62             	sub    %dl,0x62(%rbp)
  33:	75 6e                	jne    a3 <_init-0x40033d>
  35:	74 75                	je     ac <_init-0x400334>
  37:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
  3a:	38 2e                	cmp    %ch,(%rsi)
  3c:	32 2d 31 39 75 62    	xor    0x62753931(%rip),%ch        # 62753973 <_end+0x6215292b>
  42:	75 6e                	jne    b2 <_init-0x40032e>
  44:	74 75                	je     bb <_init-0x400325>
  46:	31 29                	xor    %ebp,(%rcx)
  48:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
  4b:	38 2e                	cmp    %ch,(%rsi)
  4d:	32 00                	xor    (%rax),%al
angelina@angelina-Aspire-E1-572G:~/Homework$ 


