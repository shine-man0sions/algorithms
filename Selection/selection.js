// Time complexity o(n2), unstable

// initional an array
var arr = [10, 2, 3, 6, 5, 9, 15, 14];

// using for loop to interate through the array
for (var i = 0; i < arr.length - 1; i++){
  
  // get the index of the minimum element
  var minPosition = i;
  // using for loop to interate through the array 
  for (var j = i + 1; j < arr.length; j++) {

    // using conditional operator to get the minimum element
    minPosition = arr[j] < arr[minPosition] ? j : minPosition;
  }

  // exchange the elements
  getExchange(arr, i, minPosition);

  // Print the result of each element change
  console.log("this is the step " + i + " The result is " + arr);
}

// function to exchange two elements position
function getExchange (arr, i, j) {
  var tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}

