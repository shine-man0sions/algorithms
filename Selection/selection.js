// Time complexity o(n2), unstable

var arr = [10, 2, 3, 6, 5, 9, 15];

for (var i = 0; i < arr.length; i++) {
  minPosition = i;
  for (var j = i+1; j < arr.length; j++) {
    if (arr[j] < arr[minPosition]) {
      minPosition = j;
    }
  }
  
  var temp = arr[i];
  arr[i] = arr[minPosition];
  arr[minPosition] = temp;
}

console.log(arr);