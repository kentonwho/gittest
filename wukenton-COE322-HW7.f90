include 'HW6.f90' 

module primePrinter  
use Prime 
implicit none 

contains 
        subroutine printer(num) 
              integer::num,dumnum
              integer::tester = 1
              dumnum = num  
              do while (dumnum > 0) 
                if (isPrime(tester)) then
                        print *, tester
                        dumnum = dumnum -1  
                end if
                tester = tester + 1
              end do 
        end subroutine printer 
end module primePrinter 

program primePrinterTester  
use primePrinter 

implicit none

integer::input

print *, 'How many primes do you need, boss?' 
read *, input
CALL printer(input) 

end program primePrinterTester              
             
                 
                      
                       
                        
