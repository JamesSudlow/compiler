.globl main
 main: 
    pushq %rbp
    movq %rsp, %rbp
    movl $6, -20(%rbp)
    movl $4, -24(%rbp)
    movl -20(%rbp), %eax
	cltd
	idivl -24(%rbp)
    movl %eax, -28(%rbp)
    movl -28(%rbp), %eax
    movl %eax, -4(%rbp)
    movl $2, -32(%rbp)
    movl $20, -36(%rbp)
    movl -36(%rbp), %eax
	cltd
	idivl -4(%rbp)
    movl %eax, -40(%rbp)
    movl -32(%rbp), %eax
    movl -40(%rbp), %ebx
	addl %ebx, %eax
    movl %eax, -44(%rbp)
    movl -44(%rbp), %eax
    movl %eax, -8(%rbp)
    movl -4(%rbp), %eax
    movl -8(%rbp), %ebx
	addl %ebx, %eax
    movl %eax, -48(%rbp)
    movl $3, -52(%rbp)
    movl -48(%rbp), %eax
    movl -52(%rbp), %ebx
	imull %ebx, %eax
    movl %eax, -56(%rbp)
    movl -56(%rbp), %eax
    movl %eax, -12(%rbp)
    movl -4(%rbp), %eax
    movl -8(%rbp), %ebx
	imull %ebx, %eax
    movl %eax, -60(%rbp)
    movl $2, -64(%rbp)
    movl -60(%rbp), %eax
    movl -64(%rbp), %ebx
	addl %ebx, %eax
    movl %eax, -68(%rbp)
    movl -68(%rbp), %eax
    movl %eax, -12(%rbp)
    movl -8(%rbp), %eax
	cltd
	idivl -4(%rbp)
    movl %eax, -72(%rbp)
    movl -12(%rbp), %eax
    movl -72(%rbp), %ebx
	subl %ebx, %eax
    movl %eax, -76(%rbp)
    movl -76(%rbp), %eax
    movl %eax, -16(%rbp)
    movl -16(%rbp), %eax
    popq %rbp
    ret
