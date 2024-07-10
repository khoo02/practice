let userName = prompt("Who's there?", "");

// prompt user
if (userName === "Admin") {
    let passWord = prompt("Password?");

    // password
    if (passWord === "TheMaster") {
        alert("Welcome!");
    } else {
        alert("Wrong password");
    }
} else {
    alert("I don't know you");
}