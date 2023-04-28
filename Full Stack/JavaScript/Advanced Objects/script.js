//Reference Type
var object1={value:10};
var object2=object1;
var object3={value:10};
console.log("1 & 2" +  object1===object2);
console.log("2 & 3" +  object2===object3);
console.log("1 & 3" +  object1===object3);


//Context


//Instantiation

class Player
{
    constructor(name, type)
    {
        console.log(this);
        this.name=name;
        this.type=type;
    }
    introduce()
    {
        console.log(`hii my name is ${this.name} and i am a ${this.type}`);
    }
}

class Wizard extends Player
{
    constructor(name, type)
    {
        super(name,type);
    }
    play()
    {
        console.log(`HII!! i am a $(this,type)`);
    }
}


const wizard1= new Wizard("gaurav" , "Healer");
const wizard2= new Wizard("arun" , "dark magic");