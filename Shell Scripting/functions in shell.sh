echo -e "enter ur choice \c"
read  ch

case $ch in

 1 ) 
 echo "hi one" ;;
 2 )
  echo  "hi two" ;;
 *) 
 echo  "hi no one" ;;

esac



#functions

n=no
function pal()
{

echo enter n
read n
num=0
on=$n

	while (($n > 0 ))

	do
	num=$(expr $num \* 10) #reverse
	k=$(expr $n % 10) 
	num=$(expr $num + $k)
	n=$(expr $n / 10)
	done

if [ $num -eq $on ]
then
echo palindrome
else
echo not palindrome
fi
}
pal ##call
