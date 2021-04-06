const input = require("fs").readFileSync("stdin", "utf8");
const [esqueleto, tipo, alimentacao] = input.split("\n");

if (esqueleto == "vertebrado") {
  if (tipo == "ave") {
    if (alimentacao == "carnivoro") {
      console.log("aguia");
    } else if (alimentacao == "onivoro") {
      console.log("pomba");
    }
  } else if (tipo == "mamifero") {
    if (alimentacao == "onivoro") {
      console.log("homem");
    } else if (alimentacao == "herbivoro") {
      console.log("vaca");
    }
  }
} else {
  if (tipo == "inseto") {
    if (alimentacao == "hematofago") {
      console.log("pulga");
    } else if (alimentacao == "herbivoro") {
      console.log("lagarta");
    }
  } else if (tipo == "anelideo") {
    if (alimentacao == "hematofago") {
      console.log("sanguessuga");
    } else if (alimentacao == "onivoro") {
      console.log("minhoca");
    }
  }
}