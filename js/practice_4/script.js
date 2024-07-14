// addition
let add7 = (num) => num+7;
// multiplication
function multiply(num1, num2) { 
    return num1*num2;
}
// capitalize or lowercase first letter only
function capitalize(string) {
    if (string[0] !== string[0].toUpperCase()) {
        return string[0].toUpperCase() + string.slice(1);
    } else {
        return string[0].toLowerCase() + string.slice(1);
    }
}
// specifically last letter only
function lastLetter(string) { 
        return string[string.length-1];
}