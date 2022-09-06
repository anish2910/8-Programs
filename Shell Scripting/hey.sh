#vars

name=ANISH
echo $name



#read user i/p

echo "enter nme"
read  name
echo ur name is $name



 #same line i/p
 read -p 'username:' usr
 echo "username: $usr"

 

 #password hidden
 read -sp 'password:' pass
 echo
 echo "password: $pass"

 

 #default var store

 echo Enter name:
 read 
 echo $REPLY


#file test ops
echo -e "enter a filename \c"
read  filename


if [ -e $filename ]
then
echo "found"
else
echo "nope"
fi 
