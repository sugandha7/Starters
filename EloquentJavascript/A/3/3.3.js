function countBs(str) {
  var count = 0;
  for (var i = 0; i < str.length; i++) {
    if (str[i] == "B") {
      count++;
    }
  }
  return count;
}

function countChar(str, char) {
  var count = 0;
  for (var i = 0; i < str.length; i++) {
    if (str[i] == char) {
      count++;
    }
  }
  return count;
}

console.log(countBs("BBC"));
// → 2
console.log(countChar("kakkerlak", "k"));
// → 4
