var size = 8;

var solution = "";
for (var i = 0; i < size; i++) {
  for (var j = 0; j < size; j++) {
    solution += ((i + j) % 2 == 0) ? " " : "#";
  }
  solution += "\n";
}
console.log(solution);
