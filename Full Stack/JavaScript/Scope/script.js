var fun=5;

function funny()
{
    var fun="hello";
    console.log(1, fun);
}

function funner()
{
    var fun="bye";
    console.log(2, fun);
}

function funniest()
{
    fun="ooooo";
    console.log(3, fun);
}

console.log(fun);


funny();
funner();
funniest();






// For all of these, what is the value of a when the function gets called with the alert()
// #1
function q1() {
    var a = 5;
    if(a > 1) 
    {
        a = 3;
    }
    alert(a);
}

//#2
var a = 0;
function q2() 
{
    a = 5;
}

function q22() 
{
    alert(a);
}


//#3
function q3() 
{
    window.a = "hello";
}


function q32() 
{
    alert(a);
}

//#4
var a = 1;
function q4() 
{
    var a = "test";
    alert(a);
}

//#5
var a = 2;
if (true) 
{
    var a = 5;
    alert(a);
}
alert(a);