global    main
          external      printf
main:
	  mov    edi,    format
	  xor    eax,    eax
	  call   printf
	  mov    eax,    0
	  ret
format: db  `Hello, Hoberton\n`,0
