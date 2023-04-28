const player='bobby';
let experience=100;
let wizardlevel=false;

//if(experience>90)
//{
  //  let wizardlevel=true;
//}


const obj={
    player:'bobby',
    experience:100,
    wizardlevel:false
};

/*now on console if we try obj=5
it will not Work
but if we will try to change the properties of the 
obj it will work
like if we do
obj.wizardlevel=true*/



//DESTRUCTURING


const name="sally";
const age=34;
const pet="dog";

const greetings=`Hello  ${name} you seem to be ${age}. what a lovely ${pet} you have`;

//DEFAULT ARGUMENTS
function greet(name='', age=30 , pet='cat')
{
    return `Hello ${name} you seem to be ${age}. what a lovely ${pet} you have`;
}
 
//JAVASCRIPT TYPES - SYMBOL
//symbol value are used to make completely 
//unique objects
let sym1=Symbol();
let sym2=Symbol('foo');
let sym3=Symbol('foo');

//ARROW FUNCTIONS

function add(a,b)
{
    return a+b;
}

const add = (a,b) => a+b;