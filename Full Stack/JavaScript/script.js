 /*var a=4+3;
 if(a===7)
 {
    alert("yes");
 }

 function sing(song)
   {
       console.log(song);
   }
   sing("jsdjhsjdh");
   sing("jbdjbsljnnfls");
   sing("jsdjhsjdh");
   sing("jbdjbsljnnfls");

function multiply(a,b)
{
    if(a>10 || b>10)
    {
        console.log("thats too hard");
    }
    else
    {
        console.log(a*b);
    }    
}
multiply(2,3);
multiply(14,15);
function multiply1(a,b)
{
    if(a>10 || b>10)
    {
        return "thats too hard";
    }
    else
    {
        return a*b;
    }    
}
multiply1(1,2);


function checkdriverage(a)
{
    if (a < 18) 
    {
       console.log("Sorry, you are too yound to drive this car. Powering off");
    } 
    else if (a > 18) 
    {
        console.log("Powering On. Enjoy the ride!");
    } 
    else if (a === 18) 
    {
        console.log("Congratulations on your first year of driving. Enjoy the ride!");
    }
}
checkdriverage(10);

checkdriverage(20);

checkdriverage(18);

checkdriverage(17);

*/


//ARRAYS
var list=["dog", "cat", "lion", "tiger"];
console.log(list[0]);
console.log(list[1]);
console.log(list[2]);
console.log(list[3]);


var numbers=[1,2,3,4];
var booleans=[true, false];
var functionList=[function apple(){
    console.log("apple");
}];


var mixedList=[1, "cat", true,function apple(){
    console.log("apple");
} ];


var list=[[1,2,3,4],[5,6,7,8]];
console.log(list[0][1]);

var list=["dog", "cat", "lion", "tiger"];

//OBJECT
 var user=
 {
    name:"Gaurav",
    age: 23,
    hobby: "reading",
    isMarried:false
 }