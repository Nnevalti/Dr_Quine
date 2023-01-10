function Colleen() {
    /*
        First Comment
    */
    console.log(Colleen.toString());
}
/*
    Second Comment
*/
(function main(){Colleen(); console.log("/*\n   Second Comment\n*/"); console.log("("+main.toString()+")()")})()