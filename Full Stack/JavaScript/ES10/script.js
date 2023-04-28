const array=[1,2,3,4,5];
array.flat();

const array1=[[1,2,3],[4,5,6],[7,8,9]];
array1.flat();


//we can also clear up the empty entries using flat
const array2=[1,2,3,,,,,,4,5,6];
array2.flat();



const useremail='     gauravbhardwaj@gmail.com';
const useremail2='igauravbhardwaj@gmail.com      ';
console.log(useremail.trimStart());
console.log(useremail2.trimEnd());
