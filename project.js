//1. Deposit monet
//2. Determine number of lines to bet on.
//3. Collect a bet.
//4. Spin the slot machine.
//5. Check if user won.
//6. Give user their winnings.
//7. Play again.


const prompt = require("prompt-sync")();


const ROWS = 3;
const COLS = 3;

const SYMBOLS_COUNT ={
	A: 2,
	B: 4,
	C: 6,
	D: 8
}
 const SYMBOLS_vALUES = {
 	A:5,
 	B:4,
 	C:3,
 	D:2
 
 }





const deposit = () => {
	while (true) {

	const depositAmount = prompt("Enter an amount to deposit: ");
	const numberDepositAmount = parseFloat(depositAmount);


	if (isNaN(numberDepositAmount) || numberDepositAmount <= 0) {
		console.log("Deposit amount is invalid, try again.")
	}
	else {
		return numberDepositAmount;
	}
 }
}
const depositAmount = deposit();
console.log("Your Deposited amount is:"+depositAmount);





const numberOflines = () => {
	while (true) {

	const lines = prompt("Enter the number of lines to bet on should be (1-3): ");
	const numberOflines = parseFloat(lines);


	if (isNaN(numberOflines) || numberOflines <= 0 || numberOflines > 3) {
		console.log("Error, Try again.")
	}
	else {
		return numberOflines;
	}
 }
};



const getBet = (balance, lines) => {
	while (true) {

	const bet = prompt("Enter the total bet: ");
	const numberBet = parseFloat(bet);


	if (isNaN(numberBet) || numberBet <= 0 || numberBet > balance/lines) {
		console.log("Error, Try again.")
	}
	else {
		return numberBet;
	}
 }
};

const spin = () => {
	const symbols = [];
	for(const [symbol,count]of Object.entries(SYMBOLS_COUNT)){
		console.log(symbol,count)
		for ( let i= 0; i++){
			symbols.push(symbol);
		}
	}
const reels = [];
for (let i = 0; i< COLS; i++){
	reels.push([]);
	const reelSymbols= [...symbols];
	for (let j = 0; j < ROWS; j++){
		const randomIndex = Math.floor(Math.random()* reelSymbols.length);
		 const selectedSymbol= reelSymbols[randomIndex];
		 reels[i].push(selectedSymbol);
		 reelSymbols.splice(randomIndex,1);
	}
}
return reels;
};

const transpose =(reels) => {
	const rows = [];

	for (let i = 0; i< ROWS; i++) {
		rows.push([]);
		for ( let j = 0; j < COLS; j++){
			rows[i].push(reels[j][i])
		}
	}
return rows
}

// spin();

const printRows = (rows) => {
	for(const row of rows){
		let rowString= "A";
		for (const [i,symbol] of row.entries()){
			rowString += symbol
			if (i!= row.length -1) {
				rowString += " | "
			}
		}
		console.log(rowString)
	}
}
const getWinnnings=(rows, bet, lines) => {
	let winnings = 0;
	for ( let row = 0; row < lines; row++){
		const symbols = rows[row];
		let allSame = true;
		for (const symbol of symbols) {
			if (symbol != symbols[0]){
				allSame = false;
				break;
			}
		}
	}
	if(allSame){
		winnings += bet * SYMBOLS_VALUES[symbols[0]]
	}
	return winnings;
};
const game =() =>{
	let balance = deposit();

	while (true){
		console.log("You have a balance of $"+ balance)
const numberOflines = getNumberOfLines();
const bet = getBet(balance, numberOflines);
balance -= bet* numberOfLines;
const reels = spin();
const rows = transpose(reels);
printRows(rows);
const winnings = getWinnings(rows,bet,numberOflines);
balance += winnings;
console.log("You won,$" + winnings.toString());

if (balance <= 0){
	console.log("You have insufficicient balance!");
	break;
}
const playAgain = prompt("Do you want to play again?(y/n)");
if (playAgain!=y) 
	break;

}

}

game();