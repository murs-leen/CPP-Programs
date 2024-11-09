// Find total number of handshaks in the class

let n, i = 1, j = 0, sum = 0;
n = prompt("Enter total number of students");
while(i < n){
    while(j < n - i){
        j++;
    }
    sum = sum + j;
    j = 0;
    i++;
}
console.log("total handshaks = ",sum);
// using formula
let total = 0;
total = (n*(n-1))/2;
console.log(total);

// 10,20,200,4000,800000....find the series

// let curr,
//   pre = 10,
//   nxt,
//   k = 5,
//   i = 1;
// let num = prompt("enter number");
// while (i <= num) {
//   if (i == 1) {
//     console.log(pre); //10
//     curr = pre * 2;
//     console.log(curr); //20
//   } else {
//     nxt = curr * pre;
//     console.log(nxt);
//     pre = curr;
//     curr = nxt;
//   }
//   i++;
// }

// 1,5,2,15,3,25,4,35,....find the series

// while (i <= num) {
//   if (i == 1) {
//     console.log(i);
//     console.log(k);
//   } else {
//     console.log(i);
//     k = k + 10;
//     console.log(k);
//   }
//   i++;
// }
