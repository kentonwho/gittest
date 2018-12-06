module Prime
        implicit none 
        contains 
                logical function isPrime(num)
                        integer::num,tester
                        isPrime = 1 
                        do tester = 2,(num/2)
                                if (mod(num,tester) == 0) then
                                        isPrime = 0
                                        EXIT
                                end if 
                        end do 
                end function isPrime 
end module Prime 


                
                                    
