program text

implicit none 
integer:: a = 3, b = 4, c = 5


if (a < b .and. b < c) then 
	print *, "c is the biggest of them all!" 
else if (a < b .and. b > c) then 
	print *, "b is the biggest of them all!" 
else if (b > c) then
	print *, "even though this is true, else condition is never hit"
end if 

demo_or:  if (a > b .or. c > b) then 
		print *, "one of the conditions is .true." 
	  else 
		print *, "none of the condition are .true." 
	  end if demo_or 
end program 
