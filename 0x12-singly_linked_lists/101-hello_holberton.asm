global main           ; Declare main as a global symbol so it can be linked
extern printf         ; Declare the printf function as an external symbol

section .data
  format db "Hello, Holberton", 10, 0  ; Define the format string as a null-terminated byte sequence

section .text
main:                 ; Define the main function
  mov edi, format     ; Move the address of the format string to the EDI register
  xor eax, eax        ; Clear the EAX register (this sets the return value of main to 0)
  call printf         ; Call the printf function to print the string
  xor eax, eax        ; Clear the EAX register again (this is redundant, since EAX is already 0)
  ret                 ; Return from the main function
