program primefinder

implicit none 

integer::num,tester
logical::isPrime = 1 
do num = 1,100
        do tester = 2, (num/2) 
                if (mod(num,tester) == 0) then
                        print *, num, & 'is not prime:', & 'divisible by', & tester
                        isPrime = 0; 
                        EXIT 
                end if 
        end do 
        if (isPrime) then
                print *, num, & 'is Prime' 
        end if
        isPrime = 1;  
end do 

end program primefinder 
