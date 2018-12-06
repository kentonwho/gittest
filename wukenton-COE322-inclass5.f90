program inclass

implicit none 

integer:: u,v  
real:: w 
!The values of u and v only range from 0-10 because w can only be 10, and when w
!= 10 the only solutions are (10,0) or (0,10). Any values bigger than this would
!make w too big. 
 
do u  = 1, 10          
        do v  = 0, 10
                        w = sqrt(REAL(u**2 + v**2)) 
                        if (mod(w,1.0) == 0) then
                                print *, u, v, w
                        end if  
        end do 
end do 

end program inclass
