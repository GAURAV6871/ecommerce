const first= () => 
{
    const greet='Hi';
    const second = () =>
    {
        alert(greet);
    }
    return second;
}

const newFunc= first();
newFunc();


//Currying

const multiply = (a,b) => a*b;
const curriedmultiply = (a) => (b) => a*b;

//COMPOSE == Act of putting two functions together to form a third function where the optput of 
//function is the input of the other

const compose= (f,g) => (a) =>f(g(a));

const sum= (num)=>num+1;
compose (sum, sum)(5);


//on runnig this on console we will get 7 as g(a) is sum where a is 5
//when sum runs it gives 6. now we are left  with f(6) where f is also 
//sum so on runnig sum again we will get 7



//AVOIDING SIDE EFFECTS, FUNCTIONAL PURITY

 