program matrixFiller 

implicit none 

integer::n,m,ierror,i,j 
real, dimension(:,:), allocatable :: matrix
integer, dimension(:,:), allocatable :: intMatrix

print *, 'Enter the row size:'
read *, n
print *, 'Enter the column size: ' 
read *, m

allocate(matrix(n,m), stat = ierror) 
if (ierror /= 0) stop 'error allocating for matrix' 
allocate(intMatrix(n,m), stat = ierror) 
if (ierror /= 0) stop 'error allocating for intMatrix' 

CALL RANDOM_SEED() 
CALL RANDOM_NUMBER(matrix)

matrix = matrix * 100

intMatrix = INT(matrix) 
 
do j = 1,n
        do i = 1,m 
                if (mod(intMatrix(j,i),2) == 0) then
                        intMatrix(j,i) = 0
                else 
                        intMatrix(j,i) = 1
                end if 
        end do 
end do           

do i =1,m
        do j = 1,n 
                write(*,420,advance = 'no') intMatrix(j,i)
                420 format (I3) 
        end do 
        print *, ''
end do 
  
deallocate(matrix) 
deallocate(intMatrix)

end program matrixFiller
