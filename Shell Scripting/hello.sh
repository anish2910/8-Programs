<<comment

 args=("$@")

 echo ${args[0]}  ${args[1]}
  args=("$@") 
  

 #sores ur ag as an array

 echo $@
 echo $# 

 
#read a file using i/p redirection 
while IFS= read -r p #-r prevents backslash

do

 echo $p

done < /etc/host.conf

cat call.txt | while read p
do 
echo $p
done

#until loop
#when false then only exec b/w do and done

no=1
//until loops
until [ $no -gt 10 ]
do
 echo $no
 no=$(( no+1 )) 
done



#select
e# easy menus
select nam in anish rupesh saurabh
do
 echo " $name selected"
done

comment

#for loop
for ((i=1;i<=10;i++))
do
	if [ $i -lt 5 ]
	then
	 continue
	fi
	echo "$i"

done
