const array=[1,2,3,4,5];

const double=[];

const newarray= array.forEach((num)=>{
    double.push(num*2);
})a
console.log(double);


// map, filter, reduce 
// THESE ARE THE MOST USED METHODS IN JAVA SCRIPT



//  MAP
const mapArray = array.map(num =>{
    return num*2;
})
console.log(mapArray);// this will directly double the values of the array and add them to the mapArray
const mapArray1 = array.map(num => num*2);
//For each loop only focuses on iterating over the array so we can perform any operation on the array while 
// map is having a restricion and that is
//we always need to return something while we are using the mao method



//FILTER
const array1=[1,4,16,25];
const filterArray= array1.filter(num =>{
    return num>5;
})

//REDUCE

const reduceArray= array1.reduce((accumulator, num)=>{
    return accumulator+num;
}, 0);

console.log(reduceArray);
//here we get 46 as 1+4+16+25=46



