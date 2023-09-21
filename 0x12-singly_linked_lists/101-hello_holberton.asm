global    main
extern    printf
main:
mov   edi, String
xor   eax, eax
call  printf
mov 	eax, 0
ret
String: db `Hello, Holberton\n`,0

