// An array of the average temperature for the week of 2/10 - 2/17
let febWeatherFar = [30, 27, 23, 25, 27, 35, 30];
// Maps the weather for the week to our map function that converts it to celsiuis and saves it in febWeatherCel
let febWeatherCel = febWeatherFar.map(x => (x - 32) * (5 / 9));
// Maps the weather for the week to our map function that converts it back to farenheit and saves it in febWeatherFar2
let febWeatherFar2 = febWeatherCel.map(x => x * (9 / 5) + 32);


console.log(febWeatherCel);

console.log(febWeatherFar2);

let febMonthWeather = [];
// Loops 30 times filling the array
for (i = 0; i < 30; i++) {
    febMonthWeather[i] = febWeatherFar[i % 7]
}
// Maps a random number from 1 to 2 to give us a predicted temp
let predictedWeather = febMonthWeather.map(x => x * (Math.random() * 2) + 1);

for (i = 0; i < predictedWeather.length; i++) {
    predictedWeather[i] = Math.floor(predictedWeather[i])
}
console.log(predictedWeather);