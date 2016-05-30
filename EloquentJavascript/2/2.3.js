var first = "";
var output = "";
for(var i=1;i<=8;i++)
{
  if(i%2==0)
    first = "# ";
  else
    first = " #";
  for(var j=first;j.length<8;j+=first);
  output = output+j+"\n";
}
console.log(output);
