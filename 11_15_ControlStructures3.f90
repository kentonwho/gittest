program divisor 

implicit none 

integer:: a, b

print *, "Enter a quotient: " 
read *, a
print *, "Enter a divisor: " 
read *, b  

if (mod(a,b) == 0) then 
        Print  *, b, "is a divisor of", & a
else 
        Print  *, b, "is not a divisor of", & a
end if 

end program divisor 
