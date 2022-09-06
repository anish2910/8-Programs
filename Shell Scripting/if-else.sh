 echo "enter no"

 read foo

 if (( $foo < 10 )) 

then

     echo $foo is greater than 10

elif  (( $foo < 15 ))

then 

echo $foo is less than 15

else

     echo $foo is not greater than 10

fi 
