const container = document.querySelector("#container");

const contentP = document.createElement("p");

    contentP.classList.add("contentP");

    contentP.textContent = "Hey I'm red!";

    contentP.style.color = "red";

    container.appendChild(contentP);

const contentH3 = document.createElement("h3");

    contentH3.classList.add("contentH3");

    contentH3.textContent = "I'm a blue h3!";

    contentH3.style.color = "blue";

    container.appendChild(contentH3);

const contentDiv = document.createElement("div");

    const divH1 = document.createElement("h1");

        divH1.textContent = "I'm in a div";

        contentDiv.appendChild(divH1);

    const divP = document.createElement("p")

        divP.textContent = "ME TOO!";

        contentDiv.appendChild(divP);

    container.appendChild(contentDiv);

const btn = document.querySelector("#btn");

function helloWorld() {
    alert('Hello World');
}

btn.addEventListener("click", function (e) {
    e.target.style.background = "white";
});

const buttons = document.querySelectorAll("button");

buttons.forEach((button) => {
    button.addEventListener("click", () => {
        alert(button.id);
    })
})