let searchButton = document.querySelector("#search")
// adds eventlistener to search button
searchButton.addEventListener("click", () => {
    console.log("button pressed")
    sendApiRequest()
})
// function to send a request to the API and get data
async function sendApiRequest() {
    let API_KEY = "Y0fEezxvg4xvvEg3ZxrfnG9glczg2i5ZEE6yQHMN"
    let response = await fetch(`https://api.nasa.gov/planetary/apod?api_key=${API_KEY}`);
    console.log(response)
    let data = await response.json()
    console.log(data)
    useApiData(data)
}
// function to display the data that we get from the API
function useApiData(data) {
    document.querySelector("#content").innerHTML += data.title
    document.querySelector("#content").innerHTML += data.explanation
    document.querySelector("#content").innerHTML += `<img src="${data.url}">`
}

