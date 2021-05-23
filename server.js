

const express = require("express");
const bodyParser = require("body-parser");

const app = express();
app.use(bodyParser.urlencoded({extended : true}));

app.get("/bmicalculator", function(req, res){
  res.sendFile(__dirname + "/bmiCalculator.html");
});

app.post("/bmicalculator", function(req, res){

  var height = parseFloat(req.body.height);
  var weight = parseFloat(req.body.weight);
  var resultBMI = Math.round(weight/(height*height));

  res.send("Your BMI is : "+ resultBMI);
});

app.listen(3000,function(){
  console.log("Server Started at Port 3000");
})
