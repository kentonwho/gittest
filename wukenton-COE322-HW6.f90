module Prime

implicit none 
contains 
        logical function isPrime(num)
                integer::num,tester
                do tester = 2,(num/2)
                        if (mod(num,tester) == 0) then
                                isPrime = 0
                                EXIT
                        else 
                                isPrime = 1
                        end if 
                end do 
        end function isPrime 
end module Prime 

program main 
use Prime 
implicit none 

integer::input 

print *, 'Enter your number: ' 
read *, input 

if (isPrime(input)) then 
        print *, 'The number is prime' 
else
        print *, 'The number is not prime' 
end if 


end program main 
                
                                    
