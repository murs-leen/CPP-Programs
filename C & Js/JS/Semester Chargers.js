let residentialStatus = prompt(
    "Enter'I'for 'in-state' and 'O' for 'out-of-state'"
);
let requireRoom = prompt("'Y'for yes and'N' for No");
let i = 0,
    total = 0;
while (i != -1) {
    if (residentialStatus == "i") {
        if (requireRoom == "y") {
            i = -1;
        } else if (requireRoom == "n") {
            i = -1;
        } else {
            console.log("Invalide value.....");
            requireRoom = prompt("'Y'for yes and'N' for No");
        }
    } else if (residentialStatus == "o") {
        if (requireRoom == "y") {
            i = -1;
        } else if (requireRoom == "n") {
            i = -1;
        } else {
            console.log("Invalide value.....");
            requireRoom = prompt("'Y'for yes and'N' for No");
        }
    } else {
        console.log("Invalide inpute....");
        residentialStatus = prompt(
            "Enter'I'for 'in-state' and 'O' for 'out-of-state'"
        );
    }
}
if (residentialStatus == "i") {
    if (requireRoom == "y") {
        total = 3000 + 2500;
        console.log("Total expendature = ", total);
    } else {
        total = 3000;
        console.log("Total expendature = ", total);
    }
} else if (residentialStatus == "o") {
    if (requireRoom == "y") {
        total = 4500 + 3500;
        console.log("Total expendature = ", total);
    } else {
        total = 4500;
        console.log("Total expendature = ", total);
    }
}
