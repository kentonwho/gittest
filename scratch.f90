program scratch
implicit none 

integer :: i 
integer, dimension(5):: A = (/1,2,3,4,5/)
character(len=8) :: n = 'John Doe' 

!do i=1,5
!       print '(i7)', A(i) 
!end do

print '(a1,a8,a1)', '>', n, '<' ! >John Doe< ! Explicit width 
print '(a,a,a)', '>', n, ','    ! >John Doe< 
end program scratch 
