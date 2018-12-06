module PointMod
implicit none 

type point 
        real :: x,y,z
end type point 

contains 
        real function distance(p,q)
                type(point) :: p,q
                distance = sqrt((p%x-q%x)**2 + (p%y-q%y)**2  + (p%z-q%z)**2)
        end function distance 

end module PointMod 


program PointDistance 
use PointMod 
implicit none

type(point) :: point1, point2 
real :: x1,y1,z1,x2,y2,z2

print *, 'Enter the coordinates for point 1!'
read *,  x1
read *,  y1 
read *,  z1 

print *, 'Enter the coordinates for point 2!' 
read *,  x2
read *,  y2 
read *,  z2 

point1%x = x1 
point1%y = y1 
point1%z = z1
 
point2%x = x2 
point2%y = y2
point2%z = z2 

print *, 'Distance between the points is: ', &  distance(point1,point2) 

end program PointDistance
