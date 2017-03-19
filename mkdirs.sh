#！/bin/bash

one=""
two=""
three=""

lines=$(cat overview.txt|wc -l)
for i in $( seq $lines )
do
$(sed -n ${i},${i}p overview.txt > tmp)
res=$(grep -E '^# ' tmp) 
if [ "$res" != "" ];then
   one=$( awk -F ' ' '{print $2}' tmp )
   mkdir -p $one
fi

res=$(grep -E '^## ' tmp)
if [ "$res" != "" ];then
   two=$( awk -F ' ' '{print $2}' tmp )
   mkdir -p $one/$two
fi

res=$(grep -E '^### ' tmp) 
if [ "$res" != "" ];then
   three=$(awk -F ' ' '{print $2}' tmp )
   mkdir -p $one/$two/$three
fi

done
