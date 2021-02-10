let febWeatherFar = [30, 27, 23, 25, 27, 35, 30];

let febWeatherCel = febWeatherFar.map(x => (x - 32) * 5 / 9);

console.log(febWeatherCel);