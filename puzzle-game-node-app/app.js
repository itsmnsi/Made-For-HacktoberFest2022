const express = require("express");
const app = express();

app.set("view engine", "pug");
app.set("views", "./views");

app.listen(80, (req, res) => {
    console.log("Listening port 80...");
});

app.get("/", (req, res) => {
    res.render("index");
});