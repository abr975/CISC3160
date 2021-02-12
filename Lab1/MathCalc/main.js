// An array of the average temperature for the week of 2/10 - 2/17
let febWeatherFar = [30, 27, 23, 25, 27, 35, 30];
// Maps the weather for the week to our function that converts it to celsiuis and saves it in febWeatherCel
let febWeatherCel = febWeatherFar.map(x => (x - 32) * 5 / 9);

console.log(febWeatherCel);