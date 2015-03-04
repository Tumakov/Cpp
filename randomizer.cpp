// Как-то так. 

void setup(){
  randomSeed(analogRead(A0));
}

void functionZero(){
  // function statements
}

void functionOne(){
  // function statements
}

void functionTwo(){
  // function statements
}

void functionThree(){
  // function statements
}

void functionFour(){
  // function statements
}

void randomFunctionSwitcher(int functionNumber){
  switch(functionNumber){
    case 0: functionZero(); break;
    case 1: functionOne(); break;
    case 2: functionTwo(); break;
    case 3: functionThree(); break;
    case 4: functionFour(); break;
  }
}

void loop(){
  randomFunctionSwitcher(random(5));
}
